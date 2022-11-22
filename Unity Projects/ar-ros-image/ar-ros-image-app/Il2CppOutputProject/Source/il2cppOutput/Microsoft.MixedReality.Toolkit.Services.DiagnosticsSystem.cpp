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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls
struct DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler
struct IMixedRealityDiagnosticsHandler_t41A1E14B36268A20DEBF3EB11298E9C64234E280;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_tC7C9DF661C81A126C67ADF1FBD41BD489F2806C4;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c
struct U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[]
struct FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914;
// Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl
struct VisualProfilerControl_t8BCDF8A7F747003781C5AD90DE449789F6E8132F;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_t0993931C912B539D340604C9D40F54B5D3ED366B;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA3E2F4825F4FE6184A4018667CC6872102B285D4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t29641CFFA5034271C0EA7A76D9DAD51FDDA88091;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tCD4D0485832D3BFEBFB6B72F3308B68FE366C72D;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t829F6F22BF7FC048E6262D1DD57519E6DD898937;
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
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// Windows.Media.Capture.AppCapture
struct AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F;
// Windows.Media.Capture.IAppCaptureStatics
struct IAppCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5;
// Windows.Media.Capture.IAppCaptureStatics2
struct IAppCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDiagnosticsHandler_t41A1E14B36268A20DEBF3EB11298E9C64234E280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDiagnosticsSystem_tC7C9DF661C81A126C67ADF1FBD41BD489F2806C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0085F04FFAF54410F314A1739CA00743371D3A5B;
IL2CPP_EXTERN_C String_t* _stringLiteral00B4962751241BFC456D62F55CD52E1FB605C35A;
IL2CPP_EXTERN_C String_t* _stringLiteral03B522CE1E75D4BC6FD87A128293DA78F5A7A8B2;
IL2CPP_EXTERN_C String_t* _stringLiteral05B84FE308CD15E1143E40CBE47A8E170208CF26;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8EC13A3AA3AD0DF348D45AF23180EF013500EE;
IL2CPP_EXTERN_C String_t* _stringLiteral10091FE4A98C623CD25DBBAE02B40227888E2A05;
IL2CPP_EXTERN_C String_t* _stringLiteral161CC1554C28A07BB6619DE2ECA2476C88D33206;
IL2CPP_EXTERN_C String_t* _stringLiteral222EE475F83066C082A9FBBF36EEBE913D927E44;
IL2CPP_EXTERN_C String_t* _stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A2E2357C56DD659D0DC9E3D8ECE1D8242034491;
IL2CPP_EXTERN_C String_t* _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF2279F9E306ACD0A4644E2B0F2F48A1E06D8D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1EDABC1898EAFFC1D0206E797937099E183170;
IL2CPP_EXTERN_C String_t* _stringLiteral469FB70DED7914453A23F856E6F6A00E7461E923;
IL2CPP_EXTERN_C String_t* _stringLiteral5483BF71B3B7138B1E91E9996288AA665C3E352D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BFD6CD9A18872E3AB00178F2F3588D3A16CC24A;
IL2CPP_EXTERN_C String_t* _stringLiteral5E044C5A2E8F3D4F49006EA5361F7FEB04CD498F;
IL2CPP_EXTERN_C String_t* _stringLiteral60DD62DDA6D0E9082284B2E9AF1CB4E2AFFEDFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral64DD60FE1A049FE6DB3EB1369DEC2E42BF428E21;
IL2CPP_EXTERN_C String_t* _stringLiteral65D74FFF5647D82919D65520B5818191A088D68F;
IL2CPP_EXTERN_C String_t* _stringLiteral6AC3D240BE15CDE5454371B7FC93D8B50949262C;
IL2CPP_EXTERN_C String_t* _stringLiteral79B3540931903460E13E9CD927E4557D4AD256AC;
IL2CPP_EXTERN_C String_t* _stringLiteral9315667F99D5901C8E062AAC730B9254258670B5;
IL2CPP_EXTERN_C String_t* _stringLiteral9814F6A062D8EFC52399AD84D9E97816030DC475;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3A49852D90133B9BEB027ECCB54020A3D56034;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3DD52F9FFE852BD44379425A5275B610A0FF33;
IL2CPP_EXTERN_C String_t* _stringLiteralACCAD3295265225D2B9E4FB826E53031E4D933F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB066E98ABD1787899F779143B75CEDB2486305D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB43776D3A8057BCB7F05D18BE4E19FA5C0A1171E;
IL2CPP_EXTERN_C String_t* _stringLiteralC1509AF6CE523E6E0AAE841E13775DE2A677759C;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1DF7778711AC043DE19DBF92546587DCB1A0BD;
IL2CPP_EXTERN_C String_t* _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8;
IL2CPP_EXTERN_C String_t* _stringLiteralD67803D21C492757F3E466439B3888A5240FB925;
IL2CPP_EXTERN_C String_t* _stringLiteralD777369C34F195D47CDC2C1B0483138A5255ACC6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA2CBFEB5B67015731670B2966A4EA649BDF8D7F;
IL2CPP_EXTERN_C String_t* _stringLiteralDE54FCF888EB0C889DFF7964C29E0C89A5613301;
IL2CPP_EXTERN_C String_t* _stringLiteralE5ECCF9C801D2FAB478551D01978F86BDB8307EF;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE2ACC6A2CAB5D8B552539E6ED55D7498F1BD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralEFDD3FFFDEBF8938E0ACF2BA36C21ADB990D938B;
IL2CPP_EXTERN_C String_t* _stringLiteralF11AF337B3340D92B47E93D08CB0B65A6AE686F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFA985590223FD7B5F8E5143E2BB5D95B806AC944;
IL2CPP_EXTERN_C String_t* _stringLiteralFBE2C10212C6D261022FC9B3F7F7D5A3F2318FB3;
IL2CPP_EXTERN_C String_t* _stringLiteralFE2CE179ADA45417D29FD8AAF094AD2E7762DB78;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_t41A1E14B36268A20DEBF3EB11298E9C64234E280_m883CFC19D1F5D64EA7602E44B913727110343878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventFunction_1__ctor_m065B4BEAE8A58DFD5F487380B2E2CB9ECE7D13C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B_mB46E6C039C0B919EB4EF7B85C4EE61B2FE4671DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3_m1E7C8B52F2F4E7EB5E7EB3421191EC5DB032CE21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_m8250E5F2121C69D2F220E34C9F52F3E6DEF47470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tFC4B610AA93D458B55F646D84646AA041D82E5C5_m06B6261EA33FAF96D196B63F19E3CF18D09B8FED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tFC4B610AA93D458B55F646D84646AA041D82E5C5_mA4E0FF7007746A6294ED5F21EC3A0B726BEEF04B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__64_0_m17B8CBA47976941BB395559690A96B452D9A5DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_Microsoft_MixedReality_Toolkit_Input_IMixedRealitySpeechHandler_OnSpeechKeywordRecognized_mFC9FDA3296EB974E12A2EB76354E01164238A091_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_OnDisable_m22E1AF418114CD57C9C3A25CCD7AA22440DE3E45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_OnEnable_mBB04171FF824467CFA240EB0F0533CE5B1F4FC30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_ToggleDiagnostics_m66CD3C24C0593C59A9B44853EAF9C1FD7701D46C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_ToggleProfiler_m47D9536F7A3DFBA197AB70772D44D485BEDA129E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_CreateVisualizations_m17533FC2CE2A71138FC2B66A81422C4CA1BB86A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_Destroy_m4AD17DCF398580798781A17C253AEF1C86F5129C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_Initialize_mE04F0CFFE82EAEC37040BED710C39338E098FED0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m9BA4C1D33111B88BD681A400E7A841CC2BA5BEB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem__cctor_mFD4D5610F2E4166D60B659153995061D15FED413_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem__ctor_m897F963026C8E9DE785F29AE1357F314BEFD2D50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_get_DiagnosticsSystemProfile_m4EECB9D4E7DBFCC80AEEFD5237AFFD1D5616C4C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_get_SourceName_m756BA925A38A6156AB876C677ED2388752084087_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_FrameSampleRate_mDCE0AEC9F19120F356FA31CD168A931E29185ADD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_ShowFrameInfo_m1946D8201BB320662E7FCEBC9F541ED1AC2B8BD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m662C8185FE00C822C5BEA98F4D07B75E58B96665_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_mE40BBE38E73DA4B1422BAEBAC2445A344D2A9446_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_ShowProfiler_mF0DBD9D92F639CDDD84511D3C5C2C4714EA0FE81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowAnchor_m700717BC04EB560300AE74FF237EE79C70006478_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m36230A26CD1FD4C7A101C2B9CA70157BDAB035DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowOffset_m7ECCEB8198AB4DF23FECE6FD13DBAA93AFE9F869_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowScale_m4C646047363B0BE3F3C5D8F057F01C0A6C5C5675_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_AverageFrameTiming_mEC3E2C15FAD5602EBE090962CA0BB25710863DFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m182830EF752E46209510B56B6D7043B32AF09C1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_BuildWindow_m1771377B714D7C28832FB7669AC34C8167A57A60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_mCFBDEAF5A8089836FD001E0D9B119949123FAB1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateFrameColor_mC4FE6FD4C59E22ABE394DEE50D66C34056D88798_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m1FDF7F2E31146BB12F1718EC2961B72E640B42F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mDC5A1517E45D53B0F318EFEE1C9BB5CB6F4E23F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CreateAnchor_m7B4F08E4948959A6E9CF821CEF76060B1A9A347E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CreateQuad_m2959204A81C547C44B02E1C6B88899F0CD832706_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_InitializeRenderer_mF782634B8881ADF600AA6EEA7540C4AAA0021168_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_LateUpdate_m9261E9CC9117EF6AE700538A339DEFA7395D1076_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_MemoryItoA_m86AF3C6BAD948A447946DE6A3CFF738AE41798ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_MemoryUsageToString_mFF9746DE32CAE910FE353BC6FA9AB78773B27AEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_OnDestroy_mD6ADDB05318BB77E005D2A5567E38C00D8033AD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_Reset_m9AEDBA4194A858134DC643478E2C0D7573D971ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mFBC69344DD46F8C2E6BBEEF586C99CD1C8C65911_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler__cctor_m7E87ED30F4D3CC2E00376280325C67F2375CA51F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler__ctor_mCB6DE1740CDFCD3CFAB06BCCFA7CBFFB9495FF24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mC540A926088CA60DD5C519DD6C53F333EF15753D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m7688CC80A69CB421F68E2F742CB665A2E1D12B25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_set_WindowScale_m51EC76C4189E3804F5C01D83759C6ED080CC480D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__64_0_m17B8CBA47976941BB395559690A96B452D9A5DA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mA328EF010B5877EC8EAA76388C6821DD5A389D21_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualProfilerControl_SetProfilerVisibility_mB98A6295CBD3B924041ABA43FC5A867A6F910E77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualProfilerControl_ToggleProfiler_mFF061E4718F458A4A296AEA9BED3D588872CEAEF_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAppCapture_t6045FB26D6AD35D26E5B9E5B22C37F4B029CC0EC;

struct FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3;
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCA31423A47DD51360DE4AA7A970642B9C60204FE 
{
public:

public:
};


// System.Object

// Windows.Media.Capture.IAppCaptureStatics
struct NOVTABLE IAppCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics_GetForCurrentView_mB76690492CE159FD74C8A979D7803AA0FE851403(IAppCapture_t6045FB26D6AD35D26E5B9E5B22C37F4B029CC0EC** comReturnValue) = 0;
};
// Windows.Media.Capture.IAppCaptureStatics2
struct NOVTABLE IAppCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics2_U24__Stripped0_SetAllowedAsync_m8A25AFCE0E44434A3C0DEE8CCE69273226510F69() = 0;
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


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c
struct U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::<>9
	U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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


// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// UnityEngine.FrameTiming
struct FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC 
{
public:
	// System.UInt64 UnityEngine.FrameTiming::cpuTimePresentCalled
	uint64_t ___cpuTimePresentCalled_0;
	// System.Double UnityEngine.FrameTiming::cpuFrameTime
	double ___cpuFrameTime_1;
	// System.UInt64 UnityEngine.FrameTiming::cpuTimeFrameComplete
	uint64_t ___cpuTimeFrameComplete_2;
	// System.Double UnityEngine.FrameTiming::gpuFrameTime
	double ___gpuFrameTime_3;
	// System.Single UnityEngine.FrameTiming::heightScale
	float ___heightScale_4;
	// System.Single UnityEngine.FrameTiming::widthScale
	float ___widthScale_5;
	// System.UInt32 UnityEngine.FrameTiming::syncInterval
	uint32_t ___syncInterval_6;

public:
	inline static int32_t get_offset_of_cpuTimePresentCalled_0() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___cpuTimePresentCalled_0)); }
	inline uint64_t get_cpuTimePresentCalled_0() const { return ___cpuTimePresentCalled_0; }
	inline uint64_t* get_address_of_cpuTimePresentCalled_0() { return &___cpuTimePresentCalled_0; }
	inline void set_cpuTimePresentCalled_0(uint64_t value)
	{
		___cpuTimePresentCalled_0 = value;
	}

	inline static int32_t get_offset_of_cpuFrameTime_1() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___cpuFrameTime_1)); }
	inline double get_cpuFrameTime_1() const { return ___cpuFrameTime_1; }
	inline double* get_address_of_cpuFrameTime_1() { return &___cpuFrameTime_1; }
	inline void set_cpuFrameTime_1(double value)
	{
		___cpuFrameTime_1 = value;
	}

	inline static int32_t get_offset_of_cpuTimeFrameComplete_2() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___cpuTimeFrameComplete_2)); }
	inline uint64_t get_cpuTimeFrameComplete_2() const { return ___cpuTimeFrameComplete_2; }
	inline uint64_t* get_address_of_cpuTimeFrameComplete_2() { return &___cpuTimeFrameComplete_2; }
	inline void set_cpuTimeFrameComplete_2(uint64_t value)
	{
		___cpuTimeFrameComplete_2 = value;
	}

	inline static int32_t get_offset_of_gpuFrameTime_3() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___gpuFrameTime_3)); }
	inline double get_gpuFrameTime_3() const { return ___gpuFrameTime_3; }
	inline double* get_address_of_gpuFrameTime_3() { return &___gpuFrameTime_3; }
	inline void set_gpuFrameTime_3(double value)
	{
		___gpuFrameTime_3 = value;
	}

	inline static int32_t get_offset_of_heightScale_4() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___heightScale_4)); }
	inline float get_heightScale_4() const { return ___heightScale_4; }
	inline float* get_address_of_heightScale_4() { return &___heightScale_4; }
	inline void set_heightScale_4(float value)
	{
		___heightScale_4 = value;
	}

	inline static int32_t get_offset_of_widthScale_5() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___widthScale_5)); }
	inline float get_widthScale_5() const { return ___widthScale_5; }
	inline float* get_address_of_widthScale_5() { return &___widthScale_5; }
	inline void set_widthScale_5(float value)
	{
		___widthScale_5 = value;
	}

	inline static int32_t get_offset_of_syncInterval_6() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___syncInterval_6)); }
	inline uint32_t get_syncInterval_6() const { return ___syncInterval_6; }
	inline uint32_t* get_address_of_syncInterval_6() { return &___syncInterval_6; }
	inline void set_syncInterval_6(uint32_t value)
	{
		___syncInterval_6 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
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


// UnityEngine.Vector4
struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Windows.Media.Capture.AppCapture
struct AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F  : public Il2CppComObject
{
public:

public:
};

struct AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics
	IAppCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5* ____iappCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics2
	IAppCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB* ____iappCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.AppCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5* get_____iappCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5()
	{
		IAppCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5* returnValue = ____iappCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAppCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5>((&____iappCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics_t3AC5645D296D2CD4981ABAA5095B1310BA40D9F5;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB* get_____iappCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB()
	{
		IAppCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB* returnValue = ____iappCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAppCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB>((&____iappCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics2_t8517F380DC07A2BEE6C603D572A3BEE84EA374AB;
			}
		}
		return returnValue;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor
struct FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor::percentageOfTarget
	float ___percentageOfTarget_0;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor::color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color_1;

public:
	inline static int32_t get_offset_of_percentageOfTarget_0() { return static_cast<int32_t>(offsetof(FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD, ___percentageOfTarget_0)); }
	inline float get_percentageOfTarget_0() const { return ___percentageOfTarget_0; }
	inline float* get_address_of_percentageOfTarget_0() { return &___percentageOfTarget_0; }
	inline void set_percentageOfTarget_0(float value)
	{
		___percentageOfTarget_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD, ___color_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_color_1() const { return ___color_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___color_1 = value;
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


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_tD99219E32C99700EC95F11B73B8981895D99F3C3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_tD99219E32C99700EC95F11B73B8981895D99F3C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.TimeSpan
struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
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


// UnityEngine.Bounds
struct Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
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


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.MotionVectorGenerationMode
struct MotionVectorGenerationMode_tB3408BD37D803441061663F0BAD2EE29B32D2B63 
{
public:
	// System.Int32 UnityEngine.MotionVectorGenerationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MotionVectorGenerationMode_tB3408BD37D803441061663F0BAD2EE29B32D2B63, ___value___2)); }
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

// UnityEngine.PrimitiveType
struct PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.LightProbeUsage
struct LightProbeUsage_tC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8 
{
public:
	// System.Int32 UnityEngine.Rendering.LightProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightProbeUsage_tC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ReflectionProbeUsage
struct ReflectionProbeUsage_tAFF366D7F5E43B871C7302C4D7D0F48859E7B31A 
{
public:
	// System.Int32 UnityEngine.Rendering.ReflectionProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeUsage_tAFF366D7F5E43B871C7302C4D7D0F48859E7B31A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowCastingMode
struct ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B  : public GenericBaseEventData_t2C662F6C9EC24F2F30BFB7671EC53D9FCB198463
{
public:

public:
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

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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


// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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

// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
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


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7, ___action_4)); }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_marshaled_com ___action_4;
};

// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1  : public BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showDiagnostics
	bool ___showDiagnostics_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showProfiler
	bool ___showProfiler_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showFrameInfo
	bool ___showFrameInfo_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showMemoryStats
	bool ___showMemoryStats_8;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::frameSampleRate
	float ___frameSampleRate_9;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowAnchor
	int32_t ___windowAnchor_10;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___windowOffset_11;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowScale
	float ___windowScale_12;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowFollowSpeed
	float ___windowFollowSpeed_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::defaultInstancedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultInstancedMaterial_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_15;

public:
	inline static int32_t get_offset_of_showDiagnostics_5() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___showDiagnostics_5)); }
	inline bool get_showDiagnostics_5() const { return ___showDiagnostics_5; }
	inline bool* get_address_of_showDiagnostics_5() { return &___showDiagnostics_5; }
	inline void set_showDiagnostics_5(bool value)
	{
		___showDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_showProfiler_6() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___showProfiler_6)); }
	inline bool get_showProfiler_6() const { return ___showProfiler_6; }
	inline bool* get_address_of_showProfiler_6() { return &___showProfiler_6; }
	inline void set_showProfiler_6(bool value)
	{
		___showProfiler_6 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_7() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___showFrameInfo_7)); }
	inline bool get_showFrameInfo_7() const { return ___showFrameInfo_7; }
	inline bool* get_address_of_showFrameInfo_7() { return &___showFrameInfo_7; }
	inline void set_showFrameInfo_7(bool value)
	{
		___showFrameInfo_7 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_8() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___showMemoryStats_8)); }
	inline bool get_showMemoryStats_8() const { return ___showMemoryStats_8; }
	inline bool* get_address_of_showMemoryStats_8() { return &___showMemoryStats_8; }
	inline void set_showMemoryStats_8(bool value)
	{
		___showMemoryStats_8 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_9() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___frameSampleRate_9)); }
	inline float get_frameSampleRate_9() const { return ___frameSampleRate_9; }
	inline float* get_address_of_frameSampleRate_9() { return &___frameSampleRate_9; }
	inline void set_frameSampleRate_9(float value)
	{
		___frameSampleRate_9 = value;
	}

	inline static int32_t get_offset_of_windowAnchor_10() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___windowAnchor_10)); }
	inline int32_t get_windowAnchor_10() const { return ___windowAnchor_10; }
	inline int32_t* get_address_of_windowAnchor_10() { return &___windowAnchor_10; }
	inline void set_windowAnchor_10(int32_t value)
	{
		___windowAnchor_10 = value;
	}

	inline static int32_t get_offset_of_windowOffset_11() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___windowOffset_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_windowOffset_11() const { return ___windowOffset_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_windowOffset_11() { return &___windowOffset_11; }
	inline void set_windowOffset_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___windowOffset_11 = value;
	}

	inline static int32_t get_offset_of_windowScale_12() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___windowScale_12)); }
	inline float get_windowScale_12() const { return ___windowScale_12; }
	inline float* get_address_of_windowScale_12() { return &___windowScale_12; }
	inline void set_windowScale_12(float value)
	{
		___windowScale_12 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_13() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___windowFollowSpeed_13)); }
	inline float get_windowFollowSpeed_13() const { return ___windowFollowSpeed_13; }
	inline float* get_address_of_windowFollowSpeed_13() { return &___windowFollowSpeed_13; }
	inline void set_windowFollowSpeed_13(float value)
	{
		___windowFollowSpeed_13 = value;
	}

	inline static int32_t get_offset_of_defaultInstancedMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___defaultInstancedMaterial_14)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultInstancedMaterial_14() const { return ___defaultInstancedMaterial_14; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultInstancedMaterial_14() { return &___defaultInstancedMaterial_14; }
	inline void set_defaultInstancedMaterial_14(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultInstancedMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstancedMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_15() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1, ___showProfilerDuringMRC_15)); }
	inline bool get_showProfilerDuringMRC_15() const { return ___showProfilerDuringMRC_15; }
	inline bool* get_address_of_showProfilerDuringMRC_15() { return &___showProfilerDuringMRC_15; }
	inline void set_showProfilerDuringMRC_15(bool value)
	{
		___showProfilerDuringMRC_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370  : public BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_14;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___diagnosticVisualizationParent_15;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * ___visualProfiler_16;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * ___diagnosticsSystemProfile_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_21;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_22;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * ___eventData_23;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_26;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___windowOffset_27;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_28;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_30;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___U3CNameU3Ek__BackingField_14)); }
	inline String_t* get_U3CNameU3Ek__BackingField_14() const { return ___U3CNameU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_14() { return &___U3CNameU3Ek__BackingField_14; }
	inline void set_U3CNameU3Ek__BackingField_14(String_t* value)
	{
		___U3CNameU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_15() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___diagnosticVisualizationParent_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_diagnosticVisualizationParent_15() const { return ___diagnosticVisualizationParent_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_diagnosticVisualizationParent_15() { return &___diagnosticVisualizationParent_15; }
	inline void set_diagnosticVisualizationParent_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___diagnosticVisualizationParent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_15), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_16() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___visualProfiler_16)); }
	inline MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * get_visualProfiler_16() const { return ___visualProfiler_16; }
	inline MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 ** get_address_of_visualProfiler_16() { return &___visualProfiler_16; }
	inline void set_visualProfiler_16(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * value)
	{
		___visualProfiler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_16), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___diagnosticsSystemProfile_17)); }
	inline MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * get_diagnosticsSystemProfile_17() const { return ___diagnosticsSystemProfile_17; }
	inline MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 ** get_address_of_diagnosticsSystemProfile_17() { return &___diagnosticsSystemProfile_17; }
	inline void set_diagnosticsSystemProfile_17(MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * value)
	{
		___diagnosticsSystemProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_18() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___showDiagnostics_18)); }
	inline bool get_showDiagnostics_18() const { return ___showDiagnostics_18; }
	inline bool* get_address_of_showDiagnostics_18() { return &___showDiagnostics_18; }
	inline void set_showDiagnostics_18(bool value)
	{
		___showDiagnostics_18 = value;
	}

	inline static int32_t get_offset_of_showProfiler_19() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___showProfiler_19)); }
	inline bool get_showProfiler_19() const { return ___showProfiler_19; }
	inline bool* get_address_of_showProfiler_19() { return &___showProfiler_19; }
	inline void set_showProfiler_19(bool value)
	{
		___showProfiler_19 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_20() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___showFrameInfo_20)); }
	inline bool get_showFrameInfo_20() const { return ___showFrameInfo_20; }
	inline bool* get_address_of_showFrameInfo_20() { return &___showFrameInfo_20; }
	inline void set_showFrameInfo_20(bool value)
	{
		___showFrameInfo_20 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___showMemoryStats_21)); }
	inline bool get_showMemoryStats_21() const { return ___showMemoryStats_21; }
	inline bool* get_address_of_showMemoryStats_21() { return &___showMemoryStats_21; }
	inline void set_showMemoryStats_21(bool value)
	{
		___showMemoryStats_21 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___frameSampleRate_22)); }
	inline float get_frameSampleRate_22() const { return ___frameSampleRate_22; }
	inline float* get_address_of_frameSampleRate_22() { return &___frameSampleRate_22; }
	inline void set_frameSampleRate_22(float value)
	{
		___frameSampleRate_22 = value;
	}

	inline static int32_t get_offset_of_eventData_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___eventData_23)); }
	inline DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * get_eventData_23() const { return ___eventData_23; }
	inline DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B ** get_address_of_eventData_23() { return &___eventData_23; }
	inline void set_eventData_23(DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * value)
	{
		___eventData_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_23), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___windowAnchor_26)); }
	inline int32_t get_windowAnchor_26() const { return ___windowAnchor_26; }
	inline int32_t* get_address_of_windowAnchor_26() { return &___windowAnchor_26; }
	inline void set_windowAnchor_26(int32_t value)
	{
		___windowAnchor_26 = value;
	}

	inline static int32_t get_offset_of_windowOffset_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___windowOffset_27)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_windowOffset_27() const { return ___windowOffset_27; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_windowOffset_27() { return &___windowOffset_27; }
	inline void set_windowOffset_27(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___windowOffset_27 = value;
	}

	inline static int32_t get_offset_of_windowScale_28() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___windowScale_28)); }
	inline float get_windowScale_28() const { return ___windowScale_28; }
	inline float* get_address_of_windowScale_28() { return &___windowScale_28; }
	inline void set_windowScale_28(float value)
	{
		___windowScale_28 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_29() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___windowFollowSpeed_29)); }
	inline float get_windowFollowSpeed_29() const { return ___windowFollowSpeed_29; }
	inline float* get_address_of_windowFollowSpeed_29() { return &___windowFollowSpeed_29; }
	inline void set_windowFollowSpeed_29(float value)
	{
		___windowFollowSpeed_29 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_30() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370, ___showProfilerDuringMRC_30)); }
	inline bool get_showProfilerDuringMRC_30() const { return ___showProfilerDuringMRC_30; }
	inline bool* get_address_of_showProfilerDuringMRC_30() { return &___showProfilerDuringMRC_30; }
	inline void set_showProfilerDuringMRC_30(bool value)
	{
		___showProfilerDuringMRC_30 = value;
	}
};

struct MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnDiagnosticsChangedPerfMarker_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F * ___OnDiagnosticsChanged_25;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChangedPerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_StaticFields, ___OnDiagnosticsChangedPerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnDiagnosticsChangedPerfMarker_24() const { return ___OnDiagnosticsChangedPerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnDiagnosticsChangedPerfMarker_24() { return &___OnDiagnosticsChangedPerfMarker_24; }
	inline void set_OnDiagnosticsChangedPerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnDiagnosticsChangedPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnDiagnosticsChanged_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_StaticFields, ___OnDiagnosticsChanged_25)); }
	inline EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F * get_OnDiagnosticsChanged_25() const { return ___OnDiagnosticsChanged_25; }
	inline EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F ** get_address_of_OnDiagnosticsChanged_25() { return &___OnDiagnosticsChanged_25; }
	inline void set_OnDiagnosticsChanged_25(EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F * value)
	{
		___OnDiagnosticsChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33  : public BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7  ___U3CCommandU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33, ___U3CCommandU3Ek__BackingField_7)); }
	inline SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7  get_U3CCommandU3Ek__BackingField_7() const { return ___U3CCommandU3Ek__BackingField_7; }
	inline SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7 * get_address_of_U3CCommandU3Ek__BackingField_7() { return &___U3CCommandU3Ek__BackingField_7; }
	inline void set_U3CCommandU3Ek__BackingField_7(SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7  value)
	{
		___U3CCommandU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCommandU3Ek__BackingField_7))->___action_4))->___description_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
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


// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls
struct DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::registeredForInput
	bool ___registeredForInput_4;

public:
	inline static int32_t get_offset_of_registeredForInput_4() { return static_cast<int32_t>(offsetof(DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3, ___registeredForInput_4)); }
	inline bool get_registeredForInput_4() const { return ___registeredForInput_4; }
	inline bool* get_address_of_registeredForInput_4() { return &___registeredForInput_4; }
	inline void set_registeredForInput_4(bool value)
	{
		___registeredForInput_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::<WindowParent>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CWindowParentU3Ek__BackingField_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::isVisible
	bool ___isVisible_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoVisible
	bool ___frameInfoVisible_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryStatsVisible
	bool ___memoryStatsVisible_20;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameSampleRate
	float ___frameSampleRate_21;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowAnchor
	int32_t ___windowAnchor_22;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___windowOffset_23;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowScale
	float ___windowScale_24;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowFollowSpeed
	float ___windowFollowSpeed_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_26;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::displayedDecimalDigits
	int32_t ___displayedDecimalDigits_27;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameRateColors
	FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* ___frameRateColors_28;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::baseColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___baseColor_29;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryUsedColor_30;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryPeakColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryPeakColor_31;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryLimitColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryLimitColor_32;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::window
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___window_33;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::background
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___background_34;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___cpuFrameRateText_35;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___gpuFrameRateText_36;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryStats
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___memoryStats_37;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___usedMemoryText_38;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___peakMemoryText_39;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___limitMemoryText_40;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::voiceCommandText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___voiceCommandText_41;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::mrtkText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___mrtkText_42;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedAnchor
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___usedAnchor_43;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakAnchor
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___peakAnchor_44;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowHorizontalRotation_45;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotationInverse
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowHorizontalRotationInverse_46;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowVerticalRotation_47;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotationInverse
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowVerticalRotationInverse_48;
	// UnityEngine.Matrix4x4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoMatrices
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___frameInfoMatrices_49;
	// UnityEngine.Vector4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoColors
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ___frameInfoColors_50;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoPropertyBlock
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___frameInfoPropertyBlock_51;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::colorID
	int32_t ___colorID_52;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::parentMatrixID
	int32_t ___parentMatrixID_53;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameCount
	int32_t ___frameCount_54;
	// System.Diagnostics.Stopwatch Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___stopwatch_55;
	// UnityEngine.FrameTiming[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameTimings
	FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___frameTimings_56;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___cpuFrameRateStrings_57;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___gpuFrameRateStrings_58;
	// System.Char[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stringBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer_59;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsage
	uint64_t ___memoryUsage_60;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryUsage
	uint64_t ___peakMemoryUsage_61;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryUsage
	uint64_t ___limitMemoryUsage_62;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultMaterial_63;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultInstancedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultInstancedMaterial_64;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___backgroundMaterial_65;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::foregroundMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___foregroundMaterial_66;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::textMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___textMaterial_67;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::quadMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___quadMesh_68;
	// Windows.Media.Capture.AppCapture Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::appCapture
	AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F * ___appCapture_69;

public:
	inline static int32_t get_offset_of_U3CWindowParentU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___U3CWindowParentU3Ek__BackingField_17)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CWindowParentU3Ek__BackingField_17() const { return ___U3CWindowParentU3Ek__BackingField_17; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CWindowParentU3Ek__BackingField_17() { return &___U3CWindowParentU3Ek__BackingField_17; }
	inline void set_U3CWindowParentU3Ek__BackingField_17(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CWindowParentU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWindowParentU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_isVisible_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___isVisible_18)); }
	inline bool get_isVisible_18() const { return ___isVisible_18; }
	inline bool* get_address_of_isVisible_18() { return &___isVisible_18; }
	inline void set_isVisible_18(bool value)
	{
		___isVisible_18 = value;
	}

	inline static int32_t get_offset_of_frameInfoVisible_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___frameInfoVisible_19)); }
	inline bool get_frameInfoVisible_19() const { return ___frameInfoVisible_19; }
	inline bool* get_address_of_frameInfoVisible_19() { return &___frameInfoVisible_19; }
	inline void set_frameInfoVisible_19(bool value)
	{
		___frameInfoVisible_19 = value;
	}

	inline static int32_t get_offset_of_memoryStatsVisible_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___memoryStatsVisible_20)); }
	inline bool get_memoryStatsVisible_20() const { return ___memoryStatsVisible_20; }
	inline bool* get_address_of_memoryStatsVisible_20() { return &___memoryStatsVisible_20; }
	inline void set_memoryStatsVisible_20(bool value)
	{
		___memoryStatsVisible_20 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___frameSampleRate_21)); }
	inline float get_frameSampleRate_21() const { return ___frameSampleRate_21; }
	inline float* get_address_of_frameSampleRate_21() { return &___frameSampleRate_21; }
	inline void set_frameSampleRate_21(float value)
	{
		___frameSampleRate_21 = value;
	}

	inline static int32_t get_offset_of_windowAnchor_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___windowAnchor_22)); }
	inline int32_t get_windowAnchor_22() const { return ___windowAnchor_22; }
	inline int32_t* get_address_of_windowAnchor_22() { return &___windowAnchor_22; }
	inline void set_windowAnchor_22(int32_t value)
	{
		___windowAnchor_22 = value;
	}

	inline static int32_t get_offset_of_windowOffset_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___windowOffset_23)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_windowOffset_23() const { return ___windowOffset_23; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_windowOffset_23() { return &___windowOffset_23; }
	inline void set_windowOffset_23(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___windowOffset_23 = value;
	}

	inline static int32_t get_offset_of_windowScale_24() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___windowScale_24)); }
	inline float get_windowScale_24() const { return ___windowScale_24; }
	inline float* get_address_of_windowScale_24() { return &___windowScale_24; }
	inline void set_windowScale_24(float value)
	{
		___windowScale_24 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_25() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___windowFollowSpeed_25)); }
	inline float get_windowFollowSpeed_25() const { return ___windowFollowSpeed_25; }
	inline float* get_address_of_windowFollowSpeed_25() { return &___windowFollowSpeed_25; }
	inline void set_windowFollowSpeed_25(float value)
	{
		___windowFollowSpeed_25 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_26() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___showProfilerDuringMRC_26)); }
	inline bool get_showProfilerDuringMRC_26() const { return ___showProfilerDuringMRC_26; }
	inline bool* get_address_of_showProfilerDuringMRC_26() { return &___showProfilerDuringMRC_26; }
	inline void set_showProfilerDuringMRC_26(bool value)
	{
		___showProfilerDuringMRC_26 = value;
	}

	inline static int32_t get_offset_of_displayedDecimalDigits_27() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___displayedDecimalDigits_27)); }
	inline int32_t get_displayedDecimalDigits_27() const { return ___displayedDecimalDigits_27; }
	inline int32_t* get_address_of_displayedDecimalDigits_27() { return &___displayedDecimalDigits_27; }
	inline void set_displayedDecimalDigits_27(int32_t value)
	{
		___displayedDecimalDigits_27 = value;
	}

	inline static int32_t get_offset_of_frameRateColors_28() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___frameRateColors_28)); }
	inline FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* get_frameRateColors_28() const { return ___frameRateColors_28; }
	inline FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914** get_address_of_frameRateColors_28() { return &___frameRateColors_28; }
	inline void set_frameRateColors_28(FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* value)
	{
		___frameRateColors_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameRateColors_28), (void*)value);
	}

	inline static int32_t get_offset_of_baseColor_29() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___baseColor_29)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_baseColor_29() const { return ___baseColor_29; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_baseColor_29() { return &___baseColor_29; }
	inline void set_baseColor_29(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___baseColor_29 = value;
	}

	inline static int32_t get_offset_of_memoryUsedColor_30() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___memoryUsedColor_30)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryUsedColor_30() const { return ___memoryUsedColor_30; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryUsedColor_30() { return &___memoryUsedColor_30; }
	inline void set_memoryUsedColor_30(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryUsedColor_30 = value;
	}

	inline static int32_t get_offset_of_memoryPeakColor_31() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___memoryPeakColor_31)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryPeakColor_31() const { return ___memoryPeakColor_31; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryPeakColor_31() { return &___memoryPeakColor_31; }
	inline void set_memoryPeakColor_31(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryPeakColor_31 = value;
	}

	inline static int32_t get_offset_of_memoryLimitColor_32() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___memoryLimitColor_32)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryLimitColor_32() const { return ___memoryLimitColor_32; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryLimitColor_32() { return &___memoryLimitColor_32; }
	inline void set_memoryLimitColor_32(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryLimitColor_32 = value;
	}

	inline static int32_t get_offset_of_window_33() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___window_33)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_window_33() const { return ___window_33; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_window_33() { return &___window_33; }
	inline void set_window_33(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___window_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_33), (void*)value);
	}

	inline static int32_t get_offset_of_background_34() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___background_34)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_background_34() const { return ___background_34; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_background_34() { return &___background_34; }
	inline void set_background_34(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___background_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_34), (void*)value);
	}

	inline static int32_t get_offset_of_cpuFrameRateText_35() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___cpuFrameRateText_35)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_cpuFrameRateText_35() const { return ___cpuFrameRateText_35; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_cpuFrameRateText_35() { return &___cpuFrameRateText_35; }
	inline void set_cpuFrameRateText_35(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___cpuFrameRateText_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpuFrameRateText_35), (void*)value);
	}

	inline static int32_t get_offset_of_gpuFrameRateText_36() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___gpuFrameRateText_36)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_gpuFrameRateText_36() const { return ___gpuFrameRateText_36; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_gpuFrameRateText_36() { return &___gpuFrameRateText_36; }
	inline void set_gpuFrameRateText_36(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___gpuFrameRateText_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpuFrameRateText_36), (void*)value);
	}

	inline static int32_t get_offset_of_memoryStats_37() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___memoryStats_37)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_memoryStats_37() const { return ___memoryStats_37; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_memoryStats_37() { return &___memoryStats_37; }
	inline void set_memoryStats_37(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___memoryStats_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memoryStats_37), (void*)value);
	}

	inline static int32_t get_offset_of_usedMemoryText_38() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___usedMemoryText_38)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_usedMemoryText_38() const { return ___usedMemoryText_38; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_usedMemoryText_38() { return &___usedMemoryText_38; }
	inline void set_usedMemoryText_38(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___usedMemoryText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedMemoryText_38), (void*)value);
	}

	inline static int32_t get_offset_of_peakMemoryText_39() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___peakMemoryText_39)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_peakMemoryText_39() const { return ___peakMemoryText_39; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_peakMemoryText_39() { return &___peakMemoryText_39; }
	inline void set_peakMemoryText_39(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___peakMemoryText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakMemoryText_39), (void*)value);
	}

	inline static int32_t get_offset_of_limitMemoryText_40() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___limitMemoryText_40)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_limitMemoryText_40() const { return ___limitMemoryText_40; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_limitMemoryText_40() { return &___limitMemoryText_40; }
	inline void set_limitMemoryText_40(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___limitMemoryText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitMemoryText_40), (void*)value);
	}

	inline static int32_t get_offset_of_voiceCommandText_41() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___voiceCommandText_41)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_voiceCommandText_41() const { return ___voiceCommandText_41; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_voiceCommandText_41() { return &___voiceCommandText_41; }
	inline void set_voiceCommandText_41(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___voiceCommandText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceCommandText_41), (void*)value);
	}

	inline static int32_t get_offset_of_mrtkText_42() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___mrtkText_42)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_mrtkText_42() const { return ___mrtkText_42; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_mrtkText_42() { return &___mrtkText_42; }
	inline void set_mrtkText_42(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___mrtkText_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mrtkText_42), (void*)value);
	}

	inline static int32_t get_offset_of_usedAnchor_43() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___usedAnchor_43)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_usedAnchor_43() const { return ___usedAnchor_43; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_usedAnchor_43() { return &___usedAnchor_43; }
	inline void set_usedAnchor_43(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___usedAnchor_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedAnchor_43), (void*)value);
	}

	inline static int32_t get_offset_of_peakAnchor_44() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___peakAnchor_44)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_peakAnchor_44() const { return ___peakAnchor_44; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_peakAnchor_44() { return &___peakAnchor_44; }
	inline void set_peakAnchor_44(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___peakAnchor_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakAnchor_44), (void*)value);
	}

	inline static int32_t get_offset_of_windowHorizontalRotation_45() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___windowHorizontalRotation_45)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowHorizontalRotation_45() const { return ___windowHorizontalRotation_45; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowHorizontalRotation_45() { return &___windowHorizontalRotation_45; }
	inline void set_windowHorizontalRotation_45(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowHorizontalRotation_45 = value;
	}

	inline static int32_t get_offset_of_windowHorizontalRotationInverse_46() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___windowHorizontalRotationInverse_46)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowHorizontalRotationInverse_46() const { return ___windowHorizontalRotationInverse_46; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowHorizontalRotationInverse_46() { return &___windowHorizontalRotationInverse_46; }
	inline void set_windowHorizontalRotationInverse_46(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowHorizontalRotationInverse_46 = value;
	}

	inline static int32_t get_offset_of_windowVerticalRotation_47() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___windowVerticalRotation_47)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowVerticalRotation_47() const { return ___windowVerticalRotation_47; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowVerticalRotation_47() { return &___windowVerticalRotation_47; }
	inline void set_windowVerticalRotation_47(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowVerticalRotation_47 = value;
	}

	inline static int32_t get_offset_of_windowVerticalRotationInverse_48() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___windowVerticalRotationInverse_48)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowVerticalRotationInverse_48() const { return ___windowVerticalRotationInverse_48; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowVerticalRotationInverse_48() { return &___windowVerticalRotationInverse_48; }
	inline void set_windowVerticalRotationInverse_48(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowVerticalRotationInverse_48 = value;
	}

	inline static int32_t get_offset_of_frameInfoMatrices_49() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___frameInfoMatrices_49)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get_frameInfoMatrices_49() const { return ___frameInfoMatrices_49; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of_frameInfoMatrices_49() { return &___frameInfoMatrices_49; }
	inline void set_frameInfoMatrices_49(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		___frameInfoMatrices_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoMatrices_49), (void*)value);
	}

	inline static int32_t get_offset_of_frameInfoColors_50() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___frameInfoColors_50)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get_frameInfoColors_50() const { return ___frameInfoColors_50; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of_frameInfoColors_50() { return &___frameInfoColors_50; }
	inline void set_frameInfoColors_50(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		___frameInfoColors_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoColors_50), (void*)value);
	}

	inline static int32_t get_offset_of_frameInfoPropertyBlock_51() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___frameInfoPropertyBlock_51)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_frameInfoPropertyBlock_51() const { return ___frameInfoPropertyBlock_51; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_frameInfoPropertyBlock_51() { return &___frameInfoPropertyBlock_51; }
	inline void set_frameInfoPropertyBlock_51(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___frameInfoPropertyBlock_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoPropertyBlock_51), (void*)value);
	}

	inline static int32_t get_offset_of_colorID_52() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___colorID_52)); }
	inline int32_t get_colorID_52() const { return ___colorID_52; }
	inline int32_t* get_address_of_colorID_52() { return &___colorID_52; }
	inline void set_colorID_52(int32_t value)
	{
		___colorID_52 = value;
	}

	inline static int32_t get_offset_of_parentMatrixID_53() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___parentMatrixID_53)); }
	inline int32_t get_parentMatrixID_53() const { return ___parentMatrixID_53; }
	inline int32_t* get_address_of_parentMatrixID_53() { return &___parentMatrixID_53; }
	inline void set_parentMatrixID_53(int32_t value)
	{
		___parentMatrixID_53 = value;
	}

	inline static int32_t get_offset_of_frameCount_54() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___frameCount_54)); }
	inline int32_t get_frameCount_54() const { return ___frameCount_54; }
	inline int32_t* get_address_of_frameCount_54() { return &___frameCount_54; }
	inline void set_frameCount_54(int32_t value)
	{
		___frameCount_54 = value;
	}

	inline static int32_t get_offset_of_stopwatch_55() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___stopwatch_55)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_stopwatch_55() const { return ___stopwatch_55; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_stopwatch_55() { return &___stopwatch_55; }
	inline void set_stopwatch_55(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___stopwatch_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_55), (void*)value);
	}

	inline static int32_t get_offset_of_frameTimings_56() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___frameTimings_56)); }
	inline FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* get_frameTimings_56() const { return ___frameTimings_56; }
	inline FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3** get_address_of_frameTimings_56() { return &___frameTimings_56; }
	inline void set_frameTimings_56(FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* value)
	{
		___frameTimings_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameTimings_56), (void*)value);
	}

	inline static int32_t get_offset_of_cpuFrameRateStrings_57() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___cpuFrameRateStrings_57)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_cpuFrameRateStrings_57() const { return ___cpuFrameRateStrings_57; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_cpuFrameRateStrings_57() { return &___cpuFrameRateStrings_57; }
	inline void set_cpuFrameRateStrings_57(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___cpuFrameRateStrings_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpuFrameRateStrings_57), (void*)value);
	}

	inline static int32_t get_offset_of_gpuFrameRateStrings_58() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___gpuFrameRateStrings_58)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_gpuFrameRateStrings_58() const { return ___gpuFrameRateStrings_58; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_gpuFrameRateStrings_58() { return &___gpuFrameRateStrings_58; }
	inline void set_gpuFrameRateStrings_58(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___gpuFrameRateStrings_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpuFrameRateStrings_58), (void*)value);
	}

	inline static int32_t get_offset_of_stringBuffer_59() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___stringBuffer_59)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_stringBuffer_59() const { return ___stringBuffer_59; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_stringBuffer_59() { return &___stringBuffer_59; }
	inline void set_stringBuffer_59(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___stringBuffer_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuffer_59), (void*)value);
	}

	inline static int32_t get_offset_of_memoryUsage_60() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___memoryUsage_60)); }
	inline uint64_t get_memoryUsage_60() const { return ___memoryUsage_60; }
	inline uint64_t* get_address_of_memoryUsage_60() { return &___memoryUsage_60; }
	inline void set_memoryUsage_60(uint64_t value)
	{
		___memoryUsage_60 = value;
	}

	inline static int32_t get_offset_of_peakMemoryUsage_61() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___peakMemoryUsage_61)); }
	inline uint64_t get_peakMemoryUsage_61() const { return ___peakMemoryUsage_61; }
	inline uint64_t* get_address_of_peakMemoryUsage_61() { return &___peakMemoryUsage_61; }
	inline void set_peakMemoryUsage_61(uint64_t value)
	{
		___peakMemoryUsage_61 = value;
	}

	inline static int32_t get_offset_of_limitMemoryUsage_62() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___limitMemoryUsage_62)); }
	inline uint64_t get_limitMemoryUsage_62() const { return ___limitMemoryUsage_62; }
	inline uint64_t* get_address_of_limitMemoryUsage_62() { return &___limitMemoryUsage_62; }
	inline void set_limitMemoryUsage_62(uint64_t value)
	{
		___limitMemoryUsage_62 = value;
	}

	inline static int32_t get_offset_of_defaultMaterial_63() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___defaultMaterial_63)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultMaterial_63() const { return ___defaultMaterial_63; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultMaterial_63() { return &___defaultMaterial_63; }
	inline void set_defaultMaterial_63(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultMaterial_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_63), (void*)value);
	}

	inline static int32_t get_offset_of_defaultInstancedMaterial_64() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___defaultInstancedMaterial_64)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultInstancedMaterial_64() const { return ___defaultInstancedMaterial_64; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultInstancedMaterial_64() { return &___defaultInstancedMaterial_64; }
	inline void set_defaultInstancedMaterial_64(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultInstancedMaterial_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstancedMaterial_64), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundMaterial_65() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___backgroundMaterial_65)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_backgroundMaterial_65() const { return ___backgroundMaterial_65; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_backgroundMaterial_65() { return &___backgroundMaterial_65; }
	inline void set_backgroundMaterial_65(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___backgroundMaterial_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundMaterial_65), (void*)value);
	}

	inline static int32_t get_offset_of_foregroundMaterial_66() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___foregroundMaterial_66)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_foregroundMaterial_66() const { return ___foregroundMaterial_66; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_foregroundMaterial_66() { return &___foregroundMaterial_66; }
	inline void set_foregroundMaterial_66(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___foregroundMaterial_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foregroundMaterial_66), (void*)value);
	}

	inline static int32_t get_offset_of_textMaterial_67() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___textMaterial_67)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_textMaterial_67() const { return ___textMaterial_67; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_textMaterial_67() { return &___textMaterial_67; }
	inline void set_textMaterial_67(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___textMaterial_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMaterial_67), (void*)value);
	}

	inline static int32_t get_offset_of_quadMesh_68() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___quadMesh_68)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_quadMesh_68() const { return ___quadMesh_68; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_quadMesh_68() { return &___quadMesh_68; }
	inline void set_quadMesh_68(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___quadMesh_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quadMesh_68), (void*)value);
	}

	inline static int32_t get_offset_of_appCapture_69() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9, ___appCapture_69)); }
	inline AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F * get_appCapture_69() const { return ___appCapture_69; }
	inline AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F ** get_address_of_appCapture_69() { return &___appCapture_69; }
	inline void set_appCapture_69(AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F * value)
	{
		___appCapture_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appCapture_69), (void*)value);
	}
};

struct MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxStringLength
	int32_t ___maxStringLength_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxTargetFrameRate
	int32_t ___maxTargetFrameRate_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxFrameTimings
	int32_t ___maxFrameTimings_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameRange
	int32_t ___frameRange_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowRotation
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___defaultWindowRotation_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___defaultWindowScale_9;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundScales
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___backgroundScales_10;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundOffsets
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___backgroundOffsets_11;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryString
	String_t* ___usedMemoryString_12;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryString
	String_t* ___peakMemoryString_13;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryString
	String_t* ___limitMemoryString_14;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::voiceCommandString
	String_t* ___voiceCommandString_15;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::visualProfilerTitleString
	String_t* ___visualProfilerTitleString_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::LateUpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___LateUpdatePerfMarker_70;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPositionPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CalculateWindowPositionPerfMarker_71;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotationPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CalculateWindowRotationPerfMarker_72;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColorPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CalculateFrameColorPerfMarker_73;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSizePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CalculateBackgroundSizePerfMarker_74;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToStringPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___MemoryUsageToStringPerfMarker_75;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoAPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___MemoryItoAPerfMarker_76;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTimingPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___AverageFrameTimingPerfMarker_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDifferPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___WillDisplayedMemoryUsageDifferPerfMarker_78;

public:
	inline static int32_t get_offset_of_maxStringLength_4() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___maxStringLength_4)); }
	inline int32_t get_maxStringLength_4() const { return ___maxStringLength_4; }
	inline int32_t* get_address_of_maxStringLength_4() { return &___maxStringLength_4; }
	inline void set_maxStringLength_4(int32_t value)
	{
		___maxStringLength_4 = value;
	}

	inline static int32_t get_offset_of_maxTargetFrameRate_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___maxTargetFrameRate_5)); }
	inline int32_t get_maxTargetFrameRate_5() const { return ___maxTargetFrameRate_5; }
	inline int32_t* get_address_of_maxTargetFrameRate_5() { return &___maxTargetFrameRate_5; }
	inline void set_maxTargetFrameRate_5(int32_t value)
	{
		___maxTargetFrameRate_5 = value;
	}

	inline static int32_t get_offset_of_maxFrameTimings_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___maxFrameTimings_6)); }
	inline int32_t get_maxFrameTimings_6() const { return ___maxFrameTimings_6; }
	inline int32_t* get_address_of_maxFrameTimings_6() { return &___maxFrameTimings_6; }
	inline void set_maxFrameTimings_6(int32_t value)
	{
		___maxFrameTimings_6 = value;
	}

	inline static int32_t get_offset_of_frameRange_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___frameRange_7)); }
	inline int32_t get_frameRange_7() const { return ___frameRange_7; }
	inline int32_t* get_address_of_frameRange_7() { return &___frameRange_7; }
	inline void set_frameRange_7(int32_t value)
	{
		___frameRange_7 = value;
	}

	inline static int32_t get_offset_of_defaultWindowRotation_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___defaultWindowRotation_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_defaultWindowRotation_8() const { return ___defaultWindowRotation_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_defaultWindowRotation_8() { return &___defaultWindowRotation_8; }
	inline void set_defaultWindowRotation_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___defaultWindowRotation_8 = value;
	}

	inline static int32_t get_offset_of_defaultWindowScale_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___defaultWindowScale_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_defaultWindowScale_9() const { return ___defaultWindowScale_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_defaultWindowScale_9() { return &___defaultWindowScale_9; }
	inline void set_defaultWindowScale_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___defaultWindowScale_9 = value;
	}

	inline static int32_t get_offset_of_backgroundScales_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___backgroundScales_10)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_backgroundScales_10() const { return ___backgroundScales_10; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_backgroundScales_10() { return &___backgroundScales_10; }
	inline void set_backgroundScales_10(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___backgroundScales_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundScales_10), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundOffsets_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___backgroundOffsets_11)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_backgroundOffsets_11() const { return ___backgroundOffsets_11; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_backgroundOffsets_11() { return &___backgroundOffsets_11; }
	inline void set_backgroundOffsets_11(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___backgroundOffsets_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundOffsets_11), (void*)value);
	}

	inline static int32_t get_offset_of_usedMemoryString_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___usedMemoryString_12)); }
	inline String_t* get_usedMemoryString_12() const { return ___usedMemoryString_12; }
	inline String_t** get_address_of_usedMemoryString_12() { return &___usedMemoryString_12; }
	inline void set_usedMemoryString_12(String_t* value)
	{
		___usedMemoryString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedMemoryString_12), (void*)value);
	}

	inline static int32_t get_offset_of_peakMemoryString_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___peakMemoryString_13)); }
	inline String_t* get_peakMemoryString_13() const { return ___peakMemoryString_13; }
	inline String_t** get_address_of_peakMemoryString_13() { return &___peakMemoryString_13; }
	inline void set_peakMemoryString_13(String_t* value)
	{
		___peakMemoryString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakMemoryString_13), (void*)value);
	}

	inline static int32_t get_offset_of_limitMemoryString_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___limitMemoryString_14)); }
	inline String_t* get_limitMemoryString_14() const { return ___limitMemoryString_14; }
	inline String_t** get_address_of_limitMemoryString_14() { return &___limitMemoryString_14; }
	inline void set_limitMemoryString_14(String_t* value)
	{
		___limitMemoryString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitMemoryString_14), (void*)value);
	}

	inline static int32_t get_offset_of_voiceCommandString_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___voiceCommandString_15)); }
	inline String_t* get_voiceCommandString_15() const { return ___voiceCommandString_15; }
	inline String_t** get_address_of_voiceCommandString_15() { return &___voiceCommandString_15; }
	inline void set_voiceCommandString_15(String_t* value)
	{
		___voiceCommandString_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceCommandString_15), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfilerTitleString_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___visualProfilerTitleString_16)); }
	inline String_t* get_visualProfilerTitleString_16() const { return ___visualProfilerTitleString_16; }
	inline String_t** get_address_of_visualProfilerTitleString_16() { return &___visualProfilerTitleString_16; }
	inline void set_visualProfilerTitleString_16(String_t* value)
	{
		___visualProfilerTitleString_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfilerTitleString_16), (void*)value);
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_70() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___LateUpdatePerfMarker_70)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_LateUpdatePerfMarker_70() const { return ___LateUpdatePerfMarker_70; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_LateUpdatePerfMarker_70() { return &___LateUpdatePerfMarker_70; }
	inline void set_LateUpdatePerfMarker_70(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___LateUpdatePerfMarker_70 = value;
	}

	inline static int32_t get_offset_of_CalculateWindowPositionPerfMarker_71() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___CalculateWindowPositionPerfMarker_71)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CalculateWindowPositionPerfMarker_71() const { return ___CalculateWindowPositionPerfMarker_71; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CalculateWindowPositionPerfMarker_71() { return &___CalculateWindowPositionPerfMarker_71; }
	inline void set_CalculateWindowPositionPerfMarker_71(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CalculateWindowPositionPerfMarker_71 = value;
	}

	inline static int32_t get_offset_of_CalculateWindowRotationPerfMarker_72() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___CalculateWindowRotationPerfMarker_72)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CalculateWindowRotationPerfMarker_72() const { return ___CalculateWindowRotationPerfMarker_72; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CalculateWindowRotationPerfMarker_72() { return &___CalculateWindowRotationPerfMarker_72; }
	inline void set_CalculateWindowRotationPerfMarker_72(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CalculateWindowRotationPerfMarker_72 = value;
	}

	inline static int32_t get_offset_of_CalculateFrameColorPerfMarker_73() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___CalculateFrameColorPerfMarker_73)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CalculateFrameColorPerfMarker_73() const { return ___CalculateFrameColorPerfMarker_73; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CalculateFrameColorPerfMarker_73() { return &___CalculateFrameColorPerfMarker_73; }
	inline void set_CalculateFrameColorPerfMarker_73(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CalculateFrameColorPerfMarker_73 = value;
	}

	inline static int32_t get_offset_of_CalculateBackgroundSizePerfMarker_74() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___CalculateBackgroundSizePerfMarker_74)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CalculateBackgroundSizePerfMarker_74() const { return ___CalculateBackgroundSizePerfMarker_74; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CalculateBackgroundSizePerfMarker_74() { return &___CalculateBackgroundSizePerfMarker_74; }
	inline void set_CalculateBackgroundSizePerfMarker_74(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CalculateBackgroundSizePerfMarker_74 = value;
	}

	inline static int32_t get_offset_of_MemoryUsageToStringPerfMarker_75() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___MemoryUsageToStringPerfMarker_75)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_MemoryUsageToStringPerfMarker_75() const { return ___MemoryUsageToStringPerfMarker_75; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_MemoryUsageToStringPerfMarker_75() { return &___MemoryUsageToStringPerfMarker_75; }
	inline void set_MemoryUsageToStringPerfMarker_75(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___MemoryUsageToStringPerfMarker_75 = value;
	}

	inline static int32_t get_offset_of_MemoryItoAPerfMarker_76() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___MemoryItoAPerfMarker_76)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_MemoryItoAPerfMarker_76() const { return ___MemoryItoAPerfMarker_76; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_MemoryItoAPerfMarker_76() { return &___MemoryItoAPerfMarker_76; }
	inline void set_MemoryItoAPerfMarker_76(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___MemoryItoAPerfMarker_76 = value;
	}

	inline static int32_t get_offset_of_AverageFrameTimingPerfMarker_77() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___AverageFrameTimingPerfMarker_77)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_AverageFrameTimingPerfMarker_77() const { return ___AverageFrameTimingPerfMarker_77; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_AverageFrameTimingPerfMarker_77() { return &___AverageFrameTimingPerfMarker_77; }
	inline void set_AverageFrameTimingPerfMarker_77(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___AverageFrameTimingPerfMarker_77 = value;
	}

	inline static int32_t get_offset_of_WillDisplayedMemoryUsageDifferPerfMarker_78() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields, ___WillDisplayedMemoryUsageDifferPerfMarker_78)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_WillDisplayedMemoryUsageDifferPerfMarker_78() const { return ___WillDisplayedMemoryUsageDifferPerfMarker_78; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_WillDisplayedMemoryUsageDifferPerfMarker_78() { return &___WillDisplayedMemoryUsageDifferPerfMarker_78; }
	inline void set_WillDisplayedMemoryUsageDifferPerfMarker_78(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___WillDisplayedMemoryUsageDifferPerfMarker_78 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl
struct VisualProfilerControl_t8BCDF8A7F747003781C5AD90DE449789F6E8132F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
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
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  m_Items[1];

public:
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  m_Items[1];

public:
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[]
struct FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD  m_Items[1];

public:
	inline FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m4CF0F1C2A343E9195064924063AE654503FAD91B (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::get_Command()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7  SpeechEventData_get_Command_m356B6DC34D1B4ED5566A8710240ACC092CCEB2DD_inline (SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_Keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_Keyword_m1DA6E39D7250F54C2500D88DEBE01113D2B06137 (SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7 * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleDiagnostics_m66CD3C24C0593C59A9B44853EAF9C1FD7701D46C (DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleProfiler_m47D9536F7A3DFBA197AB70772D44D485BEDA129E (DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.CoreServices::get_DiagnosticsSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_m897F963026C8E9DE785F29AE1357F314BEFD2D50 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mA8664E0793B07E287571B3803C4F492B91BEDF59_inline (BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_m6CEB812B326563DBD9E62690D4533ECC7B09CC8B (BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7 * __this, BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * ___profile0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls>()
inline DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3_m1E7C8B52F2F4E7EB5E7EB3421191EC5DB032CE21 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::AddChild(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_AddChild_m090B97BE075681223A9A340E55F1A1B0401BD165 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mFF259B827E9FE2E22FF8034A47F2E4822FB0AB02_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler>()
inline MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_m8250E5F2121C69D2F220E34C9F52F3E6DEF47470 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m625CD1B2E68E4E338B30B445C301496ACE083886_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m9250283651A1A519686131B80040492322468639_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_m7B2B74EB618C019D5574F080A696B2EC3B7F89BF_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowFrameInfo()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mD7B2F26D2B0089F6822CA618A6B3993C11A94508_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameInfoVisible(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m5068E60946DBEE53EC1CF9C7A60F5B3E97EA5D63_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowMemoryStats()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mF001CBD1B0BA09CF575935BC855054C0597BE1E7_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_MemoryStatsVisible(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m3E02329F033935A9A26869C16E7C5D7E1ACBFD70_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_mE23C634CA7395BC31BBFF08E186C32418EDEB98C_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE01CA28695E3C5D2E33CCC7F5688FF20E9849039_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_m352A8159CAA485CF1896D61B3A66C10C5626D0A8_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m7C0E12F2EE1B129D1E96CD16B0E5E07F5C3D21EB_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsSystem_get_WindowOffset_mEE49D233623A681ED429ADC9477324FB13F10F5F_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_mE3813D629039E301EB1A7E29D847E3D2F4BD9CE5_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_m4E9D23746C2689FDF27EC6888161D2D07ADC4E57_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_m51EC76C4189E3804F5C01D83759C6ED080CC480D (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m61032FCD4D5D3D5937AA80360C4D4BC0F900C94C_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m7688CC80A69CB421F68E2F742CB665A2E1D12B25 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfilerDuringMRC()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_m801AA4DE8C8275514D6F2E078DF4EF0A67911CD0_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_mC25C11A5BB7683CB544FADF142DA4CFEA8A17743_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData__ctor_m0289617EF76C5E5B0D05C642131D35F3A3319F4A (DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowDiagnostics()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_m08A1CC2F7938D48E5356D455A738AE432D573009_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_m4624D3E634E94E6045959E542FD93717900E0EBD (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowProfiler()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_m65B20A4770EEE7E472EA72A3F247BFF7CD2D05EC_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_mF0DBD9D92F639CDDD84511D3C5C2C4714EA0FE81 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowFrameInfo()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowFrameInfo_mFFBFDDC20AEFF14BAB7913BBA3E2CF1E64FFEB7D_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowFrameInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowFrameInfo_m1946D8201BB320662E7FCEBC9F541ED1AC2B8BD1 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowMemoryStats()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowMemoryStats_m8043E6EAF0A2000E0AA657AFB9EC64FAA816CA40_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowMemoryStats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m662C8185FE00C822C5BEA98F4D07B75E58B96665 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_FrameSampleRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_mA8CF39AEFA7146DBEB324DDBF1E97B5884F1DF87_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_mDCE0AEC9F19120F356FA31CD168A931E29185ADD (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowAnchor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_m2265E4DA2DD03BB79505446E12DFE3F46313C7CA_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_m700717BC04EB560300AE74FF237EE79C70006478 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsProfile_get_WindowOffset_m7CC82EB2226A2D62FCAAC4158FD0575771F1C300_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_m7ECCEB8198AB4DF23FECE6FD13DBAA93AFE9F869 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_m5CA18AFFF44BB199FB2635E42322CA3188B115D0_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_m4C646047363B0BE3F3C5D8F057F01C0A6C5C5675 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowFollowSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_m2ABA53B7651521ECF74070466D2E1C7D0C91ADC9_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m36230A26CD1FD4C7A101C2B9CA70157BDAB035DA (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowProfilerDuringMRC()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfilerDuringMRC_m100D4A9B949DE56C24016DC889AA9301831471EF_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_mE40BBE38E73DA4B1422BAEBAC2445A344D2A9446 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m17533FC2CE2A71138FC2B66A81422C4CA1BB86A8 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_m756BA925A38A6156AB876C677ED2388752084087 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::Initialize(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData_Initialize_mB305EDD60F7EED627431DD4C1C24C47B20BFAE09 (DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * __this, RuntimeObject* ___diagnosticsSystem0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m065B4BEAE8A58DFD5F487380B2E2CB9ECE7D13C9 (EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB0B82845BE883FFA6404B0D2BB77166194C14B2D (U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData>(UnityEngine.EventSystems.BaseEventData)
inline DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B_mB46E6C039C0B919EB4EF7B85C4EE61B2FE4671DD (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method)
{
	return ((  DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared)(___data0, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Boolean Windows.Media.Capture.AppCapture::get_IsCapturingVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCapture_get_IsCapturingVideo_m03AFE17CCFD4D72DB812E799E6A9C18E6270AE38 (AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m745D94DF21B9749DA7CFE42BAB3CBD05F614B81E (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___source0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_mB09338F622466456ADBCC449BB1F62F2EF1731B6 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m9AEDBA4194A858134DC643478E2C0D7573D971ED (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_m1771377B714D7C28832FB7669AC34C8167A57A60 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m182830EF752E46209510B56B6D7043B32AF09C1F (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method);
// Windows.Media.Capture.AppCapture Windows.Media.Capture.AppCapture::GetForCurrentView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F * AppCapture_GetForCurrentView_m68DBE2258EFD881607F4C96763DE80004B68DFDD (const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_ShouldShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m40EC420C622CBCFDE84C84E1EDE25A903CE19C54 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m1FDF7F2E31146BB12F1718EC2961B72E640B42F2 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mDC5A1517E45D53B0F318EFEE1C9BB5CB6F4E23F0 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_mCFBDEAF5A8089836FD001E0D9B119949123FAB1F (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.FrameTimingManager::CaptureFrameTimings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameTimingManager_CaptureFrameTimings_m1816EB99EFF92F9394E7000A9CB1F9F9363A90F5 (const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.FrameTimingManager::GetLatestTimings(System.UInt32,UnityEngine.FrameTiming[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FrameTimingManager_GetLatestTimings_m286888EFC8779C9F97D5140EE5D7EE80BEE3DE35 (uint32_t ___numFrames0, FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___timings1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_mEC3E2C15FAD5602EBE090962CA0BB25710863DFB (FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityToolkitVisualProfiler_CalculateFrameColor_mC4FE6FD4C59E22ABE394DEE50D66C34056D88798 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, int32_t ___frameRate0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Color_op_Implicit_m653C1CE2391B0A04114B9132C37E41AC92B33AFE (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetVectorArray(System.Int32,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVectorArray_m189E1657C000ACBCAF56CB62F3A4DCF1FD472787 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t ___nameID0, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ___values1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsInstancing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsInstancing_mF0ED4B6C2658260EB52F3503637A659306D4DAAB (const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetMatrix_mF4694BD7CFC224C638D30BFC9CC91D5D711EA227 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t ___nameID0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMeshInstanced_mD1048BED7CCCC0675C7EC696407E545456D27D19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh0, int32_t ___submeshIndex1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material2, Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___matrices3, int32_t ___count4, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties5, int32_t ___castShadows6, bool ___receiveShadows7, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_op_Implicit_m51CEC50D37ABC484073AECE7EB958B414F2B6E7B (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t ___nameID0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMesh_mA26415237B646D7C832483597F98C6C158785660 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material2, int32_t ___layer3, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties6, bool ___castShadows7, bool ___receiveShadows8, bool ___useLightProbes9, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_mAB08DEB16E65623B8773386706B547C8FE4A9860 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mFBC69344DD46F8C2E6BBEEF586C99CD1C8C65911 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mFF9746DE32CAE910FE353BC6FA9AB78773B27AEB (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mF89F67E724725BD34A37BDB9A4D2AF39C4BE63E9 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppTargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mC540A926088CA60DD5C519DD6C53F333EF15753D (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m43784A6A5549150BD835786CB88AB1EA1EC5A0B7_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityToolkitVisualProfiler_CreateQuad_m2959204A81C547C44B02E1C6B88899F0CD832706 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * MixedRealityToolkitVisualProfiler_InitializeRenderer_mF782634B8881ADF600AA6EEA7540C4AAA0021168 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material1, int32_t ___colorID2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E (String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent2, int32_t ___anchor3, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, String_t* ___text6, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_CreateAnchor_m7B4F08E4948959A6E9CF821CEF76060B1A9A347E (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_anchor_m013CFCFA46AB8478ADD1C4818FAAD90596BF4E15 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_richText_mEA6ACA489617BC48D2317385C92C542C5EFD15CA (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_mE9A292F137C2E33557A4296BC0DD5D01CC0C678D (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___renderer0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m4C127FB86BB4B20031F77B66CC629F272904178B (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mD4F86D1953BD7A2E98C187C207AB9C2A4DA8839D (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_mB1E5A77AB7204CA2FD3AE3294D2CBC0EF352DD08 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_allowOcclusionWhenDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_allowOcclusionWhenDynamic_m32286F46CA4405E850B5BFA6245E243641E85D55 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m21F8700260D4904EE69875990DB1281C309BE388 (uint64_t ___bytes0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_m86AF3C6BAD948A447946DE6A3CFF738AE41798ED (int32_t ___value0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Single UnityEngine.XR.XRDevice::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8 (const RuntimeMethod* method);
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsage_m3BBDE59FC2DCB6074A92C7859CC42E3311BD8D3B (const RuntimeMethod* method);
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsageLimit_m8A8BF85D26D6A48DE98963D3BDB7C87B7FD67113 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_OnEnable_mBB04171FF824467CFA240EB0F0533CE5B1F4FC30 (DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_OnEnable_mBB04171FF824467CFA240EB0F0533CE5B1F4FC30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!registeredForInput)
		bool L_0 = __this->get_registeredForInput_4();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (CoreServices.InputSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m4CF0F1C2A343E9195064924063AE654503FAD91B(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// CoreServices.InputSystem.RegisterHandler<IMixedRealitySpeechHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m4CF0F1C2A343E9195064924063AE654503FAD91B(/*hidden argument*/NULL);
		NullCheck(L_2);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tFC4B610AA93D458B55F646D84646AA041D82E5C5_m06B6261EA33FAF96D196B63F19E3CF18D09B8FED_RuntimeMethod_var, L_2, __this);
		// registeredForInput = true;
		__this->set_registeredForInput_4((bool)1);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_OnDisable_m22E1AF418114CD57C9C3A25CCD7AA22440DE3E45 (DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_OnDisable_m22E1AF418114CD57C9C3A25CCD7AA22440DE3E45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (registeredForInput)
		bool L_0 = __this->get_registeredForInput_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// CoreServices.InputSystem.UnregisterHandler<IMixedRealitySpeechHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m4CF0F1C2A343E9195064924063AE654503FAD91B(/*hidden argument*/NULL);
		NullCheck(L_1);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tFC4B610AA93D458B55F646D84646AA041D82E5C5_mA4E0FF7007746A6294ED5F21EC3A0B726BEEF04B_RuntimeMethod_var, L_1, __this);
		// registeredForInput = false;
		__this->set_registeredForInput_4((bool)0);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler.OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_Microsoft_MixedReality_Toolkit_Input_IMixedRealitySpeechHandler_OnSpeechKeywordRecognized_mFC9FDA3296EB974E12A2EB76354E01164238A091 (DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * __this, SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_Microsoft_MixedReality_Toolkit_Input_IMixedRealitySpeechHandler_OnSpeechKeywordRecognized_mFC9FDA3296EB974E12A2EB76354E01164238A091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// switch (eventData.Command.Keyword.ToLower())
		SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33 * L_0 = ___eventData0;
		NullCheck(L_0);
		SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7  L_1 = SpeechEventData_get_Command_m356B6DC34D1B4ED5566A8710240ACC092CCEB2DD_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = SpeechCommands_get_Keyword_m1DA6E39D7250F54C2500D88DEBE01113D2B06137((SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, _stringLiteralDA2CBFEB5B67015731670B2966A4EA649BDF8D7F, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_6 = V_1;
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, _stringLiteralD67803D21C492757F3E466439B3888A5240FB925, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_002f:
	{
		// ToggleDiagnostics();
		DiagnosticsSystemVoiceControls_ToggleDiagnostics_m66CD3C24C0593C59A9B44853EAF9C1FD7701D46C(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0036:
	{
		// ToggleProfiler();
		DiagnosticsSystemVoiceControls_ToggleProfiler_m47D9536F7A3DFBA197AB70772D44D485BEDA129E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleDiagnostics_m66CD3C24C0593C59A9B44853EAF9C1FD7701D46C (DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_ToggleDiagnostics_m66CD3C24C0593C59A9B44853EAF9C1FD7701D46C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowDiagnostics = !CoreServices.DiagnosticsSystem.ShowDiagnostics;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		RuntimeObject* L_2 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowDiagnostics() */, IMixedRealityDiagnosticsSystem_tC7C9DF661C81A126C67ADF1FBD41BD489F2806C4_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean) */, IMixedRealityDiagnosticsSystem_tC7C9DF661C81A126C67ADF1FBD41BD489F2806C4_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleProfiler_m47D9536F7A3DFBA197AB70772D44D485BEDA129E (DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_ToggleProfiler_m47D9536F7A3DFBA197AB70772D44D485BEDA129E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = !CoreServices.DiagnosticsSystem.ShowProfiler;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		RuntimeObject* L_2 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowProfiler() */, IMixedRealityDiagnosticsSystem_tC7C9DF661C81A126C67ADF1FBD41BD489F2806C4_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_tC7C9DF661C81A126C67ADF1FBD41BD489F2806C4_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls__ctor_m951FE98D8DA2E1921D6183EAF9E9FE2388D4C0F1 (DiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_mA23B04CFCEE18178A83BF980E0BA20889DAAD5C7 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, RuntimeObject* ___registrar0, MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * ___profile1, const RuntimeMethod* method)
{
	{
		// MixedRealityDiagnosticsProfile profile) : this(profile)
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_0 = ___profile1;
		MixedRealityDiagnosticsSystem__ctor_m897F963026C8E9DE785F29AE1357F314BEFD2D50(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_mA8664E0793B07E287571B3803C4F492B91BEDF59_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_m897F963026C8E9DE785F29AE1357F314BEFD2D50 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem__ctor_m897F963026C8E9DE785F29AE1357F314BEFD2D50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		__this->set_U3CNameU3Ek__BackingField_14(_stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A);
		// private float frameSampleRate = 0.1f;
		__this->set_frameSampleRate_22((0.1f));
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->set_windowAnchor_26(7);
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.1f), (0.1f), /*hidden argument*/NULL);
		__this->set_windowOffset_27(L_0);
		// private float windowScale = 1.0f;
		__this->set_windowScale_28((1.0f));
		// private float windowFollowSpeed = 5.0f;
		__this->set_windowFollowSpeed_29((5.0f));
		// MixedRealityDiagnosticsProfile profile) : base(profile)
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_1 = ___profile0;
		BaseCoreSystem__ctor_m6CEB812B326563DBD9E62690D4533ECC7B09CC8B(__this, L_1, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_Name_m227E1529C021EBEDC247A38B9B2AD8A7AA9836B9 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_Name_m05BD8B11F180F7160884B68F0A38EF9B78E9EA8A (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m17533FC2CE2A71138FC2B66A81422C4CA1BB86A8 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_CreateVisualizations_m17533FC2CE2A71138FC2B66A81422C4CA1BB86A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// diagnosticVisualizationParent = new GameObject("Diagnostics");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3AF2279F9E306ACD0A4644E2B0F2F48A1E06D8D9, /*hidden argument*/NULL);
		__this->set_diagnosticVisualizationParent_15(L_0);
		// diagnosticVisualizationParent.AddComponent<DiagnosticsSystemVoiceControls>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_diagnosticVisualizationParent_15();
		NullCheck(L_1);
		GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3_m1E7C8B52F2F4E7EB5E7EB3421191EC5DB032CE21(L_1, /*hidden argument*/GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t55EA74B68DDAF66778F5C7E0CAAEDB84A24DCEC3_m1E7C8B52F2F4E7EB5E7EB3421191EC5DB032CE21_RuntimeMethod_var);
		// MixedRealityPlayspace.AddChild(diagnosticVisualizationParent.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_diagnosticVisualizationParent_15();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t3998B43638495FB41F672AB51B148CA6A1B40FDE_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_AddChild_m090B97BE075681223A9A340E55F1A1B0401BD165(L_3, /*hidden argument*/NULL);
		// diagnosticVisualizationParent.SetActive(ShowDiagnostics);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_diagnosticVisualizationParent_15();
		bool L_5 = MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mFF259B827E9FE2E22FF8034A47F2E4822FB0AB02_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, L_5, /*hidden argument*/NULL);
		// visualProfiler = diagnosticVisualizationParent.AddComponent<MixedRealityToolkitVisualProfiler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_diagnosticVisualizationParent_15();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_7 = GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_m8250E5F2121C69D2F220E34C9F52F3E6DEF47470(L_6, /*hidden argument*/GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_m8250E5F2121C69D2F220E34C9F52F3E6DEF47470_RuntimeMethod_var);
		__this->set_visualProfiler_16(L_7);
		// visualProfiler.WindowParent = diagnosticVisualizationParent.transform;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_8 = __this->get_visualProfiler_16();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_diagnosticVisualizationParent_15();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		MixedRealityToolkitVisualProfiler_set_WindowParent_m625CD1B2E68E4E338B30B445C301496ACE083886_inline(L_8, L_10, /*hidden argument*/NULL);
		// visualProfiler.IsVisible = ShowProfiler;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_11 = __this->get_visualProfiler_16();
		bool L_12 = MixedRealityDiagnosticsSystem_get_ShowProfiler_m9250283651A1A519686131B80040492322468639_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		MixedRealityToolkitVisualProfiler_set_IsVisible_m7B2B74EB618C019D5574F080A696B2EC3B7F89BF_inline(L_11, L_12, /*hidden argument*/NULL);
		// visualProfiler.FrameInfoVisible = ShowFrameInfo;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_13 = __this->get_visualProfiler_16();
		bool L_14 = MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mD7B2F26D2B0089F6822CA618A6B3993C11A94508_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m5068E60946DBEE53EC1CF9C7A60F5B3E97EA5D63_inline(L_13, L_14, /*hidden argument*/NULL);
		// visualProfiler.MemoryStatsVisible = ShowMemoryStats;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_15 = __this->get_visualProfiler_16();
		bool L_16 = MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mF001CBD1B0BA09CF575935BC855054C0597BE1E7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m3E02329F033935A9A26869C16E7C5D7E1ACBFD70_inline(L_15, L_16, /*hidden argument*/NULL);
		// visualProfiler.FrameSampleRate = FrameSampleRate;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_17 = __this->get_visualProfiler_16();
		float L_18 = MixedRealityDiagnosticsSystem_get_FrameSampleRate_mE23C634CA7395BC31BBFF08E186C32418EDEB98C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE01CA28695E3C5D2E33CCC7F5688FF20E9849039_inline(L_17, L_18, /*hidden argument*/NULL);
		// visualProfiler.WindowAnchor = WindowAnchor;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_19 = __this->get_visualProfiler_16();
		int32_t L_20 = MixedRealityDiagnosticsSystem_get_WindowAnchor_m352A8159CAA485CF1896D61B3A66C10C5626D0A8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_m7C0E12F2EE1B129D1E96CD16B0E5E07F5C3D21EB_inline(L_19, L_20, /*hidden argument*/NULL);
		// visualProfiler.WindowOffset = WindowOffset;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_21 = __this->get_visualProfiler_16();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = MixedRealityDiagnosticsSystem_get_WindowOffset_mEE49D233623A681ED429ADC9477324FB13F10F5F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_mE3813D629039E301EB1A7E29D847E3D2F4BD9CE5_inline(L_21, L_22, /*hidden argument*/NULL);
		// visualProfiler.WindowScale = WindowScale;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_23 = __this->get_visualProfiler_16();
		float L_24 = MixedRealityDiagnosticsSystem_get_WindowScale_m4E9D23746C2689FDF27EC6888161D2D07ADC4E57_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		MixedRealityToolkitVisualProfiler_set_WindowScale_m51EC76C4189E3804F5C01D83759C6ED080CC480D(L_23, L_24, /*hidden argument*/NULL);
		// visualProfiler.WindowFollowSpeed = WindowFollowSpeed;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_25 = __this->get_visualProfiler_16();
		float L_26 = MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m61032FCD4D5D3D5937AA80360C4D4BC0F900C94C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m7688CC80A69CB421F68E2F742CB665A2E1D12B25(L_25, L_26, /*hidden argument*/NULL);
		// visualProfiler.ShowProfilerDuringMRC = ShowProfilerDuringMRC;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_27 = __this->get_visualProfiler_16();
		bool L_28 = MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_m801AA4DE8C8275514D6F2E078DF4EF0A67911CD0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_mC25C11A5BB7683CB544FADF142DA4CFEA8A17743_inline(L_27, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Initialize_mE04F0CFFE82EAEC37040BED710C39338E098FED0 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_Initialize_mE04F0CFFE82EAEC37040BED710C39338E098FED0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * V_0 = NULL;
	{
		// if (!Application.isPlaying) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		return;
	}

IL_0008:
	{
		// MixedRealityDiagnosticsProfile profile = ConfigurationProfile as MixedRealityDiagnosticsProfile;
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_1 = VirtFuncInvoker0< BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 *)IsInstClass((RuntimeObject*)L_1, MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1_il2cpp_TypeInfo_var));
		// if (profile == null) { return; }
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (profile == null) { return; }
		return;
	}

IL_001e:
	{
		// eventData = new DiagnosticsEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_4 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * L_5 = (DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B *)il2cpp_codegen_object_new(DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B_il2cpp_TypeInfo_var);
		DiagnosticsEventData__ctor_m0289617EF76C5E5B0D05C642131D35F3A3319F4A(L_5, L_4, /*hidden argument*/NULL);
		__this->set_eventData_23(L_5);
		// ShowDiagnostics = profile.ShowDiagnostics;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MixedRealityDiagnosticsProfile_get_ShowDiagnostics_m08A1CC2F7938D48E5356D455A738AE432D573009_inline(L_6, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowDiagnostics_m4624D3E634E94E6045959E542FD93717900E0EBD(__this, L_7, /*hidden argument*/NULL);
		// ShowProfiler = profile.ShowProfiler;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = MixedRealityDiagnosticsProfile_get_ShowProfiler_m65B20A4770EEE7E472EA72A3F247BFF7CD2D05EC_inline(L_8, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowProfiler_mF0DBD9D92F639CDDD84511D3C5C2C4714EA0FE81(__this, L_9, /*hidden argument*/NULL);
		// ShowFrameInfo = profile.ShowFrameInfo;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = MixedRealityDiagnosticsProfile_get_ShowFrameInfo_mFFBFDDC20AEFF14BAB7913BBA3E2CF1E64FFEB7D_inline(L_10, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowFrameInfo_m1946D8201BB320662E7FCEBC9F541ED1AC2B8BD1(__this, L_11, /*hidden argument*/NULL);
		// ShowMemoryStats = profile.ShowMemoryStats;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = MixedRealityDiagnosticsProfile_get_ShowMemoryStats_m8043E6EAF0A2000E0AA657AFB9EC64FAA816CA40_inline(L_12, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m662C8185FE00C822C5BEA98F4D07B75E58B96665(__this, L_13, /*hidden argument*/NULL);
		// FrameSampleRate = profile.FrameSampleRate;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = MixedRealityDiagnosticsProfile_get_FrameSampleRate_mA8CF39AEFA7146DBEB324DDBF1E97B5884F1DF87_inline(L_14, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_FrameSampleRate_mDCE0AEC9F19120F356FA31CD168A931E29185ADD(__this, L_15, /*hidden argument*/NULL);
		// WindowAnchor = profile.WindowAnchor;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = MixedRealityDiagnosticsProfile_get_WindowAnchor_m2265E4DA2DD03BB79505446E12DFE3F46313C7CA_inline(L_16, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowAnchor_m700717BC04EB560300AE74FF237EE79C70006478(__this, L_17, /*hidden argument*/NULL);
		// WindowOffset = profile.WindowOffset;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_18 = V_0;
		NullCheck(L_18);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = MixedRealityDiagnosticsProfile_get_WindowOffset_m7CC82EB2226A2D62FCAAC4158FD0575771F1C300_inline(L_18, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowOffset_m7ECCEB8198AB4DF23FECE6FD13DBAA93AFE9F869(__this, L_19, /*hidden argument*/NULL);
		// WindowScale = profile.WindowScale;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_20 = V_0;
		NullCheck(L_20);
		float L_21 = MixedRealityDiagnosticsProfile_get_WindowScale_m5CA18AFFF44BB199FB2635E42322CA3188B115D0_inline(L_20, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowScale_m4C646047363B0BE3F3C5D8F057F01C0A6C5C5675(__this, L_21, /*hidden argument*/NULL);
		// WindowFollowSpeed = profile.WindowFollowSpeed;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_22 = V_0;
		NullCheck(L_22);
		float L_23 = MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_m2ABA53B7651521ECF74070466D2E1C7D0C91ADC9_inline(L_22, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m36230A26CD1FD4C7A101C2B9CA70157BDAB035DA(__this, L_23, /*hidden argument*/NULL);
		// ShowProfilerDuringMRC = profile.ShowProfilerDuringMRC;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = MixedRealityDiagnosticsProfile_get_ShowProfilerDuringMRC_m100D4A9B949DE56C24016DC889AA9301831471EF_inline(L_24, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_mE40BBE38E73DA4B1422BAEBAC2445A344D2A9446(__this, L_25, /*hidden argument*/NULL);
		// CreateVisualizations();
		MixedRealityDiagnosticsSystem_CreateVisualizations_m17533FC2CE2A71138FC2B66A81422C4CA1BB86A8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Destroy_m4AD17DCF398580798781A17C253AEF1C86F5129C (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_Destroy_m4AD17DCF398580798781A17C253AEF1C86F5129C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticVisualizationParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_diagnosticVisualizationParent_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// if (Application.isEditor)
		bool L_2 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Object.DestroyImmediate(diagnosticVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_diagnosticVisualizationParent_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_3, /*hidden argument*/NULL);
		// }
		goto IL_003d;
	}

IL_0022:
	{
		// diagnosticVisualizationParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_diagnosticVisualizationParent_15();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_5, /*hidden argument*/NULL);
		// Object.Destroy(diagnosticVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_diagnosticVisualizationParent_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// diagnosticVisualizationParent = null;
		__this->set_diagnosticVisualizationParent_15((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_DiagnosticsSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * MixedRealityDiagnosticsSystem_get_DiagnosticsSystemProfile_m4EECB9D4E7DBFCC80AEEFD5237AFFD1D5616C4C3 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_get_DiagnosticsSystemProfile_m4EECB9D4E7DBFCC80AEEFD5237AFFD1D5616C4C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticsSystemProfile == null)
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_0 = __this->get_diagnosticsSystemProfile_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// diagnosticsSystemProfile = ConfigurationProfile as MixedRealityDiagnosticsProfile;
		BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * L_2 = VirtFuncInvoker0< BaseMixedRealityProfile_tA3E82572921B9D1FC3317363C8F94F1783B11077 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->set_diagnosticsSystemProfile_17(((MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 *)IsInstClass((RuntimeObject*)L_2, MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1_il2cpp_TypeInfo_var)));
	}

IL_001f:
	{
		// return diagnosticsSystemProfile;
		MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * L_3 = __this->get_diagnosticsSystemProfile_17();
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mFF259B827E9FE2E22FF8034A47F2E4822FB0AB02 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->get_showDiagnostics_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_m4624D3E634E94E6045959E542FD93717900E0EBD (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value != showDiagnostics)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showDiagnostics_18();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		// showDiagnostics = value;
		bool L_2 = ___value0;
		__this->set_showDiagnostics_18(L_2);
		// if (ShowProfiler)
		bool L_3 = MixedRealityDiagnosticsSystem_get_ShowProfiler_m9250283651A1A519686131B80040492322468639_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_4 = __this->get_visualProfiler_16();
		bool L_5 = ___value0;
		NullCheck(L_4);
		MixedRealityToolkitVisualProfiler_set_IsVisible_m7B2B74EB618C019D5574F080A696B2EC3B7F89BF_inline(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m9250283651A1A519686131B80040492322468639 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// return showProfiler;
		bool L_0 = __this->get_showProfiler_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_mF0DBD9D92F639CDDD84511D3C5C2C4714EA0FE81 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowProfiler_mF0DBD9D92F639CDDD84511D3C5C2C4714EA0FE81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showProfiler)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showProfiler_19();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		// showProfiler = value;
		bool L_2 = ___value0;
		__this->set_showProfiler_19(L_2);
		// if ((visualProfiler != null) && ShowDiagnostics)
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_3 = __this->get_visualProfiler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		bool L_5 = MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mFF259B827E9FE2E22FF8034A47F2E4822FB0AB02_inline(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_6 = __this->get_visualProfiler_16();
		bool L_7 = ___value0;
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_IsVisible_m7B2B74EB618C019D5574F080A696B2EC3B7F89BF_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowFrameInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mD7B2F26D2B0089F6822CA618A6B3993C11A94508 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// return showFrameInfo;
		bool L_0 = __this->get_showFrameInfo_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowFrameInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowFrameInfo_m1946D8201BB320662E7FCEBC9F541ED1AC2B8BD1 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowFrameInfo_m1946D8201BB320662E7FCEBC9F541ED1AC2B8BD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showFrameInfo)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showFrameInfo_20();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showFrameInfo = value;
		bool L_2 = ___value0;
		__this->set_showFrameInfo_20(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_3 = __this->get_visualProfiler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.FrameInfoVisible = value;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_5 = __this->get_visualProfiler_16();
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m5068E60946DBEE53EC1CF9C7A60F5B3E97EA5D63_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowMemoryStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mF001CBD1B0BA09CF575935BC855054C0597BE1E7 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// return showMemoryStats;
		bool L_0 = __this->get_showMemoryStats_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowMemoryStats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m662C8185FE00C822C5BEA98F4D07B75E58B96665 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m662C8185FE00C822C5BEA98F4D07B75E58B96665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showMemoryStats)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showMemoryStats_21();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showMemoryStats = value;
		bool L_2 = ___value0;
		__this->set_showMemoryStats_21(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_3 = __this->get_visualProfiler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.MemoryStatsVisible = value;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_5 = __this->get_visualProfiler_16();
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m3E02329F033935A9A26869C16E7C5D7E1ACBFD70_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_mE23C634CA7395BC31BBFF08E186C32418EDEB98C (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// return frameSampleRate;
		float L_0 = __this->get_frameSampleRate_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_mDCE0AEC9F19120F356FA31CD168A931E29185ADD (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_FrameSampleRate_mDCE0AEC9F19120F356FA31CD168A931E29185ADD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Mathf.Approximately(frameSampleRate, value))
		float L_0 = __this->get_frameSampleRate_22();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		// frameSampleRate = value;
		float L_3 = ___value0;
		__this->set_frameSampleRate_22(L_3);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_4 = __this->get_visualProfiler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.FrameSampleRate = frameSampleRate;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_6 = __this->get_visualProfiler_16();
		float L_7 = __this->get_frameSampleRate_22();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE01CA28695E3C5D2E33CCC7F5688FF20E9849039_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityDiagnosticsSystem_get_SourceId_m70B9F14C1D37B8718DEAE070C25B439DCC402BA2 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId => (uint)SourceName.GetHashCode();
		String_t* L_0 = MixedRealityDiagnosticsSystem_get_SourceName_m756BA925A38A6156AB876C677ED2388752084087(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_m756BA925A38A6156AB876C677ED2388752084087 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_get_SourceName_m756BA925A38A6156AB876C677ED2388752084087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SourceName => "Mixed Reality Diagnostics System";
		return _stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_Equals_mE78495C349D58C29F0AB5876BA13DB228C87951B (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// public new bool Equals(object x, object y) => false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_GetHashCode_m0ECB1893C3658879BF528C370F988917451ECE4E (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// public int GetHashCode(object obj) => SourceName.GetHashCode();
		String_t* L_0 = MixedRealityDiagnosticsSystem_get_SourceName_m756BA925A38A6156AB876C677ED2388752084087(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::RaiseDiagnosticsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m9BA4C1D33111B88BD681A400E7A841CC2BA5BEB5 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m9BA4C1D33111B88BD681A400E7A841CC2BA5BEB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventData.Initialize(this);
		DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * L_0 = __this->get_eventData_23();
		NullCheck(L_0);
		DiagnosticsEventData_Initialize_mB305EDD60F7EED627431DD4C1C24C47B20BFAE09(L_0, __this, /*hidden argument*/NULL);
		// HandleEvent(eventData, OnDiagnosticsChanged);
		DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * L_1 = __this->get_eventData_23();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_il2cpp_TypeInfo_var);
		EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F * L_2 = ((MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_il2cpp_TypeInfo_var))->get_OnDiagnosticsChanged_25();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_t41A1E14B36268A20DEBF3EB11298E9C64234E280_m883CFC19D1F5D64EA7602E44B913727110343878_RuntimeMethod_var, __this, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_m352A8159CAA485CF1896D61B3A66C10C5626D0A8 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_m700717BC04EB560300AE74FF237EE79C70006478 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowAnchor_m700717BC04EB560300AE74FF237EE79C70006478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowAnchor)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_windowAnchor_26();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowAnchor = value;
		int32_t L_2 = ___value0;
		__this->set_windowAnchor_26(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_3 = __this->get_visualProfiler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowAnchor = windowAnchor;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_5 = __this->get_visualProfiler_16();
		int32_t L_6 = __this->get_windowAnchor_26();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_m7C0E12F2EE1B129D1E96CD16B0E5E07F5C3D21EB_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsSystem_get_WindowOffset_mEE49D233623A681ED429ADC9477324FB13F10F5F (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_m7ECCEB8198AB4DF23FECE6FD13DBAA93AFE9F869 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowOffset_m7ECCEB8198AB4DF23FECE6FD13DBAA93AFE9F869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowOffset)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = __this->get_windowOffset_27();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		bool L_2 = Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// windowOffset = value;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___value0;
		__this->set_windowOffset_27(L_3);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_4 = __this->get_visualProfiler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.WindowOffset = windowOffset;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_6 = __this->get_visualProfiler_16();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = __this->get_windowOffset_27();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_mE3813D629039E301EB1A7E29D847E3D2F4BD9CE5_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_m4E9D23746C2689FDF27EC6888161D2D07ADC4E57 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_m4C646047363B0BE3F3C5D8F057F01C0A6C5C5675 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowScale_m4C646047363B0BE3F3C5D8F057F01C0A6C5C5675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowScale)
		float L_0 = ___value0;
		float L_1 = __this->get_windowScale_28();
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowScale = value;
		float L_2 = ___value0;
		__this->set_windowScale_28(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_3 = __this->get_visualProfiler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowScale = windowScale;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_5 = __this->get_visualProfiler_16();
		float L_6 = __this->get_windowScale_28();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowScale_m51EC76C4189E3804F5C01D83759C6ED080CC480D(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m61032FCD4D5D3D5937AA80360C4D4BC0F900C94C (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m36230A26CD1FD4C7A101C2B9CA70157BDAB035DA (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m36230A26CD1FD4C7A101C2B9CA70157BDAB035DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowFollowSpeed)
		float L_0 = ___value0;
		float L_1 = __this->get_windowFollowSpeed_29();
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowFollowSpeed = value;
		float L_2 = ___value0;
		__this->set_windowFollowSpeed_29(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_3 = __this->get_visualProfiler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowFollowSpeed = windowFollowSpeed;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_5 = __this->get_visualProfiler_16();
		float L_6 = __this->get_windowFollowSpeed_29();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m7688CC80A69CB421F68E2F742CB665A2E1D12B25(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfilerDuringMRC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_m801AA4DE8C8275514D6F2E078DF4EF0A67911CD0 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return showProfilerDuringMRC; }
		bool L_0 = __this->get_showProfilerDuringMRC_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_mE40BBE38E73DA4B1422BAEBAC2445A344D2A9446 (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_mE40BBE38E73DA4B1422BAEBAC2445A344D2A9446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showProfilerDuringMRC)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showProfilerDuringMRC_30();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// showProfilerDuringMRC = value;
		bool L_2 = ___value0;
		__this->set_showProfilerDuringMRC_30(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_3 = __this->get_visualProfiler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.ShowProfilerDuringMRC = showProfilerDuringMRC;
		MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * L_5 = __this->get_visualProfiler_16();
		bool L_6 = __this->get_showProfilerDuringMRC_30();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_mC25C11A5BB7683CB544FADF142DA4CFEA8A17743_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__cctor_mFD4D5610F2E4166D60B659153995061D15FED413 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem__cctor_mFD4D5610F2E4166D60B659153995061D15FED413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker OnDiagnosticsChangedPerfMarker = new ProfilerMarker("[MRTK] MixedRealityDiagnosticsSystem.OnDiagnosticsChanged - Raise event");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral161CC1554C28A07BB6619DE2ECA2476C88D33206, /*hidden argument*/NULL);
		((MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_il2cpp_TypeInfo_var))->set_OnDiagnosticsChangedPerfMarker_24(L_0);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityDiagnosticsHandler> OnDiagnosticsChanged =
		//     delegate (IMixedRealityDiagnosticsHandler handler, BaseEventData eventData)
		//     {
		//         using (OnDiagnosticsChangedPerfMarker.Auto())
		//         {
		//             var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		//             handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		//         }
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3_il2cpp_TypeInfo_var);
		U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 * L_1 = ((U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F * L_2 = (EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F *)il2cpp_codegen_object_new(EventFunction_1_tC898E325190E3666906EBE7E5122E5038C40383F_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m065B4BEAE8A58DFD5F487380B2E2CB9ECE7D13C9(L_2, L_1, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__64_0_m17B8CBA47976941BB395559690A96B452D9A5DA9_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m065B4BEAE8A58DFD5F487380B2E2CB9ECE7D13C9_RuntimeMethod_var);
		((MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_il2cpp_TypeInfo_var))->set_OnDiagnosticsChanged_25(L_2);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA328EF010B5877EC8EAA76388C6821DD5A389D21 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mA328EF010B5877EC8EAA76388C6821DD5A389D21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 * L_0 = (U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 *)il2cpp_codegen_object_new(U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB0B82845BE883FFA6404B0D2BB77166194C14B2D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB0B82845BE883FFA6404B0D2BB77166194C14B2D (U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::<.cctor>b__64_0(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__64_0_m17B8CBA47976941BB395559690A96B452D9A5DA9 (U3CU3Ec_t38691F5D1E4354861AA1D0A8CAEE0D38075262D3 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__64_0_m17B8CBA47976941BB395559690A96B452D9A5DA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (OnDiagnosticsChangedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370_il2cpp_TypeInfo_var))->get_OnDiagnosticsChangedPerfMarker_24();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_2 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * L_3 = ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B_mB46E6C039C0B919EB4EF7B85C4EE61B2FE4671DD(L_2, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B_mB46E6C039C0B919EB4EF7B85C4EE61B2FE4671DD_RuntimeMethod_var);
		V_2 = L_3;
		// handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		RuntimeObject* L_4 = ___handler0;
		DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * L_5 = V_2;
		NullCheck(L_4);
		InterfaceActionInvoker1< DiagnosticsEventData_t3AF26743E85D3CFC5A126AB297E32DAEA53A081B * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler::OnDiagnosticSettingsChanged(Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData) */, IMixedRealityDiagnosticsHandler_t41A1E14B36268A20DEBF3EB11298E9C64234E280_il2cpp_TypeInfo_var, L_4, L_5);
		// }
		IL2CPP_LEAVE(0x2C, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
	}

IL_002c:
	{
		// };
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m43784A6A5549150BD835786CB88AB1EA1EC5A0B7 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CWindowParentU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m625CD1B2E68E4E338B30B445C301496ACE083886 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CWindowParentU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_IsVisible_mEF7385D7A1F6D38418903A4F9AAE30F54E52C40B (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return isVisible; }
		bool L_0 = __this->get_isVisible_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_m7B2B74EB618C019D5574F080A696B2EC3B7F89BF (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->set_isVisible_18(L_0);
		// set { isVisible = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_ShouldShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m40EC420C622CBCFDE84C84E1EDE25A903CE19C54 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		//             (appCapture == null || !appCapture.IsCapturingVideo || showProfilerDuringMRC) &&
		// #endif // WINDOWS_UWP
		//             isVisible;
		AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F * L_0 = __this->get_appCapture_69();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F * L_1 = __this->get_appCapture_69();
		NullCheck(L_1);
		bool L_2 = AppCapture_get_IsCapturingVideo_m03AFE17CCFD4D72DB812E799E6A9C18E6270AE38(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = __this->get_showProfilerDuringMRC_26();
		if (!L_3)
		{
			goto IL_0024;
		}
	}

IL_001d:
	{
		bool L_4 = __this->get_isVisible_18();
		return L_4;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_FrameInfoVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_FrameInfoVisible_mE63B40FA2D7519D4657F3C4BA4EE65680D9BD260 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return frameInfoVisible; }
		bool L_0 = __this->get_frameInfoVisible_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameInfoVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m5068E60946DBEE53EC1CF9C7A60F5B3E97EA5D63 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { frameInfoVisible = value; }
		bool L_0 = ___value0;
		__this->set_frameInfoVisible_19(L_0);
		// set { frameInfoVisible = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_MemoryStatsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_MemoryStatsVisible_mEB0CC3D3A2458C72B56C6E878CC893D5BB1F29AF (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return memoryStatsVisible; }
		bool L_0 = __this->get_memoryStatsVisible_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_MemoryStatsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m3E02329F033935A9A26869C16E7C5D7E1ACBFD70 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { memoryStatsVisible = value; }
		bool L_0 = ___value0;
		__this->set_memoryStatsVisible_20(L_0);
		// set { memoryStatsVisible = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_FrameSampleRate_mA0D3677E87BAD7A111E28D0013F9E3CC4BF0AE44 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return frameSampleRate; }
		float L_0 = __this->get_frameSampleRate_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE01CA28695E3C5D2E33CCC7F5688FF20E9849039 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->set_frameSampleRate_21(L_0);
		// set { frameSampleRate = value; }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_get_WindowAnchor_mDEEF34E421D0A30F66A3CA8A5BF5AA80F2BAA130 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m7C0E12F2EE1B129D1E96CD16B0E5E07F5C3D21EB (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->set_windowAnchor_22(L_0);
		// set { windowAnchor = value; }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityToolkitVisualProfiler_get_WindowOffset_mF1CE93F74AF8AF89D4034E3E9E8929E136EDE649 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_mE3813D629039E301EB1A7E29D847E3D2F4BD9CE5 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		// set { windowOffset = value; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_windowOffset_23(L_0);
		// set { windowOffset = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowScale_m343F2E343D2802A86D6527664FA495B7B4142BD2 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_m51EC76C4189E3804F5C01D83759C6ED080CC480D (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_set_WindowScale_m51EC76C4189E3804F5C01D83759C6ED080CC480D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, (0.5f), (5.0f), /*hidden argument*/NULL);
		__this->set_windowScale_24(L_1);
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowFollowSpeed_mCC8173DE39DA118584A54A1924803663733AA899 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m7688CC80A69CB421F68E2F742CB665A2E1D12B25 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m7688CC80A69CB421F68E2F742CB665A2E1D12B25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { windowFollowSpeed = Mathf.Abs(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_windowFollowSpeed_25(L_1);
		// set { windowFollowSpeed = Mathf.Abs(value); }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_ShowProfilerDuringMRC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_ShowProfilerDuringMRC_m285FD2CBF7F7242469DFD02E42E8D84D5CCAD198 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return showProfilerDuringMRC; }
		bool L_0 = __this->get_showProfilerDuringMRC_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_mC25C11A5BB7683CB544FADF142DA4CFEA8A17743 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { showProfilerDuringMRC = value; }
		bool L_0 = ___value0;
		__this->set_showProfilerDuringMRC_26(L_0);
		// set { showProfilerDuringMRC = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m9AEDBA4194A858134DC643478E2C0D7573D971ED (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_Reset_m9AEDBA4194A858134DC643478E2C0D7573D971ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * V_0 = NULL;
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * V_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_2 = NULL;
	{
		// if (defaultMaterial == null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_defaultMaterial_63();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Hidden/Internal-Colored"));
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_2 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteralF11AF337B3340D92B47E93D08CB0B65A6AE686F5, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_3, L_2, /*hidden argument*/NULL);
		__this->set_defaultMaterial_63(L_3);
		// defaultMaterial.SetFloat("_ZWrite", 1.0f);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_defaultMaterial_63();
		NullCheck(L_4);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_4, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, (1.0f), /*hidden argument*/NULL);
		// defaultMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = __this->get_defaultMaterial_63();
		NullCheck(L_5);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_5, _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3, (0.0f), /*hidden argument*/NULL);
		// defaultMaterial.renderQueue = 5000;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get_defaultMaterial_63();
		NullCheck(L_6);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_6, ((int32_t)5000), /*hidden argument*/NULL);
	}

IL_005d:
	{
		// if (defaultInstancedMaterial == null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get_defaultInstancedMaterial_64();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00dd;
		}
	}
	{
		// Shader defaultInstancedShader = Shader.Find("Hidden/Instanced-Colored");
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_9 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteralFE2CE179ADA45417D29FD8AAF094AD2E7762DB78, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (defaultInstancedShader != null)
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00d3;
		}
	}
	{
		// defaultInstancedMaterial = new Material(defaultInstancedShader);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_12 = V_0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultInstancedMaterial_64(L_13);
		// defaultInstancedMaterial.enableInstancing = true;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_14 = __this->get_defaultInstancedMaterial_64();
		NullCheck(L_14);
		Material_set_enableInstancing_m745D94DF21B9749DA7CFE42BAB3CBD05F614B81E(L_14, (bool)1, /*hidden argument*/NULL);
		// defaultInstancedMaterial.SetFloat("_ZWrite", 1.0f);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = __this->get_defaultInstancedMaterial_64();
		NullCheck(L_15);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_15, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, (1.0f), /*hidden argument*/NULL);
		// defaultInstancedMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_16 = __this->get_defaultInstancedMaterial_64();
		NullCheck(L_16);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_16, _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3, (0.0f), /*hidden argument*/NULL);
		// defaultInstancedMaterial.renderQueue = 5000;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_17 = __this->get_defaultInstancedMaterial_64();
		NullCheck(L_17);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_17, ((int32_t)5000), /*hidden argument*/NULL);
		// }
		goto IL_00dd;
	}

IL_00d3:
	{
		// Debug.LogWarning("A shader supporting instancing could not be found for the VisualProfiler, falling back to traditional rendering. This may impact performance.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral6AC3D240BE15CDE5454371B7FC93D8B50949262C, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// if (Application.isPlaying)
		bool L_18 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_01de;
		}
	}
	{
		// backgroundMaterial = new Material(defaultMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_19 = __this->get_defaultMaterial_63();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_20 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_20, L_19, /*hidden argument*/NULL);
		__this->set_backgroundMaterial_65(L_20);
		// foregroundMaterial = new Material(defaultMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_21 = __this->get_defaultMaterial_63();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_22 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_22, L_21, /*hidden argument*/NULL);
		__this->set_foregroundMaterial_66(L_22);
		// defaultMaterial.renderQueue = foregroundMaterial.renderQueue - 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_23 = __this->get_defaultMaterial_63();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_24 = __this->get_foregroundMaterial_66();
		NullCheck(L_24);
		int32_t L_25 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		// backgroundMaterial.renderQueue = defaultMaterial.renderQueue - 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_26 = __this->get_backgroundMaterial_65();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_27 = __this->get_defaultMaterial_63();
		NullCheck(L_27);
		int32_t L_28 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), /*hidden argument*/NULL);
		// MeshRenderer meshRenderer = new GameObject().AddComponent<TextMesh>().GetComponent<MeshRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_29, /*hidden argument*/NULL);
		NullCheck(L_29);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_30 = GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A(L_29, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var);
		NullCheck(L_30);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_31 = Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D(L_30, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var);
		V_1 = L_31;
		// textMaterial = new Material(meshRenderer.sharedMaterial);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_32 = V_1;
		NullCheck(L_32);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_33 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_32, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_34 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_34, L_33, /*hidden argument*/NULL);
		__this->set_textMaterial_67(L_34);
		// textMaterial.renderQueue = defaultMaterial.renderQueue;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_35 = __this->get_textMaterial_67();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_36 = __this->get_defaultMaterial_63();
		NullCheck(L_36);
		int32_t L_37 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_35, L_37, /*hidden argument*/NULL);
		// Destroy(meshRenderer.gameObject);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_38 = V_1;
		NullCheck(L_38);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_39, /*hidden argument*/NULL);
		// MeshFilter quadMeshFilter = GameObject.CreatePrimitive(PrimitiveType.Quad).GetComponent<MeshFilter>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(5, /*hidden argument*/NULL);
		NullCheck(L_40);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_41 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_40, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		V_2 = L_41;
		// if (defaultInstancedMaterial != null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_42 = __this->get_defaultInstancedMaterial_64();
		bool L_43 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_42, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01c7;
		}
	}
	{
		// quadMesh = quadMeshFilter.mesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_44 = V_2;
		NullCheck(L_44);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_45 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_44, /*hidden argument*/NULL);
		__this->set_quadMesh_68(L_45);
		// quadMesh.bounds = new Bounds(Vector3.zero, Vector3.one * float.MaxValue);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_46 = __this->get_quadMesh_68();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_48, ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((&L_50), L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		Mesh_set_bounds_mB09338F622466456ADBCC449BB1F62F2EF1731B6(L_46, L_50, /*hidden argument*/NULL);
		// }
		goto IL_01d3;
	}

IL_01c7:
	{
		// quadMesh = quadMeshFilter.sharedMesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_51 = V_2;
		NullCheck(L_51);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_52 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_51, /*hidden argument*/NULL);
		__this->set_quadMesh_68(L_52);
	}

IL_01d3:
	{
		// Destroy(quadMeshFilter.gameObject);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_53 = V_2;
		NullCheck(L_53);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_54 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_54, /*hidden argument*/NULL);
	}

IL_01de:
	{
		// stopwatch.Reset();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_55 = __this->get_stopwatch_55();
		NullCheck(L_55);
		Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_55, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_56 = __this->get_stopwatch_55();
		NullCheck(L_56);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_56, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Start_m47AF51649CAE727011C67B3ACC1CA500758EA6AE (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// Reset();
		MixedRealityToolkitVisualProfiler_Reset_m9AEDBA4194A858134DC643478E2C0D7573D971ED(__this, /*hidden argument*/NULL);
		// BuildWindow();
		MixedRealityToolkitVisualProfiler_BuildWindow_m1771377B714D7C28832FB7669AC34C8167A57A60(__this, /*hidden argument*/NULL);
		// BuildFrameRateStrings();
		MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m182830EF752E46209510B56B6D7043B32AF09C1F(__this, /*hidden argument*/NULL);
		// appCapture = AppCapture.GetForCurrentView();
		AppCapture_tB6434A902143A07D9DC259154565EC03C02D309F * L_0 = AppCapture_GetForCurrentView_m68DBE2258EFD881607F4C96763DE80004B68DFDD(/*hidden argument*/NULL);
		__this->set_appCapture_69(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OnDestroy_mD6ADDB05318BB77E005D2A5567E38C00D8033AD2 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_OnDestroy_mD6ADDB05318BB77E005D2A5567E38C00D8033AD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (window != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_window_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(window.gameObject);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_window_33();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_LateUpdate_m9261E9CC9117EF6AE700538A339DEFA7395D1076 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_LateUpdate_m9261E9CC9117EF6AE700538A339DEFA7395D1076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B6_0 = NULL;
	{
		// if (window == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_window_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// using (LateUpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_LateUpdatePerfMarker_70();
		V_1 = L_2;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			// Transform cameraTransform = CameraCache.Main ? CameraCache.Main.transform : null;
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_5 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002c;
			}
		}

IL_0029:
		{
			G_B6_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
			goto IL_0036;
		}

IL_002c:
		{
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
			NullCheck(L_6);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_6, /*hidden argument*/NULL);
			G_B6_0 = L_7;
		}

IL_0036:
		{
			V_2 = G_B6_0;
			// if (ShouldShowProfiler && cameraTransform != null)
			bool L_8 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m40EC420C622CBCFDE84C84E1EDE25A903CE19C54(__this, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_00c2;
			}
		}

IL_0042:
		{
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_00c2;
			}
		}

IL_004b:
		{
			// float t = Time.deltaTime * windowFollowSpeed;
			float L_11 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
			float L_12 = __this->get_windowFollowSpeed_25();
			V_4 = ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12));
			// window.position = Vector3.Lerp(window.position, CalculateWindowPosition(cameraTransform), t);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = __this->get_window_33();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = __this->get_window_33();
			NullCheck(L_14);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = V_2;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m1FDF7F2E31146BB12F1718EC2961B72E640B42F2(__this, L_16, /*hidden argument*/NULL);
			float L_18 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_15, L_17, L_18, /*hidden argument*/NULL);
			NullCheck(L_13);
			Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_13, L_19, /*hidden argument*/NULL);
			// window.rotation = Quaternion.Slerp(window.rotation, CalculateWindowRotation(cameraTransform), t);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = __this->get_window_33();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = __this->get_window_33();
			NullCheck(L_21);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_21, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = V_2;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mDC5A1517E45D53B0F318EFEE1C9BB5CB6F4E23F0(__this, L_23, /*hidden argument*/NULL);
			float L_25 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_22, L_24, L_25, /*hidden argument*/NULL);
			NullCheck(L_20);
			Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_20, L_26, /*hidden argument*/NULL);
			// window.localScale = defaultWindowScale * windowScale;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = __this->get_window_33();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_defaultWindowScale_9();
			float L_29 = __this->get_windowScale_24();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_28, L_29, /*hidden argument*/NULL);
			NullCheck(L_27);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_27, L_30, /*hidden argument*/NULL);
			// CalculateBackgroundSize();
			MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_mCFBDEAF5A8089836FD001E0D9B119949123FAB1F(__this, /*hidden argument*/NULL);
		}

IL_00c2:
		{
			// FrameTimingManager.CaptureFrameTimings();
			FrameTimingManager_CaptureFrameTimings_m1816EB99EFF92F9394E7000A9CB1F9F9363A90F5(/*hidden argument*/NULL);
			// ++frameCount;
			int32_t L_31 = __this->get_frameCount_54();
			__this->set_frameCount_54(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
			// float elapsedSeconds = stopwatch.ElapsedMilliseconds * 0.001f;
			Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_32 = __this->get_stopwatch_55();
			NullCheck(L_32);
			int64_t L_33 = Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177(L_32, /*hidden argument*/NULL);
			V_3 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_33))), (float)(0.001f)));
			// if (elapsedSeconds >= frameSampleRate)
			float L_34 = V_3;
			float L_35 = __this->get_frameSampleRate_21();
			if ((!(((float)L_34) >= ((float)L_35))))
			{
				goto IL_023b;
			}
		}

IL_00f4:
		{
			// int cpuFrameRate = (int)(1.0f / (elapsedSeconds / frameCount));
			float L_36 = V_3;
			int32_t L_37 = __this->get_frameCount_54();
			V_5 = (il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)(1.0f)/(float)((float)((float)L_36/(float)(((float)((float)L_37)))))))));
			// int gpuFrameRate = 0;
			V_6 = 0;
			// uint frameTimingsCount = FrameTimingManager.GetLatestTimings((uint)Mathf.Min(frameCount, maxFrameTimings), frameTimings);
			int32_t L_38 = __this->get_frameCount_54();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			int32_t L_39 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_maxFrameTimings_6();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			int32_t L_40 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_38, L_39, /*hidden argument*/NULL);
			FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_41 = __this->get_frameTimings_56();
			uint32_t L_42 = FrameTimingManager_GetLatestTimings_m286888EFC8779C9F97D5140EE5D7EE80BEE3DE35(L_40, L_41, /*hidden argument*/NULL);
			V_7 = L_42;
			// if (frameTimingsCount != 0)
			uint32_t L_43 = V_7;
			if (!L_43)
			{
				goto IL_0161;
			}
		}

IL_012a:
		{
			// AverageFrameTiming(frameTimings, frameTimingsCount, out cpuFrameTime, out gpuFrameTime);
			FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_44 = __this->get_frameTimings_56();
			uint32_t L_45 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			MixedRealityToolkitVisualProfiler_AverageFrameTiming_mEC3E2C15FAD5602EBE090962CA0BB25710863DFB(L_44, L_45, (float*)(&V_8), (float*)(&V_9), /*hidden argument*/NULL);
			// cpuFrameRate = (int)(1.0f / (cpuFrameTime / frameCount));
			float L_46 = V_8;
			int32_t L_47 = __this->get_frameCount_54();
			V_5 = (il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)(1.0f)/(float)((float)((float)L_46/(float)(((float)((float)L_47)))))))));
			// gpuFrameRate = (int)(1.0f / (gpuFrameTime / frameCount));
			float L_48 = V_9;
			int32_t L_49 = __this->get_frameCount_54();
			V_6 = (il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)(1.0f)/(float)((float)((float)L_48/(float)(((float)((float)L_49)))))))));
		}

IL_0161:
		{
			// cpuFrameRateText.text = cpuFrameRateStrings[Mathf.Clamp(cpuFrameRate, 0, maxTargetFrameRate)];
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_50 = __this->get_cpuFrameRateText_35();
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_51 = __this->get_cpuFrameRateStrings_57();
			int32_t L_52 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			int32_t L_53 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			int32_t L_54 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_52, 0, L_53, /*hidden argument*/NULL);
			NullCheck(L_51);
			int32_t L_55 = L_54;
			String_t* L_56 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			NullCheck(L_50);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_50, L_56, /*hidden argument*/NULL);
			// if (gpuFrameRate != 0)
			int32_t L_57 = V_6;
			if (!L_57)
			{
				goto IL_01b4;
			}
		}

IL_0184:
		{
			// gpuFrameRateText.gameObject.SetActive(true);
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_58 = __this->get_gpuFrameRateText_36();
			NullCheck(L_58);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_59 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_58, /*hidden argument*/NULL);
			NullCheck(L_59);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_59, (bool)1, /*hidden argument*/NULL);
			// gpuFrameRateText.text = gpuFrameRateStrings[Mathf.Clamp(gpuFrameRate, 0, maxTargetFrameRate)];
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_60 = __this->get_gpuFrameRateText_36();
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_61 = __this->get_gpuFrameRateStrings_58();
			int32_t L_62 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			int32_t L_63 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			int32_t L_64 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_62, 0, L_63, /*hidden argument*/NULL);
			NullCheck(L_61);
			int32_t L_65 = L_64;
			String_t* L_66 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
			NullCheck(L_60);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_60, L_66, /*hidden argument*/NULL);
		}

IL_01b4:
		{
			// if (frameInfoVisible)
			bool L_67 = __this->get_frameInfoVisible_19();
			if (!L_67)
			{
				goto IL_021e;
			}
		}

IL_01bc:
		{
			// for (int i = frameRange - 1; i > 0; --i)
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			int32_t L_68 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_frameRange_7();
			V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)1));
			goto IL_01e9;
		}

IL_01c7:
		{
			// frameInfoColors[i] = frameInfoColors[i - 1];
			Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_69 = __this->get_frameInfoColors_50();
			int32_t L_70 = V_10;
			Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_71 = __this->get_frameInfoColors_50();
			int32_t L_72 = V_10;
			NullCheck(L_71);
			int32_t L_73 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)1));
			Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
			NullCheck(L_69);
			(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_74);
			// for (int i = frameRange - 1; i > 0; --i)
			int32_t L_75 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1));
		}

IL_01e9:
		{
			// for (int i = frameRange - 1; i > 0; --i)
			int32_t L_76 = V_10;
			if ((((int32_t)L_76) > ((int32_t)0)))
			{
				goto IL_01c7;
			}
		}

IL_01ee:
		{
			// frameInfoColors[0] = CalculateFrameColor(cpuFrameRate);
			Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_77 = __this->get_frameInfoColors_50();
			int32_t L_78 = V_5;
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_79 = MixedRealityToolkitVisualProfiler_CalculateFrameColor_mC4FE6FD4C59E22ABE394DEE50D66C34056D88798(__this, L_78, /*hidden argument*/NULL);
			Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_80 = Color_op_Implicit_m653C1CE2391B0A04114B9132C37E41AC92B33AFE(L_79, /*hidden argument*/NULL);
			NullCheck(L_77);
			(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_80);
			// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
			MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_81 = __this->get_frameInfoPropertyBlock_51();
			int32_t L_82 = __this->get_colorID_52();
			Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_83 = __this->get_frameInfoColors_50();
			NullCheck(L_81);
			MaterialPropertyBlock_SetVectorArray_m189E1657C000ACBCAF56CB62F3A4DCF1FD472787(L_81, L_82, L_83, /*hidden argument*/NULL);
		}

IL_021e:
		{
			// frameCount = 0;
			__this->set_frameCount_54(0);
			// stopwatch.Reset();
			Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_84 = __this->get_stopwatch_55();
			NullCheck(L_84);
			Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_84, /*hidden argument*/NULL);
			// stopwatch.Start();
			Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_85 = __this->get_stopwatch_55();
			NullCheck(L_85);
			Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_85, /*hidden argument*/NULL);
		}

IL_023b:
		{
			// if (ShouldShowProfiler && frameInfoVisible)
			bool L_86 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m40EC420C622CBCFDE84C84E1EDE25A903CE19C54(__this, /*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_031b;
			}
		}

IL_0246:
		{
			bool L_87 = __this->get_frameInfoVisible_19();
			if (!L_87)
			{
				goto IL_031b;
			}
		}

IL_0251:
		{
			// Matrix4x4 parentLocalToWorldMatrix = window.localToWorldMatrix;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_88 = __this->get_window_33();
			NullCheck(L_88);
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_89 = Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED(L_88, /*hidden argument*/NULL);
			V_11 = L_89;
			// if (defaultInstancedMaterial != null && SystemInfo.supportsInstancing)
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_90 = __this->get_defaultInstancedMaterial_64();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_91 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_90, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_91)
			{
				goto IL_02b0;
			}
		}

IL_026c:
		{
			bool L_92 = SystemInfo_get_supportsInstancing_mF0ED4B6C2658260EB52F3503637A659306D4DAAB(/*hidden argument*/NULL);
			if (!L_92)
			{
				goto IL_02b0;
			}
		}

IL_0273:
		{
			// frameInfoPropertyBlock.SetMatrix(parentMatrixID, parentLocalToWorldMatrix);
			MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_93 = __this->get_frameInfoPropertyBlock_51();
			int32_t L_94 = __this->get_parentMatrixID_53();
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_95 = V_11;
			NullCheck(L_93);
			MaterialPropertyBlock_SetMatrix_mF4694BD7CFC224C638D30BFC9CC91D5D711EA227(L_93, L_94, L_95, /*hidden argument*/NULL);
			// Graphics.DrawMeshInstanced(quadMesh, 0, defaultInstancedMaterial, frameInfoMatrices, frameInfoMatrices.Length, frameInfoPropertyBlock, UnityEngine.Rendering.ShadowCastingMode.Off, false);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_96 = __this->get_quadMesh_68();
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_97 = __this->get_defaultInstancedMaterial_64();
			Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_98 = __this->get_frameInfoMatrices_49();
			Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_99 = __this->get_frameInfoMatrices_49();
			NullCheck(L_99);
			MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_100 = __this->get_frameInfoPropertyBlock_51();
			IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
			Graphics_DrawMeshInstanced_mD1048BED7CCCC0675C7EC696407E545456D27D19(L_96, 0, L_97, L_98, (((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length)))), L_100, 0, (bool)0, /*hidden argument*/NULL);
			// }
			goto IL_031b;
		}

IL_02b0:
		{
			// for (int i = 0; i < frameInfoMatrices.Length; ++i)
			V_12 = 0;
			goto IL_030f;
		}

IL_02b5:
		{
			// frameInfoPropertyBlock.SetColor(colorID, frameInfoColors[i]);
			MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_101 = __this->get_frameInfoPropertyBlock_51();
			int32_t L_102 = __this->get_colorID_52();
			Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_103 = __this->get_frameInfoColors_50();
			int32_t L_104 = V_12;
			NullCheck(L_103);
			int32_t L_105 = L_104;
			Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_107 = Color_op_Implicit_m51CEC50D37ABC484073AECE7EB958B414F2B6E7B(L_106, /*hidden argument*/NULL);
			NullCheck(L_101);
			MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F(L_101, L_102, L_107, /*hidden argument*/NULL);
			// Graphics.DrawMesh(quadMesh, parentLocalToWorldMatrix * frameInfoMatrices[i], defaultMaterial, 0, null, 0, frameInfoPropertyBlock, false, false, false);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_108 = __this->get_quadMesh_68();
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_109 = V_11;
			Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_110 = __this->get_frameInfoMatrices_49();
			int32_t L_111 = V_12;
			NullCheck(L_110);
			int32_t L_112 = L_111;
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
			IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_114 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_109, L_113, /*hidden argument*/NULL);
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_115 = __this->get_defaultMaterial_63();
			MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_116 = __this->get_frameInfoPropertyBlock_51();
			IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
			Graphics_DrawMesh_mA26415237B646D7C832483597F98C6C158785660(L_108, L_114, L_115, 0, (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)NULL, 0, L_116, (bool)0, (bool)0, (bool)0, /*hidden argument*/NULL);
			// for (int i = 0; i < frameInfoMatrices.Length; ++i)
			int32_t L_117 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		}

IL_030f:
		{
			// for (int i = 0; i < frameInfoMatrices.Length; ++i)
			int32_t L_118 = V_12;
			Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_119 = __this->get_frameInfoMatrices_49();
			NullCheck(L_119);
			if ((((int32_t)L_118) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_119)->max_length)))))))
			{
				goto IL_02b5;
			}
		}

IL_031b:
		{
			// if (ShouldShowProfiler && memoryStatsVisible)
			bool L_120 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m40EC420C622CBCFDE84C84E1EDE25A903CE19C54(__this, /*hidden argument*/NULL);
			if (!L_120)
			{
				goto IL_049f;
			}
		}

IL_0326:
		{
			bool L_121 = __this->get_memoryStatsVisible_20();
			if (!L_121)
			{
				goto IL_049f;
			}
		}

IL_0331:
		{
			// ulong limit = AppMemoryUsageLimit;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			uint64_t L_122 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_mAB08DEB16E65623B8773386706B547C8FE4A9860(/*hidden argument*/NULL);
			V_13 = L_122;
			// if (limit != limitMemoryUsage)
			uint64_t L_123 = V_13;
			uint64_t L_124 = __this->get_limitMemoryUsage_62();
			if ((((int64_t)L_123) == ((int64_t)L_124)))
			{
				goto IL_037d;
			}
		}

IL_0342:
		{
			// if (WillDisplayedMemoryUsageDiffer(limitMemoryUsage, limit, displayedDecimalDigits))
			uint64_t L_125 = __this->get_limitMemoryUsage_62();
			uint64_t L_126 = V_13;
			int32_t L_127 = __this->get_displayedDecimalDigits_27();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			bool L_128 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mFBC69344DD46F8C2E6BBEEF586C99CD1C8C65911(L_125, L_126, L_127, /*hidden argument*/NULL);
			if (!L_128)
			{
				goto IL_0375;
			}
		}

IL_0357:
		{
			// MemoryUsageToString(stringBuffer, displayedDecimalDigits, limitMemoryText, limitMemoryString, limit);
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_129 = __this->get_stringBuffer_59();
			int32_t L_130 = __this->get_displayedDecimalDigits_27();
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_131 = __this->get_limitMemoryText_40();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			String_t* L_132 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_limitMemoryString_14();
			uint64_t L_133 = V_13;
			MixedRealityToolkitVisualProfiler_MemoryUsageToString_mFF9746DE32CAE910FE353BC6FA9AB78773B27AEB(L_129, L_130, L_131, L_132, L_133, /*hidden argument*/NULL);
		}

IL_0375:
		{
			// limitMemoryUsage = limit;
			uint64_t L_134 = V_13;
			__this->set_limitMemoryUsage_62(L_134);
		}

IL_037d:
		{
			// ulong usage = AppMemoryUsage;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			uint64_t L_135 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mF89F67E724725BD34A37BDB9A4D2AF39C4BE63E9(/*hidden argument*/NULL);
			V_14 = L_135;
			// if (usage != memoryUsage)
			uint64_t L_136 = V_14;
			uint64_t L_137 = __this->get_memoryUsage_60();
			if ((((int64_t)L_136) == ((int64_t)L_137)))
			{
				goto IL_0406;
			}
		}

IL_038e:
		{
			// usedAnchor.localScale = new Vector3((float)usage / limitMemoryUsage, usedAnchor.localScale.y, usedAnchor.localScale.z);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_138 = __this->get_usedAnchor_43();
			uint64_t L_139 = V_14;
			uint64_t L_140 = __this->get_limitMemoryUsage_62();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_141 = __this->get_usedAnchor_43();
			NullCheck(L_141);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_142 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_141, /*hidden argument*/NULL);
			float L_143 = L_142.get_y_3();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_144 = __this->get_usedAnchor_43();
			NullCheck(L_144);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_145 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_144, /*hidden argument*/NULL);
			float L_146 = L_145.get_z_4();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_147;
			memset((&L_147), 0, sizeof(L_147));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_147), ((float)((float)(((float)((float)(((double)((uint64_t)L_139))))))/(float)(((float)((float)(((double)((uint64_t)L_140)))))))), L_143, L_146, /*hidden argument*/NULL);
			NullCheck(L_138);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_138, L_147, /*hidden argument*/NULL);
			// if (WillDisplayedMemoryUsageDiffer(memoryUsage, usage, displayedDecimalDigits))
			uint64_t L_148 = __this->get_memoryUsage_60();
			uint64_t L_149 = V_14;
			int32_t L_150 = __this->get_displayedDecimalDigits_27();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			bool L_151 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mFBC69344DD46F8C2E6BBEEF586C99CD1C8C65911(L_148, L_149, L_150, /*hidden argument*/NULL);
			if (!L_151)
			{
				goto IL_03fe;
			}
		}

IL_03e0:
		{
			// MemoryUsageToString(stringBuffer, displayedDecimalDigits, usedMemoryText, usedMemoryString, usage);
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_152 = __this->get_stringBuffer_59();
			int32_t L_153 = __this->get_displayedDecimalDigits_27();
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_154 = __this->get_usedMemoryText_38();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			String_t* L_155 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_usedMemoryString_12();
			uint64_t L_156 = V_14;
			MixedRealityToolkitVisualProfiler_MemoryUsageToString_mFF9746DE32CAE910FE353BC6FA9AB78773B27AEB(L_152, L_153, L_154, L_155, L_156, /*hidden argument*/NULL);
		}

IL_03fe:
		{
			// memoryUsage = usage;
			uint64_t L_157 = V_14;
			__this->set_memoryUsage_60(L_157);
		}

IL_0406:
		{
			// if (memoryUsage > peakMemoryUsage)
			uint64_t L_158 = __this->get_memoryUsage_60();
			uint64_t L_159 = __this->get_peakMemoryUsage_61();
			if ((!(((uint64_t)L_158) > ((uint64_t)L_159))))
			{
				goto IL_049f;
			}
		}

IL_0417:
		{
			// peakAnchor.localScale = new Vector3((float)memoryUsage / limitMemoryUsage, peakAnchor.localScale.y, peakAnchor.localScale.z);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_160 = __this->get_peakAnchor_44();
			uint64_t L_161 = __this->get_memoryUsage_60();
			uint64_t L_162 = __this->get_limitMemoryUsage_62();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_163 = __this->get_peakAnchor_44();
			NullCheck(L_163);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_164 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_163, /*hidden argument*/NULL);
			float L_165 = L_164.get_y_3();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_166 = __this->get_peakAnchor_44();
			NullCheck(L_166);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_167 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_166, /*hidden argument*/NULL);
			float L_168 = L_167.get_z_4();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_169;
			memset((&L_169), 0, sizeof(L_169));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_169), ((float)((float)(((float)((float)(((double)((uint64_t)L_161))))))/(float)(((float)((float)(((double)((uint64_t)L_162)))))))), L_165, L_168, /*hidden argument*/NULL);
			NullCheck(L_160);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_160, L_169, /*hidden argument*/NULL);
			// if (WillDisplayedMemoryUsageDiffer(peakMemoryUsage, memoryUsage, displayedDecimalDigits))
			uint64_t L_170 = __this->get_peakMemoryUsage_61();
			uint64_t L_171 = __this->get_memoryUsage_60();
			int32_t L_172 = __this->get_displayedDecimalDigits_27();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			bool L_173 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mFBC69344DD46F8C2E6BBEEF586C99CD1C8C65911(L_170, L_171, L_172, /*hidden argument*/NULL);
			if (!L_173)
			{
				goto IL_0493;
			}
		}

IL_0471:
		{
			// MemoryUsageToString(stringBuffer, displayedDecimalDigits, peakMemoryText, peakMemoryString, memoryUsage);
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_174 = __this->get_stringBuffer_59();
			int32_t L_175 = __this->get_displayedDecimalDigits_27();
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_176 = __this->get_peakMemoryText_39();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			String_t* L_177 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_peakMemoryString_13();
			uint64_t L_178 = __this->get_memoryUsage_60();
			MixedRealityToolkitVisualProfiler_MemoryUsageToString_mFF9746DE32CAE910FE353BC6FA9AB78773B27AEB(L_174, L_175, L_176, L_177, L_178, /*hidden argument*/NULL);
		}

IL_0493:
		{
			// peakMemoryUsage = memoryUsage;
			uint64_t L_179 = __this->get_memoryUsage_60();
			__this->set_peakMemoryUsage_61(L_179);
		}

IL_049f:
		{
			// window.gameObject.SetActive(ShouldShowProfiler);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_180 = __this->get_window_33();
			NullCheck(L_180);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_181 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_180, /*hidden argument*/NULL);
			bool L_182 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m40EC420C622CBCFDE84C84E1EDE25A903CE19C54(__this, /*hidden argument*/NULL);
			NullCheck(L_181);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_181, L_182, /*hidden argument*/NULL);
			// memoryStats.gameObject.SetActive(memoryStatsVisible);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_183 = __this->get_memoryStats_37();
			NullCheck(L_183);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_184 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_183, /*hidden argument*/NULL);
			bool L_185 = __this->get_memoryStatsVisible_20();
			NullCheck(L_184);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_184, L_185, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x4DB, FINALLY_04cd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_04cd;
	}

FINALLY_04cd:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1229)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1229)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4DB, IL_04db)
	}

IL_04db:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m1FDF7F2E31146BB12F1718EC2961B72E640B42F2 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m1FDF7F2E31146BB12F1718EC2961B72E640B42F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (CalculateWindowPositionPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_CalculateWindowPositionPerfMarker_71();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// float windowDistance = Mathf.Max(16.0f / CameraCache.Main.fieldOfView, CameraCache.Main.nearClipPlane + 0.25f);
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
			NullCheck(L_2);
			float L_3 = Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6(L_2, /*hidden argument*/NULL);
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = CameraCache_get_Main_m2A3B0B6EC1172E5FDC70B69255536BFFDD1EC4AF(/*hidden argument*/NULL);
			NullCheck(L_4);
			float L_5 = Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_6 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(((float)((float)(16.0f)/(float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)(0.25f))), /*hidden argument*/NULL);
			V_2 = L_6;
			// Vector3 position = cameraTransform.position + (cameraTransform.forward * windowDistance);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___cameraTransform0;
			NullCheck(L_7);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___cameraTransform0;
			NullCheck(L_9);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_9, /*hidden argument*/NULL);
			float L_11 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_10, L_11, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_8, L_12, /*hidden argument*/NULL);
			V_3 = L_13;
			// Vector3 horizontalOffset = cameraTransform.right * windowOffset.x;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = ___cameraTransform0;
			NullCheck(L_14);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_14, /*hidden argument*/NULL);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_16 = __this->get_address_of_windowOffset_23();
			float L_17 = L_16->get_x_0();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_15, L_17, /*hidden argument*/NULL);
			V_4 = L_18;
			// Vector3 verticalOffset = cameraTransform.up * windowOffset.y;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = ___cameraTransform0;
			NullCheck(L_19);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_19, /*hidden argument*/NULL);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_21 = __this->get_address_of_windowOffset_23();
			float L_22 = L_21->get_y_1();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_20, L_22, /*hidden argument*/NULL);
			V_5 = L_23;
			// switch (windowAnchor)
			int32_t L_24 = __this->get_windowAnchor_22();
			V_6 = L_24;
			int32_t L_25 = V_6;
			switch (L_25)
			{
				case 0:
				{
					goto IL_00b1;
				}
				case 1:
				{
					goto IL_00c3;
				}
				case 2:
				{
					goto IL_00ce;
				}
				case 3:
				{
					goto IL_00e0;
				}
				case 4:
				{
					goto IL_0123;
				}
				case 5:
				{
					goto IL_00eb;
				}
				case 6:
				{
					goto IL_00f6;
				}
				case 7:
				{
					goto IL_0108;
				}
				case 8:
				{
					goto IL_0113;
				}
			}
		}

IL_00af:
		{
			goto IL_0123;
		}

IL_00b1:
		{
			// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_5;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_27, L_28, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_26, L_29, /*hidden argument*/NULL);
			V_3 = L_30;
			// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
			goto IL_0123;
		}

IL_00c3:
		{
			// case TextAnchor.UpperCenter: position += verticalOffset; break;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_32, /*hidden argument*/NULL);
			V_3 = L_33;
			// case TextAnchor.UpperCenter: position += verticalOffset; break;
			goto IL_0123;
		}

IL_00ce:
		{
			// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_5;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_35, L_36, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_34, L_37, /*hidden argument*/NULL);
			V_3 = L_38;
			// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
			goto IL_0123;
		}

IL_00e0:
		{
			// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_39, L_40, /*hidden argument*/NULL);
			V_3 = L_41;
			// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
			goto IL_0123;
		}

IL_00eb:
		{
			// case TextAnchor.MiddleRight: position += horizontalOffset; break;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_42, L_43, /*hidden argument*/NULL);
			V_3 = L_44;
			// case TextAnchor.MiddleRight: position += horizontalOffset; break;
			goto IL_0123;
		}

IL_00f6:
		{
			// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = V_5;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_46, L_47, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_45, L_48, /*hidden argument*/NULL);
			V_3 = L_49;
			// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
			goto IL_0123;
		}

IL_0108:
		{
			// case TextAnchor.LowerCenter: position -= verticalOffset; break;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_50, L_51, /*hidden argument*/NULL);
			V_3 = L_52;
			// case TextAnchor.LowerCenter: position -= verticalOffset; break;
			goto IL_0123;
		}

IL_0113:
		{
			// case TextAnchor.LowerRight: position -= verticalOffset - horizontalOffset; break;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_5;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_54, L_55, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_53, L_56, /*hidden argument*/NULL);
			V_3 = L_57;
		}

IL_0123:
		{
			// return position;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = V_3;
			V_7 = L_58;
			IL2CPP_LEAVE(0x136, FINALLY_0128);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0128;
	}

FINALLY_0128:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(296)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(296)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x136, IL_0136)
	}

IL_0136:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = V_7;
		return L_59;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mDC5A1517E45D53B0F318EFEE1C9BB5CB6F4E23F0 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mDC5A1517E45D53B0F318EFEE1C9BB5CB6F4E23F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (CalculateWindowRotationPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_CalculateWindowRotationPerfMarker_72();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// Quaternion rotation = cameraTransform.rotation;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___cameraTransform0;
			NullCheck(L_2);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			// switch (windowAnchor)
			int32_t L_4 = __this->get_windowAnchor_22();
			V_3 = L_4;
			int32_t L_5 = V_3;
			switch (L_5)
			{
				case 0:
				{
					goto IL_004b;
				}
				case 1:
				{
					goto IL_0068;
				}
				case 2:
				{
					goto IL_0077;
				}
				case 3:
				{
					goto IL_0091;
				}
				case 4:
				{
					goto IL_00f0;
				}
				case 5:
				{
					goto IL_00a0;
				}
				case 6:
				{
					goto IL_00af;
				}
				case 7:
				{
					goto IL_00c9;
				}
				case 8:
				{
					goto IL_00d8;
				}
			}
		}

IL_0046:
		{
			goto IL_00f0;
		}

IL_004b:
		{
			// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = V_2;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = __this->get_windowHorizontalRotationInverse_46();
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = __this->get_windowVerticalRotationInverse_48();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_7, L_8, /*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_6, L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
			goto IL_00f0;
		}

IL_0068:
		{
			// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = V_2;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = __this->get_windowHorizontalRotationInverse_46();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_11, L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
			goto IL_00f0;
		}

IL_0077:
		{
			// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_2;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = __this->get_windowHorizontalRotationInverse_46();
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = __this->get_windowVerticalRotation_47();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_15, L_16, /*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_14, L_17, /*hidden argument*/NULL);
			V_2 = L_18;
			// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
			goto IL_00f0;
		}

IL_0091:
		{
			// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = V_2;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = __this->get_windowVerticalRotationInverse_48();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_19, L_20, /*hidden argument*/NULL);
			V_2 = L_21;
			// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
			goto IL_00f0;
		}

IL_00a0:
		{
			// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = V_2;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = __this->get_windowVerticalRotation_47();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_22, L_23, /*hidden argument*/NULL);
			V_2 = L_24;
			// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
			goto IL_00f0;
		}

IL_00af:
		{
			// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = V_2;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = __this->get_windowHorizontalRotation_45();
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = __this->get_windowVerticalRotationInverse_48();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_26, L_27, /*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_25, L_28, /*hidden argument*/NULL);
			V_2 = L_29;
			// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
			goto IL_00f0;
		}

IL_00c9:
		{
			// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = V_2;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = __this->get_windowHorizontalRotation_45();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_30, L_31, /*hidden argument*/NULL);
			V_2 = L_32;
			// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
			goto IL_00f0;
		}

IL_00d8:
		{
			// case TextAnchor.LowerRight: rotation *= windowHorizontalRotation * windowVerticalRotation; break;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = V_2;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = __this->get_windowHorizontalRotation_45();
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = __this->get_windowVerticalRotation_47();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_34, L_35, /*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_37 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_33, L_36, /*hidden argument*/NULL);
			V_2 = L_37;
		}

IL_00f0:
		{
			// return rotation;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_38 = V_2;
			V_4 = L_38;
			IL2CPP_LEAVE(0x103, FINALLY_00f5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f5;
	}

FINALLY_00f5:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(245)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(245)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x103, IL_0103)
	}

IL_0103:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_39 = V_4;
		return L_39;
	}
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityToolkitVisualProfiler_CalculateFrameColor_mC4FE6FD4C59E22ABE394DEE50D66C34056D88798 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, int32_t ___frameRate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateFrameColor_mC4FE6FD4C59E22ABE394DEE50D66C34056D88798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (CalculateFrameColorPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_CalculateFrameColorPerfMarker_73();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// int colorCount = frameRateColors.Length;
			FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* L_2 = __this->get_frameRateColors_28();
			NullCheck(L_2);
			V_2 = (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
			// if (colorCount == 0)
			int32_t L_3 = V_2;
			if (L_3)
			{
				goto IL_0024;
			}
		}

IL_001a:
		{
			// return baseColor;
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = __this->get_baseColor_29();
			V_5 = L_4;
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}

IL_0024:
		{
			// float percentageOfTarget = frameRate / AppTargetFrameRate;
			int32_t L_5 = ___frameRate0;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			float L_6 = MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mC540A926088CA60DD5C519DD6C53F333EF15753D(/*hidden argument*/NULL);
			V_3 = ((float)((float)(((float)((float)L_5)))/(float)L_6));
			// int lastColor = colorCount - 1;
			int32_t L_7 = V_2;
			V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
			// for (int i = 0; i < lastColor; ++i)
			V_6 = 0;
			goto IL_0068;
		}

IL_0037:
		{
			// if (percentageOfTarget >= frameRateColors[i].percentageOfTarget)
			float L_8 = V_3;
			FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* L_9 = __this->get_frameRateColors_28();
			int32_t L_10 = V_6;
			NullCheck(L_9);
			float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_percentageOfTarget_0();
			if ((!(((float)L_8) >= ((float)L_11))))
			{
				goto IL_0062;
			}
		}

IL_004c:
		{
			// return frameRateColors[i].color;
			FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* L_12 = __this->get_frameRateColors_28();
			int32_t L_13 = V_6;
			NullCheck(L_12);
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_color_1();
			V_5 = L_14;
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}

IL_0062:
		{
			// for (int i = 0; i < lastColor; ++i)
			int32_t L_15 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		}

IL_0068:
		{
			// for (int i = 0; i < lastColor; ++i)
			int32_t L_16 = V_6;
			int32_t L_17 = V_4;
			if ((((int32_t)L_16) < ((int32_t)L_17)))
			{
				goto IL_0037;
			}
		}

IL_006e:
		{
			// return frameRateColors[lastColor].color;
			FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* L_18 = __this->get_frameRateColors_28();
			int32_t L_19 = V_4;
			NullCheck(L_18);
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_color_1();
			V_5 = L_20;
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x92, IL_0092)
	}

IL_0092:
	{
		// }
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_21 = V_5;
		return L_21;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_mCFBDEAF5A8089836FD001E0D9B119949123FAB1F (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_mCFBDEAF5A8089836FD001E0D9B119949123FAB1F_MetadataUsageId);
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
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (CalculateBackgroundSizePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_CalculateBackgroundSizePerfMarker_74();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (memoryStatsVisible)
			bool L_2 = __this->get_memoryStatsVisible_20();
			if (!L_2)
			{
				goto IL_0044;
			}
		}

IL_0016:
		{
			// background.localPosition = backgroundOffsets[0];
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_background_34();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_backgroundOffsets_11();
			NullCheck(L_4);
			int32_t L_5 = 0;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			NullCheck(L_3);
			Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_3, L_6, /*hidden argument*/NULL);
			// background.localScale = backgroundScales[0];
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_background_34();
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_backgroundScales_10();
			NullCheck(L_8);
			int32_t L_9 = 0;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			NullCheck(L_7);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_7, L_10, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB6, FINALLY_00a8);
		}

IL_0044:
		{
			// else if (frameInfoVisible)
			bool L_11 = __this->get_frameInfoVisible_19();
			if (!L_11)
			{
				goto IL_007a;
			}
		}

IL_004c:
		{
			// background.localPosition = backgroundOffsets[1];
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_background_34();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_backgroundOffsets_11();
			NullCheck(L_13);
			int32_t L_14 = 1;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			NullCheck(L_12);
			Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_12, L_15, /*hidden argument*/NULL);
			// background.localScale = backgroundScales[1];
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = __this->get_background_34();
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_backgroundScales_10();
			NullCheck(L_17);
			int32_t L_18 = 1;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_16);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_16, L_19, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB6, FINALLY_00a8);
		}

IL_007a:
		{
			// background.localPosition = backgroundOffsets[2];
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = __this->get_background_34();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_backgroundOffsets_11();
			NullCheck(L_21);
			int32_t L_22 = 2;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			NullCheck(L_20);
			Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_20, L_23, /*hidden argument*/NULL);
			// background.localScale = backgroundScales[2];
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = __this->get_background_34();
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_25 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_backgroundScales_10();
			NullCheck(L_25);
			int32_t L_26 = 2;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			NullCheck(L_24);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_24, L_27, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB6, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(168)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB6, IL_00b6)
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_m1771377B714D7C28832FB7669AC34C8167A57A60 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_BuildWindow_m1771377B714D7C28832FB7669AC34C8167A57A60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_4 = NULL;
	{
		// colorID = Shader.PropertyToID("_Color");
		int32_t L_0 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, /*hidden argument*/NULL);
		__this->set_colorID_52(L_0);
		// parentMatrixID = Shader.PropertyToID("_ParentLocalToWorldMatrix");
		int32_t L_1 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral60DD62DDA6D0E9082284B2E9AF1CB4E2AFFEDFC5, /*hidden argument*/NULL);
		__this->set_parentMatrixID_53(L_1);
		// window = new GameObject("VisualProfiler").transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_2, _stringLiteral5BFD6CD9A18872E3AB00178F2F3588D3A16CC24A, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		__this->set_window_33(L_3);
		// window.parent = WindowParent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_window_33();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = MixedRealityToolkitVisualProfiler_get_WindowParent_m43784A6A5549150BD835786CB88AB1EA1EC5A0B7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_4, L_5, /*hidden argument*/NULL);
		// window.localScale = defaultWindowScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_window_33();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_defaultWindowScale_9();
		NullCheck(L_6);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_6, L_7, /*hidden argument*/NULL);
		// windowHorizontalRotation = Quaternion.AngleAxis(defaultWindowRotation.y, Vector3.right);
		float L_8 = (((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_address_of_defaultWindowRotation_8())->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_8, L_9, /*hidden argument*/NULL);
		__this->set_windowHorizontalRotation_45(L_10);
		// windowHorizontalRotationInverse = Quaternion.Inverse(windowHorizontalRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = __this->get_windowHorizontalRotation_45();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_11, /*hidden argument*/NULL);
		__this->set_windowHorizontalRotationInverse_46(L_12);
		// windowVerticalRotation = Quaternion.AngleAxis(defaultWindowRotation.x, Vector3.up);
		float L_13 = (((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_address_of_defaultWindowRotation_8())->get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_13, L_14, /*hidden argument*/NULL);
		__this->set_windowVerticalRotation_47(L_15);
		// windowVerticalRotationInverse = Quaternion.Inverse(windowVerticalRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = __this->get_windowVerticalRotation_47();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_16, /*hidden argument*/NULL);
		__this->set_windowVerticalRotationInverse_48(L_17);
		// background = CreateQuad("Background", window).transform;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_window_33();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = MixedRealityToolkitVisualProfiler_CreateQuad_m2959204A81C547C44B02E1C6B88899F0CD832706(_stringLiteral64DD60FE1A049FE6DB3EB1369DEC2E42BF428E21, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		__this->set_background_34(L_20);
		// InitializeRenderer(background.gameObject, backgroundMaterial, colorID, baseColor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = __this->get_background_34();
		NullCheck(L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_21, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_23 = __this->get_backgroundMaterial_65();
		int32_t L_24 = __this->get_colorID_52();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_25 = __this->get_baseColor_29();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_mF782634B8881ADF600AA6EEA7540C4AAA0021168(L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		// CalculateBackgroundSize();
		MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_mCFBDEAF5A8089836FD001E0D9B119949123FAB1F(__this, /*hidden argument*/NULL);
		// cpuFrameRateText = CreateText("CPUFrameRateText", new Vector3(-0.495f, 0.5f, 0.0f), window, TextAnchor.UpperLeft, textMaterial, Color.white, string.Empty);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_26), (-0.495f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = __this->get_window_33();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_28 = __this->get_textMaterial_67();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_29 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_31 = MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E(_stringLiteralEDE2ACC6A2CAB5D8B552539E6ED55D7498F1BD1D, L_26, L_27, 0, L_28, L_29, L_30, /*hidden argument*/NULL);
		__this->set_cpuFrameRateText_35(L_31);
		// gpuFrameRateText = CreateText("GPUFrameRateText", new Vector3(0.495f, 0.5f, 0.0f), window, TextAnchor.UpperRight, textMaterial, Color.white, string.Empty);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_32), (0.495f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = __this->get_window_33();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_34 = __this->get_textMaterial_67();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_35 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_36 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_37 = MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E(_stringLiteralB43776D3A8057BCB7F05D18BE4E19FA5C0A1171E, L_32, L_33, 2, L_34, L_35, L_36, /*hidden argument*/NULL);
		__this->set_gpuFrameRateText_36(L_37);
		// gpuFrameRateText.gameObject.SetActive(false);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_38 = __this->get_gpuFrameRateText_36();
		NullCheck(L_38);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_39, (bool)0, /*hidden argument*/NULL);
		// frameInfoMatrices = new Matrix4x4[frameRange];
		int32_t L_40 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_frameRange_7();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_41 = (Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)SZArrayNew(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var, (uint32_t)L_40);
		__this->set_frameInfoMatrices_49(L_41);
		// frameInfoColors = new Vector4[frameRange];
		int32_t L_42 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_frameRange_7();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_43 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var, (uint32_t)L_42);
		__this->set_frameInfoColors_50(L_43);
		// Vector3 scale = new Vector3(1.0f / frameRange, 0.2f, 1.0f);
		int32_t L_44 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_frameRange_7();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), ((float)((float)(1.0f)/(float)(((float)((float)L_44))))), (0.2f), (1.0f), /*hidden argument*/NULL);
		// Vector3 position = new Vector3(0.5f - (scale.x * 0.5f), 0.15f, 0.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_0;
		float L_46 = L_45.get_x_2();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), ((float)il2cpp_codegen_subtract((float)(0.5f), (float)((float)il2cpp_codegen_multiply((float)L_46, (float)(0.5f))))), (0.15f), (0.0f), /*hidden argument*/NULL);
		// for (int i = 0; i < frameRange; ++i)
		V_2 = 0;
		goto IL_0241;
	}

IL_01db:
	{
		// frameInfoMatrices[i] = Matrix4x4.TRS(position, Quaternion.identity, new Vector3(scale.x * 0.8f, scale.y, scale.z));
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_47 = __this->get_frameInfoMatrices_49();
		int32_t L_48 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_0;
		float L_52 = L_51.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_0;
		float L_54 = L_53.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_0;
		float L_56 = L_55.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_57), ((float)il2cpp_codegen_multiply((float)L_52, (float)(0.8f))), L_54, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_58 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_49, L_50, L_57, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA )L_58);
		// position.x -= scale.x;
		float* L_59 = (&V_1)->get_address_of_x_2();
		float* L_60 = L_59;
		float L_61 = *((float*)L_60);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = V_0;
		float L_63 = L_62.get_x_2();
		*((float*)L_60) = (float)((float)il2cpp_codegen_subtract((float)L_61, (float)L_63));
		// frameInfoColors[i] = CalculateFrameColor((int)AppTargetFrameRate);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_64 = __this->get_frameInfoColors_50();
		int32_t L_65 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		float L_66 = MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mC540A926088CA60DD5C519DD6C53F333EF15753D(/*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_67 = MixedRealityToolkitVisualProfiler_CalculateFrameColor_mC4FE6FD4C59E22ABE394DEE50D66C34056D88798(__this, (il2cpp_codegen_cast_double_to_int<int32_t>(L_66)), /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_68 = Color_op_Implicit_m653C1CE2391B0A04114B9132C37E41AC92B33AFE(L_67, /*hidden argument*/NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_68);
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_69 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_0241:
	{
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_70 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		int32_t L_71 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_frameRange_7();
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_01db;
		}
	}
	{
		// frameInfoPropertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_72 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_72, /*hidden argument*/NULL);
		__this->set_frameInfoPropertyBlock_51(L_72);
		// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_73 = __this->get_frameInfoPropertyBlock_51();
		int32_t L_74 = __this->get_colorID_52();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_75 = __this->get_frameInfoColors_50();
		NullCheck(L_73);
		MaterialPropertyBlock_SetVectorArray_m189E1657C000ACBCAF56CB62F3A4DCF1FD472787(L_73, L_74, L_75, /*hidden argument*/NULL);
		// memoryStats = new GameObject("MemoryStats").transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_76 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_76, _stringLiteral5483BF71B3B7138B1E91E9996288AA665C3E352D, /*hidden argument*/NULL);
		NullCheck(L_76);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_77 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_76, /*hidden argument*/NULL);
		__this->set_memoryStats_37(L_77);
		// memoryStats.parent = window;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_78 = __this->get_memoryStats_37();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_79 = __this->get_window_33();
		NullCheck(L_78);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_78, L_79, /*hidden argument*/NULL);
		// memoryStats.localScale = Vector3.one;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_80 = __this->get_memoryStats_37();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_80);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_80, L_81, /*hidden argument*/NULL);
		// usedMemoryText = CreateText("UsedMemoryText", new Vector3(-0.495f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperLeft, textMaterial, memoryUsedColor, usedMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_82), (-0.495f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_83 = __this->get_memoryStats_37();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_84 = __this->get_textMaterial_67();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_85 = __this->get_memoryUsedColor_30();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		String_t* L_86 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_usedMemoryString_12();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_87 = MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E(_stringLiteral10091FE4A98C623CD25DBBAE02B40227888E2A05, L_82, L_83, 0, L_84, L_85, L_86, /*hidden argument*/NULL);
		__this->set_usedMemoryText_38(L_87);
		// peakMemoryText = CreateText("PeakMemoryText", new Vector3(0.0f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperCenter, textMaterial, memoryPeakColor, peakMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_88), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_89 = __this->get_memoryStats_37();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_90 = __this->get_textMaterial_67();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_91 = __this->get_memoryPeakColor_31();
		String_t* L_92 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_peakMemoryString_13();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_93 = MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E(_stringLiteral2A2E2357C56DD659D0DC9E3D8ECE1D8242034491, L_88, L_89, 1, L_90, L_91, L_92, /*hidden argument*/NULL);
		__this->set_peakMemoryText_39(L_93);
		// limitMemoryText = CreateText("LimitMemoryText", new Vector3(0.495f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperRight, textMaterial, Color.white, limitMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_94), (0.495f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_95 = __this->get_memoryStats_37();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_96 = __this->get_textMaterial_67();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_97 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_98 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_limitMemoryString_14();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_99 = MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E(_stringLiteral9315667F99D5901C8E062AAC730B9254258670B5, L_94, L_95, 2, L_96, L_97, L_98, /*hidden argument*/NULL);
		__this->set_limitMemoryText_40(L_99);
		// voiceCommandText = CreateText("VoiceCommandText", new Vector3(-0.525f, -0.7f, 0.0f), memoryStats, TextAnchor.UpperLeft, textMaterial, Color.white, voiceCommandString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_100), (-0.525f), (-0.7f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_101 = __this->get_memoryStats_37();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_102 = __this->get_textMaterial_67();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_103 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_104 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_voiceCommandString_15();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_105 = MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E(_stringLiteral03B522CE1E75D4BC6FD87A128293DA78F5A7A8B2, L_100, L_101, 0, L_102, L_103, L_104, /*hidden argument*/NULL);
		__this->set_voiceCommandText_41(L_105);
		// mrtkText = CreateText("MRTKText", new Vector3(0.52f, -0.7f, 0.0f), memoryStats, TextAnchor.UpperRight, textMaterial, Color.white, visualProfilerTitleString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_106), (0.52f), (-0.7f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_107 = __this->get_memoryStats_37();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_108 = __this->get_textMaterial_67();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_109 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_110 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_visualProfilerTitleString_16();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_111 = MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E(_stringLiteral05B84FE308CD15E1143E40CBE47A8E170208CF26, L_106, L_107, 2, L_108, L_109, L_110, /*hidden argument*/NULL);
		__this->set_mrtkText_42(L_111);
		// voiceCommandText.fontSize = 32;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_112 = __this->get_voiceCommandText_41();
		NullCheck(L_112);
		TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA(L_112, ((int32_t)32), /*hidden argument*/NULL);
		// mrtkText.fontSize = 32;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_113 = __this->get_mrtkText_42();
		NullCheck(L_113);
		TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA(L_113, ((int32_t)32), /*hidden argument*/NULL);
		// GameObject limitBar = CreateQuad("LimitBar", memoryStats);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_114 = __this->get_memoryStats_37();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_115 = MixedRealityToolkitVisualProfiler_CreateQuad_m2959204A81C547C44B02E1C6B88899F0CD832706(_stringLiteralCA1DF7778711AC043DE19DBF92546587DCB1A0BD, L_114, /*hidden argument*/NULL);
		V_3 = L_115;
		// InitializeRenderer(limitBar, defaultMaterial, colorID, memoryLimitColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_116 = V_3;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_117 = __this->get_defaultMaterial_63();
		int32_t L_118 = __this->get_colorID_52();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_119 = __this->get_memoryLimitColor_32();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_mF782634B8881ADF600AA6EEA7540C4AAA0021168(L_116, L_117, L_118, L_119, /*hidden argument*/NULL);
		// limitBar.transform.localScale = new Vector3(0.99f, 0.2f, 1.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_120 = V_3;
		NullCheck(L_120);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_121 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_120, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_122;
		memset((&L_122), 0, sizeof(L_122));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_122), (0.99f), (0.2f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_121);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_121, L_122, /*hidden argument*/NULL);
		// limitBar.transform.localPosition = new Vector3(0.0f, -0.37f, 0.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_123 = V_3;
		NullCheck(L_123);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_124 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_123, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_125;
		memset((&L_125), 0, sizeof(L_125));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_125), (0.0f), (-0.37f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_124);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_124, L_125, /*hidden argument*/NULL);
		// usedAnchor = CreateAnchor("UsedAnchor", limitBar.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_126 = V_3;
		NullCheck(L_126);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_127 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_126, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_128 = MixedRealityToolkitVisualProfiler_CreateAnchor_m7B4F08E4948959A6E9CF821CEF76060B1A9A347E(_stringLiteralDE54FCF888EB0C889DFF7964C29E0C89A5613301, L_127, /*hidden argument*/NULL);
		__this->set_usedAnchor_43(L_128);
		// GameObject bar = CreateQuad("UsedBar", usedAnchor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_129 = __this->get_usedAnchor_43();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_130 = MixedRealityToolkitVisualProfiler_CreateQuad_m2959204A81C547C44B02E1C6B88899F0CD832706(_stringLiteralACCAD3295265225D2B9E4FB826E53031E4D933F6, L_129, /*hidden argument*/NULL);
		// Material material = new Material(foregroundMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_131 = __this->get_foregroundMaterial_66();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_132 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_132, L_131, /*hidden argument*/NULL);
		V_4 = L_132;
		// material.renderQueue = material.renderQueue + 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_133 = V_4;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_134 = V_4;
		NullCheck(L_134);
		int32_t L_135 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_134, /*hidden argument*/NULL);
		NullCheck(L_133);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_133, ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1)), /*hidden argument*/NULL);
		// InitializeRenderer(bar, material, colorID, memoryUsedColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_136 = L_130;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_137 = V_4;
		int32_t L_138 = __this->get_colorID_52();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_139 = __this->get_memoryUsedColor_30();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_mF782634B8881ADF600AA6EEA7540C4AAA0021168(L_136, L_137, L_138, L_139, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_140 = L_136;
		NullCheck(L_140);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_141 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_140, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_142 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_141);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_141, L_142, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_140);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_143 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_140, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_144;
		memset((&L_144), 0, sizeof(L_144));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_144), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_143);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_143, L_144, /*hidden argument*/NULL);
		// peakAnchor = CreateAnchor("PeakAnchor", limitBar.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_145 = V_3;
		NullCheck(L_145);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_146 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_145, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_147 = MixedRealityToolkitVisualProfiler_CreateAnchor_m7B4F08E4948959A6E9CF821CEF76060B1A9A347E(_stringLiteralFBE2C10212C6D261022FC9B3F7F7D5A3F2318FB3, L_146, /*hidden argument*/NULL);
		__this->set_peakAnchor_44(L_147);
		// GameObject bar = CreateQuad("PeakBar", peakAnchor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_148 = __this->get_peakAnchor_44();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_149 = MixedRealityToolkitVisualProfiler_CreateQuad_m2959204A81C547C44B02E1C6B88899F0CD832706(_stringLiteralB066E98ABD1787899F779143B75CEDB2486305D4, L_148, /*hidden argument*/NULL);
		// InitializeRenderer(bar, foregroundMaterial, colorID, memoryPeakColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_150 = L_149;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_151 = __this->get_foregroundMaterial_66();
		int32_t L_152 = __this->get_colorID_52();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_153 = __this->get_memoryPeakColor_31();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_mF782634B8881ADF600AA6EEA7540C4AAA0021168(L_150, L_151, L_152, L_153, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_154 = L_150;
		NullCheck(L_154);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_155 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_154, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_156 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_155);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_155, L_156, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_154);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_157 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_154, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_158;
		memset((&L_158), 0, sizeof(L_158));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_158), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_157);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_157, L_158, /*hidden argument*/NULL);
		// window.gameObject.SetActive(ShouldShowProfiler);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_159 = __this->get_window_33();
		NullCheck(L_159);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_160 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_159, /*hidden argument*/NULL);
		bool L_161 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m40EC420C622CBCFDE84C84E1EDE25A903CE19C54(__this, /*hidden argument*/NULL);
		NullCheck(L_160);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_160, L_161, /*hidden argument*/NULL);
		// memoryStats.gameObject.SetActive(memoryStatsVisible);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_162 = __this->get_memoryStats_37();
		NullCheck(L_162);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_163 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_162, /*hidden argument*/NULL);
		bool L_164 = __this->get_memoryStatsVisible_20();
		NullCheck(L_163);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_163, L_164, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m182830EF752E46209510B56B6D7043B32AF09C1F (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m182830EF752E46209510B56B6D7043B32AF09C1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// cpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		__this->set_cpuFrameRateStrings_57(L_1);
		// gpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		int32_t L_2 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		__this->set_gpuFrameRateStrings_58(L_3);
		// string displayedDecimalFormat = string.Format("{{0:F{0}}}", displayedDecimalDigits);
		int32_t L_4 = __this->get_displayedDecimalDigits_27();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral0E8EC13A3AA3AD0DF348D45AF23180EF013500EE, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// StringBuilder stringBuilder = new StringBuilder(32);
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_8, ((int32_t)32), /*hidden argument*/NULL);
		V_1 = L_8;
		// StringBuilder milisecondStringBuilder = new StringBuilder(16);
		StringBuilder_t * L_9 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_9, ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_9;
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		V_3 = 0;
		goto IL_00e1;
	}

IL_0051:
	{
		// float miliseconds = (i == 0) ? 0.0f : (1.0f / i) * 1000.0f;
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_11 = V_3;
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)(((float)((float)L_11))))), (float)(1000.0f)));
		goto IL_0069;
	}

IL_0064:
	{
		G_B4_0 = (0.0f);
	}

IL_0069:
	{
		V_4 = G_B4_0;
		// milisecondStringBuilder.AppendFormat(displayedDecimalFormat, miliseconds);
		StringBuilder_t * L_12 = V_2;
		String_t* L_13 = V_0;
		float L_14 = V_4;
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_12, L_13, L_16, /*hidden argument*/NULL);
		// stringBuilder.AppendFormat("CPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t * L_17 = V_1;
		String_t* L_18 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_3), /*hidden argument*/NULL);
		StringBuilder_t * L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		NullCheck(L_17);
		StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7(L_17, _stringLiteral469FB70DED7914453A23F856E6F6A00E7461E923, L_18, L_20, /*hidden argument*/NULL);
		// cpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = __this->get_cpuFrameRateStrings_57();
		int32_t L_22 = V_3;
		StringBuilder_t * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (String_t*)L_24);
		// stringBuilder.Length = 0;
		StringBuilder_t * L_25 = V_1;
		NullCheck(L_25);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_25, 0, /*hidden argument*/NULL);
		// stringBuilder.AppendFormat("GPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t * L_26 = V_1;
		String_t* L_27 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_3), /*hidden argument*/NULL);
		StringBuilder_t * L_28 = V_2;
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		NullCheck(L_26);
		StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7(L_26, _stringLiteral9C3A49852D90133B9BEB027ECCB54020A3D56034, L_27, L_29, /*hidden argument*/NULL);
		// gpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = __this->get_gpuFrameRateStrings_58();
		int32_t L_31 = V_3;
		StringBuilder_t * L_32 = V_1;
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (String_t*)L_33);
		// milisecondStringBuilder.Length = 0;
		StringBuilder_t * L_34 = V_2;
		NullCheck(L_34);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_34, 0, /*hidden argument*/NULL);
		// stringBuilder.Length = 0;
		StringBuilder_t * L_35 = V_1;
		NullCheck(L_35);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_35, 0, /*hidden argument*/NULL);
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00e1:
	{
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_37 = V_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_38 = __this->get_cpuFrameRateStrings_57();
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_CreateAnchor_m7B4F08E4948959A6E9CF821CEF76060B1A9A347E (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateAnchor_m7B4F08E4948959A6E9CF821CEF76060B1A9A347E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform anchor = new GameObject(name).transform;
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		// anchor.parent = parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = L_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___parent1;
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, L_4, /*hidden argument*/NULL);
		// anchor.localScale = Vector3.one;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_5, L_6, /*hidden argument*/NULL);
		// anchor.localPosition = new Vector3(-0.5f, 0.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (-0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_7, L_8, /*hidden argument*/NULL);
		// return anchor;
		return L_7;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityToolkitVisualProfiler_CreateQuad_m2959204A81C547C44B02E1C6B88899F0CD832706 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateQuad_m2959204A81C547C44B02E1C6B88899F0CD832706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(5, /*hidden argument*/NULL);
		// Destroy(quad.GetComponent<Collider>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = L_0;
		NullCheck(L_1);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_2 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_1, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		// quad.name = name;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_1;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_3, L_4, /*hidden argument*/NULL);
		// quad.transform.parent = parent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_3;
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___parent1;
		NullCheck(L_6);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_6, L_7, /*hidden argument*/NULL);
		// return quad;
		return L_5;
	}
}
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E (String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent2, int32_t ___anchor3, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, String_t* ___text6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateText_m62339DE958EA7E88FD8DEC395A61FBDB147AD29E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject obj = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// obj.transform.localScale = Vector3.one * 0.0016f;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, (0.0016f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_5, /*hidden argument*/NULL);
		// obj.transform.parent = parent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = ___parent2;
		NullCheck(L_7);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_7, L_8, /*hidden argument*/NULL);
		// obj.transform.localPosition = position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_0;
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___position1;
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_11, /*hidden argument*/NULL);
		// TextMesh textMesh = obj.AddComponent<TextMesh>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = V_0;
		NullCheck(L_12);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_13 = GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A(L_12, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var);
		// textMesh.fontSize = 48;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_14 = L_13;
		NullCheck(L_14);
		TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA(L_14, ((int32_t)48), /*hidden argument*/NULL);
		// textMesh.anchor = anchor;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_15 = L_14;
		int32_t L_16 = ___anchor3;
		NullCheck(L_15);
		TextMesh_set_anchor_m013CFCFA46AB8478ADD1C4818FAAD90596BF4E15(L_15, L_16, /*hidden argument*/NULL);
		// textMesh.color = color;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_17 = L_15;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18 = ___color5;
		NullCheck(L_17);
		TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0(L_17, L_18, /*hidden argument*/NULL);
		// textMesh.text = text;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_19 = L_17;
		String_t* L_20 = ___text6;
		NullCheck(L_19);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_19, L_20, /*hidden argument*/NULL);
		// textMesh.richText = false;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_21 = L_19;
		NullCheck(L_21);
		TextMesh_set_richText_mEA6ACA489617BC48D2317385C92C542C5EFD15CA(L_21, (bool)0, /*hidden argument*/NULL);
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = V_0;
		NullCheck(L_22);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_23 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_22, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_24 = L_23;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_25 = ___material4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_24, L_25, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_mE9A292F137C2E33557A4296BC0DD5D01CC0C678D(L_24, /*hidden argument*/NULL);
		// return textMesh;
		return L_21;
	}
}
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * MixedRealityToolkitVisualProfiler_InitializeRenderer_mF782634B8881ADF600AA6EEA7540C4AAA0021168 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material1, int32_t ___colorID2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_InitializeRenderer_mF782634B8881ADF600AA6EEA7540C4AAA0021168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * V_0 = NULL;
	{
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___obj0;
		NullCheck(L_0);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = L_1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = ___material1;
		NullCheck(L_2);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_2, L_3, /*hidden argument*/NULL);
		// MaterialPropertyBlock propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_4 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		// renderer.GetPropertyBlock(propertyBlock);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = L_2;
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_6 = V_0;
		NullCheck(L_5);
		Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C(L_5, L_6, /*hidden argument*/NULL);
		// propertyBlock.SetColor(colorID, color);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_7 = V_0;
		int32_t L_8 = ___colorID2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = ___color3;
		NullCheck(L_7);
		MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F(L_7, L_8, L_9, /*hidden argument*/NULL);
		// renderer.SetPropertyBlock(propertyBlock);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_10 = L_5;
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_11 = V_0;
		NullCheck(L_10);
		Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40(L_10, L_11, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_12 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_mE9A292F137C2E33557A4296BC0DD5D01CC0C678D(L_12, /*hidden argument*/NULL);
		// return renderer;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_mE9A292F137C2E33557A4296BC0DD5D01CC0C678D (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___renderer0, const RuntimeMethod* method)
{
	{
		// renderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = ___renderer0;
		NullCheck(L_0);
		Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC(L_0, 0, /*hidden argument*/NULL);
		// renderer.receiveShadows = false;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = ___renderer0;
		NullCheck(L_1);
		Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0(L_1, (bool)0, /*hidden argument*/NULL);
		// renderer.motionVectorGenerationMode = MotionVectorGenerationMode.ForceNoMotion;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = ___renderer0;
		NullCheck(L_2);
		Renderer_set_motionVectorGenerationMode_m4C127FB86BB4B20031F77B66CC629F272904178B(L_2, 2, /*hidden argument*/NULL);
		// renderer.lightProbeUsage = UnityEngine.Rendering.LightProbeUsage.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_3 = ___renderer0;
		NullCheck(L_3);
		Renderer_set_lightProbeUsage_mD4F86D1953BD7A2E98C187C207AB9C2A4DA8839D(L_3, 0, /*hidden argument*/NULL);
		// renderer.reflectionProbeUsage = UnityEngine.Rendering.ReflectionProbeUsage.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = ___renderer0;
		NullCheck(L_4);
		Renderer_set_reflectionProbeUsage_mB1E5A77AB7204CA2FD3AE3294D2CBC0EF352DD08(L_4, 0, /*hidden argument*/NULL);
		// renderer.allowOcclusionWhenDynamic = false;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = ___renderer0;
		NullCheck(L_5);
		Renderer_set_allowOcclusionWhenDynamic_m32286F46CA4405E850B5BFA6245E243641E85D55(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mFF9746DE32CAE910FE353BC6FA9AB78773B27AEB (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_MemoryUsageToString_mFF9746DE32CAE910FE353BC6FA9AB78773B27AEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (MemoryUsageToStringPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_MemoryUsageToStringPerfMarker_75();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// float memoryUsageMB = ConvertBytesToMegabytes(memoryUsage);
			uint64_t L_2 = ___memoryUsage4;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			float L_3 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m21F8700260D4904EE69875990DB1281C309BE388(L_2, /*hidden argument*/NULL);
			// int memoryUsageIntegerDigits = (int)memoryUsageMB;
			float L_4 = L_3;
			V_2 = (il2cpp_codegen_cast_double_to_int<int32_t>(L_4));
			// int memoryUsageFractionalDigits = (int)((memoryUsageMB - memoryUsageIntegerDigits) * Mathf.Pow(10.0f, displayedDecimalDigits));
			int32_t L_5 = V_2;
			int32_t L_6 = ___displayedDecimalDigits1;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_7 = powf((10.0f), (((float)((float)L_6))));
			V_3 = (il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)(((float)((float)L_5))))), (float)L_7))));
			// int bufferIndex = 0;
			V_4 = 0;
			// for (int i = 0; i < prefixString.Length; ++i)
			V_5 = 0;
			goto IL_0049;
		}

IL_0032:
		{
			// stringBuffer[bufferIndex++] = prefixString[i];
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = ___stringBuffer0;
			int32_t L_9 = V_4;
			int32_t L_10 = L_9;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
			String_t* L_11 = ___prefixString3;
			int32_t L_12 = V_5;
			NullCheck(L_11);
			Il2CppChar L_13 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_11, L_12, /*hidden argument*/NULL);
			NullCheck(L_8);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Il2CppChar)L_13);
			// for (int i = 0; i < prefixString.Length; ++i)
			int32_t L_14 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		}

IL_0049:
		{
			// for (int i = 0; i < prefixString.Length; ++i)
			int32_t L_15 = V_5;
			String_t* L_16 = ___prefixString3;
			NullCheck(L_16);
			int32_t L_17 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_16, /*hidden argument*/NULL);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0032;
			}
		}

IL_0053:
		{
			// bufferIndex = MemoryItoA(memoryUsageIntegerDigits, stringBuffer, bufferIndex);
			int32_t L_18 = V_2;
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_19 = ___stringBuffer0;
			int32_t L_20 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			int32_t L_21 = MixedRealityToolkitVisualProfiler_MemoryItoA_m86AF3C6BAD948A447946DE6A3CFF738AE41798ED(L_18, L_19, L_20, /*hidden argument*/NULL);
			V_4 = L_21;
			// stringBuffer[bufferIndex++] = '.';
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_22 = ___stringBuffer0;
			int32_t L_23 = V_4;
			int32_t L_24 = L_23;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
			NullCheck(L_22);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Il2CppChar)((int32_t)46));
			// if (memoryUsageFractionalDigits != 0)
			int32_t L_25 = V_3;
			if (!L_25)
			{
				goto IL_0079;
			}
		}

IL_006c:
		{
			// bufferIndex = MemoryItoA(memoryUsageFractionalDigits, stringBuffer, bufferIndex);
			int32_t L_26 = V_3;
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_27 = ___stringBuffer0;
			int32_t L_28 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
			int32_t L_29 = MixedRealityToolkitVisualProfiler_MemoryItoA_m86AF3C6BAD948A447946DE6A3CFF738AE41798ED(L_26, L_27, L_28, /*hidden argument*/NULL);
			V_4 = L_29;
			// }
			goto IL_0094;
		}

IL_0079:
		{
			// for (int i = 0; i < displayedDecimalDigits; ++i)
			V_6 = 0;
			goto IL_008f;
		}

IL_007e:
		{
			// stringBuffer[bufferIndex++] = '0';
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_30 = ___stringBuffer0;
			int32_t L_31 = V_4;
			int32_t L_32 = L_31;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
			NullCheck(L_30);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Il2CppChar)((int32_t)48));
			// for (int i = 0; i < displayedDecimalDigits; ++i)
			int32_t L_33 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		}

IL_008f:
		{
			// for (int i = 0; i < displayedDecimalDigits; ++i)
			int32_t L_34 = V_6;
			int32_t L_35 = ___displayedDecimalDigits1;
			if ((((int32_t)L_34) < ((int32_t)L_35)))
			{
				goto IL_007e;
			}
		}

IL_0094:
		{
			// stringBuffer[bufferIndex++] = 'M';
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_36 = ___stringBuffer0;
			int32_t L_37 = V_4;
			int32_t L_38 = L_37;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			NullCheck(L_36);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Il2CppChar)((int32_t)77));
			// stringBuffer[bufferIndex++] = 'B';
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_39 = ___stringBuffer0;
			int32_t L_40 = V_4;
			int32_t L_41 = L_40;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
			NullCheck(L_39);
			(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Il2CppChar)((int32_t)66));
			// textMesh.text = new string(stringBuffer, 0, bufferIndex);
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_42 = ___textMesh2;
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_43 = ___stringBuffer0;
			int32_t L_44 = V_4;
			String_t* L_45 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_43, 0, L_44, /*hidden argument*/NULL);
			NullCheck(L_42);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_42, L_45, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC9, IL_00c9)
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_m86AF3C6BAD948A447946DE6A3CFF738AE41798ED (int32_t ___value0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_MemoryItoA_m86AF3C6BAD948A447946DE6A3CFF738AE41798ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (MemoryItoAPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_MemoryItoAPerfMarker_76();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// int startIndex = bufferIndex;
			int32_t L_2 = ___bufferIndex2;
			V_2 = L_2;
			goto IL_0029;
		}

IL_0012:
		{
			// stringBuffer[bufferIndex++] = (char)((char)(value % 10) + '0');
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = ___stringBuffer1;
			int32_t L_4 = ___bufferIndex2;
			int32_t L_5 = L_4;
			___bufferIndex2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
			int32_t L_6 = ___value0;
			NullCheck(L_3);
			(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_6%(int32_t)((int32_t)10)))))), (int32_t)((int32_t)48)))))));
			// for (; value != 0; value /= 10)
			int32_t L_7 = ___value0;
			___value0 = ((int32_t)((int32_t)L_7/(int32_t)((int32_t)10)));
		}

IL_0029:
		{
			// for (; value != 0; value /= 10)
			int32_t L_8 = ___value0;
			if (L_8)
			{
				goto IL_0012;
			}
		}

IL_002c:
		{
			// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
			int32_t L_9 = ___bufferIndex2;
			V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
			goto IL_004d;
		}

IL_0033:
		{
			// temp = stringBuffer[startIndex];
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_10 = ___stringBuffer1;
			int32_t L_11 = V_2;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint16_t L_13 = (uint16_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			V_3 = L_13;
			// stringBuffer[startIndex] = stringBuffer[endIndex];
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_14 = ___stringBuffer1;
			int32_t L_15 = V_2;
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_16 = ___stringBuffer1;
			int32_t L_17 = V_4;
			NullCheck(L_16);
			int32_t L_18 = L_17;
			uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_14);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Il2CppChar)L_19);
			// stringBuffer[endIndex] = temp;
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_20 = ___stringBuffer1;
			int32_t L_21 = V_4;
			Il2CppChar L_22 = V_3;
			NullCheck(L_20);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Il2CppChar)L_22);
			// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
			int32_t L_23 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
			// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
			int32_t L_24 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		}

IL_004d:
		{
			// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
			int32_t L_25 = V_2;
			int32_t L_26 = V_4;
			if ((((int32_t)L_25) < ((int32_t)L_26)))
			{
				goto IL_0033;
			}
		}

IL_0052:
		{
			// return bufferIndex;
			int32_t L_27 = ___bufferIndex2;
			V_5 = L_27;
			IL2CPP_LEAVE(0x65, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(87)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		// }
		int32_t L_28 = V_5;
		return L_28;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppTargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mC540A926088CA60DD5C519DD6C53F333EF15753D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mC540A926088CA60DD5C519DD6C53F333EF15753D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float refreshRate = UnityEngine.XR.XRDevice.refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		float L_0 = XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8(/*hidden argument*/NULL);
		V_0 = L_0;
		// return ((int)refreshRate == 0) ? 60.0f : refreshRate;
		float L_1 = V_0;
		if (!(il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))
		{
			goto IL_000c;
		}
	}
	{
		float L_2 = V_0;
		return L_2;
	}

IL_000c:
	{
		return (60.0f);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_mEC3E2C15FAD5602EBE090962CA0BB25710863DFB (FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_AverageFrameTiming_mEC3E2C15FAD5602EBE090962CA0BB25710863DFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (AverageFrameTimingPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_AverageFrameTimingPerfMarker_77();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// double cpuTime = 0.0f;
			V_2 = (0.0);
			// double gpuTime = 0.0f;
			V_3 = (0.0);
			// for (int i = 0; i < frameTimingsCount; ++i)
			V_4 = 0;
			goto IL_004d;
		}

IL_0027:
		{
			// cpuTime += frameTimings[i].cpuFrameTime;
			double L_2 = V_2;
			FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_3 = ___frameTimings0;
			int32_t L_4 = V_4;
			NullCheck(L_3);
			double L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_cpuFrameTime_1();
			V_2 = ((double)il2cpp_codegen_add((double)L_2, (double)L_5));
			// gpuTime += frameTimings[i].gpuFrameTime;
			double L_6 = V_3;
			FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_7 = ___frameTimings0;
			int32_t L_8 = V_4;
			NullCheck(L_7);
			double L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_gpuFrameTime_3();
			V_3 = ((double)il2cpp_codegen_add((double)L_6, (double)L_9));
			// for (int i = 0; i < frameTimingsCount; ++i)
			int32_t L_10 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_004d:
		{
			// for (int i = 0; i < frameTimingsCount; ++i)
			int32_t L_11 = V_4;
			uint32_t L_12 = ___frameTimingsCount1;
			if ((((int64_t)(((int64_t)((int64_t)L_11)))) < ((int64_t)(((int64_t)((uint64_t)L_12))))))
			{
				goto IL_0027;
			}
		}

IL_0054:
		{
			// cpuTime /= frameTimingsCount;
			double L_13 = V_2;
			uint32_t L_14 = ___frameTimingsCount1;
			V_2 = ((double)((double)L_13/(double)(((double)((double)(((double)((uint32_t)L_14))))))));
			// gpuTime /= frameTimingsCount;
			double L_15 = V_3;
			uint32_t L_16 = ___frameTimingsCount1;
			V_3 = ((double)((double)L_15/(double)(((double)((double)(((double)((uint32_t)L_16))))))));
			// cpuFrameTime = (float)(cpuTime * 0.001);
			float* L_17 = ___cpuFrameTime2;
			double L_18 = V_2;
			*((float*)L_17) = (float)(((float)((float)((double)il2cpp_codegen_multiply((double)L_18, (double)(0.001))))));
			// gpuFrameTime = (float)(gpuTime * 0.001);
			float* L_19 = ___gpuFrameTime3;
			double L_20 = V_3;
			*((float*)L_19) = (float)(((float)((float)((double)il2cpp_codegen_multiply((double)L_20, (double)(0.001))))));
			// }
			IL2CPP_LEAVE(0x8C, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(126)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mF89F67E724725BD34A37BDB9A4D2AF39C4BE63E9 (const RuntimeMethod* method)
{
	{
		// return MemoryManager.AppMemoryUsage;
		uint64_t L_0 = MemoryManager_get_AppMemoryUsage_m3BBDE59FC2DCB6074A92C7859CC42E3311BD8D3B(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_mAB08DEB16E65623B8773386706B547C8FE4A9860 (const RuntimeMethod* method)
{
	{
		// return MemoryManager.AppMemoryUsageLimit;
		uint64_t L_0 = MemoryManager_get_AppMemoryUsageLimit_m8A8BF85D26D6A48DE98963D3BDB7C87B7FD67113(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mFBC69344DD46F8C2E6BBEEF586C99CD1C8C65911 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mFBC69344DD46F8C2E6BBEEF586C99CD1C8C65911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (WillDisplayedMemoryUsageDifferPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_WillDisplayedMemoryUsageDifferPerfMarker_78();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// float oldUsageMBs = ConvertBytesToMegabytes(oldUsage);
		uint64_t L_2 = ___oldUsage0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		float L_3 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m21F8700260D4904EE69875990DB1281C309BE388(L_2, /*hidden argument*/NULL);
		// float newUsageMBs = ConvertBytesToMegabytes(newUsage);
		uint64_t L_4 = ___newUsage1;
		float L_5 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m21F8700260D4904EE69875990DB1281C309BE388(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// float decimalPower = Mathf.Pow(10.0f, displayedDecimalDigits);
		int32_t L_6 = ___displayedDecimalDigits2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = powf((10.0f), (((float)((float)L_6))));
		V_3 = L_7;
		// return (int)(oldUsageMBs * decimalPower) != (int)(newUsageMBs * decimalPower);
		float L_8 = V_3;
		float L_9 = V_2;
		float L_10 = V_3;
		V_4 = (bool)((((int32_t)((((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)L_3, (float)L_8))))) == ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)L_9, (float)L_10))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		IL2CPP_LEAVE(0x46, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		// }
		bool L_11 = V_4;
		return L_11;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertMegabytesToBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_ConvertMegabytesToBytes_m68CD24E65498631C19EC2817962D65F9401001E5 (int32_t ___megabytes0, const RuntimeMethod* method)
{
	{
		// return ((ulong)megabytes * 1024UL) * 1024UL;
		int32_t L_0 = ___megabytes0;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_0))), (int64_t)(((int64_t)((int64_t)((int32_t)1024)))))), (int64_t)(((int64_t)((int64_t)((int32_t)1024))))));
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m21F8700260D4904EE69875990DB1281C309BE388 (uint64_t ___bytes0, const RuntimeMethod* method)
{
	{
		// return (bytes / 1024.0f) / 1024.0f;
		uint64_t L_0 = ___bytes0;
		return ((float)((float)((float)((float)(((float)((float)(((double)((uint64_t)L_0))))))/(float)(1024.0f)))/(float)(1024.0f)));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__ctor_mCB6DE1740CDFCD3CFAB06BCCFA7CBFFB9495FF24 (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler__ctor_mCB6DE1740CDFCD3CFAB06BCCFA7CBFFB9495FF24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private bool frameInfoVisible = true;
		__this->set_frameInfoVisible_19((bool)1);
		// private bool memoryStatsVisible = true;
		__this->set_memoryStatsVisible_20((bool)1);
		// private float frameSampleRate = 0.1f;
		__this->set_frameSampleRate_21((0.1f));
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->set_windowAnchor_22(7);
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.1f), (0.1f), /*hidden argument*/NULL);
		__this->set_windowOffset_23(L_0);
		// private float windowScale = 1.0f;
		__this->set_windowScale_24((1.0f));
		// private float windowFollowSpeed = 5.0f;
		__this->set_windowFollowSpeed_25((5.0f));
		// private int displayedDecimalDigits = 1;
		__this->set_displayedDecimalDigits_27(1);
		// private FrameRateColor[] frameRateColors = new FrameRateColor[]
		// {
		//     // Green
		//     new FrameRateColor() { percentageOfTarget = 0.95f, color = new Color(127 / 256.0f, 186 / 256.0f, 0 / 256.0f, 1.0f) },
		//     // Yellow
		//     new FrameRateColor() { percentageOfTarget = 0.75f, color = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f) },
		//     // Red
		//     new FrameRateColor() { percentageOfTarget = 0.0f, color = new Color(255 / 256.0f, 0 / 256.0f, 0 / 256.0f, 1.0f) },
		// };
		FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* L_1 = (FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914*)(FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914*)SZArrayNew(FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914_il2cpp_TypeInfo_var, (uint32_t)3);
		FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* L_2 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD ));
		(&V_0)->set_percentageOfTarget_0((0.95f));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_3), (0.49609375f), (0.7265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_3);
		FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD  L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD )L_4);
		FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* L_5 = L_2;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD ));
		(&V_0)->set_percentageOfTarget_0((0.75f));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_6), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_6);
		FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD  L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD )L_7);
		FrameRateColorU5BU5D_t3190A6E8D974B063042B746F880DE8F7E54B5914* L_8 = L_5;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD ));
		(&V_0)->set_percentageOfTarget_0((0.0f));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_9), (0.99609375f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_9);
		FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD  L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (FrameRateColor_tCA7EFED61200A6B66183E2A07670D3C6169EA3AD )L_10);
		__this->set_frameRateColors_28(L_8);
		// private Color baseColor = new Color(80 / 256.0f, 80 / 256.0f, 80 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_11), (0.3125f), (0.3125f), (0.3125f), (1.0f), /*hidden argument*/NULL);
		__this->set_baseColor_29(L_11);
		// private Color memoryUsedColor = new Color(0 / 256.0f, 164 / 256.0f, 239 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_12), (0.0f), (0.640625f), (0.93359375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryUsedColor_30(L_12);
		// private Color memoryPeakColor = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_13), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryPeakColor_31(L_13);
		// private Color memoryLimitColor = new Color(150 / 256.0f, 150 / 256.0f, 150 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_14), (0.5859375f), (0.5859375f), (0.5859375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryLimitColor_32(L_14);
		// private System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_15 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_15, /*hidden argument*/NULL);
		__this->set_stopwatch_55(L_15);
		// private FrameTiming[] frameTimings = new FrameTiming[maxFrameTimings];
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var);
		int32_t L_16 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_maxFrameTimings_6();
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_17 = (FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3*)(FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3*)SZArrayNew(FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3_il2cpp_TypeInfo_var, (uint32_t)L_16);
		__this->set_frameTimings_56(L_17);
		// private char[] stringBuffer = new char[maxStringLength];
		int32_t L_18 = ((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->get_maxStringLength_4();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_19 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->set_stringBuffer_59(L_19);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__cctor_m7E87ED30F4D3CC2E00376280325C67F2375CA51F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler__cctor_m7E87ED30F4D3CC2E00376280325C67F2375CA51F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int maxStringLength = 32;
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_maxStringLength_4(((int32_t)32));
		// private static readonly int maxTargetFrameRate = 120;
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_maxTargetFrameRate_5(((int32_t)120));
		// private static readonly int maxFrameTimings = 128;
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_maxFrameTimings_6(((int32_t)128));
		// private static readonly int frameRange = 30;
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_frameRange_7(((int32_t)30));
		// private static readonly Vector2 defaultWindowRotation = new Vector2(10.0f, 20.0f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (10.0f), (20.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_defaultWindowRotation_8(L_0);
		// private static readonly Vector3 defaultWindowScale = new Vector3(0.2f, 0.04f, 1.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.2f), (0.04f), (1.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_defaultWindowScale_9(L_1);
		// private static readonly Vector3[] backgroundScales = { new Vector3(1.05f, 1.2f, 1.2f), new Vector3(1.0f, 0.5f, 1.0f), new Vector3(1.0f, 0.25f, 1.0f) };
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (1.05f), (1.2f), (1.2f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_4);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), (1.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_6);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_7 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (1.0f), (0.25f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_8);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_backgroundScales_10(L_7);
		// private static readonly Vector3[] backgroundOffsets = { new Vector3(0.0f, 0.0f, 0.0f), new Vector3(0.0f, 0.25f, 0.0f), new Vector3(0.0f, 0.375f, 0.0f) };
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = L_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_11);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_12 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (0.0f), (0.25f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_13);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_14 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), (0.0f), (0.375f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_15);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_backgroundOffsets_11(L_14);
		// private static readonly string usedMemoryString = "Used: ";
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_usedMemoryString_12(_stringLiteral0085F04FFAF54410F314A1739CA00743371D3A5B);
		// private static readonly string peakMemoryString = "Peak: ";
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_peakMemoryString_13(_stringLiteralEFDD3FFFDEBF8938E0ACF2BA36C21ADB990D938B);
		// private static readonly string limitMemoryString = "Limit: ";
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_limitMemoryString_14(_stringLiteral5E044C5A2E8F3D4F49006EA5361F7FEB04CD498F);
		// private static readonly string voiceCommandString = "Say \"Toggle Profiler\" to show/hide";
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_voiceCommandString_15(_stringLiteral222EE475F83066C082A9FBBF36EEBE913D927E44);
		// private static readonly string visualProfilerTitleString = "MRTK Visual Profiler";
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_visualProfilerTitleString_16(_stringLiteralE5ECCF9C801D2FAB478551D01978F86BDB8307EF);
		// private static readonly ProfilerMarker LateUpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.LateUpdate");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_16), _stringLiteral9814F6A062D8EFC52399AD84D9E97816030DC475, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_LateUpdatePerfMarker_70(L_16);
		// private static readonly ProfilerMarker CalculateWindowPositionPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateWindowPosition");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_17;
		memset((&L_17), 0, sizeof(L_17));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_17), _stringLiteral9C3DD52F9FFE852BD44379425A5275B610A0FF33, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_CalculateWindowPositionPerfMarker_71(L_17);
		// private static readonly ProfilerMarker CalculateWindowRotationPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateWindowRotation");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_18;
		memset((&L_18), 0, sizeof(L_18));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_18), _stringLiteral3B1EDABC1898EAFFC1D0206E797937099E183170, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_CalculateWindowRotationPerfMarker_72(L_18);
		// private static readonly ProfilerMarker CalculateFrameColorPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateFrameColor");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_19;
		memset((&L_19), 0, sizeof(L_19));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_19), _stringLiteral79B3540931903460E13E9CD927E4557D4AD256AC, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_CalculateFrameColorPerfMarker_73(L_19);
		// private static readonly ProfilerMarker CalculateBackgroundSizePerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateBackgroundSize");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_20;
		memset((&L_20), 0, sizeof(L_20));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_20), _stringLiteral00B4962751241BFC456D62F55CD52E1FB605C35A, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_CalculateBackgroundSizePerfMarker_74(L_20);
		// private static readonly ProfilerMarker MemoryUsageToStringPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.MemoryUsageToString");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_21;
		memset((&L_21), 0, sizeof(L_21));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_21), _stringLiteralD777369C34F195D47CDC2C1B0483138A5255ACC6, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_MemoryUsageToStringPerfMarker_75(L_21);
		// private static readonly ProfilerMarker MemoryItoAPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.MemoryItoA");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_22;
		memset((&L_22), 0, sizeof(L_22));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_22), _stringLiteralFA985590223FD7B5F8E5143E2BB5D95B806AC944, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_MemoryItoAPerfMarker_76(L_22);
		// private static readonly ProfilerMarker AverageFrameTimingPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.AverageFrameTiming");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_23;
		memset((&L_23), 0, sizeof(L_23));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_23), _stringLiteral65D74FFF5647D82919D65520B5818191A088D68F, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_AverageFrameTimingPerfMarker_77(L_23);
		// private static readonly ProfilerMarker WillDisplayedMemoryUsageDifferPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.WillDisplayedMemoryUsageDiffer");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_24;
		memset((&L_24), 0, sizeof(L_24));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_24), _stringLiteralC1509AF6CE523E6E0AAE841E13775DE2A677759C, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9_il2cpp_TypeInfo_var))->set_WillDisplayedMemoryUsageDifferPerfMarker_78(L_24);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl_ToggleProfiler_mFF061E4718F458A4A296AEA9BED3D588872CEAEF (VisualProfilerControl_t8BCDF8A7F747003781C5AD90DE449789F6E8132F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualProfilerControl_ToggleProfiler_mFF061E4718F458A4A296AEA9BED3D588872CEAEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = !CoreServices.DiagnosticsSystem.ShowProfiler;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		RuntimeObject* L_2 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowProfiler() */, IMixedRealityDiagnosticsSystem_tC7C9DF661C81A126C67ADF1FBD41BD489F2806C4_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_tC7C9DF661C81A126C67ADF1FBD41BD489F2806C4_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::SetProfilerVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl_SetProfilerVisibility_mB98A6295CBD3B924041ABA43FC5A867A6F910E77 (VisualProfilerControl_t8BCDF8A7F747003781C5AD90DE449789F6E8132F * __this, bool ___isVisible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualProfilerControl_SetProfilerVisibility_mB98A6295CBD3B924041ABA43FC5A867A6F910E77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = isVisible;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t6B72F927CF63B5C7635ABAF8BF32110894457398_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_DiagnosticsSystem_m7FFD89C8D006C219A75731E1AE66190BA2B852D2(/*hidden argument*/NULL);
		bool L_2 = ___isVisible0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_tC7C9DF661C81A126C67ADF1FBD41BD489F2806C4_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl__ctor_m402B4DA76CF264BFE6EED7C56A2380B99BCABE4C (VisualProfilerControl_t8BCDF8A7F747003781C5AD90DE449789F6E8132F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7  SpeechEventData_get_Command_m356B6DC34D1B4ED5566A8710240ACC092CCEB2DD_inline (SpeechEventData_tF9423A96E73509113FDFB0971CA5C11627E6CA33 * __this, const RuntimeMethod* method)
{
	{
		// public SpeechCommands Command { get; private set; }
		SpeechCommands_t7F66BE72D91CAECFD0A1D148E8E76764815776B7  L_0 = __this->get_U3CCommandU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mA8664E0793B07E287571B3803C4F492B91BEDF59_inline (BaseCoreSystem_tAB4637C99B5C2333C18B8980458B436DE28FADA7 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mFF259B827E9FE2E22FF8034A47F2E4822FB0AB02_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->get_showDiagnostics_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m625CD1B2E68E4E338B30B445C301496ACE083886_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CWindowParentU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m9250283651A1A519686131B80040492322468639_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// return showProfiler;
		bool L_0 = __this->get_showProfiler_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_m7B2B74EB618C019D5574F080A696B2EC3B7F89BF_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->set_isVisible_18(L_0);
		// set { isVisible = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mD7B2F26D2B0089F6822CA618A6B3993C11A94508_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// return showFrameInfo;
		bool L_0 = __this->get_showFrameInfo_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m5068E60946DBEE53EC1CF9C7A60F5B3E97EA5D63_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { frameInfoVisible = value; }
		bool L_0 = ___value0;
		__this->set_frameInfoVisible_19(L_0);
		// set { frameInfoVisible = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mF001CBD1B0BA09CF575935BC855054C0597BE1E7_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// return showMemoryStats;
		bool L_0 = __this->get_showMemoryStats_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m3E02329F033935A9A26869C16E7C5D7E1ACBFD70_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { memoryStatsVisible = value; }
		bool L_0 = ___value0;
		__this->set_memoryStatsVisible_20(L_0);
		// set { memoryStatsVisible = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_mE23C634CA7395BC31BBFF08E186C32418EDEB98C_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// return frameSampleRate;
		float L_0 = __this->get_frameSampleRate_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE01CA28695E3C5D2E33CCC7F5688FF20E9849039_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->set_frameSampleRate_21(L_0);
		// set { frameSampleRate = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_m352A8159CAA485CF1896D61B3A66C10C5626D0A8_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m7C0E12F2EE1B129D1E96CD16B0E5E07F5C3D21EB_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->set_windowAnchor_22(L_0);
		// set { windowAnchor = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsSystem_get_WindowOffset_mEE49D233623A681ED429ADC9477324FB13F10F5F_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_27();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_mE3813D629039E301EB1A7E29D847E3D2F4BD9CE5_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		// set { windowOffset = value; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_windowOffset_23(L_0);
		// set { windowOffset = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_m4E9D23746C2689FDF27EC6888161D2D07ADC4E57_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m61032FCD4D5D3D5937AA80360C4D4BC0F900C94C_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_m801AA4DE8C8275514D6F2E078DF4EF0A67911CD0_inline (MixedRealityDiagnosticsSystem_t8A0D705C1AFAED1657B4206E0F3897208C854370 * __this, const RuntimeMethod* method)
{
	{
		// get { return showProfilerDuringMRC; }
		bool L_0 = __this->get_showProfilerDuringMRC_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_mC25C11A5BB7683CB544FADF142DA4CFEA8A17743_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { showProfilerDuringMRC = value; }
		bool L_0 = ___value0;
		__this->set_showProfilerDuringMRC_26(L_0);
		// set { showProfilerDuringMRC = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_m08A1CC2F7938D48E5356D455A738AE432D573009_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowDiagnostics => showDiagnostics;
		bool L_0 = __this->get_showDiagnostics_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_m65B20A4770EEE7E472EA72A3F247BFF7CD2D05EC_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowProfiler => showProfiler;
		bool L_0 = __this->get_showProfiler_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowFrameInfo_mFFBFDDC20AEFF14BAB7913BBA3E2CF1E64FFEB7D_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowFrameInfo => showFrameInfo;
		bool L_0 = __this->get_showFrameInfo_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowMemoryStats_m8043E6EAF0A2000E0AA657AFB9EC64FAA816CA40_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowMemoryStats => showMemoryStats;
		bool L_0 = __this->get_showMemoryStats_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_mA8CF39AEFA7146DBEB324DDBF1E97B5884F1DF87_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public float FrameSampleRate => frameSampleRate;
		float L_0 = __this->get_frameSampleRate_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_m2265E4DA2DD03BB79505446E12DFE3F46313C7CA_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public TextAnchor WindowAnchor => windowAnchor;
		int32_t L_0 = __this->get_windowAnchor_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsProfile_get_WindowOffset_m7CC82EB2226A2D62FCAAC4158FD0575771F1C300_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 WindowOffset => windowOffset;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_m5CA18AFFF44BB199FB2635E42322CA3188B115D0_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public float WindowScale => windowScale;
		float L_0 = __this->get_windowScale_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_m2ABA53B7651521ECF74070466D2E1C7D0C91ADC9_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public float WindowFollowSpeed => windowFollowSpeed;
		float L_0 = __this->get_windowFollowSpeed_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfilerDuringMRC_m100D4A9B949DE56C24016DC889AA9301831471EF_inline (MixedRealityDiagnosticsProfile_t7D48D96C33E096EC897A4A0C8215593F66EDB2E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowProfilerDuringMRC => showProfilerDuringMRC;
		bool L_0 = __this->get_showProfilerDuringMRC_15();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m43784A6A5549150BD835786CB88AB1EA1EC5A0B7_inline (MixedRealityToolkitVisualProfiler_tF20BB495EAFDD576D94D370FCAB5EB3652A484F9 * __this, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CWindowParentU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
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
