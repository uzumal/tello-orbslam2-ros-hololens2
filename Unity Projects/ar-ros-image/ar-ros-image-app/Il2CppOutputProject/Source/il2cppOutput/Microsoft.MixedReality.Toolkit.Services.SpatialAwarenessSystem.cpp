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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_t0993931C912B539D340604C9D40F54B5D3ED366B;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA3E2F4825F4FE6184A4018667CC6872102B285D4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_t5F3E59E62F7052EDCC7973B87CC0374E0D969BD0;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t829F6F22BF7FC048E6262D1DD57519E6DD898937;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct IReadOnlyList_1_tDF6B944621C071A65B7C8E1B0CFF567561A83A01;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t46B8A2068D730ACFA41559D6D9C2F09E790ED539;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t4523387F302DFE5B4F92A04637423A9CE22BF549;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t76CB9EC3F7EE135CA66BDA4D7AADCA4EC7A9C3D9;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
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
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0BDB94CCA602427A5AA323D3DEED5E2BF00AC02C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAB55F3D0C4A65320C7E73122DE25CCE94BD5E9A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCapabilityCheck_t6710427AD8BA04D1028696F1DDBB7395E157B45E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t6CD4D0580835946D47B67DC58A5C1F4C94EA18D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tDF6B944621C071A65B7C8E1B0CFF567561A83A01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15A40372C3DEF5881D57E3678DCB191E7EFD4D49;
IL2CPP_EXTERN_C String_t* _stringLiteral1D9E7A7A88DEB164AF3999961CA7F9DA9FDE8AE6;
IL2CPP_EXTERN_C String_t* _stringLiteral262040181ABD91FE03796DEF54989E3E24A98E70;
IL2CPP_EXTERN_C String_t* _stringLiteral306293B4D4A8E6238C3F25BB12EF44DF6E94C8B3;
IL2CPP_EXTERN_C String_t* _stringLiteral31E9B874576F2D0D87942763454F70A86D4D5098;
IL2CPP_EXTERN_C String_t* _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028;
IL2CPP_EXTERN_C String_t* _stringLiteral4130D5FB70DC9C7103D422C7D5B450B1C9322DCF;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC673ED184754377C8E5F5B23E3207647473CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral782F128CA5187A629E3BC9BCF873AA572EBA7DAA;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDA44A1A535E187E191EC2EDAFCB4B3B7603C62;
IL2CPP_EXTERN_C String_t* _stringLiteral8EBE04F16378C2EE1BE24877D3AE4AC0F16390E3;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAE7344A900D2304BE25E69430532975B6E7019;
IL2CPP_EXTERN_C String_t* _stringLiteralBC40740BCD5A527584785BD239968C34A8FE3664;
IL2CPP_EXTERN_C String_t* _stringLiteralCD09D3B8B6A3AA26878C801FBFCA450E2A2A1137;
IL2CPP_EXTERN_C String_t* _stringLiteralE7552690592AE63B15254C80AE47DE45D34A901E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDF0328BCA79CF06B6D55C555B676E8A0DA0B0D1;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_mC15F907836F38294EC5DBF285D4448AF89612D88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_m94D73D3F759CB46791558B1FB47BBC5B0A80CC18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_m0630EE3CEED9EDA4ABE6B3DCD056CD544CDD0EB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1__ctor_m6CCFB9F969220C46F10DD047912AE3CA520BF69A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_CheckCapability_mAA013E42E5D788AB58D460CC1F8942F657388258_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_ClearObservations_m526259034E73AA6BC8C0CBC99061AF40C742AA18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m0E274210676B033CFB34C1510B71817C6663845A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Destroy_m8164DA93EBA13E1D610334E4E10A40B302B0779C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Disable_mE08F50E162C63041877A26C3D403698AFB59C704_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_GetObserver_m7EE63AD20A7997A42A504D81F3B65924A716E277_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_GetObservers_m50A0B11362135307684B04DE8E0DC539A0555857_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_InitializeInternal_mA81C3723F4DBBE66C93150F1F53D245A1B263145_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Initialize_mFC5C2CCF61DFDBC795A09EE05FE7EBF10E4EF18D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_ResumeObservers_mB8EEB82CC7F11ECB2C85F9CBFA99A5C5C59C21C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_SuspendObservers_m47E519998D482E9A4CBC47271D2516FDDB1B9E95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem__cctor_mED1A41517547756CB001C5E10DB8D09B0D3CF2CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem__ctor_mE5EA3C8CEC2F95DD83D16BCD46C1E7BFFFEE9FF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m238011BA0FB5AB5AA986C18C9781CF0F140208BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m643E095823AE6F0FECAD789001B891F3999BB786_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m15D1675872C7A1868A875D468C42847C796D0662_MetadataUsageId;

struct MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9B4EA8CA1B5136C993164A69CCA065C9F2DA2EA5 
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
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


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct GenericBaseEventData_t2C662F6C9EC24F2F30BFB7671EC53D9FCB198463  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.GenericBaseEventData::<selectedObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CselectedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t2C662F6C9EC24F2F30BFB7671EC53D9FCB198463, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t2C662F6C9EC24F2F30BFB7671EC53D9FCB198463, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CselectedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t2C662F6C9EC24F2F30BFB7671EC53D9FCB198463, ___U3CselectedObjectU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CselectedObjectU3Ek__BackingField_4() const { return ___U3CselectedObjectU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CselectedObjectU3Ek__BackingField_4() { return &___U3CselectedObjectU3Ek__BackingField_4; }
	inline void set_U3CselectedObjectU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CselectedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CselectedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct MixedRealityCapability_t316F94A8C48D0D518E8A8F9B27901433C969AA9C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t316F94A8C48D0D518E8A8F9B27901433C969AA9C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_tA9B56EC177D2121974430BC407E317798D1A64EC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_tA9B56EC177D2121974430BC407E317798D1A64EC, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_t82659A73DD9C9FB34EB9061E86120095A42FAC68 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t82659A73DD9C9FB34EB9061E86120095A42FAC68, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct MixedRealitySpatialAwarenessEventData_tC0BA4607CB3BCB2C280E4FBD785CDB69395AFF54  : public GenericBaseEventData_t2C662F6C9EC24F2F30BFB7671EC53D9FCB198463
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tC0BA4607CB3BCB2C280E4FBD785CDB69395AFF54, ___U3CIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentType
	SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::observerProfile
	BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 * ___observerProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC, ___componentType_0)); }
	inline SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_observerProfile_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC, ___observerProfile_4)); }
	inline BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 * get_observerProfile_4() const { return ___observerProfile_4; }
	inline BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 ** get_address_of_observerProfile_4() { return &___observerProfile_4; }
	inline void set_observerProfile_4(BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 * value)
	{
		___observerProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC_marshaled_pinvoke
{
	SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 * ___observerProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC_marshaled_com
{
	SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 * ___observerProfile_4;
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


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945  : public MixedRealitySpatialAwarenessEventData_tC0BA4607CB3BCB2C280E4FBD785CDB69395AFF54
{
public:
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 * ___U3CSpatialObjectU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945, ___U3CSpatialObjectU3Ek__BackingField_6)); }
	inline SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 * get_U3CSpatialObjectU3Ek__BackingField_6() const { return ___U3CSpatialObjectU3Ek__BackingField_6; }
	inline SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 ** get_address_of_U3CSpatialObjectU3Ek__BackingField_6() { return &___U3CSpatialObjectU3Ek__BackingField_6; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_6(SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialObjectU3Ek__BackingField_6), (void*)value);
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762  : public BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::startupBehavior
	int32_t ___startupBehavior_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::isStationaryObserver
	bool ___isStationaryObserver_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observationExtents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___observationExtents_7;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observerVolumeType
	int32_t ___observerVolumeType_8;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::updateInterval
	float ___updateInterval_9;

public:
	inline static int32_t get_offset_of_startupBehavior_5() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762, ___startupBehavior_5)); }
	inline int32_t get_startupBehavior_5() const { return ___startupBehavior_5; }
	inline int32_t* get_address_of_startupBehavior_5() { return &___startupBehavior_5; }
	inline void set_startupBehavior_5(int32_t value)
	{
		___startupBehavior_5 = value;
	}

	inline static int32_t get_offset_of_isStationaryObserver_6() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762, ___isStationaryObserver_6)); }
	inline bool get_isStationaryObserver_6() const { return ___isStationaryObserver_6; }
	inline bool* get_address_of_isStationaryObserver_6() { return &___isStationaryObserver_6; }
	inline void set_isStationaryObserver_6(bool value)
	{
		___isStationaryObserver_6 = value;
	}

	inline static int32_t get_offset_of_observationExtents_7() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762, ___observationExtents_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_observationExtents_7() const { return ___observationExtents_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_observationExtents_7() { return &___observationExtents_7; }
	inline void set_observationExtents_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___observationExtents_7 = value;
	}

	inline static int32_t get_offset_of_observerVolumeType_8() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762, ___observerVolumeType_8)); }
	inline int32_t get_observerVolumeType_8() const { return ___observerVolumeType_8; }
	inline int32_t* get_address_of_observerVolumeType_8() { return &___observerVolumeType_8; }
	inline void set_observerVolumeType_8(int32_t value)
	{
		___observerVolumeType_8 = value;
	}

	inline static int32_t get_offset_of_updateInterval_9() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762, ___updateInterval_9)); }
	inline float get_updateInterval_9() const { return ___updateInterval_9; }
	inline float* get_address_of_updateInterval_9() { return &___updateInterval_9; }
	inline void set_updateInterval_9(float value)
	{
		___updateInterval_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92  : public BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::observerConfigurations
	MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1* ___observerConfigurations_5;

public:
	inline static int32_t get_offset_of_observerConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92, ___observerConfigurations_5)); }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1* get_observerConfigurations_5() const { return ___observerConfigurations_5; }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1** get_address_of_observerConfigurations_5() { return &___observerConfigurations_5; }
	inline void set_observerConfigurations_5(MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1* value)
	{
		___observerConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerConfigurations_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E  : public BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 * ___meshEventData_18;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spatialAwarenessObjectParent_19;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_20;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * ___spatialAwarenessSystemProfile_21;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_meshEventData_18() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E, ___meshEventData_18)); }
	inline MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 * get_meshEventData_18() const { return ___meshEventData_18; }
	inline MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 ** get_address_of_meshEventData_18() { return &___meshEventData_18; }
	inline void set_meshEventData_18(MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 * value)
	{
		___meshEventData_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_18), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_19() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E, ___spatialAwarenessObjectParent_19)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_spatialAwarenessObjectParent_19() const { return ___spatialAwarenessObjectParent_19; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_spatialAwarenessObjectParent_19() { return &___spatialAwarenessObjectParent_19; }
	inline void set_spatialAwarenessObjectParent_19(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___spatialAwarenessObjectParent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessObjectParent_19), (void*)value);
	}

	inline static int32_t get_offset_of_nextSourceId_20() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E, ___nextSourceId_20)); }
	inline uint32_t get_nextSourceId_20() const { return ___nextSourceId_20; }
	inline uint32_t* get_address_of_nextSourceId_20() { return &___nextSourceId_20; }
	inline void set_nextSourceId_20(uint32_t value)
	{
		___nextSourceId_20 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_21() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E, ___spatialAwarenessSystemProfile_21)); }
	inline MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * get_spatialAwarenessSystemProfile_21() const { return ___spatialAwarenessSystemProfile_21; }
	inline MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 ** get_address_of_spatialAwarenessSystemProfile_21() { return &___spatialAwarenessSystemProfile_21; }
	inline void set_spatialAwarenessSystemProfile_21(MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * value)
	{
		___spatialAwarenessSystemProfile_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemProfile_21), (void*)value);
	}
};

struct MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserversPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserversTPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserverPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserverTPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProvidersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetDataProvidersPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProviderPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetDataProviderPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumeObserversPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumeObserversTPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumeObserverPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendObserversPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendObserversTPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendObserverPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsTPerfMarker_35;

public:
	inline static int32_t get_offset_of_GetObserversPerfMarker_22() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___GetObserversPerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserversPerfMarker_22() const { return ___GetObserversPerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserversPerfMarker_22() { return &___GetObserversPerfMarker_22; }
	inline void set_GetObserversPerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserversPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_GetObserversTPerfMarker_23() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___GetObserversTPerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserversTPerfMarker_23() const { return ___GetObserversTPerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserversTPerfMarker_23() { return &___GetObserversTPerfMarker_23; }
	inline void set_GetObserversTPerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserversTPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_GetObserverPerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___GetObserverPerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserverPerfMarker_24() const { return ___GetObserverPerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserverPerfMarker_24() { return &___GetObserverPerfMarker_24; }
	inline void set_GetObserverPerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserverPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_GetObserverTPerfMarker_25() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___GetObserverTPerfMarker_25)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserverTPerfMarker_25() const { return ___GetObserverTPerfMarker_25; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserverTPerfMarker_25() { return &___GetObserverTPerfMarker_25; }
	inline void set_GetObserverTPerfMarker_25(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserverTPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_GetDataProvidersPerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___GetDataProvidersPerfMarker_26)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetDataProvidersPerfMarker_26() const { return ___GetDataProvidersPerfMarker_26; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetDataProvidersPerfMarker_26() { return &___GetDataProvidersPerfMarker_26; }
	inline void set_GetDataProvidersPerfMarker_26(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetDataProvidersPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetDataProviderPerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___GetDataProviderPerfMarker_27)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetDataProviderPerfMarker_27() const { return ___GetDataProviderPerfMarker_27; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetDataProviderPerfMarker_27() { return &___GetDataProviderPerfMarker_27; }
	inline void set_GetDataProviderPerfMarker_27(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetDataProviderPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___ResumeObserversPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumeObserversPerfMarker_28() const { return ___ResumeObserversPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumeObserversPerfMarker_28() { return &___ResumeObserversPerfMarker_28; }
	inline void set_ResumeObserversPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumeObserversPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversTPerfMarker_29() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___ResumeObserversTPerfMarker_29)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumeObserversTPerfMarker_29() const { return ___ResumeObserversTPerfMarker_29; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumeObserversTPerfMarker_29() { return &___ResumeObserversTPerfMarker_29; }
	inline void set_ResumeObserversTPerfMarker_29(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumeObserversTPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ResumeObserverPerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___ResumeObserverPerfMarker_30)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumeObserverPerfMarker_30() const { return ___ResumeObserverPerfMarker_30; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumeObserverPerfMarker_30() { return &___ResumeObserverPerfMarker_30; }
	inline void set_ResumeObserverPerfMarker_30(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumeObserverPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___SuspendObserversPerfMarker_31)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendObserversPerfMarker_31() const { return ___SuspendObserversPerfMarker_31; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendObserversPerfMarker_31() { return &___SuspendObserversPerfMarker_31; }
	inline void set_SuspendObserversPerfMarker_31(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendObserversPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversTPerfMarker_32() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___SuspendObserversTPerfMarker_32)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendObserversTPerfMarker_32() const { return ___SuspendObserversTPerfMarker_32; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendObserversTPerfMarker_32() { return &___SuspendObserversTPerfMarker_32; }
	inline void set_SuspendObserversTPerfMarker_32(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendObserversTPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_SuspendObserverPerfMarker_33() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___SuspendObserverPerfMarker_33)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendObserverPerfMarker_33() const { return ___SuspendObserverPerfMarker_33; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendObserverPerfMarker_33() { return &___SuspendObserverPerfMarker_33; }
	inline void set_SuspendObserverPerfMarker_33(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendObserverPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_34() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___ClearObservationsPerfMarker_34)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsPerfMarker_34() const { return ___ClearObservationsPerfMarker_34; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsPerfMarker_34() { return &___ClearObservationsPerfMarker_34; }
	inline void set_ClearObservationsPerfMarker_34(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsPerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsTPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields, ___ClearObservationsTPerfMarker_35)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsTPerfMarker_35() const { return ___ClearObservationsTPerfMarker_35; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsTPerfMarker_35() { return &___ClearObservationsTPerfMarker_35; }
	inline void set_ClearObservationsTPerfMarker_35(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsTPerfMarker_35 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
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
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC  m_Items[1];

public:
	inline MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
};


// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1__ctor_mA5C94407F89911EF9D9F52172329253D5FA8A8FD_gshared (MixedRealitySpatialAwarenessEventData_1_t5F3E59E62F7052EDCC7973B87CC0374E0D969BD0 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m47B426539E9C04219CF8309542ABB6727EBAC517_gshared (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mD170FBC77B93C08D6ED3FB2F94DE5035CE68C380_gshared (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, RuntimeObject * ___dataProviderInstance0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_mE5EA3C8CEC2F95DD83D16BCD46C1E7BFFFEE9FF7 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mA8664E0793B07E287571B3803C4F492B91BEDF59_inline (BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m698C8A1C1D88FA8F850759758A8E5C9D966532F8 (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_mDE2D42E870F8C8B2D83F5ACC8FE2E48AFBB888FE (BaseService_t1E259B861B96DB7899127C987D767A363F87BE91 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::.ctor(UnityEngine.EventSystems.EventSystem)
inline void MixedRealitySpatialAwarenessEventData_1__ctor_m6CCFB9F969220C46F10DD047912AE3CA520BF69A (MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 *, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1__ctor_mA5C94407F89911EF9D9F52172329253D5FA8A8FD_gshared)(__this, ___eventSystem0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_mA81C3723F4DBBE66C93150F1F53D245A1B263145 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::get_ObserverConfigurations()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m6E02ECD2134C8C51E91CC25AD841EA7F305B5135_inline (MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_mA3CC5F27FF61FAD9CEB1A68AAD3DF6982E08A69A_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_Priority()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_mBAC97C979D5EA55EE053B0B95EFF99601A072CB1_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ObserverProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_mFA173C452A13F3525A9AC234F3E79F7F46AF55C9_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * MixedRealitySpatialObserverConfiguration_get_ComponentType_mB433A96B09C949E4FE3FA24B4784F6498C8491A7_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m4EFCBDB31E67D1FC497D5B93132606A3F4828E55_inline (SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_RuntimePlatform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_mB1B9221884D29930770E4D76269854F922C7A190_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_m94D73D3F759CB46791558B1FB47BBC5B0A80CC18 (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD *, Type_t *, String_t*, int32_t, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m47B426539E9C04219CF8309542ABB6727EBAC517_gshared)(__this, ___concreteType0, ___providerName1, ___supportedPlatforms2, ___args3, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m3B250DE34D9C591D588185FADEB1F963D1B858F5 (BaseService_t1E259B861B96DB7899127C987D767A363F87BE91 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_m0630EE3CEED9EDA4ABE6B3DCD056CD544CDD0EB0 (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mD170FBC77B93C08D6ED3FB2F94DE5035CE68C380_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_m367AE3DAA107B88290DB37E5A24C9D9E83BFCF4B (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Reset_m151EF53BEFE1CD9FBDB171FFFAF7F4D392FB2307 (BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m50A9B4570EF6880C1397B9A4B64618F602E920F9 (BaseEventSystem_t93BBCB38F6AA9AE4BB31BF33B36DBF22DA2A7B85 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m238011BA0FB5AB5AA986C18C9781CF0F140208BD (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityPlayspace_get_Transform_m6E5DA4FC5E0433D1D4241D66D28A7C46882E50FE (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m643E095823AE6F0FECAD789001B891F3999BB786 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m588E5D74F95BD9C46442F384189012C7AA4A3A2C (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, RuntimeObject* ___registrar0, MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * ___profile1, const RuntimeMethod* method)
{
	{
		// MixedRealitySpatialAwarenessSystemProfile profile) : this(profile)
		MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * L_0 = ___profile1;
		MixedRealitySpatialAwarenessSystem__ctor_mE5EA3C8CEC2F95DD83D16BCD46C1E7BFFFEE9FF7(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_mA8664E0793B07E287571B3803C4F492B91BEDF59_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_mE5EA3C8CEC2F95DD83D16BCD46C1E7BFFFEE9FF7 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__ctor_mE5EA3C8CEC2F95DD83D16BCD46C1E7BFFFEE9FF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		__this->set_U3CNameU3Ek__BackingField_17(_stringLiteral306293B4D4A8E6238C3F25BB12EF44DF6E94C8B3);
		// MixedRealitySpatialAwarenessSystemProfile profile) : base(profile)
		MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * L_0 = ___profile0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseDataProviderAccessCoreSystem_tCDB090C100666F76BC1CA745393DD745D537FBBD_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_m698C8A1C1D88FA8F850759758A8E5C9D966532F8(__this, L_0, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialAwarenessSystem_get_Name_mCE3456C4392D3D101E98C36A6C395700393F485A (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_set_Name_m89105ADC56C5A016D04B41499473AC45E95BC71E (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySpatialAwarenessSystem_CheckCapability_mAA013E42E5D788AB58D460CC1F8942F657388258 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CheckCapability_mAA013E42E5D788AB58D460CC1F8942F657388258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_mC15F907836F38294EC5DBF285D4448AF89612D88_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t0BDB94CCA602427A5AA323D3DEED5E2BF00AC02C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_000e:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tAB55F3D0C4A65320C7E73122DE25CCE94BD5E9A4_il2cpp_TypeInfo_var, L_2);
			// IMixedRealityCapabilityCheck capabilityChecker = observer as IMixedRealityCapabilityCheck;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealityCapabilityCheck_t6710427AD8BA04D1028696F1DDBB7395E157B45E_il2cpp_TypeInfo_var));
			// if ((capabilityChecker != null) &&
			//     capabilityChecker.CheckCapability(capability))
			RuntimeObject* L_4 = V_1;
			if (!L_4)
			{
				goto IL_002a;
			}
		}

IL_001d:
		{
			RuntimeObject* L_5 = V_1;
			int32_t L_6 = ___capability0;
			NullCheck(L_5);
			bool L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.IMixedRealityCapabilityCheck::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability) */, IMixedRealityCapabilityCheck_t6710427AD8BA04D1028696F1DDBB7395E157B45E_il2cpp_TypeInfo_var, L_5, L_6);
			if (!L_7)
			{
				goto IL_002a;
			}
		}

IL_0026:
		{
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x40, FINALLY_0034);
		}

IL_002a:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			RuntimeObject* L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Initialize_mFC5C2CCF61DFDBC795A09EE05FE7EBF10E4EF18D (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Initialize_mFC5C2CCF61DFDBC795A09EE05FE7EBF10E4EF18D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize();
		BaseService_Initialize_mDE2D42E870F8C8B2D83F5ACC8FE2E48AFBB888FE(__this, /*hidden argument*/NULL);
		// meshEventData = new MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 * L_1 = (MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 *)il2cpp_codegen_object_new(MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1__ctor_m6CCFB9F969220C46F10DD047912AE3CA520BF69A(L_1, L_0, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1__ctor_m6CCFB9F969220C46F10DD047912AE3CA520BF69A_RuntimeMethod_var);
		__this->set_meshEventData_18(L_1);
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_mA81C3723F4DBBE66C93150F1F53D245A1B263145(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_mA81C3723F4DBBE66C93150F1F53D245A1B263145 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_InitializeInternal_mA81C3723F4DBBE66C93150F1F53D245A1B263145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * V_0 = NULL;
	int32_t V_1 = 0;
	MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	{
		// MixedRealitySpatialAwarenessSystemProfile profile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 *)IsInstClass((RuntimeObject*)L_0, MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92_il2cpp_TypeInfo_var));
		// if (profile != null && GetDataProviders<IMixedRealitySpatialAwarenessObserver>().Count == 0)
		MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0092;
		}
	}
	{
		RuntimeObject* L_3 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_mC15F907836F38294EC5DBF285D4448AF89612D88_RuntimeMethod_var, __this);
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Count() */, IReadOnlyCollection_1_t6CD4D0580835946D47B67DC58A5C1F4C94EA18D9_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_0092;
		}
	}
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		V_1 = 0;
		goto IL_0087;
	}

IL_0026:
	{
		// MixedRealitySpatialObserverConfiguration configuration = profile.ObserverConfigurations[i];
		MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * L_5 = V_0;
		NullCheck(L_5);
		MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1* L_6 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m6E02ECD2134C8C51E91CC25AD841EA7F305B5135_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.ObserverProfile };
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, __this);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		String_t* L_13 = MixedRealitySpatialObserverConfiguration_get_ComponentName_mA3CC5F27FF61FAD9CEB1A68AAD3DF6982E08A69A_inline((MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_12;
		uint32_t L_15 = MixedRealitySpatialObserverConfiguration_get_Priority_mBAC97C979D5EA55EE053B0B95EFF99601A072CB1_inline((MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC *)(&V_2), /*hidden argument*/NULL);
		uint32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_14;
		BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 * L_19 = MixedRealitySpatialObserverConfiguration_get_ObserverProfile_mFA173C452A13F3525A9AC234F3E79F7F46AF55C9_inline((MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		V_3 = L_18;
		// RegisterDataProvider<IMixedRealitySpatialAwarenessObserver>(
		//     configuration.ComponentType.Type,
		//     configuration.ComponentName,
		//     configuration.RuntimePlatform,
		//     args);
		SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * L_20 = MixedRealitySpatialObserverConfiguration_get_ComponentType_mB433A96B09C949E4FE3FA24B4784F6498C8491A7_inline((MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_20);
		Type_t * L_21 = SystemType_get_Type_m4EFCBDB31E67D1FC497D5B93132606A3F4828E55_inline(L_20, /*hidden argument*/NULL);
		String_t* L_22 = MixedRealitySpatialObserverConfiguration_get_ComponentName_mA3CC5F27FF61FAD9CEB1A68AAD3DF6982E08A69A_inline((MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC *)(&V_2), /*hidden argument*/NULL);
		int32_t L_23 = MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_mB1B9221884D29930770E4D76269854F922C7A190_inline((MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC *)(&V_2), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = V_3;
		BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_m94D73D3F759CB46791558B1FB47BBC5B0A80CC18(__this, L_21, L_22, L_23, L_24, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_m94D73D3F759CB46791558B1FB47BBC5B0A80CC18_RuntimeMethod_var);
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0087:
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_26 = V_1;
		MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * L_27 = V_0;
		NullCheck(L_27);
		MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1* L_28 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m6E02ECD2134C8C51E91CC25AD841EA7F305B5135_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_0026;
		}
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Disable_mE08F50E162C63041877A26C3D403698AFB59C704 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Disable_mE08F50E162C63041877A26C3D403698AFB59C704_MetadataUsageId);
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
		// base.Disable();
		BaseService_Disable_m3B250DE34D9C591D588185FADEB1F963D1B858F5(__this, /*hidden argument*/NULL);
		// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_mC15F907836F38294EC5DBF285D4448AF89612D88_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t0BDB94CCA602427A5AA323D3DEED5E2BF00AC02C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_0014:
		{
			// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tAB55F3D0C4A65320C7E73122DE25CCE94BD5E9A4_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// UnregisterDataProvider(provider);
			RuntimeObject* L_4 = V_1;
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_m0630EE3CEED9EDA4ABE6B3DCD056CD544CDD0EB0(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_m0630EE3CEED9EDA4ABE6B3DCD056CD544CDD0EB0_RuntimeMethod_var);
		}

IL_0023:
		{
			// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0014;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0036:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Enable_m79C021F11FD6E56BFBB2BA67594DEAC6A88EA820 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	{
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_mA81C3723F4DBBE66C93150F1F53D245A1B263145(__this, /*hidden argument*/NULL);
		// base.Enable();
		BaseDataProviderAccessCoreSystem_Enable_m367AE3DAA107B88290DB37E5A24C9D9E83BFCF4B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Reset_mBA863C04B5CA7DC3DA5A172C09149628ADF5B160 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	{
		// base.Reset();
		BaseDataProviderAccessCoreSystem_Reset_m151EF53BEFE1CD9FBDB171FFFAF7F4D392FB2307(__this, /*hidden argument*/NULL);
		// Disable();
		VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		// Initialize();
		VirtActionInvoker0::Invoke(21 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize() */, __this);
		// Enable();
		VirtActionInvoker0::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Destroy_m8164DA93EBA13E1D610334E4E10A40B302B0779C (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Destroy_m8164DA93EBA13E1D610334E4E10A40B302B0779C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// if (spatialAwarenessObjectParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_spatialAwarenessObjectParent_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// if (Application.isEditor)
		bool L_3 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Object.DestroyImmediate(spatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_spatialAwarenessObjectParent_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_4, /*hidden argument*/NULL);
		// }
		goto IL_0044;
	}

IL_0029:
	{
		// spatialAwarenessObjectParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_spatialAwarenessObjectParent_19();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_6, /*hidden argument*/NULL);
		// Object.Destroy(spatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_spatialAwarenessObjectParent_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// spatialAwarenessObjectParent = null;
		__this->set_spatialAwarenessObjectParent_19((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_004b:
	{
		// base.Destroy();
		BaseEventSystem_Destroy_m50A9B4570EF6880C1397B9A4B64618F602E920F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m643E095823AE6F0FECAD789001B891F3999BB786 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m643E095823AE6F0FECAD789001B891F3999BB786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// public GameObject SpatialAwarenessObjectParent => spatialAwarenessObjectParent != null ? spatialAwarenessObjectParent : (spatialAwarenessObjectParent = CreateSpatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_spatialAwarenessObjectParent_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m238011BA0FB5AB5AA986C18C9781CF0F140208BD(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_2;
		V_0 = L_3;
		__this->set_spatialAwarenessObjectParent_19(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		return L_4;
	}

IL_001e:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_spatialAwarenessObjectParent_19();
		return L_5;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m238011BA0FB5AB5AA986C18C9781CF0F140208BD (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m238011BA0FB5AB5AA986C18C9781CF0F140208BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject newParent = new GameObject("Spatial Awareness System");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028, /*hidden argument*/NULL);
		// newParent.transform.SetParent(MixedRealityPlayspace.Transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = L_0;
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = MixedRealityPlayspace_get_Transform_m6E5DA4FC5E0433D1D4241D66D28A7C46882E50FE(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_2, L_3, (bool)0, /*hidden argument*/NULL);
		// return newParent;
		return L_1;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CreateSpatialAwarenessObservationParent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m0E274210676B033CFB34C1510B71817C6663845A (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m0E274210676B033CFB34C1510B71817C6663845A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject objectParent = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		// objectParent.transform.SetParent(SpatialAwarenessObjectParent.transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = L_1;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m643E095823AE6F0FECAD789001B891F3999BB786(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_3, L_5, (bool)0, /*hidden argument*/NULL);
		// return objectParent;
		return L_2;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GenerateNewSourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_mAD96818874CEF34D2004F2BA5A0C5EB6BFFC1296 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// return nextSourceId++;
		uint32_t L_0 = __this->get_nextSourceId_20();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		__this->set_nextSourceId_20(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m15D1675872C7A1868A875D468C42847C796D0662 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m15D1675872C7A1868A875D468C42847C796D0662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spatialAwarenessSystemProfile == null)
		MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * L_0 = __this->get_spatialAwarenessSystemProfile_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// spatialAwarenessSystemProfile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_2 = VirtFuncInvoker0< BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->set_spatialAwarenessSystemProfile_21(((MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 *)IsInstClass((RuntimeObject*)L_2, MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92_il2cpp_TypeInfo_var)));
	}

IL_001f:
	{
		// return spatialAwarenessSystemProfile;
		MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * L_3 = __this->get_spatialAwarenessSystemProfile_21();
		return L_3;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObservers_m50A0B11362135307684B04DE8E0DC539A0555857 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObservers_m50A0B11362135307684B04DE8E0DC539A0555857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (GetObserversPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->get_GetObserversPerfMarker_22();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// return GetDataProviders() as IReadOnlyList<IMixedRealitySpatialAwarenessObserver>;
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(44 /* System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProviders() */, __this);
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IReadOnlyList_1_tDF6B944621C071A65B7C8E1B0CFF567561A83A01_il2cpp_TypeInfo_var));
		IL2CPP_LEAVE(0x2A, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		RuntimeObject* L_3 = V_2;
		return L_3;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObserver_m7EE63AD20A7997A42A504D81F3B65924A716E277 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObserver_m7EE63AD20A7997A42A504D81F3B65924A716E277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (GetObserverPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->get_GetObserverPerfMarker_24();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// return GetDataProvider(name) as IMixedRealitySpatialAwarenessObserver;
		String_t* L_2 = ___name0;
		RuntimeObject* L_3 = VirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(46 /* Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProvider(System.String) */, __this, L_2);
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_il2cpp_TypeInfo_var));
		IL2CPP_LEAVE(0x2B, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
	{
		// }
		RuntimeObject* L_4 = V_2;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ResumeObservers_mB8EEB82CC7F11ECB2C85F9CBFA99A5C5C59C21C7 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ResumeObservers_mB8EEB82CC7F11ECB2C85F9CBFA99A5C5C59C21C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ResumeObserversPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->get_ResumeObserversPerfMarker_28();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_mC15F907836F38294EC5DBF285D4448AF89612D88_RuntimeMethod_var, __this);
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t0BDB94CCA602427A5AA323D3DEED5E2BF00AC02C_il2cpp_TypeInfo_var, L_2);
			V_2 = L_3;
		}

IL_001a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0027;
			}

IL_001c:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tAB55F3D0C4A65320C7E73122DE25CCE94BD5E9A4_il2cpp_TypeInfo_var, L_4);
				// observer.Resume();
				NullCheck(L_5);
				InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_il2cpp_TypeInfo_var, L_5);
			}

IL_0027:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_001c;
				}
			}

IL_002f:
			{
				IL2CPP_LEAVE(0x49, FINALLY_0031);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0031;
		}

FINALLY_0031:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_8 = V_2;
				if (!L_8)
				{
					goto IL_003a;
				}
			}

IL_0034:
			{
				RuntimeObject* L_9 = V_2;
				NullCheck(L_9);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
			}

IL_003a:
			{
				IL2CPP_END_FINALLY(49)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(49)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_SuspendObservers_m47E519998D482E9A4CBC47271D2516FDDB1B9E95 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_SuspendObservers_m47E519998D482E9A4CBC47271D2516FDDB1B9E95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (SuspendObserversPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->get_SuspendObserversPerfMarker_31();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_mC15F907836F38294EC5DBF285D4448AF89612D88_RuntimeMethod_var, __this);
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t0BDB94CCA602427A5AA323D3DEED5E2BF00AC02C_il2cpp_TypeInfo_var, L_2);
			V_2 = L_3;
		}

IL_001a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0027;
			}

IL_001c:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tAB55F3D0C4A65320C7E73122DE25CCE94BD5E9A4_il2cpp_TypeInfo_var, L_4);
				// observer.Suspend();
				NullCheck(L_5);
				InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_il2cpp_TypeInfo_var, L_5);
			}

IL_0027:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_001c;
				}
			}

IL_002f:
			{
				IL2CPP_LEAVE(0x49, FINALLY_0031);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0031;
		}

FINALLY_0031:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_8 = V_2;
				if (!L_8)
				{
					goto IL_003a;
				}
			}

IL_0034:
			{
				RuntimeObject* L_9 = V_2;
				NullCheck(L_9);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
			}

IL_003a:
			{
				IL2CPP_END_FINALLY(49)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(49)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ClearObservations_m526259034E73AA6BC8C0CBC99061AF40C742AA18 (MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ClearObservations_m526259034E73AA6BC8C0CBC99061AF40C742AA18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ClearObservationsPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->get_ClearObservationsPerfMarker_34();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_mC15F907836F38294EC5DBF285D4448AF89612D88_RuntimeMethod_var, __this);
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t0BDB94CCA602427A5AA323D3DEED5E2BF00AC02C_il2cpp_TypeInfo_var, L_2);
			V_2 = L_3;
		}

IL_001a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0027;
			}

IL_001c:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tAB55F3D0C4A65320C7E73122DE25CCE94BD5E9A4_il2cpp_TypeInfo_var, L_4);
				// observer.ClearObservations();
				NullCheck(L_5);
				InterfaceActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::ClearObservations() */, IMixedRealitySpatialAwarenessObserver_t59EE86EF609889292E86EB98932E83F2810EB025_il2cpp_TypeInfo_var, L_5);
			}

IL_0027:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_001c;
				}
			}

IL_002f:
			{
				IL2CPP_LEAVE(0x49, FINALLY_0031);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0031;
		}

FINALLY_0031:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_8 = V_2;
				if (!L_8)
				{
					goto IL_003a;
				}
			}

IL_0034:
			{
				RuntimeObject* L_9 = V_2;
				NullCheck(L_9);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
			}

IL_003a:
			{
				IL2CPP_END_FINALLY(49)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(49)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__cctor_mED1A41517547756CB001C5E10DB8D09B0D3CF2CF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__cctor_mED1A41517547756CB001C5E10DB8D09B0D3CF2CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker GetObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObservers");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral262040181ABD91FE03796DEF54989E3E24A98E70, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_GetObserversPerfMarker_22(L_0);
		// private static readonly ProfilerMarker GetObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObservers<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral1D9E7A7A88DEB164AF3999961CA7F9DA9FDE8AE6, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_GetObserversTPerfMarker_23(L_1);
		// private static readonly ProfilerMarker GetObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObserver");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteral782F128CA5187A629E3BC9BCF873AA572EBA7DAA, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_GetObserverPerfMarker_24(L_2);
		// private static readonly ProfilerMarker GetObserverTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObserver<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_3), _stringLiteral7FDA44A1A535E187E191EC2EDAFCB4B3B7603C62, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_GetObserverTPerfMarker_25(L_3);
		// private static readonly ProfilerMarker GetDataProvidersPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetDataProviders");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_4), _stringLiteral4130D5FB70DC9C7103D422C7D5B450B1C9322DCF, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_GetDataProvidersPerfMarker_26(L_4);
		// private static readonly ProfilerMarker GetDataProviderPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetDataProvider");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_5), _stringLiteralE7552690592AE63B15254C80AE47DE45D34A901E, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_GetDataProviderPerfMarker_27(L_5);
		// private static readonly ProfilerMarker ResumeObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObservers");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_6), _stringLiteral31E9B874576F2D0D87942763454F70A86D4D5098, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_ResumeObserversPerfMarker_28(L_6);
		// private static readonly ProfilerMarker ResumeObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObservers<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_7), _stringLiteralBC40740BCD5A527584785BD239968C34A8FE3664, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_ResumeObserversTPerfMarker_29(L_7);
		// private static readonly ProfilerMarker ResumeObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObserver");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_8), _stringLiteralCD09D3B8B6A3AA26878C801FBFCA450E2A2A1137, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_ResumeObserverPerfMarker_30(L_8);
		// private static readonly ProfilerMarker SuspendObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObservers");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_9), _stringLiteral5AC673ED184754377C8E5F5B23E3207647473CC9, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_SuspendObserversPerfMarker_31(L_9);
		// private static readonly ProfilerMarker SuspendObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObservers<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_10), _stringLiteral15A40372C3DEF5881D57E3678DCB191E7EFD4D49, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_SuspendObserversTPerfMarker_32(L_10);
		// private static readonly ProfilerMarker SuspendObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObserver");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_11), _stringLiteral8EBE04F16378C2EE1BE24877D3AE4AC0F16390E3, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_SuspendObserverPerfMarker_33(L_11);
		// private static readonly ProfilerMarker ClearObservationsPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ClearObservations");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_12), _stringLiteralAEAE7344A900D2304BE25E69430532975B6E7019, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_ClearObservationsPerfMarker_34(L_12);
		// private static readonly ProfilerMarker ClearObservationsTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ClearObservations<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_13), _stringLiteralFDF0328BCA79CF06B6D55C555B676E8A0DA0B0D1, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t93103A61E0FAC8A064373F5CB25126BEC3AB4B0E_il2cpp_TypeInfo_var))->set_ClearObservationsTPerfMarker_35(L_13);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m6E02ECD2134C8C51E91CC25AD841EA7F305B5135_inline (MixedRealitySpatialAwarenessSystemProfile_t949911F0AEBCA2D4797B2549FB17D480F4DD5C92 * __this, const RuntimeMethod* method)
{
	{
		// get { return observerConfigurations; }
		MixedRealitySpatialObserverConfigurationU5BU5D_tA0C96F3434DD04DF548634067AF77A6D354AFDF1* L_0 = __this->get_observerConfigurations_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_mA3CC5F27FF61FAD9CEB1A68AAD3DF6982E08A69A_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method)
{
	{
		// public string ComponentName => componentName;
		String_t* L_0 = __this->get_componentName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_mBAC97C979D5EA55EE053B0B95EFF99601A072CB1_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method)
{
	{
		// public uint Priority => priority;
		uint32_t L_0 = __this->get_priority_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_mFA173C452A13F3525A9AC234F3E79F7F46AF55C9_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method)
{
	{
		// public BaseSpatialAwarenessObserverProfile ObserverProfile => observerProfile;
		BaseSpatialAwarenessObserverProfile_t8F1320ADE1B31ED44269B824CBBFF4CA990C2762 * L_0 = __this->get_observerProfile_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_tEC1383E5BFAADE59793DE67D8B49CCF87E287AB2 * MixedRealitySpatialObserverConfiguration_get_ComponentType_mB433A96B09C949E4FE3FA24B4784F6498C8491A7_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_mB1B9221884D29930770E4D76269854F922C7A190_inline (MixedRealitySpatialObserverConfiguration_t4B79B74E3099AB99A31C723AC76E72DF359D2AAC * __this, const RuntimeMethod* method)
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
