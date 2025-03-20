using UnityEngine;
using System;
using System.IO;
using System.Text;
using System.Linq;
using System.Collections.Generic;
using UnityEngine.Events;

#if !UNITY_EDITOR
using Windows.Storage.Streams;//DataReader类需要用到这个头文件
using Windows.Networking.Sockets;
using Windows.Networking.Connectivity;
using Windows.Networking;
#endif

[System.Serializable]
public class UDPMessageEvent : UnityEvent<string, string, byte[]>
{
}

public class UDPSever : Singleton<UDPSever>
{
	// must know the following two port numbers
	    public string internalPort = "12345";//ServerPortNumber
	    public string ClientPortNumber="12346";
	
	[Tooltip("Function to invoke at incoming packet")]//函数对传入包进行调用
	public UDPMessageEvent udpEvent = null;//传值给UDPResponse.cs即更新3D text用,其实直接在此文件中更新UI组件更简洁，只是展示此种丰富的消息机制而已。
	private readonly Queue<Action> ExecuteOnMainThread = new Queue<Action>();

#if !UNITY_EDITOR
	
	void UDPMessageReceived(string host, string port, byte[] data)//空函数，给
	{
	}

	DatagramSocket socket;//其实可以挨着socket=...语句的，纯粹是为了SendUDPMessage函数定义成全局的，不这样会报错。如果不用SendUDPMessage了就可以挨着try中的socket=...语句了
// use this for initialization
	async void Start()
	    {
		if (udpEvent == null)
		{
			udpEvent = new UDPMessageEvent();
			udpEvent.AddListener(UDPMessageReceived);
		}		
		try
		{
			socket = new Windows.Networking.Sockets.DatagramSocket();
			// The ConnectionReceived event is raised when connections are received.
			socket.MessageReceived += Socket_MessageReceived;
			// Start listening for incoming TCP connections on the specified port. You can specify any port that's not currently in use.
			await socket.BindServiceNameAsync(internalPort);
		}
		catch (Exception e)
		{
			Debug.Log(e.ToString());
			Debug.Log(SocketError.GetStatus(e.HResult).ToString());
			return;
		}
	}
#endif
	static MemoryStream ToMemoryStream(Stream input)//官方教程的接收函数不用此复杂的转换函数了
	{
		try
		{                                         // Read and write in
			byte[] block = new byte[0x1000];       // blocks of 4K.
			MemoryStream ms = new MemoryStream();
			while (true)
			{
				int bytesRead = input.Read(block, 0, block.Length);
				if (bytesRead == 0) return ms;
				ms.Write(block, 0, bytesRead);
			}
		}
		finally { }
	}
	void Update()
	 {
		while (ExecuteOnMainThread.Count > 0)
		  {
			ExecuteOnMainThread.Dequeue().Invoke();
		  }

	  }



#if !UNITY_EDITOR
			public async void SendUDPMessage(string ClientIP, string ClientPort, byte[] data)// 用以上官方教程的接收函数时，此函数可省掉
	{     
				await _SendUDPMessage(ClientIP, ClientPort, data);
			}
	
	private async void Socket_MessageReceived(Windows.Networking.Sockets.DatagramSocket sender,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs args)
	        //接收消息
	    {

		//读取从UDP回音客户端接收到的消息
			        Stream streamIn = args.GetDataStream().AsStreamForRead();
					MemoryStream ms = ToMemoryStream(streamIn);
					byte[] msgData = ms.ToArray();
						if (ExecuteOnMainThread.Count == 0)
						{
							ExecuteOnMainThread.Enqueue(() =>
							{
								Debug.Log("ENQEUED ");
								if (udpEvent != null)
									udpEvent.Invoke(args.RemoteAddress.DisplayName, ClientPortNumber, msgData);
							});
						}
		
		/*	// 以下为官方教程的接收函数，官方是没有发送函数的，SendUDPMessage是截取的官方接收函数中的一段代码而已。
		    //用此函数时，可直接返回收到内容给客户端，可省掉SendUDPMessage相关函数，另外UDPResponse.cs文件中的末尾的两句echo功能的代码可屏蔽掉。
		 	string request;
			using (DataReader dataReader = args.GetDataReader())
			{
				request = dataReader.ReadString(dataReader.UnconsumedBufferLength).Trim();//直接读出字符串，简单省事
			}
			// Echo the request back as the response.
			using (Stream outputStream = (await sender.GetOutputStreamAsync(args.RemoteAddress, ClientPortNumber)).AsStreamForWrite())
			{
				using (var streamWriter = new StreamWriter(outputStream))
				{
					await streamWriter.WriteLineAsync(request);//echo 返回给客户端发送过来的内容
					await streamWriter.FlushAsync();
				}
			}
			if (ExecuteOnMainThread.Count == 0)
			{
				ExecuteOnMainThread.Enqueue(() =>
				{
					Debug.Log("ENQEUED ");
					if (udpEvent != null)
						udpEvent.Invoke(args.RemoteAddress.DisplayName, ClientPortNumber, Encoding.UTF8.GetBytes(request));
				});
			}*/
	}

	private async System.Threading.Tasks.Task _SendUDPMessage (string externalIP, string externalPort, byte[] data)// 用以上官方教程的接收函数时，此函数可省掉
	    //发送消息
	  {
	        using (var stream = await socket.GetOutputStreamAsync(new Windows.Networking.HostName(externalIP), externalPort))
	        {
            using (var writer = new Windows.Storage.Streams.DataWriter(stream))
	            {
	                //Debug.Log(" ????? "+ externalIP +  " ????? " + externalPort);
	                writer.WriteBytes(data);
	                await writer.StoreAsync();
	            }
	        }
	    }
#endif
}

