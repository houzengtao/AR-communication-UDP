﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Windows.Media.Capture.AppCapture
struct AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE;
// Windows.Networking.Sockets.DatagramSocket
struct DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4;
// Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs
struct DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// IActivationFactory
struct Il2CppIActivationFactory;
// Windows.Media.Capture.IAppCaptureStatics
struct IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
// Windows.Media.Capture.IAppCaptureStatics2
struct IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
// Windows.Networking.Sockets.IDatagramSocketStatics
struct IDatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95;
// Windows.UI.ViewManagement.IInputPaneStatics
struct IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658;
// Windows.UI.ViewManagement.IInputPaneStatics2
struct IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558;
// Windows.UI.ViewManagement.InputPane
struct InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393;
// Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
struct InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2;
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
struct IAsyncOperation_1_tFBF5E2F4B0786B187D1B2281942C11684E511F60;
struct IDatagramSocketMessageReceivedEventArgs_t03513DDA5DA0E77B03DE74F4D6BAC476979EC658;
struct IDatagramSocket_t18CAD02CC099AB9ABAC1E19BC419D249D2A9EEB7;
struct IHostName_tE33210DDCAFFA71D0FE0DBA437A7550525ACBFFF;
struct IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB;
struct IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D;
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
struct ITypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_ComCallableWrapper;
struct ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper;
struct ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IAppCaptureStatics
struct NOVTABLE IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics_GetForCurrentView_mF44A888E1693B303FFDA2F2DC2704F3E7D69AD3E(IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2** comReturnValue) = 0;
};
// Windows.Media.Capture.IAppCaptureStatics2
struct NOVTABLE IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics2_U24__Stripped0_SetAllowedAsync_m723C515568AA6438001613A9565BAE1DFD015B29() = 0;
};
// Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs
struct NOVTABLE IDatagramSocketMessageReceivedEventArgs_t03513DDA5DA0E77B03DE74F4D6BAC476979EC658 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDatagramSocketMessageReceivedEventArgs_get_RemoteAddress_m1A76E640E47EE949FA2C3A45231C71ECEC2A47B3(IHostName_tE33210DDCAFFA71D0FE0DBA437A7550525ACBFFF** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocketMessageReceivedEventArgs_U24__Stripped0_get_RemotePort_m0D7D8C97417A55E40F817E24D5B9893D73B7C027() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocketMessageReceivedEventArgs_U24__Stripped1_get_LocalAddress_m1C6878A36E1984C1849687590BBA916CE5DF3900() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocketMessageReceivedEventArgs_U24__Stripped2_GetDataReader_m8C51DDCCD01BB2F0BFD310A623299F4F67A26E24() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocketMessageReceivedEventArgs_GetDataStream_m266266D27E77CE1FD22B2034A34D0B0B46F8048C(IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) = 0;
};
// Windows.Networking.Sockets.IDatagramSocketStatics
struct NOVTABLE IDatagramSocketStatics_tBC5B47EA8DBA9413654DF75F9905BC5FA62A0A95 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDatagramSocketStatics_U24__Stripped0_GetEndpointPairsAsync_m8AD2A2FA4CFCD3FCB564BF069774E5D684B0C803() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m90649BB0F987F7F4113CB4AF05A7FE24CF7A5757() = 0;
};
// Windows.UI.ViewManagement.IInputPaneStatics
struct NOVTABLE IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPaneStatics_GetForCurrentView_m5500BD1234D43F7C72BC241C2127E8BBCA13804F(IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D** comReturnValue) = 0;
};
// Windows.UI.ViewManagement.IInputPaneStatics2
struct NOVTABLE IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPaneStatics2_U24__Stripped0_GetForUIContext_m1B5571474793F35902100BFEE93598E6DF083C11() = 0;
};
// Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs
struct NOVTABLE IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPaneVisibilityEventArgs_U24__Stripped0_get_OccludedRect_m7CD774E35B5DD3D2FB32911ADAB698960AA83781() = 0;
	virtual il2cpp_hresult_t STDCALL IInputPaneVisibilityEventArgs_U24__Stripped1_put_EnsuredFocusedElementInView_mFD8718E6C8353305D6998F141FB0AA712FE2861C() = 0;
	virtual il2cpp_hresult_t STDCALL IInputPaneVisibilityEventArgs_U24__Stripped2_get_EnsuredFocusedElementInView_m2754533A9587DBD3AF66C4B71432CC71C1B3F207() = 0;
};

// System.Object


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


// Windows.Media.Capture.AppCapture
struct AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE  : public Il2CppComObject
{
public:

public:
};

struct AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics2
	IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B* ____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics
	IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE* ____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.AppCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B* get_____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B()
	{
		IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B* returnValue = ____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE* get_____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE()
	{
		IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE* returnValue = ____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
			}
		}
		return returnValue;
	}
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


// Windows.UI.ViewManagement.InputPane
struct InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393  : public Il2CppComObject
{
public:

public:
};

struct InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.ViewManagement.IInputPaneStatics2
	IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558* ____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558;
	// Cached pointer to Windows.UI.ViewManagement.IInputPaneStatics
	IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658* ____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.ViewManagement.InputPane"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558* get_____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558()
	{
		IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558* returnValue = ____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558;
			}
		}
		return returnValue;
	}

	inline IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658* get_____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658()
	{
		IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658* returnValue = ____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658;
			}
		}
		return returnValue;
	}
};


// Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
struct InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6  : public Il2CppComObject
{
public:

public:
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
// Windows.Media.Capture.IAppCapture
struct NOVTABLE IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCapture_U24__Stripped0_get_IsCapturingAudio_m6952A4034B33D8F86B8D9EFC610D140F533A1034() = 0;
	virtual il2cpp_hresult_t STDCALL IAppCapture_get_IsCapturingVideo_m8A2DEB0271B2A0F981935A2DE01AD743904C8939(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAppCapture_add_CapturingChanged_m8BEFBF91719D9AF7DF0605B870F79F93CE505236(ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAppCapture_remove_CapturingChanged_m0D77136224ED8830A0DAA0A40801BED47958A0BB(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
};
// Windows.Networking.Sockets.IDatagramSocket
struct NOVTABLE IDatagramSocket_t18CAD02CC099AB9ABAC1E19BC419D249D2A9EEB7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_U24__Stripped0_get_Control_m51F973A87987B53C5248687040D336D0F6767B93() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_U24__Stripped1_get_Information_m6F331911156E7748903ABA43F2F61F70CB06C8A4() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_U24__Stripped2_get_OutputStream_mE6A4C7250AEC7174DB653D67F71D9C7D37B7F0C6() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_U24__Stripped3_ConnectAsync_mF1BFDF83731EA6DE89A4F2F33B4484D90899D429() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_U24__Stripped4_ConnectAsync_mACA99672084104682EEE28FF8F8C8B32EF3C90C6() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_BindServiceNameAsync_m56898A8E6B2DA60908A79DDD890DBC9AB732C875(Il2CppHString ___localServiceName0, IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_U24__Stripped5_BindEndpointAsync_mAD95E1654A9C27BC8F697BA094BE59967DFD119B() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_U24__Stripped6_JoinMulticastGroup_m28E865CF454CC5BBC66E80E476A5EE2DCC35F052() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_GetOutputStreamAsync_mB3A5E933A096BBCE63ED4021DECF4B701AB41291(IHostName_tE33210DDCAFFA71D0FE0DBA437A7550525ACBFFF* ___remoteHostName0, Il2CppHString ___remoteServiceName1, IAsyncOperation_1_tFBF5E2F4B0786B187D1B2281942C11684E511F60** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_U24__Stripped7_GetOutputStreamAsync_m03F74222794A03D53CF1E55E4CBB00238959FD88() = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_add_MessageReceived_mFAD280F232012B8BC98E900C7E085C70A33B3351(ITypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_ComCallableWrapper* ___eventHandler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDatagramSocket_remove_MessageReceived_m51B8BEF72FCC9B2342B5E08344A1D0102FF10F94(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___eventCookie0) = 0;
};
// Windows.UI.ViewManagement.IInputPane
struct NOVTABLE IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPane_add_Showing_m63318852D9001BFBD8FAC4CD878943CE3805C450(ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_remove_Showing_m67C107FA7BA12DF2E688FF1B8E415FCE44F51244(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_add_Hiding_m3F603DC6080B345004D54A8033533BDF7B09A877(ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_remove_Hiding_m0FEDF393B18A2A62C007D0DD9CCFD4FBFD10C05C(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_U24__Stripped0_get_OccludedRect_m663B49801594DC7F25DFECB2B5B8075B5212A27C() = 0;
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

// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2* ___sender0, Il2CppIInspectable* ___args1) = 0;
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


// Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D* ___sender0, IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



const Il2CppGuid ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper::IID = { 0xf5cb24b5, 0xff00, 0x58df, 0xb4, 0x60, 0x17, 0xbb, 0xf2, 0xcd, 0x64, 0xd3 };
// Native invoker for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
IL2CPP_EXTERN_C  void TypedEventHandler_2_Invoke_m9CBE857E104E5CDEE2B384C9A94337147AF403CE_NativeInvoker (Il2CppComObject * __this, AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper* ____typedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 = il2cpp_codegen_com_query_interface<ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		____sender0_marshaled = il2cpp_codegen_com_query_interface<IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2>(static_cast<Il2CppComObject*>(___sender0));
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	Il2CppIInspectable* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___args1))
		{
			____args1_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___args1));
			(____args1_marshaled)->AddRef();
		}
		else
		{
			____args1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___args1);
		}
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____typedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___args1' native representation
	if (____args1_marshaled != NULL)
	{
		(____args1_marshaled)->Release();
		____args1_marshaled = NULL;
	}

}
const Il2CppGuid ITypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_ComCallableWrapper::IID = { 0x4482e19b, 0x2389, 0x5767, 0x9b, 0xb, 0x8d, 0x7a, 0x8e, 0xf5, 0x57, 0x43 };
// Native invoker for Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket,Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>
IL2CPP_EXTERN_C  void TypedEventHandler_2_Invoke_m9D92B5FC9EC1AC023644BE4C42A452F2EFCC30B1_NativeInvoker (Il2CppComObject * __this, DatagramSocket_t5F9FF09793992DE335C443DF8D5D69E9F23C8DF4 * ___sender0, DatagramSocketMessageReceivedEventArgs_tA1E7B6A45B8EF44132E7BA0262198840DC2CE0CB * ___args1, const RuntimeMethod* method)
{
	ITypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_ComCallableWrapper* ____typedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1 = il2cpp_codegen_com_query_interface<ITypedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	IDatagramSocket_t18CAD02CC099AB9ABAC1E19BC419D249D2A9EEB7* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		____sender0_marshaled = il2cpp_codegen_com_query_interface<IDatagramSocket_t18CAD02CC099AB9ABAC1E19BC419D249D2A9EEB7>(static_cast<Il2CppComObject*>(___sender0));
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	IDatagramSocketMessageReceivedEventArgs_t03513DDA5DA0E77B03DE74F4D6BAC476979EC658* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		____args1_marshaled = il2cpp_codegen_com_query_interface<IDatagramSocketMessageReceivedEventArgs_t03513DDA5DA0E77B03DE74F4D6BAC476979EC658>(static_cast<Il2CppComObject*>(___args1));
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____typedEventHandler_2_t36D544130366B70949E68E72437F20BC4E2129B1->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
const Il2CppGuid ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper::IID = { 0xb813d684, 0xd953, 0x5a8a, 0x9b, 0x30, 0x78, 0xb7, 0x9f, 0xb9, 0x14, 0x7b };
// Native invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
IL2CPP_EXTERN_C  void TypedEventHandler_2_Invoke_m606719294C008B46778D7017B715442332EF1BFB_NativeInvoker (Il2CppComObject * __this, InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393 * ___sender0, InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6 * ___args1, const RuntimeMethod* method)
{
	ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper* ____typedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1 = il2cpp_codegen_com_query_interface<ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		____sender0_marshaled = il2cpp_codegen_com_query_interface<IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D>(static_cast<Il2CppComObject*>(___sender0));
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		____args1_marshaled = il2cpp_codegen_com_query_interface<IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB>(static_cast<Il2CppComObject*>(___args1));
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____typedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
const Il2CppGuid ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper::IID = { 0xc7e65ce2, 0xfad5, 0x5e3b, 0x9c, 0x58, 0x18, 0x6c, 0xa8, 0xc1, 0xdd, 0x57 };
// Native invoker for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
IL2CPP_EXTERN_C  void TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper* ____typedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC = il2cpp_codegen_com_query_interface<ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	Il2CppIInspectable* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___args1))
		{
			____args1_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___args1));
			(____args1_marshaled)->AddRef();
		}
		else
		{
			____args1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___args1);
		}
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____typedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___args1' native representation
	if (____args1_marshaled != NULL)
	{
		(____args1_marshaled)->Release();
		____args1_marshaled = NULL;
	}

}
