#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7;
// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t1E259B861B96DB7899127C987D767A363F87BE91;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider
struct IMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA3E2F4825F4FE6184A4018667CC6872102B285D4;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t829F6F22BF7FC048E6262D1DD57519E6DD898937;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t46B8A2068D730ACFA41559D6D9C2F09E790ED539;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t4523387F302DFE5B4F92A04637423A9CE22BF549;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t76CB9EC3F7EE135CA66BDA4D7AADCA4EC7A9C3D9;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFD221887A9579249AD3EAD5D314A52B087E45E8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t32F9F58220099426B39C47207B5FD610F014FA94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityService_tE02A0647B4FB7BC9FCD1804E9413F7C063782E6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t4B13CC21D564B13B9232D8B36AE38FC4C8995DB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tD132F07E898693EC3DF2D97199CBE089FA9B02C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4;
IL2CPP_EXTERN_C String_t* _stringLiteral9FAB7F7797F50BE92F95BF3ABEA86CE6B7AD33B5;
IL2CPP_EXTERN_C String_t* _stringLiteralAE253846825DF5F393050BB52D03647D0CFC35E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC3408C882E16204A62507D6D9A0DCA6D757FB4EE;
IL2CPP_EXTERN_C String_t* _stringLiteralCD496BC0032F2FFF9C94404087C768C474C3BF2B;
IL2CPP_EXTERN_C String_t* _stringLiteralD47B37C1B233818E5C869621EE522D30507C5050;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D160052E5D4840C43A5454F2745C041FF0C3BD;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m03643ADB8D945D6762E9D8E395FBFF6095BBF5B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m8A4D01DC840EEF07B45094DF72C264E3C0691CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m9A39ECF7ABB6672AC9D3BA8AA2EAEB10FA317F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_mB9FAB8B2F4EEA56C8D79586BD2623CB3BAAB440E_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mB64B9E6F21FEF3733A5D0330467082ED668083FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF3EE4B19DC705C28E04AEB35DEA34B1CD8C2B5C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Destroy_m2EA31EA302CDEC60D611535107DA5EC2E2BDA84C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Disable_mBB9B02A19A00112685455504B6E51687FF7B7DE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Enable_m5CB6A5B50F32CAB15C43FC7468BF959A2AEAC927_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Initialize_mD34EB68DED3729561425F07DADB1ABC8B309F612_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_m9415C44A43D3D7DA8441B856EFEC452676F501B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Update_m0559233DFAD96B6BFEE7656F5FC0975640EADCBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__cctor_m9351FEEEA9352369C63601C1465F62C828940598_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__ctor_mE954D3C7E3FB9179B7ECBF04B7AD594B96C2B7AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_IsOpaque_mAD46FBE030A0481426766DFBFF8AE1ADF39AA7F5_MetadataUsageId;

struct MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD832E0063C8212824B58C38F533C3ADE4910721A 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t1E259B861B96DB7899127C987D767A363F87BE91  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t1E259B861B96DB7899127C987D767A363F87BE91, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t1E259B861B96DB7899127C987D767A363F87BE91, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t1E259B861B96DB7899127C987D767A363F87BE91, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_t1E259B861B96DB7899127C987D767A363F87BE91, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceMappings_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
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


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct DisplayType_tC25110122C3DF0FB43809AC982DBBD4A513AF2AE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_tC25110122C3DF0FB43809AC982DBBD4A513AF2AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct SupportedPlatforms_tD587A55D7828A4C9B0871E2F91CFE7F188EB0D1A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_tD587A55D7828A4C9B0871E2F91CFE7F188EB0D1A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.CameraClearFlags
struct CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85  : public BaseService_t1E259B861B96DB7899127C987D767A363F87BE91
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t76CB9EC3F7EE135CA66BDA4D7AADCA4EC7A9C3D9 * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t4523387F302DFE5B4F92A04637423A9CE22BF549 * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t829F6F22BF7FC048E6262D1DD57519E6DD898937 * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_7), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85, ___postponedActions_8)); }
	inline List_1_t76CB9EC3F7EE135CA66BDA4D7AADCA4EC7A9C3D9 * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_t76CB9EC3F7EE135CA66BDA4D7AADCA4EC7A9C3D9 ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_t76CB9EC3F7EE135CA66BDA4D7AADCA4EC7A9C3D9 * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85, ___postponedObjectActions_9)); }
	inline List_1_t4523387F302DFE5B4F92A04637423A9CE22BF549 * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_t4523387F302DFE5B4F92A04637423A9CE22BF549 ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_t4523387F302DFE5B4F92A04637423A9CE22BF549 * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_t829F6F22BF7FC048E6262D1DD57519E6DD898937 * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_t829F6F22BF7FC048E6262D1DD57519E6DD898937 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_t829F6F22BF7FC048E6262D1DD57519E6DD898937 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_11), (void*)value);
	}
};

struct BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___TraverseEventSystemHandlerHierarchyPerfMarker_12;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_12)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_TraverseEventSystemHandlerHierarchyPerfMarker_12() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_12(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentType
	SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::settingsProfile
	BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * ___settingsProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3, ___componentType_0)); }
	inline SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_settingsProfile_4() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3, ___settingsProfile_4)); }
	inline BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * get_settingsProfile_4() const { return ___settingsProfile_4; }
	inline BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 ** get_address_of_settingsProfile_4() { return &___settingsProfile_4; }
	inline void set_settingsProfile_4(BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * value)
	{
		___settingsProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3_marshaled_pinvoke
{
	SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * ___settingsProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3_marshaled_com
{
	SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * ___settingsProfile_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7  : public BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7, ___U3CRegistrarU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_13() const { return ___U3CRegistrarU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_13() { return &___U3CRegistrarU3Ek__BackingField_13; }
	inline void set_U3CRegistrarU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD  : public BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t46B8A2068D730ACFA41559D6D9C2F09E790ED539 * ___dataProviders_14;

public:
	inline static int32_t get_offset_of_dataProviders_14() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD, ___dataProviders_14)); }
	inline List_1_t46B8A2068D730ACFA41559D6D9C2F09E790ED539 * get_dataProviders_14() const { return ___dataProviders_14; }
	inline List_1_t46B8A2068D730ACFA41559D6D9C2F09E790ED539 ** get_address_of_dataProviders_14() { return &___dataProviders_14; }
	inline void set_dataProviders_14(List_1_t46B8A2068D730ACFA41559D6D9C2F09E790ED539 * value)
	{
		___dataProviders_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_14), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___LateUpdatePerfMarker_16;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_15() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD_StaticFields, ___UpdatePerfMarker_15)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_15() const { return ___UpdatePerfMarker_15; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_15() { return &___UpdatePerfMarker_15; }
	inline void set_UpdatePerfMarker_15(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_16() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD_StaticFields, ___LateUpdatePerfMarker_16)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_LateUpdatePerfMarker_16() const { return ___LateUpdatePerfMarker_16; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_LateUpdatePerfMarker_16() { return &___LateUpdatePerfMarker_16; }
	inline void set_LateUpdatePerfMarker_16(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___LateUpdatePerfMarker_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35  : public BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A  : public BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077
{
public:
	// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::settingsConfigurations
	MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239* ___settingsConfigurations_5;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneOpaqueDisplay
	float ___nearClipPlaneOpaqueDisplay_6;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneOpaqueDisplay
	float ___farClipPlaneOpaqueDisplay_7;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsOpaqueDisplay
	int32_t ___cameraClearFlagsOpaqueDisplay_8;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorOpaqueDisplay
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___backgroundColorOpaqueDisplay_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::opaqueQualityLevel
	int32_t ___opaqueQualityLevel_10;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneTransparentDisplay
	float ___nearClipPlaneTransparentDisplay_11;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneTransparentDisplay
	float ___farClipPlaneTransparentDisplay_12;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsTransparentDisplay
	int32_t ___cameraClearFlagsTransparentDisplay_13;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorTransparentDisplay
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___backgroundColorTransparentDisplay_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::transparentQualityLevel
	int32_t ___transparentQualityLevel_15;

public:
	inline static int32_t get_offset_of_settingsConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___settingsConfigurations_5)); }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239* get_settingsConfigurations_5() const { return ___settingsConfigurations_5; }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239** get_address_of_settingsConfigurations_5() { return &___settingsConfigurations_5; }
	inline void set_settingsConfigurations_5(MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239* value)
	{
		___settingsConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_nearClipPlaneOpaqueDisplay_6() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___nearClipPlaneOpaqueDisplay_6)); }
	inline float get_nearClipPlaneOpaqueDisplay_6() const { return ___nearClipPlaneOpaqueDisplay_6; }
	inline float* get_address_of_nearClipPlaneOpaqueDisplay_6() { return &___nearClipPlaneOpaqueDisplay_6; }
	inline void set_nearClipPlaneOpaqueDisplay_6(float value)
	{
		___nearClipPlaneOpaqueDisplay_6 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneOpaqueDisplay_7() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___farClipPlaneOpaqueDisplay_7)); }
	inline float get_farClipPlaneOpaqueDisplay_7() const { return ___farClipPlaneOpaqueDisplay_7; }
	inline float* get_address_of_farClipPlaneOpaqueDisplay_7() { return &___farClipPlaneOpaqueDisplay_7; }
	inline void set_farClipPlaneOpaqueDisplay_7(float value)
	{
		___farClipPlaneOpaqueDisplay_7 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsOpaqueDisplay_8() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___cameraClearFlagsOpaqueDisplay_8)); }
	inline int32_t get_cameraClearFlagsOpaqueDisplay_8() const { return ___cameraClearFlagsOpaqueDisplay_8; }
	inline int32_t* get_address_of_cameraClearFlagsOpaqueDisplay_8() { return &___cameraClearFlagsOpaqueDisplay_8; }
	inline void set_cameraClearFlagsOpaqueDisplay_8(int32_t value)
	{
		___cameraClearFlagsOpaqueDisplay_8 = value;
	}

	inline static int32_t get_offset_of_backgroundColorOpaqueDisplay_9() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___backgroundColorOpaqueDisplay_9)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_backgroundColorOpaqueDisplay_9() const { return ___backgroundColorOpaqueDisplay_9; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_backgroundColorOpaqueDisplay_9() { return &___backgroundColorOpaqueDisplay_9; }
	inline void set_backgroundColorOpaqueDisplay_9(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___backgroundColorOpaqueDisplay_9 = value;
	}

	inline static int32_t get_offset_of_opaqueQualityLevel_10() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___opaqueQualityLevel_10)); }
	inline int32_t get_opaqueQualityLevel_10() const { return ___opaqueQualityLevel_10; }
	inline int32_t* get_address_of_opaqueQualityLevel_10() { return &___opaqueQualityLevel_10; }
	inline void set_opaqueQualityLevel_10(int32_t value)
	{
		___opaqueQualityLevel_10 = value;
	}

	inline static int32_t get_offset_of_nearClipPlaneTransparentDisplay_11() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___nearClipPlaneTransparentDisplay_11)); }
	inline float get_nearClipPlaneTransparentDisplay_11() const { return ___nearClipPlaneTransparentDisplay_11; }
	inline float* get_address_of_nearClipPlaneTransparentDisplay_11() { return &___nearClipPlaneTransparentDisplay_11; }
	inline void set_nearClipPlaneTransparentDisplay_11(float value)
	{
		___nearClipPlaneTransparentDisplay_11 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneTransparentDisplay_12() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___farClipPlaneTransparentDisplay_12)); }
	inline float get_farClipPlaneTransparentDisplay_12() const { return ___farClipPlaneTransparentDisplay_12; }
	inline float* get_address_of_farClipPlaneTransparentDisplay_12() { return &___farClipPlaneTransparentDisplay_12; }
	inline void set_farClipPlaneTransparentDisplay_12(float value)
	{
		___farClipPlaneTransparentDisplay_12 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsTransparentDisplay_13() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___cameraClearFlagsTransparentDisplay_13)); }
	inline int32_t get_cameraClearFlagsTransparentDisplay_13() const { return ___cameraClearFlagsTransparentDisplay_13; }
	inline int32_t* get_address_of_cameraClearFlagsTransparentDisplay_13() { return &___cameraClearFlagsTransparentDisplay_13; }
	inline void set_cameraClearFlagsTransparentDisplay_13(int32_t value)
	{
		___cameraClearFlagsTransparentDisplay_13 = value;
	}

	inline static int32_t get_offset_of_backgroundColorTransparentDisplay_14() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___backgroundColorTransparentDisplay_14)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_backgroundColorTransparentDisplay_14() const { return ___backgroundColorTransparentDisplay_14; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_backgroundColorTransparentDisplay_14() { return &___backgroundColorTransparentDisplay_14; }
	inline void set_backgroundColorTransparentDisplay_14(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___backgroundColorTransparentDisplay_14 = value;
	}

	inline static int32_t get_offset_of_transparentQualityLevel_15() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A, ___transparentQualityLevel_15)); }
	inline int32_t get_transparentQualityLevel_15() const { return ___transparentQualityLevel_15; }
	inline int32_t* get_address_of_transparentQualityLevel_15() { return &___transparentQualityLevel_15; }
	inline void set_transparentQualityLevel_15(int32_t value)
	{
		___transparentQualityLevel_15 = value;
	}
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD  : public BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_18;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_19;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_22;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD, ___U3CSourceIdU3Ek__BackingField_18)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_18() const { return ___U3CSourceIdU3Ek__BackingField_18; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_18() { return &___U3CSourceIdU3Ek__BackingField_18; }
	inline void set_U3CSourceIdU3Ek__BackingField_18(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD, ___U3CSourceNameU3Ek__BackingField_19)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_19() const { return ___U3CSourceNameU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_19() { return &___U3CSourceNameU3Ek__BackingField_19; }
	inline void set_U3CSourceNameU3Ek__BackingField_19(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_20() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD, ___currentDisplayType_20)); }
	inline int32_t get_currentDisplayType_20() const { return ___currentDisplayType_20; }
	inline int32_t* get_address_of_currentDisplayType_20() { return &___currentDisplayType_20; }
	inline void set_currentDisplayType_20(int32_t value)
	{
		___currentDisplayType_20 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_21() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD, ___cameraOpaqueLastFrame_21)); }
	inline bool get_cameraOpaqueLastFrame_21() const { return ___cameraOpaqueLastFrame_21; }
	inline bool* get_address_of_cameraOpaqueLastFrame_21() { return &___cameraOpaqueLastFrame_21; }
	inline void set_cameraOpaqueLastFrame_21(bool value)
	{
		___cameraOpaqueLastFrame_21 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_22() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD, ___useFallbackBehavior_22)); }
	inline bool get_useFallbackBehavior_22() const { return ___useFallbackBehavior_22; }
	inline bool* get_address_of_useFallbackBehavior_22() { return &___useFallbackBehavior_22; }
	inline void set_useFallbackBehavior_22(bool value)
	{
		___useFallbackBehavior_22 = value;
	}
};

struct MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplySettingsForOpaquePerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplySettingsForTransparentPerfMarker_25;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_23() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields, ___UpdatePerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_23() const { return ___UpdatePerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_23() { return &___UpdatePerfMarker_23; }
	inline void set_UpdatePerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields, ___ApplySettingsForOpaquePerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplySettingsForOpaquePerfMarker_24() const { return ___ApplySettingsForOpaquePerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplySettingsForOpaquePerfMarker_24() { return &___ApplySettingsForOpaquePerfMarker_24; }
	inline void set_ApplySettingsForOpaquePerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplySettingsForOpaquePerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields, ___ApplySettingsForTransparentPerfMarker_25)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplySettingsForTransparentPerfMarker_25() const { return ___ApplySettingsForTransparentPerfMarker_25; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplySettingsForTransparentPerfMarker_25() { return &___ApplySettingsForTransparentPerfMarker_25; }
	inline void set_ApplySettingsForTransparentPerfMarker_25(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplySettingsForTransparentPerfMarker_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3  m_Items[1];

public:
	inline MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
};


// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m47B426539E9C04219CF8309542ABB6727EBAC517_gshared (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mD170FBC77B93C08D6ED3FB2F94DE5035CE68C380_gshared (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, RuntimeObject * ___dataProviderInstance0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_mE954D3C7E3FB9179B7ECBF04B7AD594B96C2B7AE (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mA8664E0793B07E287571B3803C4F492B91BEDF59_inline (BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m698C8A1C1D88FA8F850759758A8E5C9D966532F8 (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.HolographicSettings::get_IsDisplayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_SettingsConfigurations()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239* MixedRealityCameraProfile_get_SettingsConfigurations_m7EBB8A938B5804EECE46E80B671CE1C80529620F_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * MixedRealityCameraSettingsConfiguration_get_ComponentType_mDD018B30B387695A60FF21BD77A089CE62081D2B_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m4EFCBDB31E67D1FC497D5B93132606A3F4828E55_inline (SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_m9805D35C7346E09014EA421106F298AC6FA817E6_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_Priority()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_m66FA65B47F08F4DB5961F3C27648B2AA37B85F6B_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_SettingsProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m7624F6D78950E3F48B530D75CE71B25831862BF6_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_RuntimePlatform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_mBB5829A1132ADFB439D8EFF6FAA4A5574CC72C04_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m9A39ECF7ABB6672AC9D3BA8AA2EAEB10FA317F7B (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD *, Type_t *, String_t*, int32_t, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m47B426539E9C04219CF8309542ABB6727EBAC517_gshared)(__this, ___concreteType0, ___providerName1, ___supportedPlatforms2, ___args3, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_mAD46FBE030A0481426766DFBFF8AE1ADF39AA7F5 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mB64B9E6F21FEF3733A5D0330467082ED668083FC (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF3EE4B19DC705C28E04AEB35DEA34B1CD8C2B5C5 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Position_m4F502E45E6AC47C287D1E30BF7A7808859A6D0EA (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Rotation_m4D374E6FCFA57D35C130AF6BFBE8D7CD3AA8F860 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_m367AE3DAA107B88290DB37E5A24C9D9E83BFCF4B (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m3B250DE34D9C591D588185FADEB1F963D1B858F5 (BaseService_t1E259B861B96DB7899127C987D767A363F87BE91 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_mB9FAB8B2F4EEA56C8D79586BD2623CB3BAAB440E (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mD170FBC77B93C08D6ED3FB2F94DE5035CE68C380_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m50A9B4570EF6880C1397B9A4B64618F602E920F9 (BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85 * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m364FFBD5EA2D8950F55085B0FE39232B81D4281B_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_m1383D77E3F31822CA0B072C9AE463643CC506D16_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_m1AE5E5746087F2E49AAD120BC478483D1942A024_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_mF7DAEF27FA579C9FBE87738DF133CF74447137EB_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_OpaqueQualityLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_mC4FBB5DBB2C44DC916B413DAC9684FCAD5F185A8_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::SetQualityLevel(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551 (int32_t ___index0, bool ___applyExpensiveChanges1, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m20085FE8DEE79E9CADFB31FFD0C9C24A8691D6B7_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9C4FBE6FCF795F2A2107554D284A12842ED78338_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_mC37B0CE1F05E47D9D540A2FEC4BC4962664CC5B6_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_mA545962200A6A29AC3E3B087F85CCA9A9EB08720_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_TransparentQualityLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_mBD4B27B0B062CD3CF76723087D887DBD408056CE_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m27F298FD418764147FA17D896B7454DE9CB1560D_inline (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC (int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m49CB64E542965EE651829B5296A176991BD15112 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile1, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile = null) : this(profile)
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_0 = ___profile1;
		MixedRealityCameraSystem__ctor_mE954D3C7E3FB9179B7ECBF04B7AD594B96C2B7AE(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_mA8664E0793B07E287571B3803C4F492B91BEDF59_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_mE954D3C7E3FB9179B7ECBF04B7AD594B96C2B7AE (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__ctor_mE954D3C7E3FB9179B7ECBF04B7AD594B96C2B7AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		__this->set_U3CNameU3Ek__BackingField_17(_stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4);
		// public string SourceName { get; } = "Mixed Reality Camera System";
		__this->set_U3CSourceNameU3Ek__BackingField_19(_stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4);
		// private bool useFallbackBehavior = true;
		__this->set_useFallbackBehavior_22((bool)1);
		// BaseMixedRealityProfile profile = null) : base(profile)
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_0 = ___profile0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_m698C8A1C1D88FA8F850759758A8E5C9D966532F8(__this, L_0, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_Name_mEF9BCAAE93CD2A42EFAC9C29A5023E538F1A69D6 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_set_Name_m4246E6558D66C583C06C499A968A7E5691D48D8E (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_mAD46FBE030A0481426766DFBFF8AE1ADF39AA7F5 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_IsOpaque_mAD46FBE030A0481426766DFBFF8AE1ADF39AA7F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// currentDisplayType = DisplayType.Opaque;
		__this->set_currentDisplayType_20(0);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> dataProviders = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m8A4D01DC840EEF07B45094DF72C264E3C0691CF7_RuntimeMethod_var, __this);
		V_0 = L_0;
		// if (dataProviders.Count > 0)
		RuntimeObject* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t4B13CC21D564B13B9232D8B36AE38FC4C8995DB9_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// if (!dataProviders[0].IsOpaque)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tD132F07E898693EC3DF2D97199CBE089FA9B02C3_il2cpp_TypeInfo_var, L_3, 0);
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::get_IsOpaque() */, IMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		// currentDisplayType = DisplayType.Transparent;
		__this->set_currentDisplayType_20(1);
		// }
		goto IL_0046;
	}

IL_002e:
	{
		// Debug.LogWarning("Windows Mixed Reality specific camera code has been moved into Windows Mixed Reality Camera Settings. Please ensure you have this added under your Camera System's Settings Providers, as this deprecated code path may be removed in a future update.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralC3408C882E16204A62507D6D9A0DCA6D757FB4EE, /*hidden argument*/NULL);
		// if (!UnityEngine.XR.WSA.HolographicSettings.IsDisplayOpaque)
		bool L_6 = HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418(/*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// currentDisplayType = DisplayType.Transparent;
		__this->set_currentDisplayType_20(1);
	}

IL_0046:
	{
		// return currentDisplayType == DisplayType.Opaque;
		int32_t L_7 = __this->get_currentDisplayType_20();
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSystem_get_SourceId_m33028108BB61FF3BF18641623EEB7374044D8D49 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId { get; } = 0;
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_18();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m27F298FD418764147FA17D896B7454DE9CB1560D (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_19();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MixedRealityCameraProfile CameraProfile => ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Initialize_mD34EB68DED3729561425F07DADB1ABC8B309F612 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Initialize_mD34EB68DED3729561425F07DADB1ABC8B309F612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * V_0 = NULL;
	int32_t V_1 = 0;
	MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * G_B5_0 = NULL;
	SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * G_B4_0 = NULL;
	Type_t * G_B6_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	{
		// MixedRealityCameraProfile profile = ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A_il2cpp_TypeInfo_var));
		// if ((GetDataProviders<IMixedRealityCameraSettingsProvider>().Count == 0) && (profile != null))
		RuntimeObject* L_1 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m8A4D01DC840EEF07B45094DF72C264E3C0691CF7_RuntimeMethod_var, __this);
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t4B13CC21D564B13B9232D8B36AE38FC4C8995DB9_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_00d2;
		}
	}
	{
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00d2;
		}
	}
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		V_1 = 0;
		goto IL_00c4;
	}

IL_002f:
	{
		// MixedRealityCameraSettingsConfiguration configuration = profile.SettingsConfigurations[i];
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_5 = V_0;
		NullCheck(L_5);
		MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239* L_6 = MixedRealityCameraProfile_get_SettingsConfigurations_m7EBB8A938B5804EECE46E80B671CE1C80529620F_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if (configuration.ComponentType?.Type == null)
		SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * L_10 = MixedRealityCameraSettingsConfiguration_get_ComponentType_mDD018B30B387695A60FF21BD77A089CE62081D2B_inline((MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 *)(&V_2), /*hidden argument*/NULL);
		SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_004a;
		}
	}
	{
		G_B6_0 = ((Type_t *)(NULL));
		goto IL_004f;
	}

IL_004a:
	{
		NullCheck(G_B5_0);
		Type_t * L_12 = SystemType_get_Type_m4EFCBDB31E67D1FC497D5B93132606A3F4828E55_inline(G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = L_12;
	}

IL_004f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_13 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(G_B6_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00c0;
		}
	}
	{
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.SettingsProfile };
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, __this);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
		String_t* L_17 = MixedRealityCameraSettingsConfiguration_get_ComponentName_m9805D35C7346E09014EA421106F298AC6FA817E6_inline((MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_16;
		uint32_t L_19 = MixedRealityCameraSettingsConfiguration_get_Priority_m66FA65B47F08F4DB5961F3C27648B2AA37B85F6B_inline((MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 *)(&V_2), /*hidden argument*/NULL);
		uint32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * L_23 = MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m7624F6D78950E3F48B530D75CE71B25831862BF6_inline((MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		V_3 = L_22;
		// if (RegisterDataProvider<IMixedRealityCameraSettingsProvider>(
		//     configuration.ComponentType.Type,
		//     configuration.ComponentName,
		//     configuration.RuntimePlatform,
		//     args))
		SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * L_24 = MixedRealityCameraSettingsConfiguration_get_ComponentType_mDD018B30B387695A60FF21BD77A089CE62081D2B_inline((MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_24);
		Type_t * L_25 = SystemType_get_Type_m4EFCBDB31E67D1FC497D5B93132606A3F4828E55_inline(L_24, /*hidden argument*/NULL);
		String_t* L_26 = MixedRealityCameraSettingsConfiguration_get_ComponentName_m9805D35C7346E09014EA421106F298AC6FA817E6_inline((MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_27 = MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_mBB5829A1132ADFB439D8EFF6FAA4A5574CC72C04_inline((MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 *)(&V_2), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_3;
		bool L_29 = BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m9A39ECF7ABB6672AC9D3BA8AA2EAEB10FA317F7B(__this, L_25, L_26, L_27, L_28, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m9A39ECF7ABB6672AC9D3BA8AA2EAEB10FA317F7B_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_00c0;
		}
	}
	{
		// IMixedRealityCameraSettingsProvider provider = GetDataProvider<IMixedRealityCameraSettingsProvider>(configuration.ComponentName);
		String_t* L_30 = MixedRealityCameraSettingsConfiguration_get_ComponentName_m9805D35C7346E09014EA421106F298AC6FA817E6_inline((MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 *)(&V_2), /*hidden argument*/NULL);
		RuntimeObject* L_31 = GenericVirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m03643ADB8D945D6762E9D8E395FBFF6095BBF5B6_RuntimeMethod_var, __this, L_30);
		// provider?.ApplyConfiguration();
		RuntimeObject* L_32 = L_31;
		G_B9_0 = L_32;
		if (L_32)
		{
			G_B10_0 = L_32;
			goto IL_00bb;
		}
	}
	{
		goto IL_00c0;
	}

IL_00bb:
	{
		NullCheck(G_B10_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::ApplyConfiguration() */, IMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_il2cpp_TypeInfo_var, G_B10_0);
	}

IL_00c0:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c4:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_34 = V_1;
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_35 = V_0;
		NullCheck(L_35);
		MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239* L_36 = MixedRealityCameraProfile_get_SettingsConfigurations_m7EBB8A938B5804EECE46E80B671CE1C80529620F_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))))
		{
			goto IL_002f;
		}
	}

IL_00d2:
	{
		// useFallbackBehavior = (GetDataProviders<IMixedRealityCameraSettingsProvider>().Count == 0);
		RuntimeObject* L_37 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m8A4D01DC840EEF07B45094DF72C264E3C0691CF7_RuntimeMethod_var, __this);
		NullCheck(L_37);
		int32_t L_38 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t4B13CC21D564B13B9232D8B36AE38FC4C8995DB9_il2cpp_TypeInfo_var, L_37);
		__this->set_useFallbackBehavior_22((bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0));
		// if (useFallbackBehavior)
		bool L_39 = __this->get_useFallbackBehavior_22();
		if (!L_39)
		{
			goto IL_0180;
		}
	}
	{
		// cameraOpaqueLastFrame = IsOpaque;
		bool L_40 = MixedRealityCameraSystem_get_IsOpaque_mAD46FBE030A0481426766DFBFF8AE1ADF39AA7F5(__this, /*hidden argument*/NULL);
		__this->set_cameraOpaqueLastFrame_21(L_40);
		// if (IsOpaque)
		bool L_41 = MixedRealityCameraSystem_get_IsOpaque_mAD46FBE030A0481426766DFBFF8AE1ADF39AA7F5(__this, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_010d;
		}
	}
	{
		// ApplySettingsForOpaqueDisplay();
		MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mB64B9E6F21FEF3733A5D0330467082ED668083FC(__this, /*hidden argument*/NULL);
		// }
		goto IL_0113;
	}

IL_010d:
	{
		// ApplySettingsForTransparentDisplay();
		MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF3EE4B19DC705C28E04AEB35DEA34B1CD8C2B5C5(__this, /*hidden argument*/NULL);
	}

IL_0113:
	{
		// MixedRealityPlayspace.Position = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_set_Position_m4F502E45E6AC47C287D1E30BF7A7808859A6D0EA(L_42, /*hidden argument*/NULL);
		// MixedRealityPlayspace.Rotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		MixedRealityPlayspace_set_Rotation_m4D374E6FCFA57D35C130AF6BFBE8D7CD3AA8F860(L_43, /*hidden argument*/NULL);
		// if (CameraCache.Main.transform.position != Vector3.zero)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_44 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_45, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_48 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_46, L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_015b;
		}
	}
	{
		// Debug.LogWarning($"The main camera is not positioned at the origin ({Vector3.zero}), experiences may not behave as expected.");
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = L_49;
		RuntimeObject * L_51 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAE253846825DF5F393050BB52D03647D0CFC35E0, L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_52, /*hidden argument*/NULL);
	}

IL_015b:
	{
		// if (CameraCache.Main.transform.rotation != Quaternion.identity)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_53 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_54 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_55 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_56 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		bool L_57 = Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70(L_55, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_0180;
		}
	}
	{
		// Debug.LogWarning($"The main camera is configured with a non-zero rotation, experiences may not behave as expected.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralD47B37C1B233818E5C869621EE522D30507C5050, /*hidden argument*/NULL);
	}

IL_0180:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Enable_m5CB6A5B50F32CAB15C43FC7468BF959A2AEAC927 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Enable_m5CB6A5B50F32CAB15C43FC7468BF959A2AEAC927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// base.Enable();
		BaseDataProviderAccessCoreSystem_Enable_m367AE3DAA107B88290DB37E5A24C9D9E83BFCF4B(__this, /*hidden argument*/NULL);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m8A4D01DC840EEF07B45094DF72C264E3C0691CF7_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		// providers[i].Enable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tD132F07E898693EC3DF2D97199CBE089FA9B02C3_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Enable() */, IMixedRealityService_tE02A0647B4FB7BC9FCD1804E9413F7C063782E6C_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t4B13CC21D564B13B9232D8B36AE38FC4C8995DB9_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Disable_mBB9B02A19A00112685455504B6E51687FF7B7DE7 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Disable_mBB9B02A19A00112685455504B6E51687FF7B7DE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m8A4D01DC840EEF07B45094DF72C264E3C0691CF7_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_001b;
	}

IL_000b:
	{
		// providers[i].Disable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tD132F07E898693EC3DF2D97199CBE089FA9B02C3_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Disable() */, IMixedRealityService_tE02A0647B4FB7BC9FCD1804E9413F7C063782E6C_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001b:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t4B13CC21D564B13B9232D8B36AE38FC4C8995DB9_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		// base.Disable();
		BaseService_Disable_m3B250DE34D9C591D588185FADEB1F963D1B858F5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Destroy_m2EA31EA302CDEC60D611535107DA5EC2E2BDA84C (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Destroy_m2EA31EA302CDEC60D611535107DA5EC2E2BDA84C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_m8A4D01DC840EEF07B45094DF72C264E3C0691CF7_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::GetEnumerator() */, IEnumerable_1_tFD221887A9579249AD3EAD5D314A52B087E45E8A_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001d;
		}

IL_000e:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Current() */, IEnumerator_1_t32F9F58220099426B39C47207B5FD610F014FA94_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// UnregisterDataProvider(provider);
			RuntimeObject* L_4 = V_1;
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_mB9FAB8B2F4EEA56C8D79586BD2623CB3BAAB440E(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB7657535E58AFFAFFB129532C9265490497FE85C_mB9FAB8B2F4EEA56C8D79586BD2623CB3BAAB440E_RuntimeMethod_var);
		}

IL_001d:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x31, FINALLY_0027);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		// useFallbackBehavior = true;
		__this->set_useFallbackBehavior_22((bool)1);
		// base.Destroy();
		BaseEventSystem_Destroy_m50A9B4570EF6880C1397B9A4B64618F602E920F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Update_m0559233DFAD96B6BFEE7656F5FC0975640EADCBE (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Update_m0559233DFAD96B6BFEE7656F5FC0975640EADCBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!useFallbackBehavior) { return; }
		bool L_0 = __this->get_useFallbackBehavior_22();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!useFallbackBehavior) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1 = ((MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_23();
		V_1 = L_1;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// if (IsOpaque != cameraOpaqueLastFrame)
			bool L_3 = MixedRealityCameraSystem_get_IsOpaque_mAD46FBE030A0481426766DFBFF8AE1ADF39AA7F5(__this, /*hidden argument*/NULL);
			bool L_4 = __this->get_cameraOpaqueLastFrame_21();
			if ((((int32_t)L_3) == ((int32_t)L_4)))
			{
				goto IL_0047;
			}
		}

IL_0025:
		{
			// cameraOpaqueLastFrame = IsOpaque;
			bool L_5 = MixedRealityCameraSystem_get_IsOpaque_mAD46FBE030A0481426766DFBFF8AE1ADF39AA7F5(__this, /*hidden argument*/NULL);
			__this->set_cameraOpaqueLastFrame_21(L_5);
			// if (IsOpaque)
			bool L_6 = MixedRealityCameraSystem_get_IsOpaque_mAD46FBE030A0481426766DFBFF8AE1ADF39AA7F5(__this, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0041;
			}
		}

IL_0039:
		{
			// ApplySettingsForOpaqueDisplay();
			MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mB64B9E6F21FEF3733A5D0330467082ED668083FC(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}

IL_0041:
		{
			// ApplySettingsForTransparentDisplay();
			MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF3EE4B19DC705C28E04AEB35DEA34B1CD8C2B5C5(__this, /*hidden argument*/NULL);
		}

IL_0047:
		{
			// }
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mB64B9E6F21FEF3733A5D0330467082ED668083FC (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mB64B9E6F21FEF3733A5D0330467082ED668083FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ApplySettingsForOpaquePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var))->get_ApplySettingsForOpaquePerfMarker_24();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_3 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m364FFBD5EA2D8950F55085B0FE39232B81D4281B_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_2, L_4, /*hidden argument*/NULL);
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_6 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7 = MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_m1383D77E3F31822CA0B072C9AE463643CC506D16_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B(L_5, L_7, /*hidden argument*/NULL);
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_9 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_m1AE5E5746087F2E49AAD120BC478483D1942A024_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626(L_8, L_10, /*hidden argument*/NULL);
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_12 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13 = MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_mF7DAEF27FA579C9FBE87738DF133CF74447137EB_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_11, L_13, /*hidden argument*/NULL);
		// QualitySettings.SetQualityLevel(CameraProfile.OpaqueQualityLevel, false);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_14 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_OpaqueQualityLevel_mC4FBB5DBB2C44DC916B413DAC9684FCAD5F185A8_inline(L_14, /*hidden argument*/NULL);
		QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551(L_15, (bool)0, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x83, FINALLY_0075);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF3EE4B19DC705C28E04AEB35DEA34B1CD8C2B5C5 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF3EE4B19DC705C28E04AEB35DEA34B1CD8C2B5C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ApplySettingsForTransparentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var))->get_ApplySettingsForTransparentPerfMarker_25();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_3 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m20085FE8DEE79E9CADFB31FFD0C9C24A8691D6B7_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_2, L_4, /*hidden argument*/NULL);
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_6 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9C4FBE6FCF795F2A2107554D284A12842ED78338_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_5, L_7, /*hidden argument*/NULL);
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_9 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_mC37B0CE1F05E47D9D540A2FEC4BC4962664CC5B6_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B(L_8, L_10, /*hidden argument*/NULL);
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_12 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		float L_13 = MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_mA545962200A6A29AC3E3B087F85CCA9A9EB08720_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626(L_11, L_13, /*hidden argument*/NULL);
		// QualitySettings.SetQualityLevel(CameraProfile.TransparentQualityLevel, false);
		MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * L_14 = MixedRealityCameraSystem_get_CameraProfile_m582AD0BE41576E876C185283DA82D47D4735BF8C(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_TransparentQualityLevel_mBD4B27B0B062CD3CF76723087D887DBD408056CE_inline(L_14, /*hidden argument*/NULL);
		QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551(L_15, (bool)0, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x83, FINALLY_0075);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_m93752A9EF1EEB65A39B4C3F62A4F46F1465A1141 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_m9415C44A43D3D7DA8441B856EFEC452676F501B6 (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_m9415C44A43D3D7DA8441B856EFEC452676F501B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Abs(SourceName.GetHashCode());
		String_t* L_0 = MixedRealityCameraSystem_get_SourceName_m27F298FD418764147FA17D896B7454DE9CB1560D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__cctor_m9351FEEEA9352369C63601C1465F62C828940598 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__cctor_m9351FEEEA9352369C63601C1465F62C828940598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.Update");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral9FAB7F7797F50BE92F95BF3ABEA86CE6B7AD33B5, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_23(L_0);
		// private static readonly ProfilerMarker ApplySettingsForOpaquePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForOpaqueDisplay");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteralE7D160052E5D4840C43A5454F2745C041FF0C3BD, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var))->set_ApplySettingsForOpaquePerfMarker_24(L_1);
		// private static readonly ProfilerMarker ApplySettingsForTransparentPerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForTransparentDisplay");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteralCD496BC0032F2FFF9C94404087C768C474C3BF2B, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD_il2cpp_TypeInfo_var))->set_ApplySettingsForTransparentPerfMarker_25(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mA8664E0793B07E287571B3803C4F492B91BEDF59_inline (BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239* MixedRealityCameraProfile_get_SettingsConfigurations_m7EBB8A938B5804EECE46E80B671CE1C80529620F_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// get { return settingsConfigurations; }
		MixedRealityCameraSettingsConfigurationU5BU5D_t5962DA78EBDA06128F28077D569DB2079E76C239* L_0 = __this->get_settingsConfigurations_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * MixedRealityCameraSettingsConfiguration_get_ComponentType_mDD018B30B387695A60FF21BD77A089CE62081D2B_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method)
{
	{
		// public SystemType ComponentType => componentType;
		SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * L_0 = __this->get_componentType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m4EFCBDB31E67D1FC497D5B93132606A3F4828E55_inline (SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * __this, const RuntimeMethod* method)
{
	{
		// get => type;
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_m9805D35C7346E09014EA421106F298AC6FA817E6_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method)
{
	{
		// public string ComponentName => componentName;
		String_t* L_0 = __this->get_componentName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_m66FA65B47F08F4DB5961F3C27648B2AA37B85F6B_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method)
{
	{
		// public uint Priority => priority;
		uint32_t L_0 = __this->get_priority_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m7624F6D78950E3F48B530D75CE71B25831862BF6_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method)
{
	{
		// public BaseCameraSettingsProfile SettingsProfile => settingsProfile;
		BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * L_0 = __this->get_settingsProfile_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_mBB5829A1132ADFB439D8EFF6FAA4A5574CC72C04_inline (MixedRealityCameraSettingsConfiguration_t2A5E53B2F5CDFFC4B2CF7D8A1E9C5B9872FEA7B3 * __this, const RuntimeMethod* method)
{
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		int32_t L_0 = __this->get_runtimePlatform_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m364FFBD5EA2D8950F55085B0FE39232B81D4281B_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public CameraClearFlags CameraClearFlagsOpaqueDisplay => cameraClearFlagsOpaqueDisplay;
		int32_t L_0 = __this->get_cameraClearFlagsOpaqueDisplay_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_m1383D77E3F31822CA0B072C9AE463643CC506D16_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public float NearClipPlaneOpaqueDisplay => nearClipPlaneOpaqueDisplay;
		float L_0 = __this->get_nearClipPlaneOpaqueDisplay_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_m1AE5E5746087F2E49AAD120BC478483D1942A024_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public float FarClipPlaneOpaqueDisplay => farClipPlaneOpaqueDisplay;
		float L_0 = __this->get_farClipPlaneOpaqueDisplay_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_mF7DAEF27FA579C9FBE87738DF133CF74447137EB_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public Color BackgroundColorOpaqueDisplay => backgroundColorOpaqueDisplay;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_backgroundColorOpaqueDisplay_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_mC4FBB5DBB2C44DC916B413DAC9684FCAD5F185A8_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public int OpaqueQualityLevel => opaqueQualityLevel;
		int32_t L_0 = __this->get_opaqueQualityLevel_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m20085FE8DEE79E9CADFB31FFD0C9C24A8691D6B7_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public CameraClearFlags CameraClearFlagsTransparentDisplay => cameraClearFlagsTransparentDisplay;
		int32_t L_0 = __this->get_cameraClearFlagsTransparentDisplay_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9C4FBE6FCF795F2A2107554D284A12842ED78338_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public Color BackgroundColorTransparentDisplay => backgroundColorTransparentDisplay;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_backgroundColorTransparentDisplay_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_mC37B0CE1F05E47D9D540A2FEC4BC4962664CC5B6_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public float NearClipPlaneTransparentDisplay => nearClipPlaneTransparentDisplay;
		float L_0 = __this->get_nearClipPlaneTransparentDisplay_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_mA545962200A6A29AC3E3B087F85CCA9A9EB08720_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public float FarClipPlaneTransparentDisplay => farClipPlaneTransparentDisplay;
		float L_0 = __this->get_farClipPlaneTransparentDisplay_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_mBD4B27B0B062CD3CF76723087D887DBD408056CE_inline (MixedRealityCameraProfile_tA0BEB52052AD84863CC911838F98B549DD5A855A * __this, const RuntimeMethod* method)
{
	{
		// public int TransparentQualityLevel => transparentQualityLevel;
		int32_t L_0 = __this->get_transparentQualityLevel_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m27F298FD418764147FA17D896B7454DE9CB1560D_inline (MixedRealityCameraSystem_tA54A69F04B49C70D4EB447CFA7AEB2C2D5E710FD * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
