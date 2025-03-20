#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178;
// System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IOutputStream>
struct IAsyncOperation_1_tFBF5E2F4B0786B187D1B2281942C11684E511F60;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// Singleton`1<System.Object>
struct Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3;
// Singleton`1<UDPSever>
struct Singleton_1_tE455A3FA0BED4A20123A9F4105DB7E4C69DB8BFD;
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IOutputStream>
struct Task_1_t83E7E438482035E0ABF526CDFD7DBCD98FB84DA8;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>
struct TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE;
// UnityEngine.Events.UnityAction`3<System.String,System.String,System.Byte[]>
struct UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4;
// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Byte[]>
struct UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Windows.Storage.Streams.DataWriter
struct DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21;
// Windows.Storage.Streams.DataWriterStoreOperation
struct DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C;
// Windows.Networking.Sockets.DatagramSocket
struct DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4;
// Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs
struct DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Windows.Networking.HostName
struct HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5;
// IActivationFactory
struct Il2CppIActivationFactory;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Windows.Storage.Streams.IDataWriterFactory
struct IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339;
// Windows.Networking.Sockets.IDatagramSocketStatics
struct IDatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UDPMessageEvent
struct UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0;
// UDPResponse
struct UDPResponse_t39AE59E58E3AD360507DD1399F26C34D3F1504C9;
// UDPSever
struct UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// UDPSever/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral131B9FE0663E6F191741E1772A8E0F59048FDCE2;
IL2CPP_EXTERN_C String_t* _stringLiteral2F2416BA3BCF5DB18362CAD20CA90089515ABE0F;
IL2CPP_EXTERN_C String_t* _stringLiteral3D7FF6CEE097426DE1635F3FFB1FA9E6F99E83CD;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m901A64E7DFC4ABB8D2EC7BAB714FF6829FAEE89B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m4C22FB73B75C47AC397D44A191DB8EF7409AF584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m64F4FA84B011151D875D6254B744149B56FFDB11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_mF980555BE8045A08CDF750607D4E023D1FCF855D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mABB717BF58D45D80606B5F6F4586790AC85A554B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_m115FC2858C839334B79B559C686759FED1AA23BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF_m8773759165B1669615A9D6E278113E098459CA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mB717A2DA46B4ECBC9D4275AE19F3CC5E8BFA9C6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m7E4379831676EC30798B95AD5F561A31DAF9A2A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mA400B6CA11075BDC7C411BE7FBF7769FF21DBF4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mA72CE9C1269B8E732B2591622D49E5C14F3BCBE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE052D48CD981AFF80296286F3E763B36EE38806A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC5A9F61AA6AE2C0646B4C76D3A9EB1AB1AD844AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2__ctor_m7454FC0E9C41B72FFCC0E556B98384B5A342771F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CSocket_MessageReceivedU3Eb__0_mE2577C79091D6F19EA92190E7776C10474893740_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPSever_Socket_MessageReceived_mCEAF66B8AE50B77176B25FD55DEC788AAF03E1EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPSever_UDPMessageReceived_mC3D6A8E8BC017F9D02B620BB308877C0DA69A3BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_3__ctor_m0EE8EBF6C65B31DB76ED7DB7420BA22AD0258A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_AddListener_m24073B18EE8490E0A147FBAAEECFEA6B8492569E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m84FFDAFB8F3447DC9D2C48DAED5D230B37EB994A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_mA62E9A62FE326456A284FA59D6E8AC5CEB0E33BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_mDB41341A8729234533FB293E1D6A4B5A90B048C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m7B2C158EF364743B458DDEC95DAB6A0D7FF9F1E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t5987269FDF8299DB59A68AF4E8CE0FC0477B9758_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IDataWriter_tE58739AC5E08CA4AC2746F8209F994EB511A936E;
struct IDatagramSocketMessageReceivedEventArgs_t03513DDA5DA0E77B03DE74F4D6BAC476979EC658;
struct IDatagramSocket_t18CAD02CC099AB9ABAC1E19BC419D249D2A9EEB7;
struct IHostName_tE33210DDCAFFA71D0FE0DBA437A7550525ACBFFF;
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IOutputStream>
struct NOVTABLE IAsyncOperation_1_tFBF5E2F4B0786B187D1B2281942C11684E511F60 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m6A9E0E465DDBD54F14F896002EC339B3F6E592FA(IAsyncOperationCompletedHandler_1_t5987269FDF8299DB59A68AF4E8CE0FC0477B9758_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mFE893111933A37BF4A462D8ABB1632F906A2F343(IAsyncOperationCompletedHandler_1_t5987269FDF8299DB59A68AF4E8CE0FC0477B9758_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m0AD94F9632AA8E716956C6EB2FB182858A181C92(IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mC7C94BF5E03D8C5AA20FF9BE77223E1ECE3B0BD4(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m27E355E8C0523DE3F33321676087FB75E057B44A(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m28613513B6F3DE14AC503BC914AFF74AEC8E4CEC(uint32_t* comReturnValue) = 0;
};

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};

// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_mE1223109A7CBD5DA29413156BA2C75157F169C87(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mEEA8DB3EB0D4FE9F33A54B6A16D65902B70DCB39(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_mD06D8F02D7793FED272208F851EF8A2D9B25FE38() = 0;
};
// Windows.Storage.Streams.IDataWriterFactory
struct NOVTABLE IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriterFactory_CreateDataWriter_m703D07B63530060094C66B2BE2E99C9292C364F5(IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD* ___outputStream0, IDataWriter_tE58739AC5E08CA4AC2746F8209F994EB511A936E** comReturnValue) = 0;
};
// Windows.Networking.Sockets.IDatagramSocketStatics
struct NOVTABLE IDatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDatagramSocketStatics_U24__Stripped0_GetEndpointPairsAsync_m8AD2A2FA4CFCD3FCB564BF069774E5D684B0C803() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m90649BB0F987F7F4113CB4AF05A7FE24CF7A5757() = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_m72B504C34111DE6E15C44D1615BA0B6F2E976355(Il2CppHString ___hostName0, IHostName_tE33210DDCAFFA71D0FE0DBA437A7550525ACBFFF** comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_m6AFE1DC3964B02DBE3A93B9513A231C553B68FBD() = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m1687F80EB6A6DD6461C42A5136A1C9F857012D52(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m2385B9659AADB56628AA3AD2A5D140F512F4A6E0(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) = 0;
};

// System.Object


// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____array_0)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__array_0() const { return ____array_0; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.__Il2CppComObject


// UDPSever/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517  : public RuntimeObject
{
public:
	// UDPSever UDPSever/<>c__DisplayClass10_0::<>4__this
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * ___U3CU3E4__this_0;
	// Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs UDPSever/<>c__DisplayClass10_0::args
	DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * ___args_1;
	// System.Byte[] UDPSever/<>c__DisplayClass10_0::msgData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517, ___U3CU3E4__this_0)); }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517, ___args_1)); }
	inline DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * get_args_1() const { return ___args_1; }
	inline DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}

	inline static int32_t get_offset_of_msgData_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517, ___msgData_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_msgData_2() const { return ___msgData_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_msgData_2() { return &___msgData_2; }
	inline void set_msgData_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___msgData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msgData_2), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IOutputStream>
struct TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t83E7E438482035E0ABF526CDFD7DBCD98FB84DA8 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A, ___m_task_0)); }
	inline Task_1_t83E7E438482035E0ABF526CDFD7DBCD98FB84DA8 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t83E7E438482035E0ABF526CDFD7DBCD98FB84DA8 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t83E7E438482035E0ABF526CDFD7DBCD98FB84DA8 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>
struct TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865, ___m_task_0)); }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Byte[]>
struct UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// Windows.Storage.Streams.DataWriter
struct DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21  : public Il2CppComObject
{
public:

public:
};

struct DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataWriterFactory
	IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339* ____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataWriter"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339* get_____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339()
	{
		IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339* returnValue = ____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339;
			}
		}
		return returnValue;
	}
};


// Windows.Storage.Streams.DataWriterStoreOperation
struct DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C  : public Il2CppComObject
{
public:

public:
};


// Windows.Networking.Sockets.DatagramSocket
struct DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4  : public Il2CppComObject
{
public:

public:
};

struct DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IDatagramSocketStatics
	IDatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95* ____idatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.DatagramSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95* get_____idatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95()
	{
		IDatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95* returnValue = ____idatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95;
			}
		}
		return returnValue;
	}
};


// Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs
struct DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB  : public Il2CppComObject
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// Windows.Networking.HostName
struct HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5  : public Il2CppComObject
{
public:

public:
};

struct HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668* ____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377* ____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668* get_____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668()
	{
		IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668* returnValue = ____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377* get_____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377()
	{
		IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377* returnValue = ____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;
			}
		}
		return returnValue;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Windows.Networking.Sockets.SocketErrorStatus
struct SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612 
{
public:
	// System.Int32 Windows.Networking.Sockets.SocketErrorStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UDPMessageEvent
struct UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0  : public UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4
{
public:

public:
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m3148E992F8B97A601931757BD4D7BDBCFB044BF5(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UDPSever/<SendUDPMessage>d__9
struct U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 
{
public:
	// System.Int32 UDPSever/<SendUDPMessage>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder UDPSever/<SendUDPMessage>d__9::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// UDPSever UDPSever/<SendUDPMessage>d__9::<>4__this
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * ___U3CU3E4__this_2;
	// System.String UDPSever/<SendUDPMessage>d__9::ClientIP
	String_t* ___ClientIP_3;
	// System.String UDPSever/<SendUDPMessage>d__9::ClientPort
	String_t* ___ClientPort_4;
	// System.Byte[] UDPSever/<SendUDPMessage>d__9::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_5;
	// System.Runtime.CompilerServices.TaskAwaiter UDPSever/<SendUDPMessage>d__9::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4, ___U3CU3E4__this_2)); }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_ClientIP_3() { return static_cast<int32_t>(offsetof(U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4, ___ClientIP_3)); }
	inline String_t* get_ClientIP_3() const { return ___ClientIP_3; }
	inline String_t** get_address_of_ClientIP_3() { return &___ClientIP_3; }
	inline void set_ClientIP_3(String_t* value)
	{
		___ClientIP_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientIP_3), (void*)value);
	}

	inline static int32_t get_offset_of_ClientPort_4() { return static_cast<int32_t>(offsetof(U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4, ___ClientPort_4)); }
	inline String_t* get_ClientPort_4() const { return ___ClientPort_4; }
	inline String_t** get_address_of_ClientPort_4() { return &___ClientPort_4; }
	inline void set_ClientPort_4(String_t* value)
	{
		___ClientPort_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientPort_4), (void*)value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4, ___data_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_5() const { return ___data_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// UDPSever/<Socket_MessageReceived>d__10
struct U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF 
{
public:
	// System.Int32 UDPSever/<Socket_MessageReceived>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder UDPSever/<Socket_MessageReceived>d__10::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// UDPSever UDPSever/<Socket_MessageReceived>d__10::<>4__this
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * ___U3CU3E4__this_2;
	// Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs UDPSever/<Socket_MessageReceived>d__10::args
	DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * ___args_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF, ___U3CU3E4__this_2)); }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_args_3() { return static_cast<int32_t>(offsetof(U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF, ___args_3)); }
	inline DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * get_args_3() const { return ___args_3; }
	inline DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB ** get_address_of_args_3() { return &___args_3; }
	inline void set_args_3(DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * value)
	{
		___args_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_3), (void*)value);
	}
};


// UDPSever/<Start>d__6
struct U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD 
{
public:
	// System.Int32 UDPSever/<Start>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder UDPSever/<Start>d__6::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// UDPSever UDPSever/<Start>d__6::<>4__this
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter UDPSever/<Start>d__6::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD, ___U3CU3E4__this_2)); }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>
struct TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>
struct ITypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IDatagramSocket_t18CAD02CC099AB9ABAC1E19BC419D249D2A9EEB7* ___sender0, IDatagramSocketMessageReceivedEventArgs_t03513DDA5DA0E77B03DE74F4D6BAC476979EC658* ___args1) = 0;
};


// UnityEngine.Events.UnityAction`3<System.String,System.String,System.Byte[]>
struct UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UDPSever/<_SendUDPMessage>d__11
struct U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C 
{
public:
	// System.Int32 UDPSever/<_SendUDPMessage>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UDPSever/<_SendUDPMessage>d__11::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// UDPSever UDPSever/<_SendUDPMessage>d__11::<>4__this
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * ___U3CU3E4__this_2;
	// System.String UDPSever/<_SendUDPMessage>d__11::externalIP
	String_t* ___externalIP_3;
	// System.String UDPSever/<_SendUDPMessage>d__11::externalPort
	String_t* ___externalPort_4;
	// System.Byte[] UDPSever/<_SendUDPMessage>d__11::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_5;
	// Windows.Storage.Streams.IOutputStream UDPSever/<_SendUDPMessage>d__11::<stream>5__2
	RuntimeObject* ___U3CstreamU3E5__2_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IOutputStream> UDPSever/<_SendUDPMessage>d__11::<>u__1
	TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A  ___U3CU3Eu__1_7;
	// Windows.Storage.Streams.DataWriter UDPSever/<_SendUDPMessage>d__11::<writer>5__3
	DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * ___U3CwriterU3E5__3_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> UDPSever/<_SendUDPMessage>d__11::<>u__2
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  ___U3CU3Eu__2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___U3CU3E4__this_2)); }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_externalIP_3() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___externalIP_3)); }
	inline String_t* get_externalIP_3() const { return ___externalIP_3; }
	inline String_t** get_address_of_externalIP_3() { return &___externalIP_3; }
	inline void set_externalIP_3(String_t* value)
	{
		___externalIP_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___externalIP_3), (void*)value);
	}

	inline static int32_t get_offset_of_externalPort_4() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___externalPort_4)); }
	inline String_t* get_externalPort_4() const { return ___externalPort_4; }
	inline String_t** get_address_of_externalPort_4() { return &___externalPort_4; }
	inline void set_externalPort_4(String_t* value)
	{
		___externalPort_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___externalPort_4), (void*)value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___data_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_5() const { return ___data_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstreamU3E5__2_6() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___U3CstreamU3E5__2_6)); }
	inline RuntimeObject* get_U3CstreamU3E5__2_6() const { return ___U3CstreamU3E5__2_6; }
	inline RuntimeObject** get_address_of_U3CstreamU3E5__2_6() { return &___U3CstreamU3E5__2_6; }
	inline void set_U3CstreamU3E5__2_6(RuntimeObject* value)
	{
		___U3CstreamU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstreamU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___U3CU3Eu__1_7)); }
	inline TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CwriterU3E5__3_8() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___U3CwriterU3E5__3_8)); }
	inline DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * get_U3CwriterU3E5__3_8() const { return ___U3CwriterU3E5__3_8; }
	inline DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 ** get_address_of_U3CwriterU3E5__3_8() { return &___U3CwriterU3E5__3_8; }
	inline void set_U3CwriterU3E5__3_8(DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * value)
	{
		___U3CwriterU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwriterU3E5__3_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_9() { return static_cast<int32_t>(offsetof(U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C, ___U3CU3Eu__2_9)); }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  get_U3CU3Eu__2_9() const { return ___U3CU3Eu__2_9; }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * get_address_of_U3CU3Eu__2_9() { return &___U3CU3Eu__2_9; }
	inline void set_U3CU3Eu__2_9(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  value)
	{
		___U3CU3Eu__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_9))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Singleton`1<UDPSever>
struct Singleton_1_tE455A3FA0BED4A20123A9F4105DB7E4C69DB8BFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tE455A3FA0BED4A20123A9F4105DB7E4C69DB8BFD_StaticFields
{
public:
	// T Singleton`1::_instance
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_tE455A3FA0BED4A20123A9F4105DB7E4C69DB8BFD_StaticFields, ____instance_4)); }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * get__instance_4() const { return ____instance_4; }
	inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// UDPResponse
struct UDPResponse_t39AE59E58E3AD360507DD1399F26C34D3F1504C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.TextMesh UDPResponse::tm
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___tm_4;

public:
	inline static int32_t get_offset_of_tm_4() { return static_cast<int32_t>(offsetof(UDPResponse_t39AE59E58E3AD360507DD1399F26C34D3F1504C9, ___tm_4)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_tm_4() const { return ___tm_4; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_tm_4() { return &___tm_4; }
	inline void set_tm_4(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___tm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tm_4), (void*)value);
	}
};


// UDPSever
struct UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F  : public Singleton_1_tE455A3FA0BED4A20123A9F4105DB7E4C69DB8BFD
{
public:
	// System.String UDPSever::internalPort
	String_t* ___internalPort_5;
	// System.String UDPSever::ClientPortNumber
	String_t* ___ClientPortNumber_6;
	// UDPMessageEvent UDPSever::udpEvent
	UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * ___udpEvent_7;
	// System.Collections.Generic.Queue`1<System.Action> UDPSever::ExecuteOnMainThread
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___ExecuteOnMainThread_8;
	// Windows.Networking.Sockets.DatagramSocket UDPSever::socket
	DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * ___socket_9;

public:
	inline static int32_t get_offset_of_internalPort_5() { return static_cast<int32_t>(offsetof(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F, ___internalPort_5)); }
	inline String_t* get_internalPort_5() const { return ___internalPort_5; }
	inline String_t** get_address_of_internalPort_5() { return &___internalPort_5; }
	inline void set_internalPort_5(String_t* value)
	{
		___internalPort_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalPort_5), (void*)value);
	}

	inline static int32_t get_offset_of_ClientPortNumber_6() { return static_cast<int32_t>(offsetof(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F, ___ClientPortNumber_6)); }
	inline String_t* get_ClientPortNumber_6() const { return ___ClientPortNumber_6; }
	inline String_t** get_address_of_ClientPortNumber_6() { return &___ClientPortNumber_6; }
	inline void set_ClientPortNumber_6(String_t* value)
	{
		___ClientPortNumber_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientPortNumber_6), (void*)value);
	}

	inline static int32_t get_offset_of_udpEvent_7() { return static_cast<int32_t>(offsetof(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F, ___udpEvent_7)); }
	inline UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * get_udpEvent_7() const { return ___udpEvent_7; }
	inline UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 ** get_address_of_udpEvent_7() { return &___udpEvent_7; }
	inline void set_udpEvent_7(UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * value)
	{
		___udpEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udpEvent_7), (void*)value);
	}

	inline static int32_t get_offset_of_ExecuteOnMainThread_8() { return static_cast<int32_t>(offsetof(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F, ___ExecuteOnMainThread_8)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_ExecuteOnMainThread_8() const { return ___ExecuteOnMainThread_8; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_ExecuteOnMainThread_8() { return &___ExecuteOnMainThread_8; }
	inline void set_ExecuteOnMainThread_8(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___ExecuteOnMainThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExecuteOnMainThread_8), (void*)value);
	}

	inline static int32_t get_offset_of_socket_9() { return static_cast<int32_t>(offsetof(UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F, ___socket_9)); }
	inline DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * get_socket_9() const { return ___socket_9; }
	inline DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 ** get_address_of_socket_9() { return &___socket_9; }
	inline void set_socket_9(DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * value)
	{
		___socket_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_9), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m4B93C635FB8DB80244E4979D82F6F94941196483_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, const RuntimeMethod* method);
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UDPSever/<Start>d__6>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mB717A2DA46B4ECBC9D4275AE19F3CC5E8BFA9C6E_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * ___stateMachine0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UDPSever/<SendUDPMessage>d__9>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_m115FC2858C839334B79B559C686759FED1AA23BC_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UDPSever/<Socket_MessageReceived>d__10>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF_m8773759165B1669615A9D6E278113E098459CA91_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<UDPSever/<_SendUDPMessage>d__11>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m64F4FA84B011151D875D6254B744149B56FFDB11_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared (Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m26C8551C3DFE1944095EB400B91BC4E678824510_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UDPSever/<SendUDPMessage>d__9>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_mF980555BE8045A08CDF750607D4E023D1FCF855D_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mB86D6414884FDC1E91052C11EDE9D2D76F7ECA4F_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`3<!0,!1,!2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_AddListener_m20C04CFB00583CA91D7CCD808C41E9C5FA0BE550_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * ___call0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF8F6D577870A85934643309F5131312E767837DE_gshared (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_gshared (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2__ctor_m8F2F90B9242AB317F1CD9228A1220F9B14CC1782_gshared (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<System.Object>(System.Func`2<!!0,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_m5D51FAD762E797FA160AFA0CE1FCF309A32A9BD0_gshared (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * ___addMethod0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, RuntimeObject * ___handler2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UDPSever/<Start>d__6>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mABB717BF58D45D80606B5F6F4586790AC85A554B_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UDPSever/<_SendUDPMessage>d__11>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_mC24399F2074E28012B65E3F8261B289DD52FB5A1_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.UInt32>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_gshared (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,UDPSever/<_SendUDPMessage>d__11>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m901A64E7DFC4ABB8D2EC7BAB714FF6829FAEE89B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_gshared (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Byte[]>::.ctor()
inline void UnityEvent_3__ctor_mA62E9A62FE326456A284FA59D6E8AC5CEB0E33BF (UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4 *, const RuntimeMethod*))UnityEvent_3__ctor_m4B93C635FB8DB80244E4979D82F6F94941196483_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// T Singleton`1<UDPSever>::get_Instance()
inline UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * Singleton_1_get_Instance_mA72CE9C1269B8E732B2591622D49E5C14F3BCBE8 (const RuntimeMethod* method)
{
	return ((  UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared)(method);
}
// System.Void UDPSever::SendUDPMessage(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSever_SendUDPMessage_m7124081DFEDF527986378BACCCAC79593A0B4972 (UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * __this, String_t* ___ClientIP0, String_t* ___ClientPort1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UDPSever/<Start>d__6>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mB717A2DA46B4ECBC9D4275AE19F3CC5E8BFA9C6E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mB717A2DA46B4ECBC9D4275AE19F3CC5E8BFA9C6E_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UDPSever/<SendUDPMessage>d__9>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_m115FC2858C839334B79B559C686759FED1AA23BC (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_m115FC2858C839334B79B559C686759FED1AA23BC_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UDPSever/<Socket_MessageReceived>d__10>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF_m8773759165B1669615A9D6E278113E098459CA91 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF_m8773759165B1669615A9D6E278113E098459CA91_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<UDPSever/<_SendUDPMessage>d__11>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m64F4FA84B011151D875D6254B744149B56FFDB11 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m64F4FA84B011151D875D6254B744149B56FFDB11_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void Singleton`1<UDPSever>::.ctor()
inline void Singleton_1__ctor_mA400B6CA11075BDC7C411BE7FBF7769FF21DBF4E (Singleton_1_tE455A3FA0BED4A20123A9F4105DB7E4C69DB8BFD * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tE455A3FA0BED4A20123A9F4105DB7E4C69DB8BFD *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Windows.Networking.HostName Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs::get_RemoteAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * DatagramSocketMessageReceivedEventArgs_get_RemoteAddress_m5A76EC9096EAF01F337AA13AF05670610456E149 (DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * __this, const RuntimeMethod* method);
// System.String Windows.Networking.HostName::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HostName_get_DisplayName_mFB12C6E21529709A5A044B1BFCC0DCEE0BBCB548 (HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Byte[]>::Invoke(!0,!1,!2)
inline void UnityEvent_3_Invoke_m84FFDAFB8F3447DC9D2C48DAED5D230B37EB994A (UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4 * __this, String_t* ___arg00, String_t* ___arg11, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4 *, String_t*, String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))UnityEvent_3_Invoke_m26C8551C3DFE1944095EB400B91BC4E678824510_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// System.Threading.Tasks.Task UDPSever::_SendUDPMessage(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * UDPSever__SendUDPMessage_mE08814E9614266FD40921248799529FF408A70D6 (UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * __this, String_t* ___externalIP0, String_t* ___externalPort1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UDPSever/<SendUDPMessage>d__9>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_mF980555BE8045A08CDF750607D4E023D1FCF855D (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_mF980555BE8045A08CDF750607D4E023D1FCF855D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void UDPSever/<SendUDPMessage>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUDPMessageU3Ed__9_MoveNext_m2E9A395288BA54680FB1E993196E3B8A11B0CF9F (U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UDPSever/<SendUDPMessage>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUDPMessageU3Ed__9_SetStateMachine_m9428A2FEA33C43B510F499E269CB344AF73D40B5 (U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UDPSever/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mF13A4E7DBBAF2981D278BB6FC839CC3EE63E1DF7 (U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * __this, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs::GetDataStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatagramSocketMessageReceivedEventArgs_GetDataStream_mC9E2D9141905EC97B9928F23668FF3051D798928 (DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * __this, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForRead(Windows.Storage.Streams.IInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WindowsRuntimeStreamExtensions_AsStreamForRead_mBA8F061F0579EB69C41FB9499C4F4D2FD6C357E4 (RuntimeObject* ___windowsRuntimeStream0, const RuntimeMethod* method);
// System.IO.MemoryStream UDPSever::ToMemoryStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * UDPSever_ToMemoryStream_mFD116FC3F97723671B3ADDD8473ABFD949CED90B (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(!0)
inline void Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void UDPSever/<Socket_MessageReceived>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocket_MessageReceivedU3Ed__10_MoveNext_mE342C0C24BF5DE6906BE12DAA347004469F4BC76 (U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF * __this, const RuntimeMethod* method);
// System.Void UDPSever/<Socket_MessageReceived>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocket_MessageReceivedU3Ed__10_SetStateMachine_mDE85B541A4CD42217832413780A662D96D4AB601 (U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UDPMessageEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPMessageEvent__ctor_m9CDE42EA02BEF7B2B532EF568A196F191AD473EB (UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`3<System.String,System.String,System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_3__ctor_m0EE8EBF6C65B31DB76ED7DB7420BA22AD0258A97 (UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_3__ctor_mB86D6414884FDC1E91052C11EDE9D2D76F7ECA4F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Byte[]>::AddListener(UnityEngine.Events.UnityAction`3<!0,!1,!2>)
inline void UnityEvent_3_AddListener_m24073B18EE8490E0A147FBAAEECFEA6B8492569E (UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4 * __this, UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t3CB5E33FEBAF05B6761125C0FA42A48EFBE303B4 *, UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F *, const RuntimeMethod*))UnityEvent_3_AddListener_m20C04CFB00583CA91D7CCD808C41E9C5FA0BE550_gshared)(__this, ___call0, method);
}
// System.Void Windows.Networking.Sockets.DatagramSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatagramSocket__ctor_m8BEF896CDA41F6BF061894BE7605DF1321E74290 (DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7E4379831676EC30798B95AD5F561A31DAF9A2A0 (Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mF8F6D577870A85934643309F5131312E767837DE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void TypedEventHandler_2__ctor_m7454FC0E9C41B72FFCC0E556B98384B5A342771F (TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))TypedEventHandler_2__ctor_m8F2F90B9242AB317F1CD9228A1220F9B14CC1782_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>>(System.Func`2<!!0,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
inline void WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_mDB41341A8729234533FB293E1D6A4B5A90B048C5 (Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178 * ___addMethod0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1 * ___handler2, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178 *, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *, TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1 *, const RuntimeMethod*))WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_m5D51FAD762E797FA160AFA0CE1FCF309A32A9BD0_gshared)(___addMethod0, ___removeMethod1, ___handler2, method);
}
// Windows.Foundation.IAsyncAction Windows.Networking.Sockets.DatagramSocket::BindServiceNameAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatagramSocket_BindServiceNameAsync_m247309F07E015042C3795B01412012CB385C6E97 (DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * __this, String_t* ___localServiceName0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UDPSever/<Start>d__6>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mABB717BF58D45D80606B5F6F4586790AC85A554B (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mABB717BF58D45D80606B5F6F4586790AC85A554B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Int32 System.Exception::get_HResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline (Exception_t * __this, const RuntimeMethod* method);
// Windows.Networking.Sockets.SocketErrorStatus Windows.Networking.Sockets.SocketError::GetStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketError_GetStatus_m4E09DAB6C550036CD4C64C51195DDAA03D8669D8 (int32_t ___hresult0, const RuntimeMethod* method);
// System.Void UDPSever/<Start>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_MoveNext_m4AC86D299E7307326D888C263FAC1AE2A7DEC710 (U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * __this, const RuntimeMethod* method);
// System.Void UDPSever/<Start>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_SetStateMachine_m9AA1E08096992FA899A55E97CE1D7A60C7E0734C (U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Windows.Networking.HostName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostName__ctor_mB6DD447379F5F9BAC0C2B672318FEF41463856A7 (HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * __this, String_t* ___hostName0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IOutputStream> Windows.Networking.Sockets.DatagramSocket::GetOutputStreamAsync(Windows.Networking.HostName,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatagramSocket_GetOutputStreamAsync_mCDF9FDDACB9258EB9B301E176872E4633BC9879E (DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * __this, HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * ___remoteHostName0, String_t* ___remoteServiceName1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Storage.Streams.IOutputStream>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A  WindowsRuntimeSystemExtensions_GetAwaiter_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m7B2C158EF364743B458DDEC95DAB6A0D7FF9F1E1 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IOutputStream>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC5A9F61AA6AE2C0646B4C76D3A9EB1AB1AD844AB (TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IOutputStream>,UDPSever/<_SendUDPMessage>d__11>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m4C22FB73B75C47AC397D44A191DB8EF7409AF584 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A * ___awaiter0, U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A *, U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_mC24399F2074E28012B65E3F8261B289DD52FB5A1_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IOutputStream>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mE052D48CD981AFF80296286F3E763B36EE38806A (TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void Windows.Storage.Streams.DataWriter::.ctor(Windows.Storage.Streams.IOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter__ctor_mFCB1F83900A0D1AC0F038BCC9D01383099FBD27E (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, RuntimeObject* ___outputStream0, const RuntimeMethod* method);
// System.Void Windows.Storage.Streams.DataWriter::WriteBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter_WriteBytes_mADCDD5B8F9F6AEC47315350EB524A5FE007B74FE (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// Windows.Storage.Streams.DataWriterStoreOperation Windows.Storage.Streams.DataWriter::StoreAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C * DataWriter_StoreAsync_m6377506DB362DDD4CE31FD9530A16873D4473AA4 (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.UInt32>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,UDPSever/<_SendUDPMessage>d__11>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m901A64E7DFC4ABB8D2EC7BAB714FF6829FAEE89B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m901A64E7DFC4ABB8D2EC7BAB714FF6829FAEE89B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::GetResult()
inline uint32_t TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void UDPSever/<_SendUDPMessage>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_SendUDPMessageU3Ed__11_MoveNext_m99EBE656DF8DB0B767B38DDE08DC3979C4A9D9DF (U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UDPSever/<_SendUDPMessage>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_SendUDPMessageU3Ed__11_SetStateMachine_m9B52FBFA234E22B48B344D9823554C32D5F0A7E6 (U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDPMessageEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPMessageEvent__ctor_m9CDE42EA02BEF7B2B532EF568A196F191AD473EB (UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_mA62E9A62FE326456A284FA59D6E8AC5CEB0E33BF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_mA62E9A62FE326456A284FA59D6E8AC5CEB0E33BF(__this, /*hidden argument*/UnityEvent_3__ctor_mA62E9A62FE326456A284FA59D6E8AC5CEB0E33BF_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDPResponse::ResponseToUDPPacket(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPResponse_ResponseToUDPPacket_m4140DC244AD2345FC7A690FFAE4364E6953CB166 (UDPResponse_t39AE59E58E3AD360507DD1399F26C34D3F1504C9 * __this, String_t* ___incomingIP0, String_t* ___incomingPort1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mA72CE9C1269B8E732B2591622D49E5C14F3BCBE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tm != null)
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_0 = __this->get_tm_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// tm.text = System.Text.Encoding.UTF8.GetString(data);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_2 = __this->get_tm_4();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3;
		L_3 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___data2;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_4);
		NullCheck(L_2);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_2, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// UDPSever comm = UDPSever.Instance;
		UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_6;
		L_6 = Singleton_1_get_Instance_mA72CE9C1269B8E732B2591622D49E5C14F3BCBE8(/*hidden argument*/Singleton_1_get_Instance_mA72CE9C1269B8E732B2591622D49E5C14F3BCBE8_RuntimeMethod_var);
		// comm.SendUDPMessage(incomingIP, incomingPort, data);
		String_t* L_7 = ___incomingIP0;
		String_t* L_8 = ___incomingPort1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___data2;
		NullCheck(L_6);
		UDPSever_SendUDPMessage_m7124081DFEDF527986378BACCCAC79593A0B4972(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UDPResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPResponse__ctor_mA5947E9991FFA1F8326D579FA84DE4AB4FA51880 (UDPResponse_t39AE59E58E3AD360507DD1399F26C34D3F1504C9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDPSever::UDPMessageReceived(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSever_UDPMessageReceived_mC3D6A8E8BC017F9D02B620BB308877C0DA69A3BF (UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * __this, String_t* ___host0, String_t* ___port1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UDPSever::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSever_Start_mE18A5CE46C6685CC1AB74BC2AEA1808E10ABFEA4 (UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mB717A2DA46B4ECBC9D4275AE19F3CC5E8BFA9C6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mB717A2DA46B4ECBC9D4275AE19F3CC5E8BFA9C6E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mB717A2DA46B4ECBC9D4275AE19F3CC5E8BFA9C6E_RuntimeMethod_var);
		return;
	}
}
// System.IO.MemoryStream UDPSever::ToMemoryStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * UDPSever_ToMemoryStream_mFD116FC3F97723671B3ADDD8473ABFD949CED90B (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// byte[] block = new byte[0x1000];       // blocks of 4K.
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		V_0 = L_0;
		// MemoryStream ms = new MemoryStream();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_0011:
	{
		// int bytesRead = input.Read(block, 0, block.Length);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___input0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = L_5;
		// if (bytesRead == 0) return ms;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		// if (bytesRead == 0) return ms;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = V_1;
		return L_7;
	}

IL_0022:
	{
		// ms.Write(block, 0, bytesRead);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_8 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		// while (true)
		goto IL_0011;
	}
}
// System.Void UDPSever::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSever_Update_m04113DF048207AF4C28CB437176AD592940A4D1B (UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0012;
	}

IL_0002:
	{
		// ExecuteOnMainThread.Dequeue().Invoke();
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = __this->get_ExecuteOnMainThread_8();
		NullCheck(L_0);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1;
		L_1 = Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5(L_0, /*hidden argument*/Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// while (ExecuteOnMainThread.Count > 0)
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_2 = __this->get_ExecuteOnMainThread_8();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline(L_2, /*hidden argument*/Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UDPSever::SendUDPMessage(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSever_SendUDPMessage_m7124081DFEDF527986378BACCCAC79593A0B4972 (UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * __this, String_t* ___ClientIP0, String_t* ___ClientPort1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_m115FC2858C839334B79B559C686759FED1AA23BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___ClientIP0;
		(&V_0)->set_ClientIP_3(L_0);
		String_t* L_1 = ___ClientPort1;
		(&V_0)->set_ClientPort_4(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data2;
		(&V_0)->set_data_5(L_2);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3;
		L_3 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4  L_4 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncVoidMethodBuilder_Start_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_m115FC2858C839334B79B559C686759FED1AA23BC((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_m115FC2858C839334B79B559C686759FED1AA23BC_RuntimeMethod_var);
		return;
	}
}
// System.Void UDPSever::Socket_MessageReceived(Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSever_Socket_MessageReceived_mCEAF66B8AE50B77176B25FD55DEC788AAF03E1EE (UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * __this, DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * ___sender0, DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF_m8773759165B1669615A9D6E278113E098459CA91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * L_0 = ___args1;
		(&V_0)->set_args_3(L_0);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_1;
		L_1 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF  L_2 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncVoidMethodBuilder_Start_TisU3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF_m8773759165B1669615A9D6E278113E098459CA91((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF_m8773759165B1669615A9D6E278113E098459CA91_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task UDPSever::_SendUDPMessage(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * UDPSever__SendUDPMessage_mE08814E9614266FD40921248799529FF408A70D6 (UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * __this, String_t* ___externalIP0, String_t* ___externalPort1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m64F4FA84B011151D875D6254B744149B56FFDB11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___externalIP0;
		(&V_0)->set_externalIP_3(L_0);
		String_t* L_1 = ___externalPort1;
		(&V_0)->set_externalPort_4(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data2;
		(&V_0)->set_data_5(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C  L_4 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncTaskMethodBuilder_Start_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m64F4FA84B011151D875D6254B744149B56FFDB11((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m64F4FA84B011151D875D6254B744149B56FFDB11_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_6 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UDPSever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSever__ctor_m8CF06E6FFC958FF21AF4CF18E2BD5E168981E97F (UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mA400B6CA11075BDC7C411BE7FBF7769FF21DBF4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131B9FE0663E6F191741E1772A8E0F59048FDCE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F2416BA3BCF5DB18362CAD20CA90089515ABE0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string internalPort = "12345";//ServerPortNumber
		__this->set_internalPort_5(_stringLiteral2F2416BA3BCF5DB18362CAD20CA90089515ABE0F);
		// public string ClientPortNumber="12346";
		__this->set_ClientPortNumber_6(_stringLiteral131B9FE0663E6F191741E1772A8E0F59048FDCE2);
		// private readonly Queue<Action> ExecuteOnMainThread = new Queue<Action>();
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *)il2cpp_codegen_object_new(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4(L_0, /*hidden argument*/Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		__this->set_ExecuteOnMainThread_8(L_0);
		Singleton_1__ctor_mA400B6CA11075BDC7C411BE7FBF7769FF21DBF4E(__this, /*hidden argument*/Singleton_1__ctor_mA400B6CA11075BDC7C411BE7FBF7769FF21DBF4E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDPSever/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mF13A4E7DBBAF2981D278BB6FC839CC3EE63E1DF7 (U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UDPSever/<>c__DisplayClass10_0::<Socket_MessageReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CSocket_MessageReceivedU3Eb__0_mE2577C79091D6F19EA92190E7776C10474893740 (U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m84FFDAFB8F3447DC9D2C48DAED5D230B37EB994A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D7FF6CEE097426DE1635F3FFB1FA9E6F99E83CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ENQEUED ");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3D7FF6CEE097426DE1635F3FFB1FA9E6F99E83CD, /*hidden argument*/NULL);
		// if (udpEvent != null)
		UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * L_1 = L_0->get_udpEvent_7();
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// udpEvent.Invoke(args.RemoteAddress.DisplayName, ClientPortNumber, msgData);
		UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * L_3 = L_2->get_udpEvent_7();
		DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * L_4 = __this->get_args_1();
		NullCheck(L_4);
		HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * L_5;
		L_5 = DatagramSocketMessageReceivedEventArgs_get_RemoteAddress_m5A76EC9096EAF01F337AA13AF05670610456E149(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = HostName_get_DisplayName_mFB12C6E21529709A5A044B1BFCC0DCEE0BBCB548(L_5, /*hidden argument*/NULL);
		UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_7 = __this->get_U3CU3E4__this_0();
		NullCheck(L_7);
		String_t* L_8 = L_7->get_ClientPortNumber_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_msgData_2();
		NullCheck(L_3);
		UnityEvent_3_Invoke_m84FFDAFB8F3447DC9D2C48DAED5D230B37EB994A(L_3, L_6, L_8, L_9, /*hidden argument*/UnityEvent_3_Invoke_m84FFDAFB8F3447DC9D2C48DAED5D230B37EB994A_RuntimeMethod_var);
	}

IL_0048:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDPSever/<SendUDPMessage>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUDPMessageU3Ed__9_MoveNext_m2E9A395288BA54680FB1E993196E3B8A11B0CF9F (U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_mF980555BE8045A08CDF750607D4E023D1FCF855D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0058;
			}
		}

IL_0011:
		{
			// await _SendUDPMessage(ClientIP, ClientPort, data);
			UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_3 = V_1;
			String_t* L_4 = __this->get_ClientIP_3();
			String_t* L_5 = __this->get_ClientPort_4();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_data_5();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
			L_7 = UDPSever__SendUDPMessage_mE08814E9614266FD40921248799529FF408A70D6(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8;
			L_8 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0074;
			}
		}

IL_0038:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = V_2;
			__this->set_U3CU3Eu__1_6(L_11);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_mF980555BE8045A08CDF750607D4E023D1FCF855D((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_12, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4_mF980555BE8045A08CDF750607D4E023D1FCF855D_RuntimeMethod_var);
			goto IL_00a7;
		}

IL_0058:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = __this->get_U3CU3Eu__1_6();
			V_2 = L_13;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_14 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_0074:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_0094;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007d;
		}
		throw e;
	}

CATCH_007d:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, L_17, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a7;
	} // end catch (depth: 1)

IL_0094:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_18, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUDPMessageU3Ed__9_MoveNext_m2E9A395288BA54680FB1E993196E3B8A11B0CF9F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * _thisAdjusted = reinterpret_cast<U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 *>(__this + _offset);
	U3CSendUDPMessageU3Ed__9_MoveNext_m2E9A395288BA54680FB1E993196E3B8A11B0CF9F(_thisAdjusted, method);
}
// System.Void UDPSever/<SendUDPMessage>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUDPMessageU3Ed__9_SetStateMachine_m9428A2FEA33C43B510F499E269CB344AF73D40B5 (U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUDPMessageU3Ed__9_SetStateMachine_m9428A2FEA33C43B510F499E269CB344AF73D40B5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 * _thisAdjusted = reinterpret_cast<U3CSendUDPMessageU3Ed__9_t8B00D0FAAA5104ACD8CBF34DBD272BA155E330F4 *>(__this + _offset);
	U3CSendUDPMessageU3Ed__9_SetStateMachine_m9428A2FEA33C43B510F499E269CB344AF73D40B5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDPSever/<Socket_MessageReceived>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocket_MessageReceivedU3Ed__10_MoveNext_mE342C0C24BF5DE6906BE12DAA347004469F4BC76 (U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CSocket_MessageReceivedU3Eb__0_mE2577C79091D6F19EA92190E7776C10474893740_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * V_0 = NULL;
	U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * V_1 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_0 = __this->get_U3CU3E4__this_2();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * L_1 = (U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass10_0__ctor_mF13A4E7DBBAF2981D278BB6FC839CC3EE63E1DF7(L_1, /*hidden argument*/NULL);
			V_1 = L_1;
			U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * L_2 = V_1;
			UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_3 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			L_2->set_U3CU3E4__this_0(L_3);
			U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * L_4 = V_1;
			DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * L_5 = __this->get_args_3();
			NullCheck(L_4);
			L_4->set_args_1(L_5);
			// Stream streamIn = args.GetDataStream().AsStreamForRead();
			U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * L_6 = V_1;
			NullCheck(L_6);
			DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * L_7 = L_6->get_args_1();
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = DatagramSocketMessageReceivedEventArgs_GetDataStream_mC9E2D9141905EC97B9928F23668FF3051D798928(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9;
			L_9 = WindowsRuntimeStreamExtensions_AsStreamForRead_mBA8F061F0579EB69C41FB9499C4F4D2FD6C357E4(L_8, /*hidden argument*/NULL);
			// MemoryStream ms = ToMemoryStream(streamIn);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_10;
			L_10 = UDPSever_ToMemoryStream_mFD116FC3F97723671B3ADDD8473ABFD949CED90B(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			// byte[] msgData = ms.ToArray();
			U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * L_11 = V_1;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_12 = V_2;
			NullCheck(L_12);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
			L_13 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_12);
			NullCheck(L_11);
			L_11->set_msgData_2(L_13);
			// if (ExecuteOnMainThread.Count == 0)
			UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_14 = V_0;
			NullCheck(L_14);
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_15 = L_14->get_ExecuteOnMainThread_8();
			NullCheck(L_15);
			int32_t L_16;
			L_16 = Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline(L_15, /*hidden argument*/Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_006b;
			}
		}

IL_0054:
		{
			// ExecuteOnMainThread.Enqueue(() =>
			// {
			//     Debug.Log("ENQEUED ");
			//     if (udpEvent != null)
			//         udpEvent.Invoke(args.RemoteAddress.DisplayName, ClientPortNumber, msgData);
			// });
			UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_17 = V_0;
			NullCheck(L_17);
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_18 = L_17->get_ExecuteOnMainThread_8();
			U3CU3Ec__DisplayClass10_0_tC4E44F9B1E41A2C014270CFE2EE02D6C712CC517 * L_19 = V_1;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CSocket_MessageReceivedU3Eb__0_mE2577C79091D6F19EA92190E7776C10474893740_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_18);
			Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09(L_18, L_20, /*hidden argument*/Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
		}

IL_006b:
		{
			goto IL_0084;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006d;
		}
		throw e;
	}

CATCH_006d:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0097;
	} // end catch (depth: 1)

IL_0084:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, /*hidden argument*/NULL);
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSocket_MessageReceivedU3Ed__10_MoveNext_mE342C0C24BF5DE6906BE12DAA347004469F4BC76_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF * _thisAdjusted = reinterpret_cast<U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF *>(__this + _offset);
	U3CSocket_MessageReceivedU3Ed__10_MoveNext_mE342C0C24BF5DE6906BE12DAA347004469F4BC76(_thisAdjusted, method);
}
// System.Void UDPSever/<Socket_MessageReceived>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocket_MessageReceivedU3Ed__10_SetStateMachine_mDE85B541A4CD42217832413780A662D96D4AB601 (U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSocket_MessageReceivedU3Ed__10_SetStateMachine_mDE85B541A4CD42217832413780A662D96D4AB601_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF * _thisAdjusted = reinterpret_cast<U3CSocket_MessageReceivedU3Ed__10_t0EC98E6180E28DF85AA0B74F571B3D8B8FE0CBCF *>(__this + _offset);
	U3CSocket_MessageReceivedU3Ed__10_SetStateMachine_mDE85B541A4CD42217832413780A662D96D4AB601(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDPSever/<Start>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_MoveNext_m4AC86D299E7307326D888C263FAC1AE2A7DEC710 (U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mABB717BF58D45D80606B5F6F4586790AC85A554B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m7E4379831676EC30798B95AD5F561A31DAF9A2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2__ctor_m7454FC0E9C41B72FFCC0E556B98384B5A342771F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPSever_Socket_MessageReceived_mCEAF66B8AE50B77176B25FD55DEC788AAF03E1EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPSever_UDPMessageReceived_mC3D6A8E8BC017F9D02B620BB308877C0DA69A3BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3__ctor_m0EE8EBF6C65B31DB76ED7DB7420BA22AD0258A97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_AddListener_m24073B18EE8490E0A147FBAAEECFEA6B8492569E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_mDB41341A8729234533FB293E1D6A4B5A90B048C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * V_1 = NULL;
	DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * V_2 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_003b;
			}
		}

IL_0011:
		{
			// if (udpEvent == null)
			UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_3 = V_1;
			NullCheck(L_3);
			UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * L_4 = L_3->get_udpEvent_7();
			if (L_4)
			{
				goto IL_003b;
			}
		}

IL_0019:
		{
			// udpEvent = new UDPMessageEvent();
			UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_5 = V_1;
			UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * L_6 = (UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 *)il2cpp_codegen_object_new(UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0_il2cpp_TypeInfo_var);
			UDPMessageEvent__ctor_m9CDE42EA02BEF7B2B532EF568A196F191AD473EB(L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			L_5->set_udpEvent_7(L_6);
			// udpEvent.AddListener(UDPMessageReceived);
			UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_7 = V_1;
			NullCheck(L_7);
			UDPMessageEvent_t6DD58676BA8B81638FF6B821929705B6C28F40C0 * L_8 = L_7->get_udpEvent_7();
			UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_9 = V_1;
			UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F * L_10 = (UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F *)il2cpp_codegen_object_new(UnityAction_3_tB2E7E60E0C098909349FFCDE97053E8AA916367F_il2cpp_TypeInfo_var);
			UnityAction_3__ctor_m0EE8EBF6C65B31DB76ED7DB7420BA22AD0258A97(L_10, L_9, (intptr_t)((intptr_t)UDPSever_UDPMessageReceived_mC3D6A8E8BC017F9D02B620BB308877C0DA69A3BF_RuntimeMethod_var), /*hidden argument*/UnityAction_3__ctor_m0EE8EBF6C65B31DB76ED7DB7420BA22AD0258A97_RuntimeMethod_var);
			NullCheck(L_8);
			UnityEvent_3_AddListener_m24073B18EE8490E0A147FBAAEECFEA6B8492569E(L_8, L_10, /*hidden argument*/UnityEvent_3_AddListener_m24073B18EE8490E0A147FBAAEECFEA6B8492569E_RuntimeMethod_var);
		}

IL_003b:
		{
		}

IL_003c:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_11 = V_0;
				if (!L_11)
				{
					goto IL_00bc;
				}
			}

IL_003f:
			{
				// socket = new Windows.Networking.Sockets.DatagramSocket();
				UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_12 = V_1;
				DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * L_13 = (DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 *)il2cpp_codegen_object_new(DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4_il2cpp_TypeInfo_var);
				DatagramSocket__ctor_m8BEF896CDA41F6BF061894BE7605DF1321E74290(L_13, /*hidden argument*/NULL);
				NullCheck(L_12);
				L_12->set_socket_9(L_13);
				// socket.MessageReceived += Socket_MessageReceived;
				UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_14 = V_1;
				NullCheck(L_14);
				DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * L_15 = L_14->get_socket_9();
				V_2 = L_15;
				DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * L_16 = V_2;
				DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * L_17 = L_16;
				Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178 * L_18 = (Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178 *)il2cpp_codegen_object_new(Func_2_tEFD4A98AF8983491EE2E999B89E50DB2DC2D5178_il2cpp_TypeInfo_var);
				Func_2__ctor_m7E4379831676EC30798B95AD5F561A31DAF9A2A0(L_18, L_17, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_17, 6)), /*hidden argument*/Func_2__ctor_m7E4379831676EC30798B95AD5F561A31DAF9A2A0_RuntimeMethod_var);
				DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * L_19 = V_2;
				DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * L_20 = L_19;
				Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_21 = (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)il2cpp_codegen_object_new(Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
				Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F(L_21, L_20, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_20, 7)), /*hidden argument*/Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
				UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_22 = V_1;
				TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1 * L_23 = (TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1 *)il2cpp_codegen_object_new(TypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_il2cpp_TypeInfo_var);
				TypedEventHandler_2__ctor_m7454FC0E9C41B72FFCC0E556B98384B5A342771F(L_23, L_22, (intptr_t)((intptr_t)UDPSever_Socket_MessageReceived_mCEAF66B8AE50B77176B25FD55DEC788AAF03E1EE_RuntimeMethod_var), /*hidden argument*/TypedEventHandler_2__ctor_m7454FC0E9C41B72FFCC0E556B98384B5A342771F_RuntimeMethod_var);
				IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
				WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_mDB41341A8729234533FB293E1D6A4B5A90B048C5(L_18, L_21, L_23, /*hidden argument*/WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_mDB41341A8729234533FB293E1D6A4B5A90B048C5_RuntimeMethod_var);
				// await socket.BindServiceNameAsync(internalPort);
				UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_24 = V_1;
				NullCheck(L_24);
				DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * L_25 = L_24->get_socket_9();
				UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_26 = V_1;
				NullCheck(L_26);
				String_t* L_27 = L_26->get_internalPort_5();
				NullCheck(L_25);
				RuntimeObject* L_28;
				L_28 = DatagramSocket_BindServiceNameAsync_m247309F07E015042C3795B01412012CB385C6E97(L_25, L_27, /*hidden argument*/NULL);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_29;
				L_29 = WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B(L_28, /*hidden argument*/NULL);
				V_3 = L_29;
				bool L_30;
				L_30 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_30)
				{
					goto IL_00d8;
				}
			}

IL_009c:
			{
				int32_t L_31 = 0;
				V_0 = L_31;
				__this->set_U3CU3E1__state_0(L_31);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_32 = V_3;
				__this->set_U3CU3Eu__1_3(L_32);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_33 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mABB717BF58D45D80606B5F6F4586790AC85A554B((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_33, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD_mABB717BF58D45D80606B5F6F4586790AC85A554B_RuntimeMethod_var);
				goto IL_013a;
			}

IL_00bc:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_34 = __this->get_U3CU3Eu__1_3();
				V_3 = L_34;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_35 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->set_U3CU3E1__state_0(L_36);
			}

IL_00d8:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				// }
				goto IL_010c;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e1;
			}
			throw e;
		}

CATCH_00e1:
		{ // begin catch(System.Exception)
			// Debug.Log(e.ToString());
			Exception_t * L_37 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			NullCheck(L_37);
			String_t* L_38;
			L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_38, /*hidden argument*/NULL);
			// Debug.Log(SocketError.GetStatus(e.HResult).ToString());
			NullCheck(L_37);
			int32_t L_39;
			L_39 = Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline(L_37, /*hidden argument*/NULL);
			int32_t L_40;
			L_40 = SocketError_GetStatus_m4E09DAB6C550036CD4C64C51195DDAA03D8669D8(L_39, /*hidden argument*/NULL);
			V_4 = L_40;
			RuntimeObject * L_41 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_4));
			NullCheck(L_41);
			String_t* L_42;
			L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
			V_4 = *(int32_t*)UnBox(L_41);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_42, /*hidden argument*/NULL);
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0127;
		} // end catch (depth: 2)

IL_010c:
		{
			goto IL_0127;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010e;
		}
		throw e;
	}

CATCH_010e:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_44 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_43, L_44, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013a;
	} // end catch (depth: 1)

IL_0127:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_45, /*hidden argument*/NULL);
	}

IL_013a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__6_MoveNext_m4AC86D299E7307326D888C263FAC1AE2A7DEC710_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD *>(__this + _offset);
	U3CStartU3Ed__6_MoveNext_m4AC86D299E7307326D888C263FAC1AE2A7DEC710(_thisAdjusted, method);
}
// System.Void UDPSever/<Start>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_SetStateMachine_m9AA1E08096992FA899A55E97CE1D7A60C7E0734C (U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__6_SetStateMachine_m9AA1E08096992FA899A55E97CE1D7A60C7E0734C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__6_tDC7ECF8EF92B7F12D6BA45FC0FB3B4FD5AB6E7BD *>(__this + _offset);
	U3CStartU3Ed__6_SetStateMachine_m9AA1E08096992FA899A55E97CE1D7A60C7E0734C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDPSever/<_SendUDPMessage>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_SendUDPMessageU3Ed__11_MoveNext_m99EBE656DF8DB0B767B38DDE08DC3979C4A9D9DF (U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m901A64E7DFC4ABB8D2EC7BAB714FF6829FAEE89B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m4C22FB73B75C47AC397D44A191DB8EF7409AF584_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE052D48CD981AFF80296286F3E763B36EE38806A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC5A9F61AA6AE2C0646B4C76D3A9EB1AB1AD844AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m7B2C158EF364743B458DDEC95DAB6A0D7FF9F1E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0063;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_008e;
			}
		}

IL_0015:
		{
			// using (var stream = await socket.GetOutputStreamAsync(new Windows.Networking.HostName(externalIP), externalPort))
			UDPSever_t1E8739173B77BC57BF91E7D6B09AD3F7B59C963F * L_4 = V_1;
			NullCheck(L_4);
			DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * L_5 = L_4->get_socket_9();
			String_t* L_6 = __this->get_externalIP_3();
			HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * L_7 = (HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 *)il2cpp_codegen_object_new(HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_il2cpp_TypeInfo_var);
			HostName__ctor_mB6DD447379F5F9BAC0C2B672318FEF41463856A7(L_7, L_6, /*hidden argument*/NULL);
			String_t* L_8 = __this->get_externalPort_4();
			NullCheck(L_5);
			RuntimeObject* L_9;
			L_9 = DatagramSocket_GetOutputStreamAsync_mCDF9FDDACB9258EB9B301E176872E4633BC9879E(L_5, L_7, L_8, /*hidden argument*/NULL);
			TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A  L_10;
			L_10 = WindowsRuntimeSystemExtensions_GetAwaiter_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m7B2C158EF364743B458DDEC95DAB6A0D7FF9F1E1(L_9, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m7B2C158EF364743B458DDEC95DAB6A0D7FF9F1E1_RuntimeMethod_var);
			V_3 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_mC5A9F61AA6AE2C0646B4C76D3A9EB1AB1AD844AB((TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mC5A9F61AA6AE2C0646B4C76D3A9EB1AB1AD844AB_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0040:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A  L_13 = V_3;
			__this->set_U3CU3Eu__1_7(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m4C22FB73B75C47AC397D44A191DB8EF7409AF584((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A *)(&V_3), (U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m4C22FB73B75C47AC397D44A191DB8EF7409AF584_RuntimeMethod_var);
			goto IL_018e;
		}

IL_0063:
		{
			TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A  L_15 = __this->get_U3CU3Eu__1_7();
			V_3 = L_15;
			TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A * L_16 = __this->get_address_of_U3CU3Eu__1_7();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_007f:
		{
			RuntimeObject* L_18;
			L_18 = TaskAwaiter_1_GetResult_mE052D48CD981AFF80296286F3E763B36EE38806A((TaskAwaiter_1_t67553D2FAAE6B6918B52176D6F82C87A93F3F35A *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mE052D48CD981AFF80296286F3E763B36EE38806A_RuntimeMethod_var);
			V_2 = L_18;
			RuntimeObject* L_19 = V_2;
			__this->set_U3CstreamU3E5__2_6(L_19);
		}

IL_008e:
		{
		}

IL_008f:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_20 = V_0;
				if ((((int32_t)L_20) == ((int32_t)1)))
				{
					goto IL_00a4;
				}
			}

IL_0093:
			{
				// using (var writer = new Windows.Storage.Streams.DataWriter(stream))
				RuntimeObject* L_21 = __this->get_U3CstreamU3E5__2_6();
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_22 = (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 *)il2cpp_codegen_object_new(DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21_il2cpp_TypeInfo_var);
				DataWriter__ctor_mFCB1F83900A0D1AC0F038BCC9D01383099FBD27E(L_22, L_21, /*hidden argument*/NULL);
				__this->set_U3CwriterU3E5__3_8(L_22);
			}

IL_00a4:
			{
			}

IL_00a5:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_23 = V_0;
					if ((((int32_t)L_23) == ((int32_t)1)))
					{
						goto IL_00f9;
					}
				}

IL_00a9:
				{
					// writer.WriteBytes(data);
					DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_24 = __this->get_U3CwriterU3E5__3_8();
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_data_5();
					NullCheck(L_24);
					DataWriter_WriteBytes_mADCDD5B8F9F6AEC47315350EB524A5FE007B74FE(L_24, L_25, /*hidden argument*/NULL);
					// await writer.StoreAsync();
					DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_26 = __this->get_U3CwriterU3E5__3_8();
					NullCheck(L_26);
					DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C * L_27;
					L_27 = DataWriter_StoreAsync_m6377506DB362DDD4CE31FD9530A16873D4473AA4(L_26, /*hidden argument*/NULL);
					TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_28;
					L_28 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84(L_27, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
					V_4 = L_28;
					bool L_29;
					L_29 = TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
					if (L_29)
					{
						goto IL_0116;
					}
				}

IL_00d5:
				{
					int32_t L_30 = 1;
					V_0 = L_30;
					__this->set_U3CU3E1__state_0(L_30);
					TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_31 = V_4;
					__this->set_U3CU3Eu__2_9(L_31);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_32 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m901A64E7DFC4ABB8D2EC7BAB714FF6829FAEE89B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_32, (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_4), (U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C_m901A64E7DFC4ABB8D2EC7BAB714FF6829FAEE89B_RuntimeMethod_var);
					IL2CPP_LEAVE(0x18E, FINALLY_0120);
				}

IL_00f9:
				{
					TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_33 = __this->get_U3CU3Eu__2_9();
					V_4 = L_33;
					TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * L_34 = __this->get_address_of_U3CU3Eu__2_9();
					il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 ));
					int32_t L_35 = (-1);
					V_0 = L_35;
					__this->set_U3CU3E1__state_0(L_35);
				}

IL_0116:
				{
					uint32_t L_36;
					L_36 = TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
					// }
					IL2CPP_LEAVE(0x138, FINALLY_0120);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0120;
			}

FINALLY_0120:
			{ // begin finally (depth: 3)
				{
					int32_t L_37 = V_0;
					if ((((int32_t)L_37) >= ((int32_t)0)))
					{
						goto IL_0137;
					}
				}

IL_0124:
				{
					DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_38 = __this->get_U3CwriterU3E5__3_8();
					if (!L_38)
					{
						goto IL_0137;
					}
				}

IL_012c:
				{
					DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_39 = __this->get_U3CwriterU3E5__3_8();
					NullCheck(L_39);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_39);
				}

IL_0137:
				{
					IL2CPP_END_FINALLY(288)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(288)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_END_CLEANUP(0x18E, FINALLY_0141);
				IL2CPP_JUMP_TBL(0x138, IL_0138)
			}

IL_0138:
			{
				__this->set_U3CwriterU3E5__3_8((DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 *)NULL);
				// }
				IL2CPP_LEAVE(0x159, FINALLY_0141);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0141;
		}

FINALLY_0141:
		{ // begin finally (depth: 2)
			{
				int32_t L_40 = V_0;
				if ((((int32_t)L_40) >= ((int32_t)0)))
				{
					goto IL_0158;
				}
			}

IL_0145:
			{
				RuntimeObject* L_41 = __this->get_U3CstreamU3E5__2_6();
				if (!L_41)
				{
					goto IL_0158;
				}
			}

IL_014d:
			{
				RuntimeObject* L_42 = __this->get_U3CstreamU3E5__2_6();
				NullCheck(L_42);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_42);
			}

IL_0158:
			{
				IL2CPP_END_FINALLY(321)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(321)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x18E, IL_018e)
			IL2CPP_JUMP_TBL(0x159, IL_0159)
		}

IL_0159:
		{
			__this->set_U3CstreamU3E5__2_6((RuntimeObject*)NULL);
			goto IL_017b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0162;
		}
		throw e;
	}

CATCH_0162:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_44 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_43, L_44, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_018e;
	} // end catch (depth: 1)

IL_017b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_45, /*hidden argument*/NULL);
	}

IL_018e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_SendUDPMessageU3Ed__11_MoveNext_m99EBE656DF8DB0B767B38DDE08DC3979C4A9D9DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * _thisAdjusted = reinterpret_cast<U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C *>(__this + _offset);
	U3C_SendUDPMessageU3Ed__11_MoveNext_m99EBE656DF8DB0B767B38DDE08DC3979C4A9D9DF(_thisAdjusted, method);
}
// System.Void UDPSever/<_SendUDPMessage>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_SendUDPMessageU3Ed__11_SetStateMachine_m9B52FBFA234E22B48B344D9823554C32D5F0A7E6 (U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_SendUDPMessageU3Ed__11_SetStateMachine_m9B52FBFA234E22B48B344D9823554C32D5F0A7E6_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C * _thisAdjusted = reinterpret_cast<U3C_SendUDPMessageU3Ed__11_t7953729BF17A7AE6346C38736B3F4A82C3C7EB1C *>(__this + _offset);
	U3C_SendUDPMessageU3Ed__11_SetStateMachine_m9B52FBFA234E22B48B344D9823554C32D5F0A7E6(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline (Exception_t * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__HResult_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
