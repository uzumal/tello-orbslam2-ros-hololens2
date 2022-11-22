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

template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_tF1607A1796C05861CE691F50F08B322286BD1049;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t057470281ADA03BD1F469907F52067098E9ABF77;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t1E259B861B96DB7899127C987D767A363F87BE91;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t4AB9DEB4D1483849D3BBD85712B7ED40AB49BBD8;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA3E2F4825F4FE6184A4018667CC6872102B285D4;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t5774B209D11926F9D673747FFBE70A55825E804D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t5D4894D493ABF6D8814BCA535C5ABDC9AD3CCE79;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t4DEF126345150337AFE46B48AAD257142385B579;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_tD2ECFB9C332E47A3B9389103F792F122689D760F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t29641CFFA5034271C0EA7A76D9DAD51FDDA88091;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tCD4D0485832D3BFEBFB6B72F3308B68FE366C72D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t74AAF916B06A6A32D9CD783F9F62258B5C8E3964;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t21105FE61BA83DF878CE7F19A9EC3E347D43FB36;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_t34E9A97DD478942E9053C4D96FAFE2C20CCF1F53;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_tFABD253C86FA0225FCABE996AAC8D326ED61DFC4;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_tAD0C2D13AF543B02D9828BF28A7BCA99ADFCA515;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t3A6D28D1D03581BCEDE36FDAF0634F7E164D0DC7;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tD4E2CF3839A93FB8367DBFB0F56B0A408F6DAAEF;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_tC047825D434A29AA945A3C167770000E7839A854;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t4D290EC31091A4E6AF60A27848D37F2B80EE3D04;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t8DA28A50D1C64904F18D7BB21B51A3B74C6DDD1F;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t17593BF621F24492BF0B67E634309CC1343E3849;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t98A3E205D482E61B01D95180DB395297922AA871;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_tC9635DE88E8A229905C0FECBCF13C6EDE9024831;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t7DE1F751CDEF8A62116DA6FA3041DDFBF2CD4B0F;
// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B;
// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
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
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1;
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4;
// Windows.Perception.People.HeadPose
struct HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5;
// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658;
// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;
// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8;

IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_t21105FE61BA83DF878CE7F19A9EC3E347D43FB36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProviderHeadOverride_tD2ECFB9C332E47A3B9389103F792F122689D760F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_tCD4D0485832D3BFEBFB6B72F3308B68FE366C72D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_t82659A73DD9C9FB34EB9061E86120095A42FAC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t420CFD50EAA3287DC6980D85E379472583DAE01B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C05AAB7B530CCD6533ADF1EB5DF2EB71A089FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral389C31E60DD0E577273C009A47D71D79B84A138C;
IL2CPP_EXTERN_C String_t* _stringLiteral4C96EF72CFC6FFCB2605DE8EBE352F959840953F;
IL2CPP_EXTERN_C String_t* _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A;
IL2CPP_EXTERN_C String_t* _stringLiteral66E3998641BA92B9A789AE078DDAF008AE3C3881;
IL2CPP_EXTERN_C String_t* _stringLiteral686423B8FBA01A9E35C1D722A6F8C5ED88EF00C3;
IL2CPP_EXTERN_C String_t* _stringLiteral762F1DDFCE2D3B4BAFEBDC0DC14EB2F6DA9FBF78;
IL2CPP_EXTERN_C String_t* _stringLiteral79522B49BD0D558EBDEA565DD9F3AC297668EBAB;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE3A92731FBA31209B4C4A6F05732A8E2ED711D;
IL2CPP_EXTERN_C String_t* _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A;
IL2CPP_EXTERN_C String_t* _stringLiteral8ACB17E5AA08C73478162C386BBEB2C64F3D6D39;
IL2CPP_EXTERN_C String_t* _stringLiteral8E717DCC1AF93B61B01DA6841C6EC3799325E5E7;
IL2CPP_EXTERN_C String_t* _stringLiteral95EFCD8A09FF0DFDCCBB845A6A8357BA36522BF3;
IL2CPP_EXTERN_C String_t* _stringLiteral9849FBA41D7E35885EDE335C6B0E1B26C43A4CAF;
IL2CPP_EXTERN_C String_t* _stringLiteral9B4FE2D8244D82F2F06CBDC652CCDA46B72AC548;
IL2CPP_EXTERN_C String_t* _stringLiteralABD5F4324F8E290A780012AFF491A3597F139F66;
IL2CPP_EXTERN_C String_t* _stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77;
IL2CPP_EXTERN_C String_t* _stringLiteralC6009AD6297D694342B38B7BB7C2F5545C22E489;
IL2CPP_EXTERN_C String_t* _stringLiteralD282A4F94D38B8423798E0B911C67BBC72DF0C48;
IL2CPP_EXTERN_C String_t* _stringLiteralD7852FDD25BF42473FAC2A55D1781621F018CF34;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA71657348713194DE0F06FA1DD2F8B7C08303B;
IL2CPP_EXTERN_C String_t* _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC;
IL2CPP_EXTERN_C String_t* _stringLiteralE95349BE7E80138756C18FE6E39B29D379961B40;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m5AA0D165B7FB84A6760D273C4EA337D4C90E999E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0A5E064978F9621CAF1509B7E4AEB34346A1FAA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m11F731DBD7A9D30E32A714BE397B592F08BF3028_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m21321B8DDAB22878DAE903F48F4AF5D983657B10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKGGVHand_t3A6D28D1D03581BCEDE36FDAF0634F7E164D0DC7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_mEF92AFE3DF75F2B53CC592EDB885D7B54663348A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityXRSDKSource__cctor_m4A99CB3F82658D85CC623E354152F19FFA185DD5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityXRSDKSource__ctor_mE6119D64CE0FEE1FCC77E3604F10D8EB11473EAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityPose_get_ZeroIdentity_mF788A40F337BE4A5FE42CAC7FDD1219E80BA3A38Microsoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityCameraSettings__ctor_mD8FB14DCA1AD46FB48BF3593F696059E474C48B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityCameraSettings_get_IsOpaque_mBEA06ABBF2FE1BCAA383456FD0B92E027A8F5BE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_CheckCapability_m1509B9E016E2DFA07904927CA6E9F014FDF23235_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_Enable_m5588CD7E2DC0F47FBC1BC00DACEEB18B129C8C57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_GetControllerType_m756DD39E6892EDD0B798E6DAEE47BD53C8FA776C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_m9B262CF482A39CA7F74782163B1C29AD1A23BB8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_Update_mC1289521368FD3A1BD3ED3CCA188B299FB16EABC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager__ctor_m2E374274B9C25AFA331BE7AB5E37B2F98E091464_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m74A9EE524154C7A4F849E306AA5AAFE0F17FC500_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealitySpatialMeshObserver__cctor_m8FC45151FDBF0856F9B7104B3C2C573C735F561F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealitySpatialMeshObserver__ctor_mEEF9FF8502D9FC91782745AE646B52B0338A81F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_UtilitiesProvider_m24BFC06E9439D012FD627C3568C48138CFBBC62CMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_set_UtilitiesProvider_m7ADC512CB2AE14E1CC73AE27487A356A1DF5521FMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_m6993621B4C23F6C9A91FA7807A64CD0621D8731A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_UpdateController_mA2D3BAA3AEF337A8A589374AA79172AAF822C5F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mCCDF1976E2AB3501FADEFE39927D162EABF0684E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand__cctor_m9FC2353FDE75818B83AF311DCE63795DF3C20A12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand__ctor_m88613E33F66F0ACBECF44357CEF946519EE8FF04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKGGVHand__ctor_m590BB16D32C40927285E177A549CEEE42A953E71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController_UpdateButtonData_m7C38D253D8A397D3130F7F6F6E305FEF80C4604D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_mA28333CEF22B34BAF08074DAA237EB017B2AD0F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController__cctor_mBEFAA3455FC34FA3B7C8F3E085EF2362DFC573C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController__ctor_m700B09F180818C7198A758A20E0A9A092EF555FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController_get_DefaultInteractions_m7F2CEA71015F4092AD697F0F47D1F5AA6AD1FC24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_mDB9BA3DA6499ADBB748410CC70346F83FC739B38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_mA30D35EC0827E989D4BFD0AE12441471A4CB7EEB_MetadataUsageId;
struct IHeadPose_tE23A11CB3F289E7DF9836C87627FAB67F8C8A29E;
struct IPerceptionTimestamp_t5F33F9E30A183CD55EFF379B5377A2861C7FD96E;
struct ISpatialCoordinateSystem_t8F4DC599755946B5BB8F082B564C34A94EF14F57;
struct ISpatialPointerPose_t29F1DD390048F10CA0FA7F119B4D9127602A8245;

struct MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7;
struct BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1;
struct HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t345B03091C63A2C9F5D234296A21F88B926B98AB 
{
public:

public:
};


// System.Object

// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct NOVTABLE ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialPointerPoseStatics_TryGetAtTimestamp_m866011938D6AEF4F1F267AC53712EB4DB7C4090D(ISpatialCoordinateSystem_t8F4DC599755946B5BB8F082B564C34A94EF14F57* ___coordinateSystem0, IPerceptionTimestamp_t5F33F9E30A183CD55EFF379B5377A2861C7FD96E* ___timestamp1, ISpatialPointerPose_t29F1DD390048F10CA0FA7F119B4D9127602A8245** comReturnValue) = 0;
};

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


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD4E2CF3839A93FB8367DBFB0F56B0A408F6DAAEF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC047825D434A29AA945A3C167770000E7839A854 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4D290EC31091A4E6AF60A27848D37F2B80EE3D04 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ___entries_1)); }
	inline EntryU5BU5D_tD4E2CF3839A93FB8367DBFB0F56B0A408F6DAAEF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD4E2CF3839A93FB8367DBFB0F56B0A408F6DAAEF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD4E2CF3839A93FB8367DBFB0F56B0A408F6DAAEF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ___keys_7)); }
	inline KeyCollection_tC047825D434A29AA945A3C167770000E7839A854 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC047825D434A29AA945A3C167770000E7839A854 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC047825D434A29AA945A3C167770000E7839A854 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ___values_8)); }
	inline ValueCollection_t4D290EC31091A4E6AF60A27848D37F2B80EE3D04 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4D290EC31091A4E6AF60A27848D37F2B80EE3D04 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4D290EC31091A4E6AF60A27848D37F2B80EE3D04 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____items_1)); }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* get__items_1() const { return ____items_1; }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_StaticFields, ____emptyArray_5)); }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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

// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_tC505CB8A4DD0678FF83FE2BEA7865CB09D6CF808  : public BaseService_t1E259B861B96DB7899127C987D767A363F87BE91
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC505CB8A4DD0678FF83FE2BEA7865CB09D6CF808, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC505CB8A4DD0678FF83FE2BEA7865CB09D6CF808, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_tF1607A1796C05861CE691F50F08B322286BD1049  : public BaseService_t1E259B861B96DB7899127C987D767A363F87BE91
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tF1607A1796C05861CE691F50F08B322286BD1049, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tF1607A1796C05861CE691F50F08B322286BD1049, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_tF32E40ACE43E76A19FB7371D999674430F27E877  : public BaseService_t1E259B861B96DB7899127C987D767A363F87BE91
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tF32E40ACE43E76A19FB7371D999674430F27E877, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tF32E40ACE43E76A19FB7371D999674430F27E877, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t057470281ADA03BD1F469907F52067098E9ABF77  : public BaseService_t1E259B861B96DB7899127C987D767A363F87BE91
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t057470281ADA03BD1F469907F52067098E9ABF77, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t057470281ADA03BD1F469907F52067098E9ABF77, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
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


// System.Nullable`1<System.Int32>
struct Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Numerics.Vector3
struct Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
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


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.XR.Bone
struct Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.XR.Hand
struct Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 
{
public:
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_1() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_Initialized_1)); }
	inline bool get_m_Initialized_1() const { return ___m_Initialized_1; }
	inline bool* get_address_of_m_Initialized_1() { return &___m_Initialized_1; }
	inline void set_m_Initialized_1(bool value)
	{
		___m_Initialized_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// Windows.Perception.People.HeadPose
struct HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8  : public Il2CppComObject
{
public:

public:
};

struct SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
	ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810* ____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialPointerPose"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810* get_____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810()
	{
		ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810* returnValue = ____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810>((&____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;
			}
		}
		return returnValue;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t0FACD5262AE161FE6727B63CE49C84521A254F22  : public BaseDataProvider_1_tC505CB8A4DD0678FF83FE2BEA7865CB09D6CF808
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t0FACD5262AE161FE6727B63CE49C84521A254F22, ___U3CIsOpaqueU3Ek__BackingField_7)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_7() const { return ___U3CIsOpaqueU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_7() { return &___U3CIsOpaqueU3Ek__BackingField_7; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_7(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_t5787340DB924C5CD79F502B651FDA24CADC3EC16 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t5787340DB924C5CD79F502B651FDA24CADC3EC16, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_tBBE24B55B62937FD88FA93F2EE020FDCA531B289 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_tBBE24B55B62937FD88FA93F2EE020FDCA531B289, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct SupportedControllerType_tB915A03E14A06734D99354707882A7D92FD6E3CB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_tB915A03E14A06734D99354707882A7D92FD6E3CB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_t25C5A088F66C745DB28674E7555F604C544EE266 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_t25C5A088F66C745DB28674E7555F604C544EE266, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_t66E9D2C8A529262A644C308E338DECFCC6CE1BDE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t66E9D2C8A529262A644C308E338DECFCC6CE1BDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t7752054B383CA29D6D42410F9DA4CBA8B7F28C42 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t7752054B383CA29D6D42410F9DA4CBA8B7F28C42, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t424CBAA5C26E0A6C0EA65FF6F67F35055D843330 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t424CBAA5C26E0A6C0EA65FF6F67F35055D843330, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_tA5BA365DE7D47F6BA6EFF1DCD2F37A22DB2F63BB 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tA5BA365DE7D47F6BA6EFF1DCD2F37A22DB2F63BB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_t30F63F62F6F9D7D2478D665C951A2A17BA465395 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t30F63F62F6F9D7D2478D665C951A2A17BA465395, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_1;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___spatialCoordinateSystem_2;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_StaticFields, ___currentSpatialCoordinateSystemPtr_1)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_1() const { return ___currentSpatialCoordinateSystemPtr_1; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_1() { return &___currentSpatialCoordinateSystemPtr_1; }
	inline void set_currentSpatialCoordinateSystemPtr_1(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_1 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_StaticFields, ___spatialCoordinateSystem_2)); }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * get_spatialCoordinateSystem_2() const { return ___spatialCoordinateSystem_2; }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 ** get_address_of_spatialCoordinateSystem_2() { return &___spatialCoordinateSystem_2; }
	inline void set_spatialCoordinateSystem_2(SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * value)
	{
		___spatialCoordinateSystem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages
struct CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047  : public RuntimeObject
{
public:

public:
};

struct CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerPosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___PointerRotation_1;

public:
	inline static int32_t get_offset_of_PointerPosition_0() { return static_cast<int32_t>(offsetof(CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_StaticFields, ___PointerPosition_0)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_PointerPosition_0() const { return ___PointerPosition_0; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_PointerPosition_0() { return &___PointerPosition_0; }
	inline void set_PointerPosition_0(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___PointerPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PointerRotation_1() { return static_cast<int32_t>(offsetof(CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_StaticFields, ___PointerRotation_1)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_PointerRotation_1() const { return ___PointerRotation_1; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_PointerRotation_1() { return &___PointerRotation_1; }
	inline void set_PointerRotation_1(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___PointerRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
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


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.KeyCode
struct KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
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

// UnityEngine.XR.CommonUsages
struct CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// UnityEngine.XR.HandFinger
struct HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA 
{
public:
	// System.Int32 UnityEngine.XR.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct SpatialInteractionSourceKind_t121787D88938AD2A5EB266A9C10FAD348762817B 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t121787D88938AD2A5EB266A9C10FAD348762817B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::inputSource
	RuntimeObject* ___inputSource_0;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::handedness
	uint8_t ___handedness_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoses
	Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  ___currentIndexPose_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::minimumPinchDistance
	float ___minimumPinchDistance_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::maximumPinchDistance
	float ___maximumPinchDistance_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::enterPinchDistance
	float ___enterPinchDistance_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::exitPinchDistance
	float ___exitPinchDistance_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isPinching
	bool ___isPinching_10;

public:
	inline static int32_t get_offset_of_inputSource_0() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___inputSource_0)); }
	inline RuntimeObject* get_inputSource_0() const { return ___inputSource_0; }
	inline RuntimeObject** get_address_of_inputSource_0() { return &___inputSource_0; }
	inline void set_inputSource_0(RuntimeObject* value)
	{
		___inputSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_handedness_1() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___handedness_1)); }
	inline uint8_t get_handedness_1() const { return ___handedness_1; }
	inline uint8_t* get_address_of_handedness_1() { return &___handedness_1; }
	inline void set_handedness_1(uint8_t value)
	{
		___handedness_1 = value;
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoses_4() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___unityJointPoses_4)); }
	inline Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * get_unityJointPoses_4() const { return ___unityJointPoses_4; }
	inline Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 ** get_address_of_unityJointPoses_4() { return &___unityJointPoses_4; }
	inline void set_unityJointPoses_4(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * value)
	{
		___unityJointPoses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_5() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___currentIndexPose_5)); }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  get_currentIndexPose_5() const { return ___currentIndexPose_5; }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * get_address_of_currentIndexPose_5() { return &___currentIndexPose_5; }
	inline void set_currentIndexPose_5(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  value)
	{
		___currentIndexPose_5 = value;
	}

	inline static int32_t get_offset_of_minimumPinchDistance_6() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___minimumPinchDistance_6)); }
	inline float get_minimumPinchDistance_6() const { return ___minimumPinchDistance_6; }
	inline float* get_address_of_minimumPinchDistance_6() { return &___minimumPinchDistance_6; }
	inline void set_minimumPinchDistance_6(float value)
	{
		___minimumPinchDistance_6 = value;
	}

	inline static int32_t get_offset_of_maximumPinchDistance_7() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___maximumPinchDistance_7)); }
	inline float get_maximumPinchDistance_7() const { return ___maximumPinchDistance_7; }
	inline float* get_address_of_maximumPinchDistance_7() { return &___maximumPinchDistance_7; }
	inline void set_maximumPinchDistance_7(float value)
	{
		___maximumPinchDistance_7 = value;
	}

	inline static int32_t get_offset_of_enterPinchDistance_8() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___enterPinchDistance_8)); }
	inline float get_enterPinchDistance_8() const { return ___enterPinchDistance_8; }
	inline float* get_address_of_enterPinchDistance_8() { return &___enterPinchDistance_8; }
	inline void set_enterPinchDistance_8(float value)
	{
		___enterPinchDistance_8 = value;
	}

	inline static int32_t get_offset_of_exitPinchDistance_9() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___exitPinchDistance_9)); }
	inline float get_exitPinchDistance_9() const { return ___exitPinchDistance_9; }
	inline float* get_address_of_exitPinchDistance_9() { return &___exitPinchDistance_9; }
	inline void set_exitPinchDistance_9(float value)
	{
		___exitPinchDistance_9 = value;
	}

	inline static int32_t get_offset_of_isPinching_10() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2, ___isPinching_10)); }
	inline bool get_isPinching_10() const { return ___isPinching_10; }
	inline bool* get_address_of_isPinching_10() { return &___isPinching_10; }
	inline void set_isPinching_10(bool value)
	{
		___isPinching_10 = value;
	}
};

struct ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJointsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateHandJointsPerfMarker_11;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPosePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateCurrentIndexPosePerfMarker_12;

public:
	inline static int32_t get_offset_of_UpdateHandJointsPerfMarker_11() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2_StaticFields, ___UpdateHandJointsPerfMarker_11)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateHandJointsPerfMarker_11() const { return ___UpdateHandJointsPerfMarker_11; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateHandJointsPerfMarker_11() { return &___UpdateHandJointsPerfMarker_11; }
	inline void set_UpdateHandJointsPerfMarker_11(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateHandJointsPerfMarker_11 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentIndexPosePerfMarker_12() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2_StaticFields, ___UpdateCurrentIndexPosePerfMarker_12)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateCurrentIndexPosePerfMarker_12() const { return ___UpdateCurrentIndexPosePerfMarker_12; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateCurrentIndexPosePerfMarker_12() { return &___UpdateCurrentIndexPosePerfMarker_12; }
	inline void set_UpdateCurrentIndexPosePerfMarker_12(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateCurrentIndexPosePerfMarker_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___U3CInteractionsU3Ek__BackingField_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CAngularVelocityU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CVelocityU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CEnabledU3Ek__BackingField_3() const { return ___U3CEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_3() { return &___U3CEnabledU3Ek__BackingField_3; }
	inline void set_U3CEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CTrackingStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_4() const { return ___U3CTrackingStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_4() { return &___U3CTrackingStateU3Ek__BackingField_4; }
	inline void set_U3CTrackingStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CControllerHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_5() const { return ___U3CControllerHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_5() { return &___U3CControllerHandednessU3Ek__BackingField_5; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CInputSourceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_6() const { return ___U3CInputSourceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_6() { return &___U3CInputSourceU3Ek__BackingField_6; }
	inline void set_U3CInputSourceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CVisualizerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_7() const { return ___U3CVisualizerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_7() { return &___U3CVisualizerU3Ek__BackingField_7; }
	inline void set_U3CVisualizerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CAngularVelocityU3Ek__BackingField_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CAngularVelocityU3Ek__BackingField_12() const { return ___U3CAngularVelocityU3Ek__BackingField_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CAngularVelocityU3Ek__BackingField_12() { return &___U3CAngularVelocityU3Ek__BackingField_12; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492, ___U3CVelocityU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CVelocityU3Ek__BackingField_13() const { return ___U3CVelocityU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CVelocityU3Ek__BackingField_13() { return &___U3CVelocityU3Ek__BackingField_13; }
	inline void set_U3CVelocityU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CVelocityU3Ek__BackingField_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46  : public BaseDataProvider_1_tF1607A1796C05861CE691F50F08B322286BD1049
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_7;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t5774B209D11926F9D673747FFBE70A55825E804D* ___pointerConfigurations_8;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t8DA28A50D1C64904F18D7BB21B51A3B74C6DDD1F * ___activePointersToConfig_10;

public:
	inline static int32_t get_offset_of_enablePointerCache_7() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46, ___enablePointerCache_7)); }
	inline bool get_enablePointerCache_7() const { return ___enablePointerCache_7; }
	inline bool* get_address_of_enablePointerCache_7() { return &___enablePointerCache_7; }
	inline void set_enablePointerCache_7(bool value)
	{
		___enablePointerCache_7 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_8() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46, ___pointerConfigurations_8)); }
	inline PointerConfigU5BU5D_t5774B209D11926F9D673747FFBE70A55825E804D* get_pointerConfigurations_8() const { return ___pointerConfigurations_8; }
	inline PointerConfigU5BU5D_t5774B209D11926F9D673747FFBE70A55825E804D** get_address_of_pointerConfigurations_8() { return &___pointerConfigurations_8; }
	inline void set_pointerConfigurations_8(PointerConfigU5BU5D_t5774B209D11926F9D673747FFBE70A55825E804D* value)
	{
		___pointerConfigurations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_8), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46, ___activePointersToConfig_10)); }
	inline Dictionary_2_t8DA28A50D1C64904F18D7BB21B51A3B74C6DDD1F * get_activePointersToConfig_10() const { return ___activePointersToConfig_10; }
	inline Dictionary_2_t8DA28A50D1C64904F18D7BB21B51A3B74C6DDD1F ** get_address_of_activePointersToConfig_10() { return &___activePointersToConfig_10; }
	inline void set_activePointersToConfig_10(Dictionary_2_t8DA28A50D1C64904F18D7BB21B51A3B74C6DDD1F * value)
	{
		___activePointersToConfig_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_10), (void*)value);
	}
};

struct BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestPointersPerfMarker_9;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RecyclePointersPerfMarker_11;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CreatePointerPerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CleanActivePointersPerfMarker_13;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_9() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46_StaticFields, ___RequestPointersPerfMarker_9)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestPointersPerfMarker_9() const { return ___RequestPointersPerfMarker_9; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestPointersPerfMarker_9() { return &___RequestPointersPerfMarker_9; }
	inline void set_RequestPointersPerfMarker_9(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestPointersPerfMarker_9 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_11() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46_StaticFields, ___RecyclePointersPerfMarker_11)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RecyclePointersPerfMarker_11() const { return ___RecyclePointersPerfMarker_11; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RecyclePointersPerfMarker_11() { return &___RecyclePointersPerfMarker_11; }
	inline void set_RecyclePointersPerfMarker_11(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RecyclePointersPerfMarker_11 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46_StaticFields, ___CreatePointerPerfMarker_12)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CreatePointerPerfMarker_12() const { return ___CreatePointerPerfMarker_12; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CreatePointerPerfMarker_12() { return &___CreatePointerPerfMarker_12; }
	inline void set_CreatePointerPerfMarker_12(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CreatePointerPerfMarker_12 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_13() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46_StaticFields, ___CleanActivePointersPerfMarker_13)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CleanActivePointersPerfMarker_13() const { return ___CleanActivePointersPerfMarker_13; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CleanActivePointersPerfMarker_13() { return &___CleanActivePointersPerfMarker_13; }
	inline void set_CleanActivePointersPerfMarker_13(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CleanActivePointersPerfMarker_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD  : public BaseDataProvider_1_tF32E40ACE43E76A19FB7371D999674430F27E877
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SpatialAwarenessSystem>k__BackingField
	RuntimeObject* ___U3CSpatialAwarenessSystemU3Ek__BackingField_8;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_9;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CObserverRotationU3Ek__BackingField_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObserverOriginU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObservationExtentsU3Ek__BackingField_18;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CSpatialAwarenessSystemU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CSpatialAwarenessSystemU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CSpatialAwarenessSystemU3Ek__BackingField_8() const { return ___U3CSpatialAwarenessSystemU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CSpatialAwarenessSystemU3Ek__BackingField_8() { return &___U3CSpatialAwarenessSystemU3Ek__BackingField_8; }
	inline void set_U3CSpatialAwarenessSystemU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CSpatialAwarenessSystemU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialAwarenessSystemU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CSourceIdU3Ek__BackingField_9)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_9() const { return ___U3CSourceIdU3Ek__BackingField_9; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_9() { return &___U3CSourceIdU3Ek__BackingField_9; }
	inline void set_U3CSourceIdU3Ek__BackingField_9(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CSourceNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_10() const { return ___U3CSourceNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_10() { return &___U3CSourceNameU3Ek__BackingField_10; }
	inline void set_U3CSourceNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CStartupBehaviorU3Ek__BackingField_11)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_11() const { return ___U3CStartupBehaviorU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_11() { return &___U3CStartupBehaviorU3Ek__BackingField_11; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_11(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CDefaultPhysicsLayerU3Ek__BackingField_12)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_12() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_12() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_12; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_12(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CIsRunningU3Ek__BackingField_13)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_13() const { return ___U3CIsRunningU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_13() { return &___U3CIsRunningU3Ek__BackingField_13; }
	inline void set_U3CIsRunningU3Ek__BackingField_13(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CIsStationaryObserverU3Ek__BackingField_14)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_14() const { return ___U3CIsStationaryObserverU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_14() { return &___U3CIsStationaryObserverU3Ek__BackingField_14; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_14(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CObserverRotationU3Ek__BackingField_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CObserverRotationU3Ek__BackingField_15() const { return ___U3CObserverRotationU3Ek__BackingField_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CObserverRotationU3Ek__BackingField_15() { return &___U3CObserverRotationU3Ek__BackingField_15; }
	inline void set_U3CObserverRotationU3Ek__BackingField_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CObserverRotationU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CObserverOriginU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObserverOriginU3Ek__BackingField_16() const { return ___U3CObserverOriginU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObserverOriginU3Ek__BackingField_16() { return &___U3CObserverOriginU3Ek__BackingField_16; }
	inline void set_U3CObserverOriginU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObserverOriginU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CObserverVolumeTypeU3Ek__BackingField_17)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_17() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_17() { return &___U3CObserverVolumeTypeU3Ek__BackingField_17; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_17(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CObservationExtentsU3Ek__BackingField_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObservationExtentsU3Ek__BackingField_18() const { return ___U3CObservationExtentsU3Ek__BackingField_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObservationExtentsU3Ek__BackingField_18() { return &___U3CObservationExtentsU3Ek__BackingField_18; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD, ___U3CUpdateIntervalU3Ek__BackingField_19)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_19() const { return ___U3CUpdateIntervalU3Ek__BackingField_19; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_19() { return &___U3CUpdateIntervalU3Ek__BackingField_19; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_19(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t21105FE61BA83DF878CE7F19A9EC3E347D43FB36  : public BaseCameraSettingsProvider_t0FACD5262AE161FE6727B63CE49C84521A254F22
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_tFABD253C86FA0225FCABE996AAC8D326ED61DFC4 * ___reprojectionUpdater_9;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_9() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t21105FE61BA83DF878CE7F19A9EC3E347D43FB36, ___reprojectionUpdater_9)); }
	inline WindowsMixedRealityReprojectionUpdater_tFABD253C86FA0225FCABE996AAC8D326ED61DFC4 * get_reprojectionUpdater_9() const { return ___reprojectionUpdater_9; }
	inline WindowsMixedRealityReprojectionUpdater_tFABD253C86FA0225FCABE996AAC8D326ED61DFC4 ** get_address_of_reprojectionUpdater_9() { return &___reprojectionUpdater_9; }
	inline void set_reprojectionUpdater_9(WindowsMixedRealityReprojectionUpdater_tFABD253C86FA0225FCABE996AAC8D326ED61DFC4 * value)
	{
		___reprojectionUpdater_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_9), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_t21105FE61BA83DF878CE7F19A9EC3E347D43FB36_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_8;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_8() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t21105FE61BA83DF878CE7F19A9EC3E347D43FB36_StaticFields, ___isTryGetViewConfigurationSupported_8)); }
	inline bool get_isTryGetViewConfigurationSupported_8() const { return ___isTryGetViewConfigurationSupported_8; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_8() { return &___isTryGetViewConfigurationSupported_8; }
	inline void set_isTryGetViewConfigurationSupported_8(bool value)
	{
		___isTryGetViewConfigurationSupported_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::controller
	RuntimeObject* ___controller_0;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshObserver
	HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * ___handMeshObserver_1;
	// System.UInt16[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndices
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___handMeshTriangleIndices_2;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::vertexAndNormals
	HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* ___vertexAndNormals_3;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshVerticesUnity
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___handMeshVerticesUnity_4;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshNormalsUnity
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___handMeshNormalsUnity_5;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndicesUnity
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___handMeshTriangleIndicesUnity_6;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshUVsUnity
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___handMeshUVsUnity_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_8;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshObserver_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727, ___handMeshObserver_1)); }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * get_handMeshObserver_1() const { return ___handMeshObserver_1; }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 ** get_address_of_handMeshObserver_1() { return &___handMeshObserver_1; }
	inline void set_handMeshObserver_1(HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * value)
	{
		___handMeshObserver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_1), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727, ___handMeshTriangleIndices_2)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_handMeshTriangleIndices_2() const { return ___handMeshTriangleIndices_2; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_handMeshTriangleIndices_2() { return &___handMeshTriangleIndices_2; }
	inline void set_handMeshTriangleIndices_2(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___handMeshTriangleIndices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_2), (void*)value);
	}

	inline static int32_t get_offset_of_vertexAndNormals_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727, ___vertexAndNormals_3)); }
	inline HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* get_vertexAndNormals_3() const { return ___vertexAndNormals_3; }
	inline HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4** get_address_of_vertexAndNormals_3() { return &___vertexAndNormals_3; }
	inline void set_vertexAndNormals_3(HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* value)
	{
		___vertexAndNormals_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexAndNormals_3), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVerticesUnity_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727, ___handMeshVerticesUnity_4)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_handMeshVerticesUnity_4() const { return ___handMeshVerticesUnity_4; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_handMeshVerticesUnity_4() { return &___handMeshVerticesUnity_4; }
	inline void set_handMeshVerticesUnity_4(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___handMeshVerticesUnity_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshVerticesUnity_4), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshNormalsUnity_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727, ___handMeshNormalsUnity_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_handMeshNormalsUnity_5() const { return ___handMeshNormalsUnity_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_handMeshNormalsUnity_5() { return &___handMeshNormalsUnity_5; }
	inline void set_handMeshNormalsUnity_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___handMeshNormalsUnity_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshNormalsUnity_5), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndicesUnity_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727, ___handMeshTriangleIndicesUnity_6)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_handMeshTriangleIndicesUnity_6() const { return ___handMeshTriangleIndicesUnity_6; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_handMeshTriangleIndicesUnity_6() { return &___handMeshTriangleIndicesUnity_6; }
	inline void set_handMeshTriangleIndicesUnity_6(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___handMeshTriangleIndicesUnity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndicesUnity_6), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVsUnity_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727, ___handMeshUVsUnity_7)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_handMeshUVsUnity_7() const { return ___handMeshUVsUnity_7; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_handMeshUVsUnity_7() { return &___handMeshUVsUnity_7; }
	inline void set_handMeshUVsUnity_7(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___handMeshUVsUnity_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVsUnity_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727, ___hasRequestedHandMeshObserver_8)); }
	inline bool get_hasRequestedHandMeshObserver_8() const { return ___hasRequestedHandMeshObserver_8; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_8() { return &___hasRequestedHandMeshObserver_8; }
	inline void set_hasRequestedHandMeshObserver_8(bool value)
	{
		___hasRequestedHandMeshObserver_8 = value;
	}
};

struct WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::UpdateHandMeshPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateHandMeshPerfMarker_9;

public:
	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_9() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727_StaticFields, ___UpdateHandMeshPerfMarker_9)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateHandMeshPerfMarker_9() const { return ___UpdateHandMeshPerfMarker_9; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateHandMeshPerfMarker_9() { return &___UpdateHandMeshPerfMarker_9; }
	inline void set_UpdateHandMeshPerfMarker_9(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateHandMeshPerfMarker_9 = value;
	}
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


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
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


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___inputAction_4)); }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98, ___poseData_17)); }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971  : public BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 * ___meshEventData_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___observedObjectParent_21;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_31;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_32;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t17593BF621F24492BF0B67E634309CC1343E3849 * ___meshes_33;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_35;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_36;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___occlusionMaterial_37;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___physicsMaterial_38;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___visibleMaterial_39;

public:
	inline static int32_t get_offset_of_meshEventData_20() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___meshEventData_20)); }
	inline MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 * get_meshEventData_20() const { return ___meshEventData_20; }
	inline MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 ** get_address_of_meshEventData_20() { return &___meshEventData_20; }
	inline void set_meshEventData_20(MixedRealitySpatialAwarenessEventData_1_tDF3B07FD20C97CCD7BD8B251FA87F375E5BA7945 * value)
	{
		___meshEventData_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_20), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_21() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___observedObjectParent_21)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_observedObjectParent_21() const { return ___observedObjectParent_21; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_observedObjectParent_21() { return &___observedObjectParent_21; }
	inline void set_observedObjectParent_21(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___observedObjectParent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_21), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___displayOption_31)); }
	inline int32_t get_displayOption_31() const { return ___displayOption_31; }
	inline int32_t* get_address_of_displayOption_31() { return &___displayOption_31; }
	inline void set_displayOption_31(int32_t value)
	{
		___displayOption_31 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___levelOfDetail_32)); }
	inline int32_t get_levelOfDetail_32() const { return ___levelOfDetail_32; }
	inline int32_t* get_address_of_levelOfDetail_32() { return &___levelOfDetail_32; }
	inline void set_levelOfDetail_32(int32_t value)
	{
		___levelOfDetail_32 = value;
	}

	inline static int32_t get_offset_of_meshes_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___meshes_33)); }
	inline Dictionary_2_t17593BF621F24492BF0B67E634309CC1343E3849 * get_meshes_33() const { return ___meshes_33; }
	inline Dictionary_2_t17593BF621F24492BF0B67E634309CC1343E3849 ** get_address_of_meshes_33() { return &___meshes_33; }
	inline void set_meshes_33(Dictionary_2_t17593BF621F24492BF0B67E634309CC1343E3849 * value)
	{
		___meshes_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_33), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___meshPhysicsLayer_34)); }
	inline int32_t get_meshPhysicsLayer_34() const { return ___meshPhysicsLayer_34; }
	inline int32_t* get_address_of_meshPhysicsLayer_34() { return &___meshPhysicsLayer_34; }
	inline void set_meshPhysicsLayer_34(int32_t value)
	{
		___meshPhysicsLayer_34 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___U3CRecalculateNormalsU3Ek__BackingField_35)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_35() const { return ___U3CRecalculateNormalsU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_35() { return &___U3CRecalculateNormalsU3Ek__BackingField_35; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_35(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_36)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_36() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_36() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_36; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_36(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___occlusionMaterial_37)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_occlusionMaterial_37() const { return ___occlusionMaterial_37; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_occlusionMaterial_37() { return &___occlusionMaterial_37; }
	inline void set_occlusionMaterial_37(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___occlusionMaterial_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_37), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___physicsMaterial_38)); }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * get_physicsMaterial_38() const { return ___physicsMaterial_38; }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 ** get_address_of_physicsMaterial_38() { return &___physicsMaterial_38; }
	inline void set_physicsMaterial_38(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * value)
	{
		___physicsMaterial_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_38), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971, ___visibleMaterial_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_visibleMaterial_39() const { return ___visibleMaterial_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_visibleMaterial_39() { return &___visibleMaterial_39; }
	inline void set_visibleMaterial_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___visibleMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_39), (void*)value);
	}
};

struct BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedMeshDisplayOptionPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedMeshPhysicsPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedPhysicsLayerPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshAddedPerfMarker_25;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE * ___OnMeshAdded_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshUpdatedPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE * ___OnMeshUpdated_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshRemovedPerfMarker_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE * ___OnMeshRemoved_30;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_22() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedMeshDisplayOptionPerfMarker_22() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_22() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_22; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_23() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedMeshPhysicsPerfMarker_23() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_23() { return &___ApplyUpdatedMeshPhysicsPerfMarker_23; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_24() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedPhysicsLayerPerfMarker_24() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_24() { return &___ApplyUpdatedPhysicsLayerPerfMarker_24; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_25() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields, ___OnMeshAddedPerfMarker_25)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshAddedPerfMarker_25() const { return ___OnMeshAddedPerfMarker_25; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshAddedPerfMarker_25() { return &___OnMeshAddedPerfMarker_25; }
	inline void set_OnMeshAddedPerfMarker_25(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshAddedPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields, ___OnMeshAdded_26)); }
	inline EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE * get_OnMeshAdded_26() const { return ___OnMeshAdded_26; }
	inline EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE ** get_address_of_OnMeshAdded_26() { return &___OnMeshAdded_26; }
	inline void set_OnMeshAdded_26(EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE * value)
	{
		___OnMeshAdded_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields, ___OnMeshUpdatedPerfMarker_27)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshUpdatedPerfMarker_27() const { return ___OnMeshUpdatedPerfMarker_27; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshUpdatedPerfMarker_27() { return &___OnMeshUpdatedPerfMarker_27; }
	inline void set_OnMeshUpdatedPerfMarker_27(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshUpdatedPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields, ___OnMeshUpdated_28)); }
	inline EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE * get_OnMeshUpdated_28() const { return ___OnMeshUpdated_28; }
	inline EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE ** get_address_of_OnMeshUpdated_28() { return &___OnMeshUpdated_28; }
	inline void set_OnMeshUpdated_28(EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE * value)
	{
		___OnMeshUpdated_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields, ___OnMeshRemovedPerfMarker_29)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshRemovedPerfMarker_29() const { return ___OnMeshRemovedPerfMarker_29; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshRemovedPerfMarker_29() { return &___OnMeshRemovedPerfMarker_29; }
	inline void set_OnMeshRemovedPerfMarker_29(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshRemovedPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971_StaticFields, ___OnMeshRemoved_30)); }
	inline EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE * get_OnMeshRemoved_30() const { return ___OnMeshRemoved_30; }
	inline EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE ** get_address_of_OnMeshRemoved_30() { return &___OnMeshRemoved_30; }
	inline void set_OnMeshRemoved_30(EventFunction_1_tABDEE0DBE9A75335784D51AB6A734BA3EC56F4FE * value)
	{
		___OnMeshRemoved_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_30), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3  : public BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  ___CurrentControllerPose_14;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  ___LastControllerPose_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___CurrentControllerPosition_16;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___CurrentControllerRotation_17;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3, ___CurrentControllerPose_14)); }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  get_CurrentControllerPose_14() const { return ___CurrentControllerPose_14; }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * get_address_of_CurrentControllerPose_14() { return &___CurrentControllerPose_14; }
	inline void set_CurrentControllerPose_14(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  value)
	{
		___CurrentControllerPose_14 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3, ___LastControllerPose_15)); }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  get_LastControllerPose_15() const { return ___LastControllerPose_15; }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * get_address_of_LastControllerPose_15() { return &___LastControllerPose_15; }
	inline void set_LastControllerPose_15(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  value)
	{
		___LastControllerPose_15 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3, ___CurrentControllerPosition_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_CurrentControllerPosition_16() const { return ___CurrentControllerPosition_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_CurrentControllerPosition_16() { return &___CurrentControllerPosition_16; }
	inline void set_CurrentControllerPosition_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___CurrentControllerPosition_16 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3, ___CurrentControllerRotation_17)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_CurrentControllerRotation_17() const { return ___CurrentControllerRotation_17; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_CurrentControllerRotation_17() { return &___CurrentControllerRotation_17; }
	inline void set_CurrentControllerRotation_17(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___CurrentControllerRotation_17 = value;
	}
};

struct GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateControllerPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateButtonDataPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateSingleAxisDataPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateDualAxisDataPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePoseDataPerfMarker_22;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_18() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3_StaticFields, ___UpdateControllerPerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateControllerPerfMarker_18() const { return ___UpdateControllerPerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateControllerPerfMarker_18() { return &___UpdateControllerPerfMarker_18; }
	inline void set_UpdateControllerPerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateControllerPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_19() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3_StaticFields, ___UpdateButtonDataPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateButtonDataPerfMarker_19() const { return ___UpdateButtonDataPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateButtonDataPerfMarker_19() { return &___UpdateButtonDataPerfMarker_19; }
	inline void set_UpdateButtonDataPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateButtonDataPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_20() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3_StaticFields, ___UpdateSingleAxisDataPerfMarker_20)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateSingleAxisDataPerfMarker_20() const { return ___UpdateSingleAxisDataPerfMarker_20; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateSingleAxisDataPerfMarker_20() { return &___UpdateSingleAxisDataPerfMarker_20; }
	inline void set_UpdateSingleAxisDataPerfMarker_20(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateSingleAxisDataPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_21() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3_StaticFields, ___UpdateDualAxisDataPerfMarker_21)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateDualAxisDataPerfMarker_21() const { return ___UpdateDualAxisDataPerfMarker_21; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateDualAxisDataPerfMarker_21() { return &___UpdateDualAxisDataPerfMarker_21; }
	inline void set_UpdateDualAxisDataPerfMarker_21(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateDualAxisDataPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_22() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3_StaticFields, ___UpdatePoseDataPerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePoseDataPerfMarker_22() const { return ___UpdatePoseDataPerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePoseDataPerfMarker_22() { return &___UpdatePoseDataPerfMarker_22; }
	inline void set_UpdatePoseDataPerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePoseDataPerfMarker_22 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971  : public BaseInputDeviceManager_tC3E7F80FB37DFAFCC4E66F260504C0658908DC46
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevices_15;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevicesSubset_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___lastInputDevices_17;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GenericDesiredInputCharacteristics
	List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * ___GenericDesiredInputCharacteristics_18;

public:
	inline static int32_t get_offset_of_inputDevices_15() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971, ___inputDevices_15)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_inputDevices_15() const { return ___inputDevices_15; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_inputDevices_15() { return &___inputDevices_15; }
	inline void set_inputDevices_15(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___inputDevices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_15), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_16() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971, ___inputDevicesSubset_16)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_inputDevicesSubset_16() const { return ___inputDevicesSubset_16; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_inputDevicesSubset_16() { return &___inputDevicesSubset_16; }
	inline void set_inputDevicesSubset_16(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___inputDevicesSubset_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_16), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_17() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971, ___lastInputDevices_17)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_lastInputDevices_17() const { return ___lastInputDevices_17; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_lastInputDevices_17() { return &___lastInputDevices_17; }
	inline void set_lastInputDevices_17(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___lastInputDevices_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_17), (void*)value);
	}

	inline static int32_t get_offset_of_GenericDesiredInputCharacteristics_18() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971, ___GenericDesiredInputCharacteristics_18)); }
	inline List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * get_GenericDesiredInputCharacteristics_18() const { return ___GenericDesiredInputCharacteristics_18; }
	inline List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 ** get_address_of_GenericDesiredInputCharacteristics_18() { return &___GenericDesiredInputCharacteristics_18; }
	inline void set_GenericDesiredInputCharacteristics_18(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * value)
	{
		___GenericDesiredInputCharacteristics_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericDesiredInputCharacteristics_18), (void*)value);
	}
};

struct XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_tC9635DE88E8A229905C0FECBCF13C6EDE9024831 * ___ActiveControllers_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetOrAddControllerPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RemoveControllerPerfMarker_21;

public:
	inline static int32_t get_offset_of_ActiveControllers_14() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971_StaticFields, ___ActiveControllers_14)); }
	inline Dictionary_2_tC9635DE88E8A229905C0FECBCF13C6EDE9024831 * get_ActiveControllers_14() const { return ___ActiveControllers_14; }
	inline Dictionary_2_tC9635DE88E8A229905C0FECBCF13C6EDE9024831 ** get_address_of_ActiveControllers_14() { return &___ActiveControllers_14; }
	inline void set_ActiveControllers_14(Dictionary_2_tC9635DE88E8A229905C0FECBCF13C6EDE9024831 * value)
	{
		___ActiveControllers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_14), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971_StaticFields, ___UpdatePerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_19() const { return ___UpdatePerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_19() { return &___UpdatePerfMarker_19; }
	inline void set_UpdatePerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_20() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971_StaticFields, ___GetOrAddControllerPerfMarker_20)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetOrAddControllerPerfMarker_20() const { return ___GetOrAddControllerPerfMarker_20; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetOrAddControllerPerfMarker_20() { return &___GetOrAddControllerPerfMarker_20; }
	inline void set_GetOrAddControllerPerfMarker_20(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetOrAddControllerPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971_StaticFields, ___RemoveControllerPerfMarker_21)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RemoveControllerPerfMarker_21() const { return ___RemoveControllerPerfMarker_21; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RemoveControllerPerfMarker_21() { return &___RemoveControllerPerfMarker_21; }
	inline void set_RemoveControllerPerfMarker_21(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RemoveControllerPerfMarker_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_tAD0C2D13AF543B02D9828BF28A7BCA99ADFCA515  : public BaseWindowsMixedRealityCameraSettings_t21105FE61BA83DF878CE7F19A9EC3E347D43FB36
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0  : public IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1
{
public:

public:
};

struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields, ___displayFocusChanged_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9  : public IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35  : public BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12  : public BaseSpatialMeshObserver_t54AF5170B8A927368A8EFF6A3E3943F4E2CF0971
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * ___meshWorkQueue_41;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfos_42;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 * ___outstandingMeshObject_43;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 * ___spareMeshObject_44;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_45;

public:
	inline static int32_t get_offset_of_meshWorkQueue_41() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12, ___meshWorkQueue_41)); }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * get_meshWorkQueue_41() const { return ___meshWorkQueue_41; }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B ** get_address_of_meshWorkQueue_41() { return &___meshWorkQueue_41; }
	inline void set_meshWorkQueue_41(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * value)
	{
		___meshWorkQueue_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_41), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_42() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12, ___meshInfos_42)); }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * get_meshInfos_42() const { return ___meshInfos_42; }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 ** get_address_of_meshInfos_42() { return &___meshInfos_42; }
	inline void set_meshInfos_42(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * value)
	{
		___meshInfos_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_42), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_43() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12, ___outstandingMeshObject_43)); }
	inline SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 * get_outstandingMeshObject_43() const { return ___outstandingMeshObject_43; }
	inline SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 ** get_address_of_outstandingMeshObject_43() { return &___outstandingMeshObject_43; }
	inline void set_outstandingMeshObject_43(SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 * value)
	{
		___outstandingMeshObject_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_43), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_44() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12, ___spareMeshObject_44)); }
	inline SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 * get_spareMeshObject_44() const { return ___spareMeshObject_44; }
	inline SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 ** get_address_of_spareMeshObject_44() { return &___spareMeshObject_44; }
	inline void set_spareMeshObject_44(SpatialAwarenessMeshObject_tA6A2A94D796924687059DABF5420533AFC5CD1A3 * value)
	{
		___spareMeshObject_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_44), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_45() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12, ___lastUpdated_45)); }
	inline float get_lastUpdated_45() const { return ___lastUpdated_45; }
	inline float* get_address_of_lastUpdated_45() { return &___lastUpdated_45; }
	inline void set_lastUpdated_45(float value)
	{
		___lastUpdated_45 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumePerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateObserverPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestMeshPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RemoveMeshObjectPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ReclaimMeshObjectPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ConfigureObserverVolumePerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateMeshesPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___MeshGenerationActionPerfMarker_55;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_40() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___UpdatePerfMarker_40)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_40() const { return ___UpdatePerfMarker_40; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_40() { return &___UpdatePerfMarker_40; }
	inline void set_UpdatePerfMarker_40(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_46() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___ResumePerfMarker_46)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumePerfMarker_46() const { return ___ResumePerfMarker_46; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumePerfMarker_46() { return &___ResumePerfMarker_46; }
	inline void set_ResumePerfMarker_46(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumePerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___SuspendPerfMarker_47)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendPerfMarker_47() const { return ___SuspendPerfMarker_47; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendPerfMarker_47() { return &___SuspendPerfMarker_47; }
	inline void set_SuspendPerfMarker_47(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___ClearObservationsPerfMarker_48)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsPerfMarker_48() const { return ___ClearObservationsPerfMarker_48; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsPerfMarker_48() { return &___ClearObservationsPerfMarker_48; }
	inline void set_ClearObservationsPerfMarker_48(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___UpdateObserverPerfMarker_49)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateObserverPerfMarker_49() const { return ___UpdateObserverPerfMarker_49; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateObserverPerfMarker_49() { return &___UpdateObserverPerfMarker_49; }
	inline void set_UpdateObserverPerfMarker_49(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateObserverPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___RequestMeshPerfMarker_50)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestMeshPerfMarker_50() const { return ___RequestMeshPerfMarker_50; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestMeshPerfMarker_50() { return &___RequestMeshPerfMarker_50; }
	inline void set_RequestMeshPerfMarker_50(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestMeshPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___RemoveMeshObjectPerfMarker_51)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RemoveMeshObjectPerfMarker_51() const { return ___RemoveMeshObjectPerfMarker_51; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RemoveMeshObjectPerfMarker_51() { return &___RemoveMeshObjectPerfMarker_51; }
	inline void set_RemoveMeshObjectPerfMarker_51(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RemoveMeshObjectPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___ReclaimMeshObjectPerfMarker_52)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ReclaimMeshObjectPerfMarker_52() const { return ___ReclaimMeshObjectPerfMarker_52; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ReclaimMeshObjectPerfMarker_52() { return &___ReclaimMeshObjectPerfMarker_52; }
	inline void set_ReclaimMeshObjectPerfMarker_52(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ReclaimMeshObjectPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___ConfigureObserverVolumePerfMarker_53)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ConfigureObserverVolumePerfMarker_53() const { return ___ConfigureObserverVolumePerfMarker_53; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ConfigureObserverVolumePerfMarker_53() { return &___ConfigureObserverVolumePerfMarker_53; }
	inline void set_ConfigureObserverVolumePerfMarker_53(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ConfigureObserverVolumePerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___UpdateMeshesPerfMarker_54)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateMeshesPerfMarker_54() const { return ___UpdateMeshesPerfMarker_54; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateMeshesPerfMarker_54() { return &___UpdateMeshesPerfMarker_54; }
	inline void set_UpdateMeshesPerfMarker_54(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateMeshesPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_StaticFields, ___MeshGenerationActionPerfMarker_55)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_MeshGenerationActionPerfMarker_55() const { return ___MeshGenerationActionPerfMarker_55; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_MeshGenerationActionPerfMarker_55() { return &___MeshGenerationActionPerfMarker_55; }
	inline void set_MeshGenerationActionPerfMarker_55(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___MeshGenerationActionPerfMarker_55 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328  : public GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentPointerPosition_23;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___currentPointerRotation_24;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPose
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  ___currentPointerPose_25;

public:
	inline static int32_t get_offset_of_currentPointerPosition_23() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328, ___currentPointerPosition_23)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentPointerPosition_23() const { return ___currentPointerPosition_23; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentPointerPosition_23() { return &___currentPointerPosition_23; }
	inline void set_currentPointerPosition_23(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentPointerPosition_23 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_24() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328, ___currentPointerRotation_24)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_currentPointerRotation_24() const { return ___currentPointerRotation_24; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_currentPointerRotation_24() { return &___currentPointerRotation_24; }
	inline void set_currentPointerRotation_24(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___currentPointerRotation_24 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_25() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328, ___currentPointerPose_25)); }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  get_currentPointerPose_25() const { return ___currentPointerPose_25; }
	inline MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * get_address_of_currentPointerPose_25() { return &___currentPointerPose_25; }
	inline void set_currentPointerPose_25(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  value)
	{
		___currentPointerPose_25 = value;
	}
};

struct BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePoseDataPerfMarker_26;

public:
	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_26() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_StaticFields, ___UpdatePoseDataPerfMarker_26)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePoseDataPerfMarker_26() const { return ___UpdatePoseDataPerfMarker_26; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePoseDataPerfMarker_26() { return &___UpdatePoseDataPerfMarker_26; }
	inline void set_UpdatePoseDataPerfMarker_26(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePoseDataPerfMarker_26 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2  : public XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_22;

public:
	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_22() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2, ___mixedRealityGazeProviderHeadOverride_22)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_22() const { return ___mixedRealityGazeProviderHeadOverride_22; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_22() { return &___mixedRealityGazeProviderHeadOverride_22; }
	inline void set_mixedRealityGazeProviderHeadOverride_22(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_22), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7  : public GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12
{
public:

public:
};

struct WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ConfigureObserverVolumePerfMarker_56;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_56() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7_StaticFields, ___ConfigureObserverVolumePerfMarker_56)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ConfigureObserverVolumePerfMarker_56() const { return ___ConfigureObserverVolumePerfMarker_56; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ConfigureObserverVolumePerfMarker_56() { return &___ConfigureObserverVolumePerfMarker_56; }
	inline void set_ConfigureObserverVolumePerfMarker_56(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ConfigureObserverVolumePerfMarker_56 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29  : public BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::unityJointPoses
	Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * ___unityJointPoses_27;
	// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handDefinition
	ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * ___handDefinition_28;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handMeshProvider
	WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727 * ___handMeshProvider_29;
	// System.Collections.Generic.List`1<UnityEngine.XR.Bone> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::fingerBones
	List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * ___fingerBones_31;

public:
	inline static int32_t get_offset_of_unityJointPoses_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29, ___unityJointPoses_27)); }
	inline Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * get_unityJointPoses_27() const { return ___unityJointPoses_27; }
	inline Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 ** get_address_of_unityJointPoses_27() { return &___unityJointPoses_27; }
	inline void set_unityJointPoses_27(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * value)
	{
		___unityJointPoses_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_27), (void*)value);
	}

	inline static int32_t get_offset_of_handDefinition_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29, ___handDefinition_28)); }
	inline ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * get_handDefinition_28() const { return ___handDefinition_28; }
	inline ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 ** get_address_of_handDefinition_28() { return &___handDefinition_28; }
	inline void set_handDefinition_28(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * value)
	{
		___handDefinition_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDefinition_28), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshProvider_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29, ___handMeshProvider_29)); }
	inline WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727 * get_handMeshProvider_29() const { return ___handMeshProvider_29; }
	inline WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727 ** get_address_of_handMeshProvider_29() { return &___handMeshProvider_29; }
	inline void set_handMeshProvider_29(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727 * value)
	{
		___handMeshProvider_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshProvider_29), (void*)value);
	}

	inline static int32_t get_offset_of_fingerBones_31() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29, ___fingerBones_31)); }
	inline List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * get_fingerBones_31() const { return ___fingerBones_31; }
	inline List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A ** get_address_of_fingerBones_31() { return &___fingerBones_31; }
	inline void set_fingerBones_31(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * value)
	{
		___fingerBones_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerBones_31), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields
{
public:
	// UnityEngine.XR.HandFinger[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handFingers
	HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* ___handFingers_30;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::rightPalmOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rightPalmOffset_32;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::leftPalmOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___leftPalmOffset_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateControllerPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateHandDataPerfMarker_35;

public:
	inline static int32_t get_offset_of_handFingers_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields, ___handFingers_30)); }
	inline HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* get_handFingers_30() const { return ___handFingers_30; }
	inline HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8** get_address_of_handFingers_30() { return &___handFingers_30; }
	inline void set_handFingers_30(HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* value)
	{
		___handFingers_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handFingers_30), (void*)value);
	}

	inline static int32_t get_offset_of_rightPalmOffset_32() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields, ___rightPalmOffset_32)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rightPalmOffset_32() const { return ___rightPalmOffset_32; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rightPalmOffset_32() { return &___rightPalmOffset_32; }
	inline void set_rightPalmOffset_32(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rightPalmOffset_32 = value;
	}

	inline static int32_t get_offset_of_leftPalmOffset_33() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields, ___leftPalmOffset_33)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_leftPalmOffset_33() const { return ___leftPalmOffset_33; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_leftPalmOffset_33() { return &___leftPalmOffset_33; }
	inline void set_leftPalmOffset_33(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___leftPalmOffset_33 = value;
	}

	inline static int32_t get_offset_of_UpdateControllerPerfMarker_34() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields, ___UpdateControllerPerfMarker_34)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateControllerPerfMarker_34() const { return ___UpdateControllerPerfMarker_34; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateControllerPerfMarker_34() { return &___UpdateControllerPerfMarker_34; }
	inline void set_UpdateControllerPerfMarker_34(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateControllerPerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_UpdateHandDataPerfMarker_35() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields, ___UpdateHandDataPerfMarker_35)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateHandDataPerfMarker_35() const { return ___UpdateHandDataPerfMarker_35; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateHandDataPerfMarker_35() { return &___UpdateHandDataPerfMarker_35; }
	inline void set_UpdateHandDataPerfMarker_35(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateHandDataPerfMarker_35 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t3A6D28D1D03581BCEDE36FDAF0634F7E164D0DC7  : public BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___U3CDefaultInteractionsU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKGGVHand_t3A6D28D1D03581BCEDE36FDAF0634F7E164D0DC7, ___U3CDefaultInteractionsU3Ek__BackingField_27)); }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* get_U3CDefaultInteractionsU3Ek__BackingField_27() const { return ___U3CDefaultInteractionsU3Ek__BackingField_27; }
	inline MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_27() { return &___U3CDefaultInteractionsU3Ek__BackingField_27; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_27(MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_27), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB  : public BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328
{
public:

public:
};

struct WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateButtonDataPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateDualAxisDataPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_StaticFields, ___UpdateButtonDataPerfMarker_27)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateButtonDataPerfMarker_27() const { return ___UpdateButtonDataPerfMarker_27; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateButtonDataPerfMarker_27() { return &___UpdateButtonDataPerfMarker_27; }
	inline void set_UpdateButtonDataPerfMarker_27(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateButtonDataPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_StaticFields, ___UpdateDualAxisDataPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateDualAxisDataPerfMarker_28() const { return ___UpdateDualAxisDataPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateDualAxisDataPerfMarker_28() { return &___UpdateDualAxisDataPerfMarker_28; }
	inline void set_UpdateDualAxisDataPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateDualAxisDataPerfMarker_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  m_Items[1];

public:
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  value)
	{
		m_Items[index] = value;
	}
};


// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m0D6F6DF8636F7F87DD502024CD7B7391AA95443A_gshared_inline (BaseDataProvider_1_t057470281ADA03BD1F469907F52067098E9ABF77 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m09BFE365C566B6FE4E2B8E72D8EBAE07201F1389_gshared (Dictionary_2_t98A3E205D482E61B01D95180DB395297922AA871 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_gshared (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mFF4514C67FA42353CC31535EB230D829B3BB8027_gshared (Dictionary_2_t98A3E205D482E61B01D95180DB395297922AA871 * __this, int32_t ___key0, MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBE7A88F094817D0298E41249A2E5CB777E6B71D4_gshared (Dictionary_2_t98A3E205D482E61B01D95180DB395297922AA871 * __this, int32_t ___key0, MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  MixedRealityPose_get_ZeroIdentity_mF788A40F337BE4A5FE42CAC7FDD1219E80BA3A38_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_m318F799DB163B303F4E61A2426C2B5142F662F90 (GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___interactions3, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA48082C605D463C5399672CC6946E28E7F5DACA8_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___usage0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_TransformPoint_m0C9493437230FF6FD835C6C09388E4B8CF9CE09A (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localPosition0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m53F0DB6E21C15FADF150E594CAC78720183BBCCC_inline (MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___usage0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value1, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPlayspace_get_Rotation_m77A97FE4A4A2021F05A52636BCC5CFB4DB23F23F (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m82DD69A46B6A1A91849051B595F87C2826A9AFC3_inline (MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m2B1A1753E17A8CF656EFD610E0767B4F044FBF14 (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m886F4AC56E5DECCE558B035AAF28C5EEA3A0C419 (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m4CF0F1C2A343E9195064924063AE654503FAD91B (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m099C933B28A551A1253F1CC546DE14870205D266_inline (BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m9FE8C79AEE6D6CE1CFD464E6D9B119CB81F847B7_inline (BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  MixedRealityInteractionMapping_get_MixedRealityInputAction_m212D8C701E9E02CA1252986C424A71DE87B52C98_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  MixedRealityInteractionMapping_get_PoseData_mB88C8D3B49CA4F5E6649E41F543D15F567422109_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_m95BE16A7F7D7179ED92251346B8FB225E361BC82 (GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3 * __this, MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_mEDB1048A573258477FC879B66006A6F10C39E037 (BaseWindowsMixedRealityCameraSettings_t21105FE61BA83DF878CE7F19A9EC3E347D43FB36 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * XRSubsystemHelpers_get_DisplaySubsystem_mE5D380CD3DBF5967EB4921061E28A53029BCDCF8 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442 (XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_mBC2C688D2D68C9459836C9C5EEA97961AAC45BB8 (XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m2DA8C34C0B6EABE6D42CC63C3B12476ED3CA0BAD (BaseService_t1E259B861B96DB7899127C987D767A363F87BE91 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m24BFC06E9439D012FD627C3568C48138CFBBC62C_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m9520F7D717A84BDCF4E8CE407AA4B23DD8A94D92 (XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m7ADC512CB2AE14E1CC73AE27487A356A1DF5521F_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m5AA0D165B7FB84A6760D273C4EA337D4C90E999E_inline (BaseDataProvider_1_tF1607A1796C05861CE691F50F08B322286BD1049 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_tF1607A1796C05861CE691F50F08B322286BD1049 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m0D6F6DF8636F7F87DD502024CD7B7391AA95443A_gshared_inline)(__this, method);
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m60134BB97E5E7EF4A7CB6B70BB7E4133A26D75CE (const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  DateTimeOffset_get_Now_mB50A645DA5F2A946FB7CF6BC49C37C8965E4626D (const RuntimeMethod* method);
// Windows.Perception.PerceptionTimestamp Windows.Perception.PerceptionTimestampHelper::FromHistoricalTargetTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01 * PerceptionTimestampHelper_FromHistoricalTargetTime_mA7E3DEC1BA06F1494D91EB5B34596E35B07577AE (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___targetTime0, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialPointerPose Windows.UI.Input.Spatial.SpatialPointerPose::TryGetAtTimestamp(Windows.Perception.Spatial.SpatialCoordinateSystem,Windows.Perception.PerceptionTimestamp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * SpatialPointerPose_TryGetAtTimestamp_mF345A3D760C001305464B4EBE89EA665ED238F5E (SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___coordinateSystem0, PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01 * ___timestamp1, const RuntimeMethod* method);
// Windows.Perception.People.HeadPose Windows.UI.Input.Spatial.SpatialPointerPose::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * SpatialPointerPose_get_Head_mDE61F0A26A1E29788E3FF811B1CA8187BA71EA37 (SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * __this, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  HeadPose_get_Position_m7B7C069DBF000DCD402ABB410BD0411A9B2AFB66 (HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SystemNumericsExtensions_ToUnityVector3_m889EFA12F35F0284A5220E9685F26ED1EC0016D0 (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___vector0, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_ForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  HeadPose_get_ForwardDirection_m9C840786BCCDD116297B691831699089B97329A9 (HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_m615A0BE321A15E96B859DE857760D518441648BA (XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Utilities.WindowsApiChecker::IsMethodAvailable(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsApiChecker_IsMethodAvailable_mCC6ED8F6693CE203390451C21C0BB7220192F4B9 (String_t* ___namespaceName0, String_t* ___className1, String_t* ___methodName2, const RuntimeMethod* method);
// System.Boolean Windows.UI.Input.Spatial.SpatialInteractionManager::IsSourceKindSupported(Windows.UI.Input.Spatial.SpatialInteractionSourceKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialInteractionManager_IsSourceKindSupported_mCCC933BD27FB38C9ABF81AA8EC0AF1AADA0402C4 (int32_t ___kind0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_m9BF2C4199762236A669316FD74FA6EF7A55AF667 (XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mE7D603DA50803A95F5C380F0762DAD04A0F4450F (XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173 (RuntimeObject * __this, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * ___flag0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_m7FD6DE17A5B563D9083F84C50E5791545E7EE95E (XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_mEAA0E447CD0596852D53F755D05D76C0BFE099C0 (GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_SpatialAwarenessSystem()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m090793F2466AA40150557E82F4BB426E98F637F2_inline (BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * XRSubsystemHelpers_get_MeshSubsystem_m4D3F49B834E2450A9FC8D996FE612F71B8F5174A (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mB447AD60A3393D31F4A27407009D90FBBEF5406A_inline (BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_mC0A37CF2BFB1D6378866EA918D2938EF8C0CEC3C_inline (BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_m2BF4D0C188A24F1CEFCD59867BC10BE2567B6EB7_inline (BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_m11F731DBD7A9D30E32A714BE397B592F08BF3028 (Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 *, const RuntimeMethod*))Dictionary_2__ctor_m09BFE365C566B6FE4E2B8E72D8EBAE07201F1389_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
inline void List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *, const RuntimeMethod*))List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_mE6119D64CE0FEE1FCC77E3604F10D8EB11473EAD (BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___interactions3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_mAFDE99114F8578D5EB850E1B9D4DC79D16060F12 (ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider__ctor_mE2C922831B735597DAF4BEBC7870309D0E5ECA13 (WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ArticulatedHandDefinition_get_DefaultInteractions_m166E9544CE2506D993AD4D70CDFB8B9B0F1E623C (ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0A5E064978F9621CAF1509B7E4AEB34346A1FAA1 (Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * __this, int32_t ___key0, MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 *, int32_t, MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 *, const RuntimeMethod*))Dictionary_2_TryGetValue_mFF4514C67FA42353CC31535EB230D829B3BB8027_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArticulatedHandDefinition_get_IsInPointingPose_m3FDEC9F5277D6E04E66113FBD0E0D2EEE8896537 (ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_mA3358858FCCAF7C5788E37FE9E4BCAEAC3878A21_inline (BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_mCB985E4D0D193080E554108F084B43AE84C06A90 (GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mCCDF1976E2AB3501FADEFE39927D162EABF0684E (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* BaseController_get_Interactions_mE29455CB2FF949B2CFA2D3EC7B349F70A58B1913_inline (BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentIndexPose_mC32CE67864945604FF0B70C25649651D1E9FD70F (ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * __this, MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * ___interactionMapping0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>,UnityEngine.XR.Hand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m2ECF80EF5C1E30B944C67541093A1DC0ACB7148A (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___usage0, Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::TryGetFingerBones(UnityEngine.XR.HandFinger,System.Collections.Generic.List`1<UnityEngine.XR.Bone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetFingerBones_m509562BCD2E863AC3FFF2A20FC318527F61BED20 (Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 * __this, int32_t ___finger0, List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * ___bonesOut1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_m7DE57051D0CFEB56B993E49C37E33DDA73D167F4 (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29 * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  (*) (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *, int32_t, const RuntimeMethod*))List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.Bone::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetPosition_mA41AEF3DA60BEBBFE4989026E342D444A3AD5B6F (Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetRotation_m1E9ECBF4D06A964F4AA735F9D9201DD73E430706 (Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_mB4A53E1AD696E0E9DA2C3E5A8C898BB315A88342 (MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m21321B8DDAB22878DAE903F48F4AF5D983657B10 (Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * __this, int32_t ___key0, MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 *, int32_t, MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 , const RuntimeMethod*))Dictionary_2_set_Item_mBE7A88F094817D0298E41249A2E5CB777E6B71D4_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
inline int32_t List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *, const RuntimeMethod*))List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPose_get_Rotation_m0C7CEE0332ED0ABEACB6F1AAD5ACA2819915ECD0_inline (MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateHandJoints_mAD687D50983A352543B0C286D2FF0EF9581E6839 (ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * __this, Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * ___jointPoses0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::.ctor(System.UInt32,System.String,Microsoft.MixedReality.Toolkit.Utilities.AxisType,Microsoft.MixedReality.Toolkit.Input.DeviceInputType,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884 (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, uint32_t ___id0, String_t* ___description1, int32_t ___axisType2, int32_t ___inputType3, String_t* ___axisCodeX4, String_t* ___axisCodeY5, bool ___invertXAxis6, bool ___invertYAxis7, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_m0E054EB40F80C2A458B8536103C2FD19462EA426 (GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3 * __this, MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m3A13EB585891887D1A9BA8DDA39A560E2E79D010 (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m87E2BD48FF602174CED5CB6C3C8B9B6BD235B812_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_m79A0E7F54CC642ADBBFC2877BBD7BC19617657F9 (GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3 * __this, MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___usage0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m34A5434E06F3D058D488D28CC23923822C0C3EC6 (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_mFD7794C3864ABEBAB30F0FDBB460819C9CD8C60B_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_mE6119D64CE0FEE1FCC77E3604F10D8EB11473EAD (BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityXRSDKSource__ctor_mE6119D64CE0FEE1FCC77E3604F10D8EB11473EAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_23(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_24(L_1);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88_il2cpp_TypeInfo_var);
		MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  L_2 = MixedRealityPose_get_ZeroIdentity_mF788A40F337BE4A5FE42CAC7FDD1219E80BA3A38_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_25(L_2);
		// : base(trackingState, sourceHandedness, inputSource, interactions) { }
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___sourceHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_6 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m318F799DB163B303F4E61A2426C2B5142F662F90(__this, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// : base(trackingState, sourceHandedness, inputSource, interactions) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_mEF92AFE3DF75F2B53CC592EDB885D7B54663348A (BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328 * __this, MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_mEF92AFE3DF75F2B53CC592EDB885D7B54663348A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_26();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_InputType_mA48082C605D463C5399672CC6946E28E7F5DACA8_inline(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			int32_t L_4 = V_2;
			if ((!(((uint32_t)L_4) == ((uint32_t)3))))
			{
				goto IL_00b3;
			}
		}

IL_001c:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  L_5 = ((CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_il2cpp_TypeInfo_var))->get_PointerPosition_0();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = __this->get_address_of_currentPointerPosition_23();
			bool L_7 = InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_5, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0046;
			}
		}

IL_0030:
		{
			// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
			MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * L_8 = __this->get_address_of_currentPointerPose_25();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = __this->get_currentPointerPosition_23();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = MixedRealityPlayspace_TransformPoint_m0C9493437230FF6FD835C6C09388E4B8CF9CE09A(L_9, /*hidden argument*/NULL);
			MixedRealityPose_set_Position_m53F0DB6E21C15FADF150E594CAC78720183BBCCC_inline((MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 *)L_8, L_10, /*hidden argument*/NULL);
		}

IL_0046:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  L_11 = ((CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tBA6C94FDC8EBF3286BF0BDF0D5D6EB0876541047_il2cpp_TypeInfo_var))->get_PointerRotation_1();
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_12 = __this->get_address_of_currentPointerRotation_24();
			bool L_13 = InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_11, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0075;
			}
		}

IL_005a:
		{
			// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
			MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * L_14 = __this->get_address_of_currentPointerPose_25();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = MixedRealityPlayspace_get_Rotation_m77A97FE4A4A2021F05A52636BCC5CFB4DB23F23F(/*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = __this->get_currentPointerRotation_24();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_15, L_16, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m82DD69A46B6A1A91849051B595F87C2826A9AFC3_inline((MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 *)L_14, L_17, /*hidden argument*/NULL);
		}

IL_0075:
		{
			// interactionMapping.PoseData = currentPointerPose;
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_18 = ___interactionMapping0;
			MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  L_19 = __this->get_currentPointerPose_25();
			NullCheck(L_18);
			MixedRealityInteractionMapping_set_PoseData_m2B1A1753E17A8CF656EFD610E0767B4F044FBF14(L_18, L_19, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_20 = ___interactionMapping0;
			NullCheck(L_20);
			bool L_21 = MixedRealityInteractionMapping_get_Changed_m886F4AC56E5DECCE558B035AAF28C5EEA3A0C419(L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00bb;
			}
		}

IL_0089:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
			RuntimeObject* L_22 = CoreServices_get_InputSystem_m4CF0F1C2A343E9195064924063AE654503FAD91B(/*hidden argument*/NULL);
			RuntimeObject* L_23 = L_22;
			G_B8_0 = L_23;
			if (L_23)
			{
				G_B9_0 = L_23;
				goto IL_0094;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xCB, FINALLY_00bd);
		}

IL_0094:
		{
			RuntimeObject* L_24 = BaseController_get_InputSource_m099C933B28A551A1253F1CC546DE14870205D266_inline(__this, /*hidden argument*/NULL);
			uint8_t L_25 = BaseController_get_ControllerHandedness_m9FE8C79AEE6D6CE1CFD464E6D9B119CB81F847B7_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_26 = ___interactionMapping0;
			NullCheck(L_26);
			MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_27 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m212D8C701E9E02CA1252986C424A71DE87B52C98_inline(L_26, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_28 = ___interactionMapping0;
			NullCheck(L_28);
			MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  L_29 = MixedRealityInteractionMapping_get_PoseData_mB88C8D3B49CA4F5E6649E41F543D15F567422109_inline(L_28, /*hidden argument*/NULL);
			NullCheck(G_B9_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 , MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tCD4D0485832D3BFEBFB6B72F3308B68FE366C72D_il2cpp_TypeInfo_var, G_B9_0, L_24, L_25, L_27, L_29);
			// break;
			IL2CPP_LEAVE(0xCB, FINALLY_00bd);
		}

IL_00b3:
		{
			// base.UpdatePoseData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_30 = ___interactionMapping0;
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_31 = ___inputDevice1;
			GenericXRSDKController_UpdatePoseData_m95BE16A7F7D7179ED92251346B8FB225E361BC82(__this, L_30, L_31, /*hidden argument*/NULL);
		}

IL_00bb:
		{
			// }
			IL2CPP_LEAVE(0xCB, FINALLY_00bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bd;
	}

FINALLY_00bd:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(189)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(189)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__cctor_m4A99CB3F82658D85CC623E354152F19FFA185DD5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityXRSDKSource__cctor_m4A99CB3F82658D85CC623E354152F19FFA185DD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] BaseWindowsMixedRealityXRSDKSource.UpdatePoseData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral9B4FE2D8244D82F2F06CBDC652CCDA46B72AC548, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_26(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings__ctor_mD8FB14DCA1AD46FB48BF3593F696059E474C48B3 (WindowsMixedRealityCameraSettings_tAD0C2D13AF543B02D9828BF28A7BCA99ADFCA515 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityCameraSettings__ctor_mD8FB14DCA1AD46FB48BF3593F696059E474C48B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t07B9D9601766C40E5AF0DD4708E94537D2F10E35 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_t21105FE61BA83DF878CE7F19A9EC3E347D43FB36_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityCameraSettings__ctor_mEDB1048A573258477FC879B66006A6F10C39E037(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettings_get_IsOpaque_mBEA06ABBF2FE1BCAA383456FD0B92E027A8F5BE9 (WindowsMixedRealityCameraSettings_tAD0C2D13AF543B02D9828BF28A7BCA99ADFCA515 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityCameraSettings_get_IsOpaque_mBEA06ABBF2FE1BCAA383456FD0B92E027A8F5BE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B2_0 = NULL;
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B1_0 = NULL;
	{
		// public override bool IsOpaque => XRSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t420CFD50EAA3287DC6980D85E379472583DAE01B_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_0 = XRSubsystemHelpers_get_DisplaySubsystem_mE5D380CD3DBF5967EB4921061E28A53029BCDCF8(/*hidden argument*/NULL);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		bool L_2 = XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442(G_B2_0, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager__ctor_m2E374274B9C25AFA331BE7AB5E37B2F98E091464 (WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager__ctor_m2E374274B9C25AFA331BE7AB5E37B2F98E091464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t784AAD33DADD17C3AC0B3271FC5DB549EA9CA971_il2cpp_TypeInfo_var);
		XRSDKDeviceManager__ctor_mBC2C688D2D68C9459836C9C5EEA97961AAC45BB8(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Enable_m5588CD7E2DC0F47FBC1BC00DACEEB18B129C8C57 (WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_Enable_m5588CD7E2DC0F47FBC1BC00DACEEB18B129C8C57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * G_B3_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * G_B5_1 = NULL;
	{
		// base.Enable();
		BaseService_Enable_m2DA8C34C0B6EABE6D42CC63C3B12476ED3CA0BAD(__this, /*hidden argument*/NULL);
		// if (WindowsMixedRealityUtilities.UtilitiesProvider == null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m24BFC06E9439D012FD627C3568C48138CFBBC62C_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// WindowsMixedRealityUtilities.UtilitiesProvider = new XRSDKWindowsMixedRealityUtilitiesProvider();
		XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4 * L_1 = (XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4 *)il2cpp_codegen_object_new(XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4_il2cpp_TypeInfo_var);
		XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m9520F7D717A84BDCF4E8CE407AA4B23DD8A94D92(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_il2cpp_TypeInfo_var);
		WindowsMixedRealityUtilities_set_UtilitiesProvider_m7ADC512CB2AE14E1CC73AE27487A356A1DF5521F_inline(L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// mixedRealityGazeProviderHeadOverride = Service?.GazeProvider as IMixedRealityGazeProviderHeadOverride;
		RuntimeObject* L_2 = BaseDataProvider_1_get_Service_m5AA0D165B7FB84A6760D273C4EA337D4C90E999E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m5AA0D165B7FB84A6760D273C4EA337D4C90E999E_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = __this;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = __this;
			goto IL_0025;
		}
	}
	{
		G_B5_0 = ((RuntimeObject*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_002a;
	}

IL_0025:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_tCD4D0485832D3BFEBFB6B72F3308B68FE366C72D_il2cpp_TypeInfo_var, G_B4_0);
		G_B5_0 = L_4;
		G_B5_1 = G_B4_1;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_mixedRealityGazeProviderHeadOverride_22(((RuntimeObject*)IsInst((RuntimeObject*)G_B5_0, IMixedRealityGazeProviderHeadOverride_tD2ECFB9C332E47A3B9389103F792F122689D760F_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Update_mC1289521368FD3A1BD3ED3CCA188B299FB16EABC (WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_Update_mC1289521368FD3A1BD3ED3CCA188B299FB16EABC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * V_0 = NULL;
	HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * V_1 = NULL;
	{
		// if (mixedRealityGazeProviderHeadOverride != null && mixedRealityGazeProviderHeadOverride.UseHeadGazeOverride && WindowsMixedRealityUtilities.SpatialCoordinateSystem != null)
		RuntimeObject* L_0 = __this->get_mixedRealityGazeProviderHeadOverride_22();
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mixedRealityGazeProviderHeadOverride_22();
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::get_UseHeadGazeOverride() */, IMixedRealityGazeProviderHeadOverride_tD2ECFB9C332E47A3B9389103F792F122689D760F_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_3 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m60134BB97E5E7EF4A7CB6B70BB7E4133A26D75CE(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		// SpatialPointerPose pointerPose = SpatialPointerPose.TryGetAtTimestamp(WindowsMixedRealityUtilities.SpatialCoordinateSystem, PerceptionTimestampHelper.FromHistoricalTargetTime(DateTimeOffset.Now));
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_4 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m60134BB97E5E7EF4A7CB6B70BB7E4133A26D75CE(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var);
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_5 = DateTimeOffset_get_Now_mB50A645DA5F2A946FB7CF6BC49C37C8965E4626D(/*hidden argument*/NULL);
		PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01 * L_6 = PerceptionTimestampHelper_FromHistoricalTargetTime_mA7E3DEC1BA06F1494D91EB5B34596E35B07577AE(L_5, /*hidden argument*/NULL);
		SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * L_7 = SpatialPointerPose_TryGetAtTimestamp_mF345A3D760C001305464B4EBE89EA665ED238F5E(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (pointerPose != null)
		SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * L_8 = V_0;
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// HeadPose head = pointerPose.Head;
		SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * L_9 = V_0;
		NullCheck(L_9);
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_10 = SpatialPointerPose_get_Head_mDE61F0A26A1E29788E3FF811B1CA8187BA71EA37(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// if (head != null)
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// mixedRealityGazeProviderHeadOverride.OverrideHeadGaze(head.Position.ToUnityVector3(), head.ForwardDirection.ToUnityVector3());
		RuntimeObject* L_12 = __this->get_mixedRealityGazeProviderHeadOverride_22();
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_13 = V_1;
		NullCheck(L_13);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_14 = HeadPose_get_Position_m7B7C069DBF000DCD402ABB410BD0411A9B2AFB66(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = SystemNumericsExtensions_ToUnityVector3_m889EFA12F35F0284A5220E9685F26ED1EC0016D0(L_14, /*hidden argument*/NULL);
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_16 = V_1;
		NullCheck(L_16);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_17 = HeadPose_get_ForwardDirection_m9C840786BCCDD116297B691831699089B97329A9(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = SystemNumericsExtensions_ToUnityVector3_m889EFA12F35F0284A5220E9685F26ED1EC0016D0(L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::OverrideHeadGaze(UnityEngine.Vector3,UnityEngine.Vector3) */, IMixedRealityGazeProviderHeadOverride_tD2ECFB9C332E47A3B9389103F792F122689D760F_il2cpp_TypeInfo_var, L_12, L_15, L_18);
	}

IL_005f:
	{
		// base.Update();
		XRSDKDeviceManager_Update_m615A0BE321A15E96B859DE857760D518441648BA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_CheckCapability_m1509B9E016E2DFA07904927CA6E9F014FDF23235 (WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_CheckCapability_m1509B9E016E2DFA07904927CA6E9F014FDF23235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WindowsApiChecker.IsMethodAvailable(
		//     "Windows.UI.Input.Spatial",
		//     "SpatialInteractionManager",
		//     "IsSourceKindSupported"))
		bool L_0 = WindowsApiChecker_IsMethodAvailable_mCC6ED8F6693CE203390451C21C0BB7220192F4B9(_stringLiteral7FE3A92731FBA31209B4C4A6F05732A8E2ED711D, _stringLiteral686423B8FBA01A9E35C1D722A6F8C5ED88EF00C3, _stringLiteral8E717DCC1AF93B61B01DA6841C6EC3799325E5E7, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// switch (capability)
		int32_t L_1 = ___capability0;
		if ((!(((uint32_t)L_1) > ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___capability0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004b;
	}

IL_0020:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Hand);
		bool L_3 = SpatialInteractionManager_IsSourceKindSupported_mCCC933BD27FB38C9ABF81AA8EC0AF1AADA0402C4(1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0027:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Controller);
		bool L_4 = SpatialInteractionManager_IsSourceKindSupported_mCCC933BD27FB38C9ABF81AA8EC0AF1AADA0402C4(3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002e:
	{
		// if (XRSubsystemHelpers.DisplaySubsystem != null && !XRSubsystemHelpers.DisplaySubsystem.displayOpaque)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t420CFD50EAA3287DC6980D85E379472583DAE01B_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_5 = XRSubsystemHelpers_get_DisplaySubsystem_mE5D380CD3DBF5967EB4921061E28A53029BCDCF8(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t420CFD50EAA3287DC6980D85E379472583DAE01B_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_6 = XRSubsystemHelpers_get_DisplaySubsystem_mE5D380CD3DBF5967EB4921061E28A53029BCDCF8(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		// return capability == MixedRealityCapability.GGVHand;
		int32_t L_8 = ___capability0;
		return (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
	}

IL_0046:
	{
		// return capability == MixedRealityCapability.MotionController;
		int32_t L_9 = ___capability0;
		return (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
	}

IL_004b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * WindowsMixedRealityDeviceManager_GetControllerType_m756DD39E6892EDD0B798E6DAEE47BD53C8FA776C (WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_GetControllerType_m756DD39E6892EDD0B798E6DAEE47BD53C8FA776C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (supportedControllerType)
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)2048))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0038;
	}

IL_0017:
	{
		// return typeof(WindowsMixedRealityXRSDKMotionController);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0022:
	{
		// return typeof(WindowsMixedRealityXRSDKArticulatedHand);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_002d:
	{
		// return typeof(WindowsMixedRealityXRSDKGGVHand);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKGGVHand_t3A6D28D1D03581BCEDE36FDAF0634F7E164D0DC7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0038:
	{
		// return base.GetControllerType(supportedControllerType);
		int32_t L_9 = ___supportedControllerType0;
		Type_t * L_10 = XRSDKDeviceManager_GetControllerType_m9BF2C4199762236A669316FD74FA6EF7A55AF667(__this, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetInputSourceType_m8BE1219CF7B18A8A18FFCA46D6AEC1B431AC02A1 (WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	{
		// switch (supportedControllerType)
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_001b;
	}

IL_0017:
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}

IL_0019:
	{
		// return InputSourceType.Hand;
		return (int32_t)(1);
	}

IL_001b:
	{
		// return base.GetInputSourceType(supportedControllerType);
		int32_t L_3 = ___supportedControllerType0;
		int32_t L_4 = XRSDKDeviceManager_GetInputSourceType_mE7D603DA50803A95F5C380F0762DAD04A0F4450F(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_m9B262CF482A39CA7F74782163B1C29AD1A23BB8F (WindowsMixedRealityDeviceManager_t856B4560F9C4A904D44E56A2F8E53382EA79E8C2 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_GetCurrentControllerType_m9B262CF482A39CA7F74782163B1C29AD1A23BB8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking))
		uint32_t L_0 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_1);
		uint32_t L_3 = ((uint32_t)8);
		RuntimeObject * L_4 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_3);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_2);
		bool L_5 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_2, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Left) ||
		//     inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Right))
		uint32_t L_6 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_7);
		uint32_t L_9 = ((uint32_t)((int32_t)256));
		RuntimeObject * L_10 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_9);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_8);
		bool L_11 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_8, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_12 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_13);
		uint32_t L_15 = ((uint32_t)((int32_t)512));
		RuntimeObject * L_16 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_15);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_14);
		bool L_17 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_14, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0059;
		}
	}

IL_0053:
	{
		// return SupportedControllerType.ArticulatedHand;
		return (int32_t)(((int32_t)1024));
	}

IL_0059:
	{
		// return SupportedControllerType.GGVHand;
		return (int32_t)(((int32_t)2048));
	}

IL_005f:
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Controller))
		uint32_t L_18 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_19);
		uint32_t L_21 = ((uint32_t)((int32_t)64));
		RuntimeObject * L_22 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_21);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_20);
		bool L_23 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_20, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_007c;
		}
	}
	{
		// return SupportedControllerType.WindowsMixedReality;
		return (int32_t)(((int32_t)32));
	}

IL_007c:
	{
		// return base.GetCurrentControllerType(inputDevice);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_24 = ___inputDevice0;
		int32_t L_25 = XRSDKDeviceManager_GetCurrentControllerType_m7FD6DE17A5B563D9083F84C50E5791545E7EE95E(__this, L_24, /*hidden argument*/NULL);
		return L_25;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__ctor_mEEF9FF8502D9FC91782745AE646B52B0338A81F7 (WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealitySpatialMeshObserver__ctor_mEEF9FF8502D9FC91782745AE646B52B0338A81F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_0 = ___spatialAwarenessSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t258EF98CF678C5D6508E1E745FD0E4F759BEEF12_il2cpp_TypeInfo_var);
		GenericXRSDKSpatialMeshObserver__ctor_mEAA0E447CD0596852D53F755D05D76C0BFE099C0(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m74A9EE524154C7A4F849E306AA5AAFE0F17FC500 (WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m74A9EE524154C7A4F849E306AA5AAFE0F17FC500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (SpatialAwarenessSystem == null || XRSubsystemHelpers.MeshSubsystem == null)
		RuntimeObject* L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_m090793F2466AA40150557E82F4BB426E98F637F2_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t420CFD50EAA3287DC6980D85E379472583DAE01B_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = XRSubsystemHelpers_get_MeshSubsystem_m4D3F49B834E2450A9FC8D996FE612F71B8F5174A(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7_il2cpp_TypeInfo_var))->get_ConfigureObserverVolumePerfMarker_56();
		V_1 = L_2;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			// switch (ObserverVolumeType)
			int32_t L_4 = BaseSpatialObserver_get_ObserverVolumeType_mB447AD60A3393D31F4A27407009D90FBBEF5406A_inline(__this, /*hidden argument*/NULL);
			V_2 = L_4;
			int32_t L_5 = V_2;
			if ((!(((uint32_t)L_5) == ((uint32_t)1))))
			{
				goto IL_0042;
			}
		}

IL_0029:
		{
			// XRSubsystemHelpers.MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t420CFD50EAA3287DC6980D85E379472583DAE01B_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_6 = XRSubsystemHelpers_get_MeshSubsystem_m4D3F49B834E2450A9FC8D996FE612F71B8F5174A(/*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = BaseSpatialObserver_get_ObserverOrigin_mC0A37CF2BFB1D6378866EA918D2938EF8C0CEC3C_inline(__this, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = BaseSpatialObserver_get_ObservationExtents_m2BF4D0C188A24F1CEFCD59867BC10BE2567B6EB7_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA(L_6, L_7, L_8, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}

IL_0042:
		{
			// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
			int32_t L_9 = BaseSpatialObserver_get_ObserverVolumeType_mB447AD60A3393D31F4A27407009D90FBBEF5406A_inline(__this, /*hidden argument*/NULL);
			int32_t L_10 = L_9;
			RuntimeObject * L_11 = Box(VolumeType_t82659A73DD9C9FB34EB9061E86120095A42FAC68_il2cpp_TypeInfo_var, &L_10);
			String_t* L_12 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77, L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_12, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__cctor_m8FC45151FDBF0856F9B7104B3C2C573C735F561F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealitySpatialMeshObserver__cctor_m8FC45151FDBF0856F9B7104B3C2C573C735F561F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealitySpatialMeshObserver.ConfigureObserverVolume");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral8ACB17E5AA08C73478162C386BBEB2C64F3D6D39, /*hidden argument*/NULL);
		((WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t5E111314B376FFD78DBFE9004AA57C1D8A2782C7_il2cpp_TypeInfo_var))->set_ConfigureObserverVolumePerfMarker_56(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__ctor_m88613E33F66F0ACBECF44357CEF946519EE8FF04 (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand__ctor_m88613E33F66F0ACBECF44357CEF946519EE8FF04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * L_0 = (Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 *)il2cpp_codegen_object_new(Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m11F731DBD7A9D30E32A714BE397B592F08BF3028(L_0, /*hidden argument*/Dictionary_2__ctor_m11F731DBD7A9D30E32A714BE397B592F08BF3028_RuntimeMethod_var);
		__this->set_unityJointPoses_27(L_0);
		// private readonly List<Bone> fingerBones = new List<Bone>();
		List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_1 = (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *)il2cpp_codegen_object_new(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_il2cpp_TypeInfo_var);
		List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C(L_1, /*hidden argument*/List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_RuntimeMethod_var);
		__this->set_fingerBones_31(L_1);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_2 = ___trackingState0;
		uint8_t L_3 = ___controllerHandedness1;
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_5 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mE6119D64CE0FEE1FCC77E3604F10D8EB11473EAD(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// handDefinition = new ArticulatedHandDefinition(inputSource, controllerHandedness);
		RuntimeObject* L_6 = ___inputSource2;
		uint8_t L_7 = ___controllerHandedness1;
		ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * L_8 = (ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 *)il2cpp_codegen_object_new(ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2_il2cpp_TypeInfo_var);
		ArticulatedHandDefinition__ctor_mAFDE99114F8578D5EB850E1B9D4DC79D16060F12(L_8, L_6, L_7, /*hidden argument*/NULL);
		__this->set_handDefinition_28(L_8);
		// handMeshProvider = new WindowsMixedRealityHandMeshProvider(this);
		WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727 * L_9 = (WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727 *)il2cpp_codegen_object_new(WindowsMixedRealityHandMeshProvider_t2F3152952324BFC5FAD7B40F3ABBC65CA802B727_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider__ctor_mE2C922831B735597DAF4BEBC7870309D0E5ECA13(L_9, __this, /*hidden argument*/NULL);
		__this->set_handMeshProvider_29(L_9);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* WindowsMixedRealityXRSDKArticulatedHand_get_DefaultInteractions_mC688B32E6AA9DA9CBB7E44F87E5213AAA7149D59 (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29 * __this, const RuntimeMethod* method)
{
	ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * G_B2_0 = NULL;
	ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * G_B1_0 = NULL;
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => handDefinition?.DefaultInteractions;
		ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * L_0 = __this->get_handDefinition_28();
		ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_2 = ArticulatedHandDefinition_get_DefaultInteractions_m166E9544CE2506D993AD4D70CDFB8B9B0F1E623C(G_B2_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_m6993621B4C23F6C9A91FA7807A64CD0621D8731A (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29 * __this, int32_t ___joint0, MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_m6993621B4C23F6C9A91FA7807A64CD0621D8731A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) => unityJointPoses.TryGetValue(joint, out pose);
		Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * L_0 = __this->get_unityJointPoses_27();
		int32_t L_1 = ___joint0;
		MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m0A5E064978F9621CAF1509B7E4AEB34346A1FAA1(L_0, L_1, (MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m0A5E064978F9621CAF1509B7E4AEB34346A1FAA1_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_get_IsInPointingPose_mCD323275826A61113299EC1AE238D4E67A2B20ED (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsInPointingPose => handDefinition.IsInPointingPose;
		ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * L_0 = __this->get_handDefinition_28();
		NullCheck(L_0);
		bool L_1 = ArticulatedHandDefinition_get_IsInPointingPose_m3FDEC9F5277D6E04E66113FBD0E0D2EEE8896537(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateController_mA2D3BAA3AEF337A8A589374AA79172AAF822C5F5 (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_UpdateController_mA2D3BAA3AEF337A8A589374AA79172AAF822C5F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * G_B7_0 = NULL;
	ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * G_B6_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	int32_t G_B12_1 = 0;
	{
		// if (!Enabled) { return; }
		bool L_0 = BaseController_get_Enabled_mA3358858FCCAF7C5788E37FE9E4BCAEAC3878A21_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Enabled) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1 = ((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_34();
		V_1 = L_1;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// base.UpdateController(inputDevice);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_3 = ___inputDevice0;
			GenericXRSDKController_UpdateController_mCB985E4D0D193080E554108F084B43AE84C06A90(__this, L_3, /*hidden argument*/NULL);
			// UpdateHandData(inputDevice);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_4 = ___inputDevice0;
			WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mCCDF1976E2AB3501FADEFE39927D162EABF0684E(__this, L_4, /*hidden argument*/NULL);
			// for (int i = 0; i < Interactions?.Length; i++)
			V_2 = 0;
			goto IL_0059;
		}

IL_0029:
		{
			// switch (Interactions[i].InputType)
			MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_5 = BaseController_get_Interactions_mE29455CB2FF949B2CFA2D3EC7B349F70A58B1913_inline(__this, /*hidden argument*/NULL);
			int32_t L_6 = V_2;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			NullCheck(L_8);
			int32_t L_9 = MixedRealityInteractionMapping_get_InputType_mA48082C605D463C5399672CC6946E28E7F5DACA8_inline(L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			int32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)33)))))
			{
				goto IL_0055;
			}
		}

IL_003c:
		{
			// handDefinition?.UpdateCurrentIndexPose(Interactions[i]);
			ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * L_11 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * L_12 = L_11;
			G_B6_0 = L_12;
			if (L_12)
			{
				G_B7_0 = L_12;
				goto IL_0048;
			}
		}

IL_0045:
		{
			goto IL_0055;
		}

IL_0048:
		{
			MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_13 = BaseController_get_Interactions_mE29455CB2FF949B2CFA2D3EC7B349F70A58B1913_inline(__this, /*hidden argument*/NULL);
			int32_t L_14 = V_2;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			NullCheck(G_B7_0);
			ArticulatedHandDefinition_UpdateCurrentIndexPose_mC32CE67864945604FF0B70C25649651D1E9FD70F(G_B7_0, L_16, /*hidden argument*/NULL);
		}

IL_0055:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_17 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		}

IL_0059:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_18 = V_2;
			MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_19 = BaseController_get_Interactions_mE29455CB2FF949B2CFA2D3EC7B349F70A58B1913_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_20 = L_19;
			G_B10_0 = L_20;
			G_B10_1 = L_18;
			if (L_20)
			{
				G_B11_0 = L_20;
				G_B11_1 = L_18;
				goto IL_0070;
			}
		}

IL_0063:
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_21 = V_5;
			G_B12_0 = L_21;
			G_B12_1 = G_B10_1;
			goto IL_0077;
		}

IL_0070:
		{
			NullCheck(G_B11_0);
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_22;
			memset((&L_22), 0, sizeof(L_22));
			Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_22), (((int32_t)((int32_t)(((RuntimeArray*)G_B11_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
			G_B12_0 = L_22;
			G_B12_1 = G_B11_1;
		}

IL_0077:
		{
			V_4 = G_B12_0;
			int32_t L_23 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
			bool L_24 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B12_1) < ((int32_t)L_23))? 1 : 0)&(int32_t)L_24)))
			{
				goto IL_0029;
			}
		}

IL_008c:
		{
			// }
			IL2CPP_LEAVE(0x9C, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(142)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mCCDF1976E2AB3501FADEFE39927D162EABF0684E (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mCCDF1976E2AB3501FADEFE39927D162EABF0684E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * G_B11_1 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * G_B10_1 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * G_B12_2 = NULL;
	ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * G_B17_0 = NULL;
	ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * G_B16_0 = NULL;
	{
		// using (UpdateHandDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->get_UpdateHandDataPerfMarker_35();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.handData, out hand))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  L_2 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_handData_49();
			bool L_3 = InputDevice_TryGetFeatureValue_m2ECF80EF5C1E30B944C67541093A1DC0ACB7148A((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_2, (Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 *)(&V_2), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0139;
			}
		}

IL_0021:
		{
			// foreach (HandFinger finger in handFingers)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var);
			HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* L_4 = ((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->get_handFingers_30();
			V_3 = L_4;
			V_4 = 0;
			goto IL_0118;
		}

IL_002f:
		{
			// foreach (HandFinger finger in handFingers)
			HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* L_5 = V_3;
			int32_t L_6 = V_4;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			int32_t L_8 = (int32_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_5 = L_8;
			// if (hand.TryGetFingerBones(finger, fingerBones))
			int32_t L_9 = V_5;
			List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_10 = __this->get_fingerBones_31();
			bool L_11 = Hand_TryGetFingerBones_m509562BCD2E863AC3FFF2A20FC318527F61BED20((Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 *)(&V_2), L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0112;
			}
		}

IL_0049:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			V_7 = 0;
			goto IL_00c3;
		}

IL_004e:
		{
			// TrackedHandJoint trackedHandJoint = ConvertToTrackedHandJoint(finger, i);
			int32_t L_12 = V_5;
			int32_t L_13 = V_7;
			int32_t L_14 = WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_m7DE57051D0CFEB56B993E49C37E33DDA73D167F4(__this, L_12, L_13, /*hidden argument*/NULL);
			V_8 = L_14;
			// Bone bone = fingerBones[i];
			List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_15 = __this->get_fingerBones_31();
			int32_t L_16 = V_7;
			NullCheck(L_15);
			Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  L_17 = List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_RuntimeMethod_var);
			V_9 = L_17;
			// Vector3 position = Vector3.zero;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
			V_10 = L_18;
			// Quaternion rotation = Quaternion.identity;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
			V_11 = L_19;
			// bool positionAvailable = bone.TryGetPosition(out position);
			bool L_20 = Bone_TryGetPosition_mA41AEF3DA60BEBBFE4989026E342D444A3AD5B6F((Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 *)(&V_9), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_10), /*hidden argument*/NULL);
			// bool rotationAvailable = bone.TryGetRotation(out rotation);
			bool L_21 = Bone_TryGetRotation_m1E9ECBF4D06A964F4AA735F9D9201DD73E430706((Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 *)(&V_9), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_11), /*hidden argument*/NULL);
			V_12 = L_21;
			// if (positionAvailable || rotationAvailable)
			bool L_22 = V_12;
			if (!((int32_t)((int32_t)L_20|(int32_t)L_22)))
			{
				goto IL_00bd;
			}
		}

IL_0090:
		{
			// position = MixedRealityPlayspace.TransformPoint(position);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = MixedRealityPlayspace_TransformPoint_m0C9493437230FF6FD835C6C09388E4B8CF9CE09A(L_23, /*hidden argument*/NULL);
			V_10 = L_24;
			// rotation = MixedRealityPlayspace.Rotation * rotation;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = MixedRealityPlayspace_get_Rotation_m77A97FE4A4A2021F05A52636BCC5CFB4DB23F23F(/*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = V_11;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_25, L_26, /*hidden argument*/NULL);
			V_11 = L_27;
			// unityJointPoses[trackedHandJoint] = new MixedRealityPose(position, rotation);
			Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * L_28 = __this->get_unityJointPoses_27();
			int32_t L_29 = V_8;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_10;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = V_11;
			MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  L_32;
			memset((&L_32), 0, sizeof(L_32));
			MixedRealityPose__ctor_mB4A53E1AD696E0E9DA2C3E5A8C898BB315A88342((&L_32), L_30, L_31, /*hidden argument*/NULL);
			NullCheck(L_28);
			Dictionary_2_set_Item_m21321B8DDAB22878DAE903F48F4AF5D983657B10(L_28, L_29, L_32, /*hidden argument*/Dictionary_2_set_Item_m21321B8DDAB22878DAE903F48F4AF5D983657B10_RuntimeMethod_var);
		}

IL_00bd:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_33 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		}

IL_00c3:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_34 = V_7;
			List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_35 = __this->get_fingerBones_31();
			NullCheck(L_35);
			int32_t L_36 = List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_inline(L_35, /*hidden argument*/List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_RuntimeMethod_var);
			if ((((int32_t)L_34) < ((int32_t)L_36)))
			{
				goto IL_004e;
			}
		}

IL_00d5:
		{
			// MixedRealityPose palmPose = CurrentControllerPose;
			MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  L_37 = ((GenericXRSDKController_t14482E9C7E50DD4500A96540241410EE7F7F9FD3 *)__this)->get_CurrentControllerPose_14();
			V_6 = L_37;
			// palmPose.Rotation *= (ControllerHandedness == Handedness.Left ? leftPalmOffset : rightPalmOffset);
			MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * L_38 = (&V_6);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_39 = MixedRealityPose_get_Rotation_m0C7CEE0332ED0ABEACB6F1AAD5ACA2819915ECD0_inline((MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 *)L_38, /*hidden argument*/NULL);
			uint8_t L_40 = BaseController_get_ControllerHandedness_m9FE8C79AEE6D6CE1CFD464E6D9B119CB81F847B7_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = L_39;
			G_B10_1 = L_38;
			if ((((int32_t)L_40) == ((int32_t)1)))
			{
				G_B11_0 = L_39;
				G_B11_1 = L_38;
				goto IL_00f5;
			}
		}

IL_00ee:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = ((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->get_rightPalmOffset_32();
			G_B12_0 = L_41;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			goto IL_00fa;
		}

IL_00f5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_42 = ((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->get_leftPalmOffset_33();
			G_B12_0 = L_42;
			G_B12_1 = G_B11_0;
			G_B12_2 = G_B11_1;
		}

IL_00fa:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(G_B12_1, G_B12_0, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m82DD69A46B6A1A91849051B595F87C2826A9AFC3_inline((MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 *)G_B12_2, L_43, /*hidden argument*/NULL);
			// unityJointPoses[TrackedHandJoint.Palm] = palmPose;
			Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * L_44 = __this->get_unityJointPoses_27();
			MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  L_45 = V_6;
			NullCheck(L_44);
			Dictionary_2_set_Item_m21321B8DDAB22878DAE903F48F4AF5D983657B10(L_44, 2, L_45, /*hidden argument*/Dictionary_2_set_Item_m21321B8DDAB22878DAE903F48F4AF5D983657B10_RuntimeMethod_var);
		}

IL_0112:
		{
			int32_t L_46 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		}

IL_0118:
		{
			// foreach (HandFinger finger in handFingers)
			int32_t L_47 = V_4;
			HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* L_48 = V_3;
			NullCheck(L_48);
			if ((((int32_t)L_47) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))))
			{
				goto IL_002f;
			}
		}

IL_0122:
		{
			// handDefinition?.UpdateHandJoints(unityJointPoses);
			ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * L_49 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_t4E9A12ABB92C1211700A4862364291857CE0B5F2 * L_50 = L_49;
			G_B16_0 = L_50;
			if (L_50)
			{
				G_B17_0 = L_50;
				goto IL_012e;
			}
		}

IL_012b:
		{
			IL2CPP_LEAVE(0x149, FINALLY_013b);
		}

IL_012e:
		{
			Dictionary_2_t6C468636D807B77E703AF02832BD0B2A2AA43329 * L_51 = __this->get_unityJointPoses_27();
			NullCheck(G_B17_0);
			ArticulatedHandDefinition_UpdateHandJoints_mAD687D50983A352543B0C286D2FF0EF9581E6839(G_B17_0, L_51, /*hidden argument*/NULL);
		}

IL_0139:
		{
			// }
			IL2CPP_LEAVE(0x149, FINALLY_013b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013b;
	}

FINALLY_013b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(315)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(315)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x149, IL_0149)
	}

IL_0149:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_m7DE57051D0CFEB56B993E49C37E33DDA73D167F4 (WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29 * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// switch (finger)
		int32_t L_0 = ___finger0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_001c:
	{
		// case HandFinger.Thumb: return (index == 0) ? TrackedHandJoint.Wrist : TrackedHandJoint.ThumbMetacarpalJoint + index - 1;
		int32_t L_1 = ___index1;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_2)), (int32_t)1)));
	}

IL_0025:
	{
		return (int32_t)(1);
	}

IL_0027:
	{
		// case HandFinger.Index: return TrackedHandJoint.IndexMetacarpal + index;
		int32_t L_3 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)7, (int32_t)L_3)));
	}

IL_002b:
	{
		// case HandFinger.Middle: return TrackedHandJoint.MiddleMetacarpal + index;
		int32_t L_4 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)12), (int32_t)L_4)));
	}

IL_0030:
	{
		// case HandFinger.Ring: return TrackedHandJoint.RingMetacarpal + index;
		int32_t L_5 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)17), (int32_t)L_5)));
	}

IL_0035:
	{
		// case HandFinger.Pinky: return TrackedHandJoint.PinkyMetacarpal + index;
		int32_t L_6 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)22), (int32_t)L_6)));
	}

IL_003a:
	{
		// default: return TrackedHandJoint.None;
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__cctor_m9FC2353FDE75818B83AF311DCE63795DF3C20A12 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand__cctor_m9FC2353FDE75818B83AF311DCE63795DF3C20A12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HandFinger[] handFingers = Enum.GetValues(typeof(HandFinger)) as HandFinger[];
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeArray * L_2 = Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C(L_1, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->set_handFingers_30(((HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8*)IsInst((RuntimeObject*)L_2, HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8_il2cpp_TypeInfo_var)));
		// private static readonly Quaternion rightPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), Mathf.Sqrt(0.125f), -Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_3 = sqrtf((0.125f));
		float L_4 = sqrtf((0.125f));
		float L_5 = sqrtf((1.5f));
		float L_6 = sqrtf((1.5f));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_7), L_3, L_4, ((float)((float)((-L_5))/(float)(2.0f))), ((float)((float)L_6/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->set_rightPalmOffset_32(L_7);
		// private static readonly Quaternion leftPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), -Mathf.Sqrt(0.125f), Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_8 = sqrtf((0.125f));
		float L_9 = sqrtf((0.125f));
		float L_10 = sqrtf((1.5f));
		float L_11 = sqrtf((1.5f));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_12), L_8, ((-L_9)), ((float)((float)L_10/(float)(2.0f))), ((float)((float)L_11/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->set_leftPalmOffset_33(L_12);
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateController");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_13), _stringLiteral4C96EF72CFC6FFCB2605DE8EBE352F959840953F, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_34(L_13);
		// private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateHandData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_14), _stringLiteralDBA71657348713194DE0F06FA1DD2F8B7C08303B, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tC514EA2A6DBE4295BB7029356AC095850816EE29_il2cpp_TypeInfo_var))->set_UpdateHandDataPerfMarker_35(L_14);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand__ctor_m590BB16D32C40927285E177A549CEEE42A953E71 (WindowsMixedRealityXRSDKGGVHand_t3A6D28D1D03581BCEDE36FDAF0634F7E164D0DC7 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKGGVHand__ctor_m590BB16D32C40927285E177A549CEEE42A953E71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions { get; } = new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Select", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(1, "Grip Pose", AxisType.SixDof, DeviceInputType.SpatialGrip),
		// };
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_0 = (MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7*)(MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7_il2cpp_TypeInfo_var, (uint32_t)2);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_1 = L_0;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_2 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_2, 0, _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_2);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_3 = L_1;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_4 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_4, 1, _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_4);
		__this->set_U3CDefaultInteractionsU3Ek__BackingField_27(L_3);
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		int32_t L_5 = ___trackingState0;
		uint8_t L_6 = ___controllerHandedness1;
		RuntimeObject* L_7 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_8 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mE6119D64CE0FEE1FCC77E3604F10D8EB11473EAD(__this, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* WindowsMixedRealityXRSDKGGVHand_get_DefaultInteractions_m65FE721C425F1E036F84F20B3B6B58814472A42C (WindowsMixedRealityXRSDKGGVHand_t3A6D28D1D03581BCEDE36FDAF0634F7E164D0DC7 * __this, const RuntimeMethod* method)
{
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions { get; } = new[]
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_0 = __this->get_U3CDefaultInteractionsU3Ek__BackingField_27();
		return L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_m700B09F180818C7198A758A20E0A9A092EF555FF (WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController__ctor_m700B09F180818C7198A758A20E0A9A092EF555FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_3 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t6F6CFC7102912F1CC04249CF3D9193B7724FB328_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mE6119D64CE0FEE1FCC77E3604F10D8EB11473EAD(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* WindowsMixedRealityXRSDKMotionController_get_DefaultInteractions_m7F2CEA71015F4092AD697F0F47D1F5AA6AD1FC24 (WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController_get_DefaultInteractions_m7F2CEA71015F4092AD697F0F47D1F5AA6AD1FC24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer),
		//     new MixedRealityInteractionMapping(1, "Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip),
		//     new MixedRealityInteractionMapping(2, "Grip Press", AxisType.SingleAxis, DeviceInputType.GripPress),
		//     new MixedRealityInteractionMapping(3, "Trigger Position", AxisType.SingleAxis, DeviceInputType.Trigger),
		//     new MixedRealityInteractionMapping(4, "Trigger Touch", AxisType.Digital, DeviceInputType.TriggerTouch),
		//     new MixedRealityInteractionMapping(5, "Trigger Press (Select)", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(6, "Touchpad Position", AxisType.DualAxis, DeviceInputType.Touchpad),
		//     new MixedRealityInteractionMapping(7, "Touchpad Touch", AxisType.Digital, DeviceInputType.TouchpadTouch),
		//     new MixedRealityInteractionMapping(8, "Touchpad Press", AxisType.Digital, DeviceInputType.TouchpadPress),
		//     new MixedRealityInteractionMapping(9, "Menu Press", AxisType.Digital, DeviceInputType.Menu),
		//     new MixedRealityInteractionMapping(10, "Thumbstick Position", AxisType.DualAxis, DeviceInputType.ThumbStick),
		//     new MixedRealityInteractionMapping(11, "Thumbstick Press", AxisType.Digital, DeviceInputType.ThumbStickPress),
		// };
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_0 = (MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7*)(MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_1 = L_0;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_2 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_2, 0, _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E, 7, 3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_2);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_3 = L_1;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_4 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_4, 1, _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_4);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_5 = L_3;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_6 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_6, 2, _stringLiteralD282A4F94D38B8423798E0B911C67BBC72DF0C48, 3, ((int32_t)60), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_6);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_7 = L_5;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_8 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_8, 3, _stringLiteral389C31E60DD0E577273C009A47D71D79B84A138C, 3, ((int32_t)10), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_8);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_9 = L_7;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_10 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_10, 4, _stringLiteral95EFCD8A09FF0DFDCCBB845A6A8357BA36522BF3, 2, ((int32_t)11), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_10);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_11 = L_9;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_12 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_12, 5, _stringLiteral66E3998641BA92B9A789AE078DDAF008AE3C3881, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_12);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_13 = L_11;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_14 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_14, 6, _stringLiteralC6009AD6297D694342B38B7BB7C2F5545C22E489, 4, ((int32_t)21), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_14);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_15 = L_13;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_16 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_16, 7, _stringLiteralD7852FDD25BF42473FAC2A55D1781621F018CF34, 2, ((int32_t)22), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_16);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_17 = L_15;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_18 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_18, 8, _stringLiteral79522B49BD0D558EBDEA565DD9F3AC297668EBAB, 2, ((int32_t)24), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_18);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_19 = L_17;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_20 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_20, ((int32_t)9), _stringLiteral1C05AAB7B530CCD6533ADF1EB5DF2EB71A089FC1, 2, ((int32_t)27), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_20);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_21 = L_19;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_22 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_22, ((int32_t)10), _stringLiteral9849FBA41D7E35885EDE335C6B0E1B26C43A4CAF, 4, ((int32_t)17), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_22);
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_23 = L_21;
		MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_24 = (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mE0C232F4CAF2BCDA377AA38F345F2247052BB884(L_24, ((int32_t)11), _stringLiteralE95349BE7E80138756C18FE6E39B29D379961B40, 2, ((int32_t)18), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 *)L_24);
		return L_23;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateButtonData_m7C38D253D8A397D3130F7F6F6E305FEF80C4604D (WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB * __this, MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController_UpdateButtonData_m7C38D253D8A397D3130F7F6F6E305FEF80C4604D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_il2cpp_TypeInfo_var))->get_UpdateButtonDataPerfMarker_27();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_InputType_mA48082C605D463C5399672CC6946E28E7F5DACA8_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)18))))
			{
				goto IL_003a;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)22))))
			{
				goto IL_002a;
			}
		}

IL_0022:
		{
			int32_t L_6 = V_4;
			if ((((int32_t)L_6) == ((int32_t)((int32_t)24))))
			{
				goto IL_0032;
			}
		}

IL_0028:
		{
			goto IL_0042;
		}

IL_002a:
		{
			// buttonUsage = CommonUsages.primary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_7 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxisTouch_9();
			V_2 = L_7;
			// break;
			goto IL_004c;
		}

IL_0032:
		{
			// buttonUsage = CommonUsages.primary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_8 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxisClick_8();
			V_2 = L_8;
			// break;
			goto IL_004c;
		}

IL_003a:
		{
			// buttonUsage = CommonUsages.secondary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_9 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondary2DAxisClick_10();
			V_2 = L_9;
			// break;
			goto IL_004c;
		}

IL_0042:
		{
			// base.UpdateButtonData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_10 = ___interactionMapping0;
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_11 = ___inputDevice1;
			GenericXRSDKController_UpdateButtonData_m0E054EB40F80C2A458B8536103C2FD19462EA426(__this, L_10, L_11, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_004c:
		{
			// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_12 = V_2;
			bool L_13 = InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_12, (bool*)(&V_3), /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_005f;
			}
		}

IL_0058:
		{
			// interactionMapping.BoolData = buttonPressed;
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_14 = ___interactionMapping0;
			bool L_15 = V_3;
			NullCheck(L_14);
			MixedRealityInteractionMapping_set_BoolData_m3A13EB585891887D1A9BA8DDA39A560E2E79D010(L_14, L_15, /*hidden argument*/NULL);
		}

IL_005f:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			bool L_17 = MixedRealityInteractionMapping_get_Changed_m886F4AC56E5DECCE558B035AAF28C5EEA3A0C419(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00b5;
			}
		}

IL_0067:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_18 = ___interactionMapping0;
			NullCheck(L_18);
			bool L_19 = MixedRealityInteractionMapping_get_BoolData_m87E2BD48FF602174CED5CB6C3C8B9B6BD235B812_inline(L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0093;
			}
		}

IL_006f:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
			RuntimeObject* L_20 = CoreServices_get_InputSystem_m4CF0F1C2A343E9195064924063AE654503FAD91B(/*hidden argument*/NULL);
			RuntimeObject* L_21 = L_20;
			G_B14_0 = L_21;
			if (L_21)
			{
				G_B15_0 = L_21;
				goto IL_007a;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_007a:
		{
			RuntimeObject* L_22 = BaseController_get_InputSource_m099C933B28A551A1253F1CC546DE14870205D266_inline(__this, /*hidden argument*/NULL);
			uint8_t L_23 = BaseController_get_ControllerHandedness_m9FE8C79AEE6D6CE1CFD464E6D9B119CB81F847B7_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_24 = ___interactionMapping0;
			NullCheck(L_24);
			MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_25 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m212D8C701E9E02CA1252986C424A71DE87B52C98_inline(L_24, /*hidden argument*/NULL);
			NullCheck(G_B15_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tCD4D0485832D3BFEBFB6B72F3308B68FE366C72D_il2cpp_TypeInfo_var, G_B15_0, L_22, L_23, L_25);
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_0093:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
			RuntimeObject* L_26 = CoreServices_get_InputSystem_m4CF0F1C2A343E9195064924063AE654503FAD91B(/*hidden argument*/NULL);
			RuntimeObject* L_27 = L_26;
			G_B17_0 = L_27;
			if (L_27)
			{
				G_B18_0 = L_27;
				goto IL_009e;
			}
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_009e:
		{
			RuntimeObject* L_28 = BaseController_get_InputSource_m099C933B28A551A1253F1CC546DE14870205D266_inline(__this, /*hidden argument*/NULL);
			uint8_t L_29 = BaseController_get_ControllerHandedness_m9FE8C79AEE6D6CE1CFD464E6D9B119CB81F847B7_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_30 = ___interactionMapping0;
			NullCheck(L_30);
			MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_31 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m212D8C701E9E02CA1252986C424A71DE87B52C98_inline(L_30, /*hidden argument*/NULL);
			NullCheck(G_B18_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tCD4D0485832D3BFEBFB6B72F3308B68FE366C72D_il2cpp_TypeInfo_var, G_B18_0, L_28, L_29, L_31);
		}

IL_00b5:
		{
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_mA28333CEF22B34BAF08074DAA237EB017B2AD0F3 (WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB * __this, MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_mA28333CEF22B34BAF08074DAA237EB017B2AD0F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// using (UpdateDualAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_il2cpp_TypeInfo_var))->get_UpdateDualAxisDataPerfMarker_28();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_InputType_mA48082C605D463C5399672CC6946E28E7F5DACA8_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)21))))
			{
				goto IL_002c;
			}
		}

IL_0022:
		{
			goto IL_0034;
		}

IL_0024:
		{
			// axisUsage = CommonUsages.secondary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_6 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondary2DAxis_18();
			V_2 = L_6;
			// break;
			goto IL_003e;
		}

IL_002c:
		{
			// axisUsage = CommonUsages.primary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_7 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
			V_2 = L_7;
			// break;
			goto IL_003e;
		}

IL_0034:
		{
			// base.UpdateDualAxisData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_8 = ___interactionMapping0;
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_9 = ___inputDevice1;
			GenericXRSDKController_UpdateDualAxisData_m79A0E7F54CC642ADBBFC2877BBD7BC19617657F9(__this, L_8, L_9, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_003e:
		{
			// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_10 = V_2;
			bool L_11 = InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_10, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0051;
			}
		}

IL_004a:
		{
			// interactionMapping.Vector2Data = axisData;
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_12 = ___interactionMapping0;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_3;
			NullCheck(L_12);
			MixedRealityInteractionMapping_set_Vector2Data_m34A5434E06F3D058D488D28CC23923822C0C3EC6(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0051:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_14 = ___interactionMapping0;
			NullCheck(L_14);
			bool L_15 = MixedRealityInteractionMapping_get_Changed_m886F4AC56E5DECCE558B035AAF28C5EEA3A0C419(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0081;
			}
		}

IL_0059:
		{
			// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
			RuntimeObject* L_16 = CoreServices_get_InputSystem_m4CF0F1C2A343E9195064924063AE654503FAD91B(/*hidden argument*/NULL);
			RuntimeObject* L_17 = L_16;
			G_B11_0 = L_17;
			if (L_17)
			{
				G_B12_0 = L_17;
				goto IL_0064;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_0064:
		{
			RuntimeObject* L_18 = BaseController_get_InputSource_m099C933B28A551A1253F1CC546DE14870205D266_inline(__this, /*hidden argument*/NULL);
			uint8_t L_19 = BaseController_get_ControllerHandedness_m9FE8C79AEE6D6CE1CFD464E6D9B119CB81F847B7_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_20 = ___interactionMapping0;
			NullCheck(L_20);
			MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_21 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m212D8C701E9E02CA1252986C424A71DE87B52C98_inline(L_20, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * L_22 = ___interactionMapping0;
			NullCheck(L_22);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = MixedRealityInteractionMapping_get_Vector2Data_mFD7794C3864ABEBAB30F0FDBB460819C9CD8C60B_inline(L_22, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_tCD4D0485832D3BFEBFB6B72F3308B68FE366C72D_il2cpp_TypeInfo_var, G_B12_0, L_18, L_19, L_21, L_23);
		}

IL_0081:
		{
			// }
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__cctor_mBEFAA3455FC34FA3B7C8F3E085EF2362DFC573C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController__cctor_mBEFAA3455FC34FA3B7C8F3E085EF2362DFC573C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateButtonData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteralABD5F4324F8E290A780012AFF491A3597F139F66, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_il2cpp_TypeInfo_var))->set_UpdateButtonDataPerfMarker_27(L_0);
		// private static readonly ProfilerMarker UpdateDualAxisDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateDualAxisData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral762F1DDFCE2D3B4BAFEBDC0DC14EB2F6DA9FBF78, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t881B33805B46D73CF48477D11B432FE1313862AB_il2cpp_TypeInfo_var))->set_UpdateDualAxisDataPerfMarker_28(L_1);
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
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_ISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_mA30D35EC0827E989D4BFD0AE12441471A4CB7EEB (XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_mA30D35EC0827E989D4BFD0AE12441471A4CB7EEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_IHolographicFramePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_mDB9BA3DA6499ADBB748410CC70346F83FC739B38 (XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_mDB9BA3DA6499ADBB748410CC70346F83FC739B38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m9520F7D717A84BDCF4E8CE407AA4B23DD8A94D92 (XRSDKWindowsMixedRealityUtilitiesProvider_t7D044A0988B3E233A63397A1C594BB6753107FE4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  MixedRealityPose_get_ZeroIdentity_mF788A40F337BE4A5FE42CAC7FDD1219E80BA3A38_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityPose_get_ZeroIdentity_mF788A40F337BE4A5FE42CAC7FDD1219E80BA3A38Microsoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88_il2cpp_TypeInfo_var);
		MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  L_0 = ((MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA48082C605D463C5399672CC6946E28E7F5DACA8_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m53F0DB6E21C15FADF150E594CAC78720183BBCCC_inline (MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m82DD69A46B6A1A91849051B595F87C2826A9AFC3_inline (MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m099C933B28A551A1253F1CC546DE14870205D266_inline (BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m9FE8C79AEE6D6CE1CFD464E6D9B119CB81F847B7_inline (BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  MixedRealityInteractionMapping_get_MixedRealityInputAction_m212D8C701E9E02CA1252986C424A71DE87B52C98_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  MixedRealityInteractionMapping_get_PoseData_mB88C8D3B49CA4F5E6649E41F543D15F567422109_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88  L_0 = __this->get_poseData_17();
		return L_0;
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m24BFC06E9439D012FD627C3568C48138CFBBC62C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_UtilitiesProvider_m24BFC06E9439D012FD627C3568C48138CFBBC62CMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m7ADC512CB2AE14E1CC73AE27487A356A1DF5521F_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_set_UtilitiesProvider_m7ADC512CB2AE14E1CC73AE27487A356A1DF5521FMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t74100CF702B91BAE3C8C30B4BF0688F43C90DFB5_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m090793F2466AA40150557E82F4BB426E98F637F2_inline (BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD * __this, const RuntimeMethod* method)
{
	{
		// protected IMixedRealitySpatialAwarenessSystem SpatialAwarenessSystem { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CSpatialAwarenessSystemU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mB447AD60A3393D31F4A27407009D90FBBEF5406A_inline (BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_mC0A37CF2BFB1D6378866EA918D2938EF8C0CEC3C_inline (BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_m2BF4D0C188A24F1CEFCD59867BC10BE2567B6EB7_inline (BaseSpatialObserver_t5687FA29E055106A5722D56B8A7A8DD8E9AAD4CD * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_mA3358858FCCAF7C5788E37FE9E4BCAEAC3878A21_inline (BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492 * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* BaseController_get_Interactions_mE29455CB2FF949B2CFA2D3EC7B349F70A58B1913_inline (BaseController_tCFE187A3C5AA7480E93E58F40F2599CAD0998492 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_tA771CCA0A3C436CAE988773DC7B28448E6BAEFF7* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPose_get_Rotation_m0C7CEE0332ED0ABEACB6F1AAD5ACA2819915ECD0_inline (MixedRealityPose_t8CDF5712CFCA8F210B525F433BD8629CD1778C88 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_rotation_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m87E2BD48FF602174CED5CB6C3C8B9B6BD235B812_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_mFD7794C3864ABEBAB30F0FDBB460819C9CD8C60B_inline (MixedRealityInteractionMapping_t6822F0723F888901C72A114F8F3BAFF29E02AB98 * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_vector2Data_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m0D6F6DF8636F7F87DD502024CD7B7391AA95443A_gshared_inline (BaseDataProvider_1_t057470281ADA03BD1F469907F52067098E9ABF77 * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_6();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* L_2 = (BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1*)L_2, (int32_t)L_3);
		return (Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 )L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
