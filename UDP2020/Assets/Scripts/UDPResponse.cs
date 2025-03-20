using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UDPResponse : MonoBehaviour
{


    public TextMesh tm = null;

    public void ResponseToUDPPacket(string incomingIP, string incomingPort, byte[] data)
    {

        if (tm != null)
            tm.text = System.Text.Encoding.UTF8.GetString(data);

#if !UNITY_EDITOR
 
        //ECHO  UDPServer.cs类中如果用官方的接收函数，由于自带返回功能，此下面两家可以省掉，否则会多返回一次字符串。
         UDPSever comm = UDPSever.Instance;
        comm.SendUDPMessage(incomingIP, incomingPort, data);
 
#endif
    }
}
