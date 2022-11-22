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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[0...,0...]
struct BooleanU5BU2CU5D_tCD5854E1A55166EC93998DDED119F97FF5A5ECDC;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.SortedList
struct SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.Xml.AttributePSVIInfo
struct AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94;
// System.Xml.AttributePSVIInfo[]
struct AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951;
// System.Xml.CachingEventHandler
struct CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6;
// System.Xml.HWStack
struct HWStack_t2ECA5857AF5B3AF7C1BD51CEA64D131A6342BCDE;
// System.Xml.IDtdInfo
struct IDtdInfo_t5971A8C09914EDB816FE7A86A38288FDC4B6F80C;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427;
// System.Xml.PositionInfo
struct PositionInfo_tC35A3FA759E0F23D150BB8B774EC0391EA099684;
// System.Xml.ReadContentAsBinaryHelper
struct ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2FE768B806BA73C644AEE436491F2C3E04039CF1;
// System.Xml.Schema.IdRefNode
struct IdRefNode_t8E92E33D4D596CFC17454D41C07CD7627A8825E2;
// System.Xml.Schema.Parser
struct Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920;
// System.Xml.Schema.SchemaAttDef
struct SchemaAttDef_t6701AAE5762853EDC86D272CC2A79EABB36924A4;
// System.Xml.Schema.SchemaBuilder
struct SchemaBuilder_t6B2D813207751A3A8F89AB247E37E371F17450B7;
// System.Xml.Schema.SchemaElementDecl
struct SchemaElementDecl_t1D19D717C111EFE96DCB86F7A029BE5E2616C466;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41;
// System.Xml.Schema.SchemaNames
struct SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t242553A3B613066E3FC046288572FB1E0D3DA230;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF;
// System.Xml.Schema.ValidationState
struct ValidationState_t87AD0243195FC5C4B8643516747B92387F06A38B;
// System.Xml.Schema.XmlSchema
struct XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_tC8DD8E9A26CD3A12B16C25F0341600FF69C3B725;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B;
// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_tFDBB08A9CF45CD6E2DE3A8AADCC8487BA5CD896F;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t33655A7BA800689EC37601FEFD33291F42B8ABBC;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D;
// System.Xml.Schema.XmlSchemaInfo
struct XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833;
// System.Xml.Schema.XmlSchemaParticle[]
struct XmlSchemaParticleU5BU5D_tCA99C9F23120839B45A59D3FD77E88564CEAD800;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A;
// System.Xml.Schema.XmlSchemaSimpleTypeContent
struct XmlSchemaSimpleTypeContent_t87EF2A2F4B2F3D7827EA18B0FCB8393EA0201A3E;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9;
// System.Xml.Schema.XmlSchemaValidator
struct XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E;
// System.Xml.Schema.XmlValueGetter
struct XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t31E17AE7CF53591901A576C48D1E446BB985676F;
// System.Xml.ValidatingReaderNodeData
struct ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F;
// System.Xml.ValidatingReaderNodeData[]
struct ValidatingReaderNodeDataU5BU5D_tFBEB81BF53C53E8F95978989EB44D14E42E30DCF;
// System.Xml.XmlAttribute[]
struct XmlAttributeU5BU5D_t02E3E190564D2A07467AFE803FAB6C1CE82F7908;
// System.Xml.XmlDocument
struct XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97;
// System.Xml.XmlNameTable
struct XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F;
// System.Xml.XmlNamespaceManager/NamespaceDeclaration[]
struct NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84;
// System.Xml.XmlNode
struct XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t375EB02A213AC919E02336B57A412BB761AFA18B;
// System.Xml.XmlReader
struct XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65;
// System.Xml.XmlResolver
struct XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280;
// System.Xml.XsdCachingReader
struct XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51;
// System.Xml.XsdValidatingReader
struct XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidateNames_tC00080F7F263345A2F0842B10BE16D0BAB77EB26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t0ED1642D9D0E4F0F7CB233F75C42460578F8ABF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral042DC4512FA3D391C5170CF3AA61E6A638F84342;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral13F239F9809C279B79B6886F9B3F7CF764AEFA80;
IL2CPP_EXTERN_C String_t* _stringLiteral6F137837A6AC36446D241D345BB78254AA77DFAE;
IL2CPP_EXTERN_C String_t* _stringLiteral8305398E4C08A0A71B9DED7B6C1F25CE3CEE6D1A;
IL2CPP_EXTERN_C String_t* _stringLiteralA27E2E9EF6A0C7CC58D71302FCA9E93BA677C130;
IL2CPP_EXTERN_C String_t* _stringLiteralB5366A2D2AC98DAE978423083F8B09E5CDDC705D;
IL2CPP_EXTERN_C String_t* _stringLiteralCD7236D24C2A685E5C9D6FC9D0AC7D11486CB220;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7042CB74A5576F32A19F0F44A2C6E304936B11;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdValidatingReader_CachingCallBack_m65B17C117CA8C577569843BFC4454776347C3A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdValidatingReader_GetStringValue_m7B26377231669CB9DE33D16E5BF1DCB2C2A12C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdValidatingReader_MoveToAttribute_m78A59416F2206A88D65686E0B8DABE320403DBC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdValidatingReader_ProcessReaderEvent_m722FC0B61083823F7FC17DD03600E9B81BBBCF1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdValidatingReader_ResolveEntity_m27D0FDB0EE081F02E59F86E231651898D14881C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_AddAttributePSVI_m9C63491571E684A954FFBF35C1EE2243AC33AEB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_CreateDummyTextNode_m63BAF57EC15ED06ED442B5521C62C887CC5A9B46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_GetAttributePSVI_mE8EC1E880CFF68F8BDCA75280BA5117BE09D3D3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_GetAttribute_m375FBA779E23A25FF76BA1729C18E2E68B15A827_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_GetAttribute_mBB5661330251BF81D3F632FD74F9771F14D4B368_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_GetCachingReader_mF33698664D3DF4B31EA3C10BC727F6033989E5AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_GetDefaultAttribute_m319560394B573921789FA729CF7D0A819E6DD57A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_GetDefaultAttribute_m886683896C8C7B89F525CC84B2D1E37D1E9EFB8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_GetIsDefault_m5498C296A342BF23079FB179DD01F8FC1F008230_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_GetMemberType_m866701B4F3C840CBC568FAC18BFD1480EBFDC221_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_GetOriginalAtomicValueStringOfElement_m1630A664BBF86AADC4E3C6F83A330E8ADC7237D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_Init_m85810F6C7F4730EEB1CEACCCD1B6A614408FEACA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_LookupNamespace_mE004DCA7C0CE85F7DA37BDBBE91C251DE18E0FE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_MoveToAttribute_m78A59416F2206A88D65686E0B8DABE320403DBC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_MoveToFirstAttribute_mAA4819F5A1E9EE08E309BF5A3FC3086E29702C08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_MoveToNextAttribute_m680F960CA7022939B98100D0E790BAACDFE65E50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_ProcessElementEvent_m2DC0A3D923DC437A428C19211B835CBEF24F879E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_ProcessReaderEvent_m722FC0B61083823F7FC17DD03600E9B81BBBCF1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_ReadAheadForMemberType_mEC899F9EF6F531077A5F22E643A54FFACF64683F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_ResolveEntity_m27D0FDB0EE081F02E59F86E231651898D14881C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_SetupValidator_mF2515C3F155F79D88C4C11A966C0F76DDF01CB5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_Skip_mC151116963EF47547B85D8475223210269614252_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope_m2B4B99CC46463901299AD8428F490A4A4BE88E8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_System_Xml_IXmlNamespaceResolver_LookupNamespace_m24EA4662863981EB29125CCF838D6438584C61EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_System_Xml_IXmlNamespaceResolver_LookupPrefix_mDF0556C9A1C324C279CD8E711B1EFBFE122F3F42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader__ctor_m895625E55BAEEED246A47FD8240D72A33C7C0C92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_get_LineNumber_m1440C8D90D2CB1B31FAAD10CBBB825EF87618AD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_get_LinePosition_m36754C16EEC8F06BD868D37F0E1F24BBD93AAFAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_get_Name_mFAB294150C73A961E4BAE2C611749920AD7F6CBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_get_Settings_mEC8699503227ECFDAFA0D4EA87DC6EAFF3BD9107_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XsdValidatingReader_get_ValueType_mB7C3E06A0AD46EFAB54656669CED49C79F870EC7_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____items_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
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

// System.Xml.AttributePSVIInfo
struct AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94  : public RuntimeObject
{
public:
	// System.String System.Xml.AttributePSVIInfo::localName
	String_t* ___localName_0;
	// System.String System.Xml.AttributePSVIInfo::namespaceUri
	String_t* ___namespaceUri_1;
	// System.Object System.Xml.AttributePSVIInfo::typedAttributeValue
	RuntimeObject * ___typedAttributeValue_2;
	// System.Xml.Schema.XmlSchemaInfo System.Xml.AttributePSVIInfo::attributeSchemaInfo
	XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * ___attributeSchemaInfo_3;

public:
	inline static int32_t get_offset_of_localName_0() { return static_cast<int32_t>(offsetof(AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94, ___localName_0)); }
	inline String_t* get_localName_0() const { return ___localName_0; }
	inline String_t** get_address_of_localName_0() { return &___localName_0; }
	inline void set_localName_0(String_t* value)
	{
		___localName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_0), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceUri_1() { return static_cast<int32_t>(offsetof(AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94, ___namespaceUri_1)); }
	inline String_t* get_namespaceUri_1() const { return ___namespaceUri_1; }
	inline String_t** get_address_of_namespaceUri_1() { return &___namespaceUri_1; }
	inline void set_namespaceUri_1(String_t* value)
	{
		___namespaceUri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceUri_1), (void*)value);
	}

	inline static int32_t get_offset_of_typedAttributeValue_2() { return static_cast<int32_t>(offsetof(AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94, ___typedAttributeValue_2)); }
	inline RuntimeObject * get_typedAttributeValue_2() const { return ___typedAttributeValue_2; }
	inline RuntimeObject ** get_address_of_typedAttributeValue_2() { return &___typedAttributeValue_2; }
	inline void set_typedAttributeValue_2(RuntimeObject * value)
	{
		___typedAttributeValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typedAttributeValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_attributeSchemaInfo_3() { return static_cast<int32_t>(offsetof(AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94, ___attributeSchemaInfo_3)); }
	inline XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * get_attributeSchemaInfo_3() const { return ___attributeSchemaInfo_3; }
	inline XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 ** get_address_of_attributeSchemaInfo_3() { return &___attributeSchemaInfo_3; }
	inline void set_attributeSchemaInfo_3(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * value)
	{
		___attributeSchemaInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeSchemaInfo_3), (void*)value);
	}
};


// System.Xml.Schema.SchemaNames
struct SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89  : public RuntimeObject
{
public:
	// System.Xml.XmlNameTable System.Xml.Schema.SchemaNames::nameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable_0;
	// System.String System.Xml.Schema.SchemaNames::NsDataType
	String_t* ___NsDataType_1;
	// System.String System.Xml.Schema.SchemaNames::NsDataTypeAlias
	String_t* ___NsDataTypeAlias_2;
	// System.String System.Xml.Schema.SchemaNames::NsDataTypeOld
	String_t* ___NsDataTypeOld_3;
	// System.String System.Xml.Schema.SchemaNames::NsXml
	String_t* ___NsXml_4;
	// System.String System.Xml.Schema.SchemaNames::NsXmlNs
	String_t* ___NsXmlNs_5;
	// System.String System.Xml.Schema.SchemaNames::NsXdr
	String_t* ___NsXdr_6;
	// System.String System.Xml.Schema.SchemaNames::NsXdrAlias
	String_t* ___NsXdrAlias_7;
	// System.String System.Xml.Schema.SchemaNames::NsXs
	String_t* ___NsXs_8;
	// System.String System.Xml.Schema.SchemaNames::NsXsi
	String_t* ___NsXsi_9;
	// System.String System.Xml.Schema.SchemaNames::XsiType
	String_t* ___XsiType_10;
	// System.String System.Xml.Schema.SchemaNames::XsiNil
	String_t* ___XsiNil_11;
	// System.String System.Xml.Schema.SchemaNames::XsiSchemaLocation
	String_t* ___XsiSchemaLocation_12;
	// System.String System.Xml.Schema.SchemaNames::XsiNoNamespaceSchemaLocation
	String_t* ___XsiNoNamespaceSchemaLocation_13;
	// System.String System.Xml.Schema.SchemaNames::XsdSchema
	String_t* ___XsdSchema_14;
	// System.String System.Xml.Schema.SchemaNames::XdrSchema
	String_t* ___XdrSchema_15;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnPCData
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnPCData_16;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXml
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXml_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXmlNs
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXmlNs_18;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtDt
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDtDt_19;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXmlLang
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXmlLang_20;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnName
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnName_21;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnType
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnType_22;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMaxOccurs
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnMaxOccurs_23;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMinOccurs
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnMinOccurs_24;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnInfinite
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnInfinite_25;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnModel
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnModel_26;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnOpen
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnOpen_27;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnClosed
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnClosed_28;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnContent
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnContent_29;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMixed
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnMixed_30;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEmpty
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnEmpty_31;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEltOnly
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnEltOnly_32;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnTextOnly
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnTextOnly_33;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnOrder
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnOrder_34;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSeq
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnSeq_35;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnOne
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnOne_36;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMany
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnMany_37;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnRequired
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnRequired_38;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnYes
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnYes_39;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNo
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnNo_40;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnString
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnString_41;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnID
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnID_42;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnIDRef
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnIDRef_43;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnIDRefs
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnIDRefs_44;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEntity
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnEntity_45;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEntities
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnEntities_46;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNmToken
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnNmToken_47;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNmTokens
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnNmTokens_48;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEnumeration
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnEnumeration_49;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDefault
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDefault_50;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrSchema
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrSchema_51;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrElementType
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrElementType_52;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrElement
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrElement_53;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrGroup
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrGroup_54;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrAttributeType
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrAttributeType_55;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrAttribute
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrAttribute_56;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrDataType
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrDataType_57;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrDescription
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrDescription_58;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrExtends
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrExtends_59;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrAliasSchema
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXdrAliasSchema_60;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtType
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDtType_61;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtValues
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDtValues_62;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMaxLength
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDtMaxLength_63;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMinLength
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDtMinLength_64;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMax
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDtMax_65;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMin
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDtMin_66;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMinExclusive
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDtMinExclusive_67;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMaxExclusive
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDtMaxExclusive_68;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnTargetNamespace
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnTargetNamespace_69;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnVersion
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnVersion_70;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnFinalDefault
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnFinalDefault_71;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnBlockDefault
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnBlockDefault_72;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnFixed
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnFixed_73;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnAbstract
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnAbstract_74;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnBlock
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnBlock_75;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSubstitutionGroup
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnSubstitutionGroup_76;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnFinal
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnFinal_77;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNillable
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnNillable_78;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnRef
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnRef_79;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnBase
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnBase_80;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDerivedBy
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnDerivedBy_81;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNamespace
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnNamespace_82;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnProcessContents
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnProcessContents_83;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnRefer
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnRefer_84;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnPublic
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnPublic_85;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSystem
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnSystem_86;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSchemaLocation
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnSchemaLocation_87;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnValue
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnValue_88;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnUse
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnUse_89;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnForm
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnForm_90;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnElementFormDefault
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnElementFormDefault_91;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnAttributeFormDefault
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnAttributeFormDefault_92;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnItemType
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnItemType_93;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMemberTypes
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnMemberTypes_94;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXPath
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXPath_95;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSchema
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdSchema_96;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAnnotation
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdAnnotation_97;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdInclude
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdInclude_98;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdImport
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdImport_99;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdElement
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdElement_100;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAttribute
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdAttribute_101;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAttributeGroup
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdAttributeGroup_102;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAnyAttribute
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdAnyAttribute_103;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdGroup
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdGroup_104;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAll
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdAll_105;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdChoice
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdChoice_106;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSequence
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdSequence_107;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAny
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdAny_108;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdNotation
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdNotation_109;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSimpleType
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdSimpleType_110;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdComplexType
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdComplexType_111;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdUnique
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdUnique_112;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdKey
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdKey_113;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdKeyRef
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdKeyRef_114;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSelector
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdSelector_115;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdField
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdField_116;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMinExclusive
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdMinExclusive_117;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMinInclusive
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdMinInclusive_118;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMaxInclusive
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdMaxInclusive_119;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMaxExclusive
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdMaxExclusive_120;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdTotalDigits
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdTotalDigits_121;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdFractionDigits
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdFractionDigits_122;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdLength
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdLength_123;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMinLength
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdMinLength_124;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMaxLength
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdMaxLength_125;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdEnumeration
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdEnumeration_126;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdPattern
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdPattern_127;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdDocumentation
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdDocumentation_128;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAppinfo
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdAppinfo_129;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSource
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnSource_130;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdComplexContent
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdComplexContent_131;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSimpleContent
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdSimpleContent_132;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdRestriction
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdRestriction_133;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdExtension
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdExtension_134;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdUnion
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdUnion_135;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdList
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdList_136;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdWhiteSpace
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdWhiteSpace_137;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdRedefine
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdRedefine_138;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAnyType
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___QnXsdAnyType_139;
	// System.Xml.XmlQualifiedName[] System.Xml.Schema.SchemaNames::TokenToQName
	XmlQualifiedNameU5BU5D_t375EB02A213AC919E02336B57A412BB761AFA18B* ___TokenToQName_140;

public:
	inline static int32_t get_offset_of_nameTable_0() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___nameTable_0)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_nameTable_0() const { return ___nameTable_0; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_nameTable_0() { return &___nameTable_0; }
	inline void set_nameTable_0(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___nameTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_0), (void*)value);
	}

	inline static int32_t get_offset_of_NsDataType_1() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___NsDataType_1)); }
	inline String_t* get_NsDataType_1() const { return ___NsDataType_1; }
	inline String_t** get_address_of_NsDataType_1() { return &___NsDataType_1; }
	inline void set_NsDataType_1(String_t* value)
	{
		___NsDataType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsDataType_1), (void*)value);
	}

	inline static int32_t get_offset_of_NsDataTypeAlias_2() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___NsDataTypeAlias_2)); }
	inline String_t* get_NsDataTypeAlias_2() const { return ___NsDataTypeAlias_2; }
	inline String_t** get_address_of_NsDataTypeAlias_2() { return &___NsDataTypeAlias_2; }
	inline void set_NsDataTypeAlias_2(String_t* value)
	{
		___NsDataTypeAlias_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsDataTypeAlias_2), (void*)value);
	}

	inline static int32_t get_offset_of_NsDataTypeOld_3() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___NsDataTypeOld_3)); }
	inline String_t* get_NsDataTypeOld_3() const { return ___NsDataTypeOld_3; }
	inline String_t** get_address_of_NsDataTypeOld_3() { return &___NsDataTypeOld_3; }
	inline void set_NsDataTypeOld_3(String_t* value)
	{
		___NsDataTypeOld_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsDataTypeOld_3), (void*)value);
	}

	inline static int32_t get_offset_of_NsXml_4() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___NsXml_4)); }
	inline String_t* get_NsXml_4() const { return ___NsXml_4; }
	inline String_t** get_address_of_NsXml_4() { return &___NsXml_4; }
	inline void set_NsXml_4(String_t* value)
	{
		___NsXml_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXml_4), (void*)value);
	}

	inline static int32_t get_offset_of_NsXmlNs_5() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___NsXmlNs_5)); }
	inline String_t* get_NsXmlNs_5() const { return ___NsXmlNs_5; }
	inline String_t** get_address_of_NsXmlNs_5() { return &___NsXmlNs_5; }
	inline void set_NsXmlNs_5(String_t* value)
	{
		___NsXmlNs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXmlNs_5), (void*)value);
	}

	inline static int32_t get_offset_of_NsXdr_6() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___NsXdr_6)); }
	inline String_t* get_NsXdr_6() const { return ___NsXdr_6; }
	inline String_t** get_address_of_NsXdr_6() { return &___NsXdr_6; }
	inline void set_NsXdr_6(String_t* value)
	{
		___NsXdr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXdr_6), (void*)value);
	}

	inline static int32_t get_offset_of_NsXdrAlias_7() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___NsXdrAlias_7)); }
	inline String_t* get_NsXdrAlias_7() const { return ___NsXdrAlias_7; }
	inline String_t** get_address_of_NsXdrAlias_7() { return &___NsXdrAlias_7; }
	inline void set_NsXdrAlias_7(String_t* value)
	{
		___NsXdrAlias_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXdrAlias_7), (void*)value);
	}

	inline static int32_t get_offset_of_NsXs_8() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___NsXs_8)); }
	inline String_t* get_NsXs_8() const { return ___NsXs_8; }
	inline String_t** get_address_of_NsXs_8() { return &___NsXs_8; }
	inline void set_NsXs_8(String_t* value)
	{
		___NsXs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXs_8), (void*)value);
	}

	inline static int32_t get_offset_of_NsXsi_9() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___NsXsi_9)); }
	inline String_t* get_NsXsi_9() const { return ___NsXsi_9; }
	inline String_t** get_address_of_NsXsi_9() { return &___NsXsi_9; }
	inline void set_NsXsi_9(String_t* value)
	{
		___NsXsi_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXsi_9), (void*)value);
	}

	inline static int32_t get_offset_of_XsiType_10() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___XsiType_10)); }
	inline String_t* get_XsiType_10() const { return ___XsiType_10; }
	inline String_t** get_address_of_XsiType_10() { return &___XsiType_10; }
	inline void set_XsiType_10(String_t* value)
	{
		___XsiType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsiType_10), (void*)value);
	}

	inline static int32_t get_offset_of_XsiNil_11() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___XsiNil_11)); }
	inline String_t* get_XsiNil_11() const { return ___XsiNil_11; }
	inline String_t** get_address_of_XsiNil_11() { return &___XsiNil_11; }
	inline void set_XsiNil_11(String_t* value)
	{
		___XsiNil_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsiNil_11), (void*)value);
	}

	inline static int32_t get_offset_of_XsiSchemaLocation_12() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___XsiSchemaLocation_12)); }
	inline String_t* get_XsiSchemaLocation_12() const { return ___XsiSchemaLocation_12; }
	inline String_t** get_address_of_XsiSchemaLocation_12() { return &___XsiSchemaLocation_12; }
	inline void set_XsiSchemaLocation_12(String_t* value)
	{
		___XsiSchemaLocation_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsiSchemaLocation_12), (void*)value);
	}

	inline static int32_t get_offset_of_XsiNoNamespaceSchemaLocation_13() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___XsiNoNamespaceSchemaLocation_13)); }
	inline String_t* get_XsiNoNamespaceSchemaLocation_13() const { return ___XsiNoNamespaceSchemaLocation_13; }
	inline String_t** get_address_of_XsiNoNamespaceSchemaLocation_13() { return &___XsiNoNamespaceSchemaLocation_13; }
	inline void set_XsiNoNamespaceSchemaLocation_13(String_t* value)
	{
		___XsiNoNamespaceSchemaLocation_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsiNoNamespaceSchemaLocation_13), (void*)value);
	}

	inline static int32_t get_offset_of_XsdSchema_14() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___XsdSchema_14)); }
	inline String_t* get_XsdSchema_14() const { return ___XsdSchema_14; }
	inline String_t** get_address_of_XsdSchema_14() { return &___XsdSchema_14; }
	inline void set_XsdSchema_14(String_t* value)
	{
		___XsdSchema_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsdSchema_14), (void*)value);
	}

	inline static int32_t get_offset_of_XdrSchema_15() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___XdrSchema_15)); }
	inline String_t* get_XdrSchema_15() const { return ___XdrSchema_15; }
	inline String_t** get_address_of_XdrSchema_15() { return &___XdrSchema_15; }
	inline void set_XdrSchema_15(String_t* value)
	{
		___XdrSchema_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XdrSchema_15), (void*)value);
	}

	inline static int32_t get_offset_of_QnPCData_16() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnPCData_16)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnPCData_16() const { return ___QnPCData_16; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnPCData_16() { return &___QnPCData_16; }
	inline void set_QnPCData_16(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnPCData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnPCData_16), (void*)value);
	}

	inline static int32_t get_offset_of_QnXml_17() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXml_17)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXml_17() const { return ___QnXml_17; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXml_17() { return &___QnXml_17; }
	inline void set_QnXml_17(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXml_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXml_17), (void*)value);
	}

	inline static int32_t get_offset_of_QnXmlNs_18() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXmlNs_18)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXmlNs_18() const { return ___QnXmlNs_18; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXmlNs_18() { return &___QnXmlNs_18; }
	inline void set_QnXmlNs_18(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXmlNs_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXmlNs_18), (void*)value);
	}

	inline static int32_t get_offset_of_QnDtDt_19() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDtDt_19)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDtDt_19() const { return ___QnDtDt_19; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDtDt_19() { return &___QnDtDt_19; }
	inline void set_QnDtDt_19(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDtDt_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDtDt_19), (void*)value);
	}

	inline static int32_t get_offset_of_QnXmlLang_20() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXmlLang_20)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXmlLang_20() const { return ___QnXmlLang_20; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXmlLang_20() { return &___QnXmlLang_20; }
	inline void set_QnXmlLang_20(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXmlLang_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXmlLang_20), (void*)value);
	}

	inline static int32_t get_offset_of_QnName_21() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnName_21)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnName_21() const { return ___QnName_21; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnName_21() { return &___QnName_21; }
	inline void set_QnName_21(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnName_21), (void*)value);
	}

	inline static int32_t get_offset_of_QnType_22() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnType_22)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnType_22() const { return ___QnType_22; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnType_22() { return &___QnType_22; }
	inline void set_QnType_22(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnType_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnType_22), (void*)value);
	}

	inline static int32_t get_offset_of_QnMaxOccurs_23() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnMaxOccurs_23)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnMaxOccurs_23() const { return ___QnMaxOccurs_23; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnMaxOccurs_23() { return &___QnMaxOccurs_23; }
	inline void set_QnMaxOccurs_23(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnMaxOccurs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnMaxOccurs_23), (void*)value);
	}

	inline static int32_t get_offset_of_QnMinOccurs_24() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnMinOccurs_24)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnMinOccurs_24() const { return ___QnMinOccurs_24; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnMinOccurs_24() { return &___QnMinOccurs_24; }
	inline void set_QnMinOccurs_24(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnMinOccurs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnMinOccurs_24), (void*)value);
	}

	inline static int32_t get_offset_of_QnInfinite_25() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnInfinite_25)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnInfinite_25() const { return ___QnInfinite_25; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnInfinite_25() { return &___QnInfinite_25; }
	inline void set_QnInfinite_25(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnInfinite_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnInfinite_25), (void*)value);
	}

	inline static int32_t get_offset_of_QnModel_26() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnModel_26)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnModel_26() const { return ___QnModel_26; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnModel_26() { return &___QnModel_26; }
	inline void set_QnModel_26(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnModel_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnModel_26), (void*)value);
	}

	inline static int32_t get_offset_of_QnOpen_27() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnOpen_27)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnOpen_27() const { return ___QnOpen_27; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnOpen_27() { return &___QnOpen_27; }
	inline void set_QnOpen_27(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnOpen_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnOpen_27), (void*)value);
	}

	inline static int32_t get_offset_of_QnClosed_28() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnClosed_28)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnClosed_28() const { return ___QnClosed_28; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnClosed_28() { return &___QnClosed_28; }
	inline void set_QnClosed_28(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnClosed_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnClosed_28), (void*)value);
	}

	inline static int32_t get_offset_of_QnContent_29() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnContent_29)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnContent_29() const { return ___QnContent_29; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnContent_29() { return &___QnContent_29; }
	inline void set_QnContent_29(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnContent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnContent_29), (void*)value);
	}

	inline static int32_t get_offset_of_QnMixed_30() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnMixed_30)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnMixed_30() const { return ___QnMixed_30; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnMixed_30() { return &___QnMixed_30; }
	inline void set_QnMixed_30(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnMixed_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnMixed_30), (void*)value);
	}

	inline static int32_t get_offset_of_QnEmpty_31() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnEmpty_31)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnEmpty_31() const { return ___QnEmpty_31; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnEmpty_31() { return &___QnEmpty_31; }
	inline void set_QnEmpty_31(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnEmpty_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnEmpty_31), (void*)value);
	}

	inline static int32_t get_offset_of_QnEltOnly_32() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnEltOnly_32)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnEltOnly_32() const { return ___QnEltOnly_32; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnEltOnly_32() { return &___QnEltOnly_32; }
	inline void set_QnEltOnly_32(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnEltOnly_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnEltOnly_32), (void*)value);
	}

	inline static int32_t get_offset_of_QnTextOnly_33() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnTextOnly_33)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnTextOnly_33() const { return ___QnTextOnly_33; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnTextOnly_33() { return &___QnTextOnly_33; }
	inline void set_QnTextOnly_33(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnTextOnly_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnTextOnly_33), (void*)value);
	}

	inline static int32_t get_offset_of_QnOrder_34() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnOrder_34)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnOrder_34() const { return ___QnOrder_34; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnOrder_34() { return &___QnOrder_34; }
	inline void set_QnOrder_34(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnOrder_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnOrder_34), (void*)value);
	}

	inline static int32_t get_offset_of_QnSeq_35() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnSeq_35)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnSeq_35() const { return ___QnSeq_35; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnSeq_35() { return &___QnSeq_35; }
	inline void set_QnSeq_35(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnSeq_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnSeq_35), (void*)value);
	}

	inline static int32_t get_offset_of_QnOne_36() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnOne_36)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnOne_36() const { return ___QnOne_36; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnOne_36() { return &___QnOne_36; }
	inline void set_QnOne_36(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnOne_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnOne_36), (void*)value);
	}

	inline static int32_t get_offset_of_QnMany_37() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnMany_37)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnMany_37() const { return ___QnMany_37; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnMany_37() { return &___QnMany_37; }
	inline void set_QnMany_37(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnMany_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnMany_37), (void*)value);
	}

	inline static int32_t get_offset_of_QnRequired_38() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnRequired_38)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnRequired_38() const { return ___QnRequired_38; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnRequired_38() { return &___QnRequired_38; }
	inline void set_QnRequired_38(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnRequired_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnRequired_38), (void*)value);
	}

	inline static int32_t get_offset_of_QnYes_39() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnYes_39)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnYes_39() const { return ___QnYes_39; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnYes_39() { return &___QnYes_39; }
	inline void set_QnYes_39(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnYes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnYes_39), (void*)value);
	}

	inline static int32_t get_offset_of_QnNo_40() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnNo_40)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnNo_40() const { return ___QnNo_40; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnNo_40() { return &___QnNo_40; }
	inline void set_QnNo_40(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnNo_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnNo_40), (void*)value);
	}

	inline static int32_t get_offset_of_QnString_41() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnString_41)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnString_41() const { return ___QnString_41; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnString_41() { return &___QnString_41; }
	inline void set_QnString_41(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnString_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnString_41), (void*)value);
	}

	inline static int32_t get_offset_of_QnID_42() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnID_42)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnID_42() const { return ___QnID_42; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnID_42() { return &___QnID_42; }
	inline void set_QnID_42(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnID_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnID_42), (void*)value);
	}

	inline static int32_t get_offset_of_QnIDRef_43() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnIDRef_43)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnIDRef_43() const { return ___QnIDRef_43; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnIDRef_43() { return &___QnIDRef_43; }
	inline void set_QnIDRef_43(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnIDRef_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnIDRef_43), (void*)value);
	}

	inline static int32_t get_offset_of_QnIDRefs_44() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnIDRefs_44)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnIDRefs_44() const { return ___QnIDRefs_44; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnIDRefs_44() { return &___QnIDRefs_44; }
	inline void set_QnIDRefs_44(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnIDRefs_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnIDRefs_44), (void*)value);
	}

	inline static int32_t get_offset_of_QnEntity_45() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnEntity_45)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnEntity_45() const { return ___QnEntity_45; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnEntity_45() { return &___QnEntity_45; }
	inline void set_QnEntity_45(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnEntity_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnEntity_45), (void*)value);
	}

	inline static int32_t get_offset_of_QnEntities_46() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnEntities_46)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnEntities_46() const { return ___QnEntities_46; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnEntities_46() { return &___QnEntities_46; }
	inline void set_QnEntities_46(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnEntities_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnEntities_46), (void*)value);
	}

	inline static int32_t get_offset_of_QnNmToken_47() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnNmToken_47)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnNmToken_47() const { return ___QnNmToken_47; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnNmToken_47() { return &___QnNmToken_47; }
	inline void set_QnNmToken_47(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnNmToken_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnNmToken_47), (void*)value);
	}

	inline static int32_t get_offset_of_QnNmTokens_48() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnNmTokens_48)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnNmTokens_48() const { return ___QnNmTokens_48; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnNmTokens_48() { return &___QnNmTokens_48; }
	inline void set_QnNmTokens_48(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnNmTokens_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnNmTokens_48), (void*)value);
	}

	inline static int32_t get_offset_of_QnEnumeration_49() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnEnumeration_49)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnEnumeration_49() const { return ___QnEnumeration_49; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnEnumeration_49() { return &___QnEnumeration_49; }
	inline void set_QnEnumeration_49(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnEnumeration_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnEnumeration_49), (void*)value);
	}

	inline static int32_t get_offset_of_QnDefault_50() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDefault_50)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDefault_50() const { return ___QnDefault_50; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDefault_50() { return &___QnDefault_50; }
	inline void set_QnDefault_50(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDefault_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDefault_50), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrSchema_51() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrSchema_51)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrSchema_51() const { return ___QnXdrSchema_51; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrSchema_51() { return &___QnXdrSchema_51; }
	inline void set_QnXdrSchema_51(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrSchema_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrSchema_51), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrElementType_52() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrElementType_52)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrElementType_52() const { return ___QnXdrElementType_52; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrElementType_52() { return &___QnXdrElementType_52; }
	inline void set_QnXdrElementType_52(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrElementType_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrElementType_52), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrElement_53() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrElement_53)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrElement_53() const { return ___QnXdrElement_53; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrElement_53() { return &___QnXdrElement_53; }
	inline void set_QnXdrElement_53(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrElement_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrElement_53), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrGroup_54() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrGroup_54)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrGroup_54() const { return ___QnXdrGroup_54; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrGroup_54() { return &___QnXdrGroup_54; }
	inline void set_QnXdrGroup_54(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrGroup_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrGroup_54), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrAttributeType_55() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrAttributeType_55)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrAttributeType_55() const { return ___QnXdrAttributeType_55; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrAttributeType_55() { return &___QnXdrAttributeType_55; }
	inline void set_QnXdrAttributeType_55(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrAttributeType_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrAttributeType_55), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrAttribute_56() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrAttribute_56)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrAttribute_56() const { return ___QnXdrAttribute_56; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrAttribute_56() { return &___QnXdrAttribute_56; }
	inline void set_QnXdrAttribute_56(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrAttribute_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrAttribute_56), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrDataType_57() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrDataType_57)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrDataType_57() const { return ___QnXdrDataType_57; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrDataType_57() { return &___QnXdrDataType_57; }
	inline void set_QnXdrDataType_57(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrDataType_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrDataType_57), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrDescription_58() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrDescription_58)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrDescription_58() const { return ___QnXdrDescription_58; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrDescription_58() { return &___QnXdrDescription_58; }
	inline void set_QnXdrDescription_58(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrDescription_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrDescription_58), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrExtends_59() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrExtends_59)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrExtends_59() const { return ___QnXdrExtends_59; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrExtends_59() { return &___QnXdrExtends_59; }
	inline void set_QnXdrExtends_59(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrExtends_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrExtends_59), (void*)value);
	}

	inline static int32_t get_offset_of_QnXdrAliasSchema_60() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXdrAliasSchema_60)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXdrAliasSchema_60() const { return ___QnXdrAliasSchema_60; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXdrAliasSchema_60() { return &___QnXdrAliasSchema_60; }
	inline void set_QnXdrAliasSchema_60(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXdrAliasSchema_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXdrAliasSchema_60), (void*)value);
	}

	inline static int32_t get_offset_of_QnDtType_61() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDtType_61)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDtType_61() const { return ___QnDtType_61; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDtType_61() { return &___QnDtType_61; }
	inline void set_QnDtType_61(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDtType_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDtType_61), (void*)value);
	}

	inline static int32_t get_offset_of_QnDtValues_62() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDtValues_62)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDtValues_62() const { return ___QnDtValues_62; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDtValues_62() { return &___QnDtValues_62; }
	inline void set_QnDtValues_62(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDtValues_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDtValues_62), (void*)value);
	}

	inline static int32_t get_offset_of_QnDtMaxLength_63() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDtMaxLength_63)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDtMaxLength_63() const { return ___QnDtMaxLength_63; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDtMaxLength_63() { return &___QnDtMaxLength_63; }
	inline void set_QnDtMaxLength_63(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDtMaxLength_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDtMaxLength_63), (void*)value);
	}

	inline static int32_t get_offset_of_QnDtMinLength_64() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDtMinLength_64)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDtMinLength_64() const { return ___QnDtMinLength_64; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDtMinLength_64() { return &___QnDtMinLength_64; }
	inline void set_QnDtMinLength_64(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDtMinLength_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDtMinLength_64), (void*)value);
	}

	inline static int32_t get_offset_of_QnDtMax_65() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDtMax_65)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDtMax_65() const { return ___QnDtMax_65; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDtMax_65() { return &___QnDtMax_65; }
	inline void set_QnDtMax_65(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDtMax_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDtMax_65), (void*)value);
	}

	inline static int32_t get_offset_of_QnDtMin_66() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDtMin_66)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDtMin_66() const { return ___QnDtMin_66; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDtMin_66() { return &___QnDtMin_66; }
	inline void set_QnDtMin_66(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDtMin_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDtMin_66), (void*)value);
	}

	inline static int32_t get_offset_of_QnDtMinExclusive_67() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDtMinExclusive_67)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDtMinExclusive_67() const { return ___QnDtMinExclusive_67; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDtMinExclusive_67() { return &___QnDtMinExclusive_67; }
	inline void set_QnDtMinExclusive_67(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDtMinExclusive_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDtMinExclusive_67), (void*)value);
	}

	inline static int32_t get_offset_of_QnDtMaxExclusive_68() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDtMaxExclusive_68)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDtMaxExclusive_68() const { return ___QnDtMaxExclusive_68; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDtMaxExclusive_68() { return &___QnDtMaxExclusive_68; }
	inline void set_QnDtMaxExclusive_68(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDtMaxExclusive_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDtMaxExclusive_68), (void*)value);
	}

	inline static int32_t get_offset_of_QnTargetNamespace_69() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnTargetNamespace_69)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnTargetNamespace_69() const { return ___QnTargetNamespace_69; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnTargetNamespace_69() { return &___QnTargetNamespace_69; }
	inline void set_QnTargetNamespace_69(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnTargetNamespace_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnTargetNamespace_69), (void*)value);
	}

	inline static int32_t get_offset_of_QnVersion_70() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnVersion_70)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnVersion_70() const { return ___QnVersion_70; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnVersion_70() { return &___QnVersion_70; }
	inline void set_QnVersion_70(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnVersion_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnVersion_70), (void*)value);
	}

	inline static int32_t get_offset_of_QnFinalDefault_71() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnFinalDefault_71)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnFinalDefault_71() const { return ___QnFinalDefault_71; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnFinalDefault_71() { return &___QnFinalDefault_71; }
	inline void set_QnFinalDefault_71(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnFinalDefault_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnFinalDefault_71), (void*)value);
	}

	inline static int32_t get_offset_of_QnBlockDefault_72() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnBlockDefault_72)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnBlockDefault_72() const { return ___QnBlockDefault_72; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnBlockDefault_72() { return &___QnBlockDefault_72; }
	inline void set_QnBlockDefault_72(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnBlockDefault_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnBlockDefault_72), (void*)value);
	}

	inline static int32_t get_offset_of_QnFixed_73() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnFixed_73)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnFixed_73() const { return ___QnFixed_73; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnFixed_73() { return &___QnFixed_73; }
	inline void set_QnFixed_73(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnFixed_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnFixed_73), (void*)value);
	}

	inline static int32_t get_offset_of_QnAbstract_74() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnAbstract_74)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnAbstract_74() const { return ___QnAbstract_74; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnAbstract_74() { return &___QnAbstract_74; }
	inline void set_QnAbstract_74(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnAbstract_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnAbstract_74), (void*)value);
	}

	inline static int32_t get_offset_of_QnBlock_75() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnBlock_75)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnBlock_75() const { return ___QnBlock_75; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnBlock_75() { return &___QnBlock_75; }
	inline void set_QnBlock_75(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnBlock_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnBlock_75), (void*)value);
	}

	inline static int32_t get_offset_of_QnSubstitutionGroup_76() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnSubstitutionGroup_76)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnSubstitutionGroup_76() const { return ___QnSubstitutionGroup_76; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnSubstitutionGroup_76() { return &___QnSubstitutionGroup_76; }
	inline void set_QnSubstitutionGroup_76(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnSubstitutionGroup_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnSubstitutionGroup_76), (void*)value);
	}

	inline static int32_t get_offset_of_QnFinal_77() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnFinal_77)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnFinal_77() const { return ___QnFinal_77; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnFinal_77() { return &___QnFinal_77; }
	inline void set_QnFinal_77(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnFinal_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnFinal_77), (void*)value);
	}

	inline static int32_t get_offset_of_QnNillable_78() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnNillable_78)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnNillable_78() const { return ___QnNillable_78; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnNillable_78() { return &___QnNillable_78; }
	inline void set_QnNillable_78(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnNillable_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnNillable_78), (void*)value);
	}

	inline static int32_t get_offset_of_QnRef_79() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnRef_79)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnRef_79() const { return ___QnRef_79; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnRef_79() { return &___QnRef_79; }
	inline void set_QnRef_79(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnRef_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnRef_79), (void*)value);
	}

	inline static int32_t get_offset_of_QnBase_80() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnBase_80)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnBase_80() const { return ___QnBase_80; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnBase_80() { return &___QnBase_80; }
	inline void set_QnBase_80(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnBase_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnBase_80), (void*)value);
	}

	inline static int32_t get_offset_of_QnDerivedBy_81() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnDerivedBy_81)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnDerivedBy_81() const { return ___QnDerivedBy_81; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnDerivedBy_81() { return &___QnDerivedBy_81; }
	inline void set_QnDerivedBy_81(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnDerivedBy_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnDerivedBy_81), (void*)value);
	}

	inline static int32_t get_offset_of_QnNamespace_82() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnNamespace_82)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnNamespace_82() const { return ___QnNamespace_82; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnNamespace_82() { return &___QnNamespace_82; }
	inline void set_QnNamespace_82(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnNamespace_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnNamespace_82), (void*)value);
	}

	inline static int32_t get_offset_of_QnProcessContents_83() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnProcessContents_83)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnProcessContents_83() const { return ___QnProcessContents_83; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnProcessContents_83() { return &___QnProcessContents_83; }
	inline void set_QnProcessContents_83(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnProcessContents_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnProcessContents_83), (void*)value);
	}

	inline static int32_t get_offset_of_QnRefer_84() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnRefer_84)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnRefer_84() const { return ___QnRefer_84; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnRefer_84() { return &___QnRefer_84; }
	inline void set_QnRefer_84(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnRefer_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnRefer_84), (void*)value);
	}

	inline static int32_t get_offset_of_QnPublic_85() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnPublic_85)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnPublic_85() const { return ___QnPublic_85; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnPublic_85() { return &___QnPublic_85; }
	inline void set_QnPublic_85(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnPublic_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnPublic_85), (void*)value);
	}

	inline static int32_t get_offset_of_QnSystem_86() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnSystem_86)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnSystem_86() const { return ___QnSystem_86; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnSystem_86() { return &___QnSystem_86; }
	inline void set_QnSystem_86(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnSystem_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnSystem_86), (void*)value);
	}

	inline static int32_t get_offset_of_QnSchemaLocation_87() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnSchemaLocation_87)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnSchemaLocation_87() const { return ___QnSchemaLocation_87; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnSchemaLocation_87() { return &___QnSchemaLocation_87; }
	inline void set_QnSchemaLocation_87(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnSchemaLocation_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnSchemaLocation_87), (void*)value);
	}

	inline static int32_t get_offset_of_QnValue_88() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnValue_88)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnValue_88() const { return ___QnValue_88; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnValue_88() { return &___QnValue_88; }
	inline void set_QnValue_88(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnValue_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnValue_88), (void*)value);
	}

	inline static int32_t get_offset_of_QnUse_89() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnUse_89)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnUse_89() const { return ___QnUse_89; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnUse_89() { return &___QnUse_89; }
	inline void set_QnUse_89(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnUse_89 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnUse_89), (void*)value);
	}

	inline static int32_t get_offset_of_QnForm_90() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnForm_90)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnForm_90() const { return ___QnForm_90; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnForm_90() { return &___QnForm_90; }
	inline void set_QnForm_90(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnForm_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnForm_90), (void*)value);
	}

	inline static int32_t get_offset_of_QnElementFormDefault_91() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnElementFormDefault_91)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnElementFormDefault_91() const { return ___QnElementFormDefault_91; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnElementFormDefault_91() { return &___QnElementFormDefault_91; }
	inline void set_QnElementFormDefault_91(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnElementFormDefault_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnElementFormDefault_91), (void*)value);
	}

	inline static int32_t get_offset_of_QnAttributeFormDefault_92() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnAttributeFormDefault_92)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnAttributeFormDefault_92() const { return ___QnAttributeFormDefault_92; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnAttributeFormDefault_92() { return &___QnAttributeFormDefault_92; }
	inline void set_QnAttributeFormDefault_92(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnAttributeFormDefault_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnAttributeFormDefault_92), (void*)value);
	}

	inline static int32_t get_offset_of_QnItemType_93() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnItemType_93)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnItemType_93() const { return ___QnItemType_93; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnItemType_93() { return &___QnItemType_93; }
	inline void set_QnItemType_93(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnItemType_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnItemType_93), (void*)value);
	}

	inline static int32_t get_offset_of_QnMemberTypes_94() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnMemberTypes_94)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnMemberTypes_94() const { return ___QnMemberTypes_94; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnMemberTypes_94() { return &___QnMemberTypes_94; }
	inline void set_QnMemberTypes_94(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnMemberTypes_94 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnMemberTypes_94), (void*)value);
	}

	inline static int32_t get_offset_of_QnXPath_95() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXPath_95)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXPath_95() const { return ___QnXPath_95; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXPath_95() { return &___QnXPath_95; }
	inline void set_QnXPath_95(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXPath_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXPath_95), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdSchema_96() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdSchema_96)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdSchema_96() const { return ___QnXsdSchema_96; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdSchema_96() { return &___QnXsdSchema_96; }
	inline void set_QnXsdSchema_96(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdSchema_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdSchema_96), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdAnnotation_97() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdAnnotation_97)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdAnnotation_97() const { return ___QnXsdAnnotation_97; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdAnnotation_97() { return &___QnXsdAnnotation_97; }
	inline void set_QnXsdAnnotation_97(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdAnnotation_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdAnnotation_97), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdInclude_98() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdInclude_98)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdInclude_98() const { return ___QnXsdInclude_98; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdInclude_98() { return &___QnXsdInclude_98; }
	inline void set_QnXsdInclude_98(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdInclude_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdInclude_98), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdImport_99() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdImport_99)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdImport_99() const { return ___QnXsdImport_99; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdImport_99() { return &___QnXsdImport_99; }
	inline void set_QnXsdImport_99(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdImport_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdImport_99), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdElement_100() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdElement_100)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdElement_100() const { return ___QnXsdElement_100; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdElement_100() { return &___QnXsdElement_100; }
	inline void set_QnXsdElement_100(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdElement_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdElement_100), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdAttribute_101() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdAttribute_101)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdAttribute_101() const { return ___QnXsdAttribute_101; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdAttribute_101() { return &___QnXsdAttribute_101; }
	inline void set_QnXsdAttribute_101(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdAttribute_101 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdAttribute_101), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdAttributeGroup_102() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdAttributeGroup_102)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdAttributeGroup_102() const { return ___QnXsdAttributeGroup_102; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdAttributeGroup_102() { return &___QnXsdAttributeGroup_102; }
	inline void set_QnXsdAttributeGroup_102(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdAttributeGroup_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdAttributeGroup_102), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdAnyAttribute_103() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdAnyAttribute_103)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdAnyAttribute_103() const { return ___QnXsdAnyAttribute_103; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdAnyAttribute_103() { return &___QnXsdAnyAttribute_103; }
	inline void set_QnXsdAnyAttribute_103(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdAnyAttribute_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdAnyAttribute_103), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdGroup_104() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdGroup_104)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdGroup_104() const { return ___QnXsdGroup_104; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdGroup_104() { return &___QnXsdGroup_104; }
	inline void set_QnXsdGroup_104(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdGroup_104 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdGroup_104), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdAll_105() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdAll_105)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdAll_105() const { return ___QnXsdAll_105; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdAll_105() { return &___QnXsdAll_105; }
	inline void set_QnXsdAll_105(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdAll_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdAll_105), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdChoice_106() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdChoice_106)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdChoice_106() const { return ___QnXsdChoice_106; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdChoice_106() { return &___QnXsdChoice_106; }
	inline void set_QnXsdChoice_106(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdChoice_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdChoice_106), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdSequence_107() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdSequence_107)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdSequence_107() const { return ___QnXsdSequence_107; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdSequence_107() { return &___QnXsdSequence_107; }
	inline void set_QnXsdSequence_107(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdSequence_107 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdSequence_107), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdAny_108() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdAny_108)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdAny_108() const { return ___QnXsdAny_108; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdAny_108() { return &___QnXsdAny_108; }
	inline void set_QnXsdAny_108(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdAny_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdAny_108), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdNotation_109() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdNotation_109)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdNotation_109() const { return ___QnXsdNotation_109; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdNotation_109() { return &___QnXsdNotation_109; }
	inline void set_QnXsdNotation_109(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdNotation_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdNotation_109), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdSimpleType_110() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdSimpleType_110)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdSimpleType_110() const { return ___QnXsdSimpleType_110; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdSimpleType_110() { return &___QnXsdSimpleType_110; }
	inline void set_QnXsdSimpleType_110(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdSimpleType_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdSimpleType_110), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdComplexType_111() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdComplexType_111)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdComplexType_111() const { return ___QnXsdComplexType_111; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdComplexType_111() { return &___QnXsdComplexType_111; }
	inline void set_QnXsdComplexType_111(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdComplexType_111 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdComplexType_111), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdUnique_112() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdUnique_112)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdUnique_112() const { return ___QnXsdUnique_112; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdUnique_112() { return &___QnXsdUnique_112; }
	inline void set_QnXsdUnique_112(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdUnique_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdUnique_112), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdKey_113() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdKey_113)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdKey_113() const { return ___QnXsdKey_113; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdKey_113() { return &___QnXsdKey_113; }
	inline void set_QnXsdKey_113(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdKey_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdKey_113), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdKeyRef_114() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdKeyRef_114)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdKeyRef_114() const { return ___QnXsdKeyRef_114; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdKeyRef_114() { return &___QnXsdKeyRef_114; }
	inline void set_QnXsdKeyRef_114(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdKeyRef_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdKeyRef_114), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdSelector_115() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdSelector_115)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdSelector_115() const { return ___QnXsdSelector_115; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdSelector_115() { return &___QnXsdSelector_115; }
	inline void set_QnXsdSelector_115(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdSelector_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdSelector_115), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdField_116() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdField_116)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdField_116() const { return ___QnXsdField_116; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdField_116() { return &___QnXsdField_116; }
	inline void set_QnXsdField_116(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdField_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdField_116), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdMinExclusive_117() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdMinExclusive_117)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdMinExclusive_117() const { return ___QnXsdMinExclusive_117; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdMinExclusive_117() { return &___QnXsdMinExclusive_117; }
	inline void set_QnXsdMinExclusive_117(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdMinExclusive_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdMinExclusive_117), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdMinInclusive_118() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdMinInclusive_118)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdMinInclusive_118() const { return ___QnXsdMinInclusive_118; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdMinInclusive_118() { return &___QnXsdMinInclusive_118; }
	inline void set_QnXsdMinInclusive_118(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdMinInclusive_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdMinInclusive_118), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdMaxInclusive_119() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdMaxInclusive_119)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdMaxInclusive_119() const { return ___QnXsdMaxInclusive_119; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdMaxInclusive_119() { return &___QnXsdMaxInclusive_119; }
	inline void set_QnXsdMaxInclusive_119(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdMaxInclusive_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdMaxInclusive_119), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdMaxExclusive_120() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdMaxExclusive_120)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdMaxExclusive_120() const { return ___QnXsdMaxExclusive_120; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdMaxExclusive_120() { return &___QnXsdMaxExclusive_120; }
	inline void set_QnXsdMaxExclusive_120(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdMaxExclusive_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdMaxExclusive_120), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdTotalDigits_121() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdTotalDigits_121)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdTotalDigits_121() const { return ___QnXsdTotalDigits_121; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdTotalDigits_121() { return &___QnXsdTotalDigits_121; }
	inline void set_QnXsdTotalDigits_121(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdTotalDigits_121 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdTotalDigits_121), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdFractionDigits_122() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdFractionDigits_122)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdFractionDigits_122() const { return ___QnXsdFractionDigits_122; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdFractionDigits_122() { return &___QnXsdFractionDigits_122; }
	inline void set_QnXsdFractionDigits_122(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdFractionDigits_122 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdFractionDigits_122), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdLength_123() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdLength_123)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdLength_123() const { return ___QnXsdLength_123; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdLength_123() { return &___QnXsdLength_123; }
	inline void set_QnXsdLength_123(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdLength_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdLength_123), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdMinLength_124() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdMinLength_124)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdMinLength_124() const { return ___QnXsdMinLength_124; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdMinLength_124() { return &___QnXsdMinLength_124; }
	inline void set_QnXsdMinLength_124(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdMinLength_124 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdMinLength_124), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdMaxLength_125() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdMaxLength_125)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdMaxLength_125() const { return ___QnXsdMaxLength_125; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdMaxLength_125() { return &___QnXsdMaxLength_125; }
	inline void set_QnXsdMaxLength_125(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdMaxLength_125 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdMaxLength_125), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdEnumeration_126() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdEnumeration_126)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdEnumeration_126() const { return ___QnXsdEnumeration_126; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdEnumeration_126() { return &___QnXsdEnumeration_126; }
	inline void set_QnXsdEnumeration_126(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdEnumeration_126 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdEnumeration_126), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdPattern_127() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdPattern_127)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdPattern_127() const { return ___QnXsdPattern_127; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdPattern_127() { return &___QnXsdPattern_127; }
	inline void set_QnXsdPattern_127(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdPattern_127 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdPattern_127), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdDocumentation_128() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdDocumentation_128)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdDocumentation_128() const { return ___QnXsdDocumentation_128; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdDocumentation_128() { return &___QnXsdDocumentation_128; }
	inline void set_QnXsdDocumentation_128(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdDocumentation_128 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdDocumentation_128), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdAppinfo_129() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdAppinfo_129)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdAppinfo_129() const { return ___QnXsdAppinfo_129; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdAppinfo_129() { return &___QnXsdAppinfo_129; }
	inline void set_QnXsdAppinfo_129(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdAppinfo_129 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdAppinfo_129), (void*)value);
	}

	inline static int32_t get_offset_of_QnSource_130() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnSource_130)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnSource_130() const { return ___QnSource_130; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnSource_130() { return &___QnSource_130; }
	inline void set_QnSource_130(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnSource_130 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnSource_130), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdComplexContent_131() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdComplexContent_131)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdComplexContent_131() const { return ___QnXsdComplexContent_131; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdComplexContent_131() { return &___QnXsdComplexContent_131; }
	inline void set_QnXsdComplexContent_131(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdComplexContent_131 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdComplexContent_131), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdSimpleContent_132() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdSimpleContent_132)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdSimpleContent_132() const { return ___QnXsdSimpleContent_132; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdSimpleContent_132() { return &___QnXsdSimpleContent_132; }
	inline void set_QnXsdSimpleContent_132(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdSimpleContent_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdSimpleContent_132), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdRestriction_133() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdRestriction_133)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdRestriction_133() const { return ___QnXsdRestriction_133; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdRestriction_133() { return &___QnXsdRestriction_133; }
	inline void set_QnXsdRestriction_133(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdRestriction_133 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdRestriction_133), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdExtension_134() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdExtension_134)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdExtension_134() const { return ___QnXsdExtension_134; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdExtension_134() { return &___QnXsdExtension_134; }
	inline void set_QnXsdExtension_134(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdExtension_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdExtension_134), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdUnion_135() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdUnion_135)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdUnion_135() const { return ___QnXsdUnion_135; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdUnion_135() { return &___QnXsdUnion_135; }
	inline void set_QnXsdUnion_135(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdUnion_135 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdUnion_135), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdList_136() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdList_136)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdList_136() const { return ___QnXsdList_136; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdList_136() { return &___QnXsdList_136; }
	inline void set_QnXsdList_136(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdList_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdList_136), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdWhiteSpace_137() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdWhiteSpace_137)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdWhiteSpace_137() const { return ___QnXsdWhiteSpace_137; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdWhiteSpace_137() { return &___QnXsdWhiteSpace_137; }
	inline void set_QnXsdWhiteSpace_137(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdWhiteSpace_137 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdWhiteSpace_137), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdRedefine_138() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdRedefine_138)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdRedefine_138() const { return ___QnXsdRedefine_138; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdRedefine_138() { return &___QnXsdRedefine_138; }
	inline void set_QnXsdRedefine_138(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdRedefine_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdRedefine_138), (void*)value);
	}

	inline static int32_t get_offset_of_QnXsdAnyType_139() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___QnXsdAnyType_139)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_QnXsdAnyType_139() const { return ___QnXsdAnyType_139; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_QnXsdAnyType_139() { return &___QnXsdAnyType_139; }
	inline void set_QnXsdAnyType_139(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___QnXsdAnyType_139 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnXsdAnyType_139), (void*)value);
	}

	inline static int32_t get_offset_of_TokenToQName_140() { return static_cast<int32_t>(offsetof(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89, ___TokenToQName_140)); }
	inline XmlQualifiedNameU5BU5D_t375EB02A213AC919E02336B57A412BB761AFA18B* get_TokenToQName_140() const { return ___TokenToQName_140; }
	inline XmlQualifiedNameU5BU5D_t375EB02A213AC919E02336B57A412BB761AFA18B** get_address_of_TokenToQName_140() { return &___TokenToQName_140; }
	inline void set_TokenToQName_140(XmlQualifiedNameU5BU5D_t375EB02A213AC919E02336B57A412BB761AFA18B* value)
	{
		___TokenToQName_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TokenToQName_140), (void*)value);
	}
};


// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550  : public RuntimeObject
{
public:

public:
};


// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaObject::lineNum
	int32_t ___lineNum_0;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::linePos
	int32_t ___linePos_1;
	// System.String System.Xml.Schema.XmlSchemaObject::sourceUri
	String_t* ___sourceUri_2;
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t31E17AE7CF53591901A576C48D1E446BB985676F * ___namespaces_3;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::parent
	XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * ___parent_4;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isProcessing
	bool ___isProcessing_5;

public:
	inline static int32_t get_offset_of_lineNum_0() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B, ___lineNum_0)); }
	inline int32_t get_lineNum_0() const { return ___lineNum_0; }
	inline int32_t* get_address_of_lineNum_0() { return &___lineNum_0; }
	inline void set_lineNum_0(int32_t value)
	{
		___lineNum_0 = value;
	}

	inline static int32_t get_offset_of_linePos_1() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B, ___linePos_1)); }
	inline int32_t get_linePos_1() const { return ___linePos_1; }
	inline int32_t* get_address_of_linePos_1() { return &___linePos_1; }
	inline void set_linePos_1(int32_t value)
	{
		___linePos_1 = value;
	}

	inline static int32_t get_offset_of_sourceUri_2() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B, ___sourceUri_2)); }
	inline String_t* get_sourceUri_2() const { return ___sourceUri_2; }
	inline String_t** get_address_of_sourceUri_2() { return &___sourceUri_2; }
	inline void set_sourceUri_2(String_t* value)
	{
		___sourceUri_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceUri_2), (void*)value);
	}

	inline static int32_t get_offset_of_namespaces_3() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B, ___namespaces_3)); }
	inline XmlSerializerNamespaces_t31E17AE7CF53591901A576C48D1E446BB985676F * get_namespaces_3() const { return ___namespaces_3; }
	inline XmlSerializerNamespaces_t31E17AE7CF53591901A576C48D1E446BB985676F ** get_address_of_namespaces_3() { return &___namespaces_3; }
	inline void set_namespaces_3(XmlSerializerNamespaces_t31E17AE7CF53591901A576C48D1E446BB985676F * value)
	{
		___namespaces_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaces_3), (void*)value);
	}

	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B, ___parent_4)); }
	inline XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * get_parent_4() const { return ___parent_4; }
	inline XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_4), (void*)value);
	}

	inline static int32_t get_offset_of_isProcessing_5() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B, ___isProcessing_5)); }
	inline bool get_isProcessing_5() const { return ___isProcessing_5; }
	inline bool* get_address_of_isProcessing_5() { return &___isProcessing_5; }
	inline void set_isProcessing_5(bool value)
	{
		___isProcessing_5 = value;
	}
};


// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F  : public RuntimeObject
{
public:
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable_0;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.XmlSchemaSet::schemaNames
	SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 * ___schemaNames_1;
	// System.Collections.SortedList System.Xml.Schema.XmlSchemaSet::schemas
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * ___schemas_2;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaSet::internalEventHandler
	ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * ___internalEventHandler_3;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaSet::eventHandler
	ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * ___eventHandler_4;
	// System.Boolean System.Xml.Schema.XmlSchemaSet::isCompiled
	bool ___isCompiled_5;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::schemaLocations
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___schemaLocations_6;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::chameleonSchemas
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___chameleonSchemas_7;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::targetNamespaces
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___targetNamespaces_8;
	// System.Boolean System.Xml.Schema.XmlSchemaSet::compileAll
	bool ___compileAll_9;
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.XmlSchemaSet::cachedCompiledInfo
	SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * ___cachedCompiledInfo_10;
	// System.Xml.XmlReaderSettings System.Xml.Schema.XmlSchemaSet::readerSettings
	XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * ___readerSettings_11;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaSet::schemaForSchema
	XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * ___schemaForSchema_12;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::compilationSettings
	XmlSchemaCompilationSettings_t33655A7BA800689EC37601FEFD33291F42B8ABBC * ___compilationSettings_13;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::elements
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___elements_14;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::attributes
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___attributes_15;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::schemaTypes
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___schemaTypes_16;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::substitutionGroups
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___substitutionGroups_17;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::typeExtensions
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___typeExtensions_18;
	// System.Object System.Xml.Schema.XmlSchemaSet::internalSyncObject
	RuntimeObject * ___internalSyncObject_19;

public:
	inline static int32_t get_offset_of_nameTable_0() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___nameTable_0)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_nameTable_0() const { return ___nameTable_0; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_nameTable_0() { return &___nameTable_0; }
	inline void set_nameTable_0(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___nameTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_0), (void*)value);
	}

	inline static int32_t get_offset_of_schemaNames_1() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___schemaNames_1)); }
	inline SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 * get_schemaNames_1() const { return ___schemaNames_1; }
	inline SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 ** get_address_of_schemaNames_1() { return &___schemaNames_1; }
	inline void set_schemaNames_1(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 * value)
	{
		___schemaNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_schemas_2() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___schemas_2)); }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * get_schemas_2() const { return ___schemas_2; }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E ** get_address_of_schemas_2() { return &___schemas_2; }
	inline void set_schemas_2(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * value)
	{
		___schemas_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemas_2), (void*)value);
	}

	inline static int32_t get_offset_of_internalEventHandler_3() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___internalEventHandler_3)); }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * get_internalEventHandler_3() const { return ___internalEventHandler_3; }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF ** get_address_of_internalEventHandler_3() { return &___internalEventHandler_3; }
	inline void set_internalEventHandler_3(ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * value)
	{
		___internalEventHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalEventHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_eventHandler_4() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___eventHandler_4)); }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * get_eventHandler_4() const { return ___eventHandler_4; }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF ** get_address_of_eventHandler_4() { return &___eventHandler_4; }
	inline void set_eventHandler_4(ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * value)
	{
		___eventHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_isCompiled_5() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___isCompiled_5)); }
	inline bool get_isCompiled_5() const { return ___isCompiled_5; }
	inline bool* get_address_of_isCompiled_5() { return &___isCompiled_5; }
	inline void set_isCompiled_5(bool value)
	{
		___isCompiled_5 = value;
	}

	inline static int32_t get_offset_of_schemaLocations_6() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___schemaLocations_6)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_schemaLocations_6() const { return ___schemaLocations_6; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_schemaLocations_6() { return &___schemaLocations_6; }
	inline void set_schemaLocations_6(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___schemaLocations_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaLocations_6), (void*)value);
	}

	inline static int32_t get_offset_of_chameleonSchemas_7() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___chameleonSchemas_7)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_chameleonSchemas_7() const { return ___chameleonSchemas_7; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_chameleonSchemas_7() { return &___chameleonSchemas_7; }
	inline void set_chameleonSchemas_7(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___chameleonSchemas_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chameleonSchemas_7), (void*)value);
	}

	inline static int32_t get_offset_of_targetNamespaces_8() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___targetNamespaces_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_targetNamespaces_8() const { return ___targetNamespaces_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_targetNamespaces_8() { return &___targetNamespaces_8; }
	inline void set_targetNamespaces_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___targetNamespaces_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetNamespaces_8), (void*)value);
	}

	inline static int32_t get_offset_of_compileAll_9() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___compileAll_9)); }
	inline bool get_compileAll_9() const { return ___compileAll_9; }
	inline bool* get_address_of_compileAll_9() { return &___compileAll_9; }
	inline void set_compileAll_9(bool value)
	{
		___compileAll_9 = value;
	}

	inline static int32_t get_offset_of_cachedCompiledInfo_10() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___cachedCompiledInfo_10)); }
	inline SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * get_cachedCompiledInfo_10() const { return ___cachedCompiledInfo_10; }
	inline SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 ** get_address_of_cachedCompiledInfo_10() { return &___cachedCompiledInfo_10; }
	inline void set_cachedCompiledInfo_10(SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * value)
	{
		___cachedCompiledInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedCompiledInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_readerSettings_11() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___readerSettings_11)); }
	inline XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * get_readerSettings_11() const { return ___readerSettings_11; }
	inline XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 ** get_address_of_readerSettings_11() { return &___readerSettings_11; }
	inline void set_readerSettings_11(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * value)
	{
		___readerSettings_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readerSettings_11), (void*)value);
	}

	inline static int32_t get_offset_of_schemaForSchema_12() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___schemaForSchema_12)); }
	inline XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * get_schemaForSchema_12() const { return ___schemaForSchema_12; }
	inline XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F ** get_address_of_schemaForSchema_12() { return &___schemaForSchema_12; }
	inline void set_schemaForSchema_12(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * value)
	{
		___schemaForSchema_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaForSchema_12), (void*)value);
	}

	inline static int32_t get_offset_of_compilationSettings_13() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___compilationSettings_13)); }
	inline XmlSchemaCompilationSettings_t33655A7BA800689EC37601FEFD33291F42B8ABBC * get_compilationSettings_13() const { return ___compilationSettings_13; }
	inline XmlSchemaCompilationSettings_t33655A7BA800689EC37601FEFD33291F42B8ABBC ** get_address_of_compilationSettings_13() { return &___compilationSettings_13; }
	inline void set_compilationSettings_13(XmlSchemaCompilationSettings_t33655A7BA800689EC37601FEFD33291F42B8ABBC * value)
	{
		___compilationSettings_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compilationSettings_13), (void*)value);
	}

	inline static int32_t get_offset_of_elements_14() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___elements_14)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_elements_14() const { return ___elements_14; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_elements_14() { return &___elements_14; }
	inline void set_elements_14(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___elements_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elements_14), (void*)value);
	}

	inline static int32_t get_offset_of_attributes_15() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___attributes_15)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_attributes_15() const { return ___attributes_15; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_attributes_15() { return &___attributes_15; }
	inline void set_attributes_15(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___attributes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_15), (void*)value);
	}

	inline static int32_t get_offset_of_schemaTypes_16() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___schemaTypes_16)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_schemaTypes_16() const { return ___schemaTypes_16; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_schemaTypes_16() { return &___schemaTypes_16; }
	inline void set_schemaTypes_16(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___schemaTypes_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaTypes_16), (void*)value);
	}

	inline static int32_t get_offset_of_substitutionGroups_17() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___substitutionGroups_17)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_substitutionGroups_17() const { return ___substitutionGroups_17; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_substitutionGroups_17() { return &___substitutionGroups_17; }
	inline void set_substitutionGroups_17(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___substitutionGroups_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___substitutionGroups_17), (void*)value);
	}

	inline static int32_t get_offset_of_typeExtensions_18() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___typeExtensions_18)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_typeExtensions_18() const { return ___typeExtensions_18; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_typeExtensions_18() { return &___typeExtensions_18; }
	inline void set_typeExtensions_18(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___typeExtensions_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeExtensions_18), (void*)value);
	}

	inline static int32_t get_offset_of_internalSyncObject_19() { return static_cast<int32_t>(offsetof(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F, ___internalSyncObject_19)); }
	inline RuntimeObject * get_internalSyncObject_19() const { return ___internalSyncObject_19; }
	inline RuntimeObject ** get_address_of_internalSyncObject_19() { return &___internalSyncObject_19; }
	inline void set_internalSyncObject_19(RuntimeObject * value)
	{
		___internalSyncObject_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSyncObject_19), (void*)value);
	}
};


// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlNameTable
struct XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NamespaceDeclaration[] System.Xml.XmlNamespaceManager::nsdecls
	NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84* ___nsdecls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::lastDecl
	int32_t ___lastDecl_1;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopeId
	int32_t ___scopeId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::hashTable
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___hashTable_4;
	// System.Boolean System.Xml.XmlNamespaceManager::useHashtable
	bool ___useHashtable_5;
	// System.String System.Xml.XmlNamespaceManager::xml
	String_t* ___xml_6;
	// System.String System.Xml.XmlNamespaceManager::xmlNs
	String_t* ___xmlNs_7;

public:
	inline static int32_t get_offset_of_nsdecls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___nsdecls_0)); }
	inline NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84* get_nsdecls_0() const { return ___nsdecls_0; }
	inline NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84** get_address_of_nsdecls_0() { return &___nsdecls_0; }
	inline void set_nsdecls_0(NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84* value)
	{
		___nsdecls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsdecls_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastDecl_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___lastDecl_1)); }
	inline int32_t get_lastDecl_1() const { return ___lastDecl_1; }
	inline int32_t* get_address_of_lastDecl_1() { return &___lastDecl_1; }
	inline void set_lastDecl_1(int32_t value)
	{
		___lastDecl_1 = value;
	}

	inline static int32_t get_offset_of_nameTable_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___nameTable_2)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_nameTable_2() const { return ___nameTable_2; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_nameTable_2() { return &___nameTable_2; }
	inline void set_nameTable_2(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___nameTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_scopeId_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___scopeId_3)); }
	inline int32_t get_scopeId_3() const { return ___scopeId_3; }
	inline int32_t* get_address_of_scopeId_3() { return &___scopeId_3; }
	inline void set_scopeId_3(int32_t value)
	{
		___scopeId_3 = value;
	}

	inline static int32_t get_offset_of_hashTable_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___hashTable_4)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_hashTable_4() const { return ___hashTable_4; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_hashTable_4() { return &___hashTable_4; }
	inline void set_hashTable_4(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___hashTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hashTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_useHashtable_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___useHashtable_5)); }
	inline bool get_useHashtable_5() const { return ___useHashtable_5; }
	inline bool* get_address_of_useHashtable_5() { return &___useHashtable_5; }
	inline void set_useHashtable_5(bool value)
	{
		___useHashtable_5 = value;
	}

	inline static int32_t get_offset_of_xml_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___xml_6)); }
	inline String_t* get_xml_6() const { return ___xml_6; }
	inline String_t** get_address_of_xml_6() { return &___xml_6; }
	inline void set_xml_6(String_t* value)
	{
		___xml_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xml_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlNs_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___xmlNs_7)); }
	inline String_t* get_xmlNs_7() const { return ___xmlNs_7; }
	inline String_t** get_address_of_xmlNs_7() { return &___xmlNs_7; }
	inline void set_xmlNs_7(String_t* value)
	{
		___xmlNs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlNs_7), (void*)value);
	}
};


// System.Xml.XmlReader
struct XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB  : public RuntimeObject
{
public:

public:
};

struct XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields
{
public:
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;

public:
	inline static int32_t get_offset_of_IsTextualNodeBitmap_0() { return static_cast<int32_t>(offsetof(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields, ___IsTextualNodeBitmap_0)); }
	inline uint32_t get_IsTextualNodeBitmap_0() const { return ___IsTextualNodeBitmap_0; }
	inline uint32_t* get_address_of_IsTextualNodeBitmap_0() { return &___IsTextualNodeBitmap_0; }
	inline void set_IsTextualNodeBitmap_0(uint32_t value)
	{
		___IsTextualNodeBitmap_0 = value;
	}

	inline static int32_t get_offset_of_CanReadContentAsBitmap_1() { return static_cast<int32_t>(offsetof(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields, ___CanReadContentAsBitmap_1)); }
	inline uint32_t get_CanReadContentAsBitmap_1() const { return ___CanReadContentAsBitmap_1; }
	inline uint32_t* get_address_of_CanReadContentAsBitmap_1() { return &___CanReadContentAsBitmap_1; }
	inline void set_CanReadContentAsBitmap_1(uint32_t value)
	{
		___CanReadContentAsBitmap_1 = value;
	}

	inline static int32_t get_offset_of_HasValueBitmap_2() { return static_cast<int32_t>(offsetof(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields, ___HasValueBitmap_2)); }
	inline uint32_t get_HasValueBitmap_2() const { return ___HasValueBitmap_2; }
	inline uint32_t* get_address_of_HasValueBitmap_2() { return &___HasValueBitmap_2; }
	inline void set_HasValueBitmap_2(uint32_t value)
	{
		___HasValueBitmap_2 = value;
	}
};


// System.Xml.XmlResolver
struct XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280  : public RuntimeObject
{
public:

public:
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


// System.Decimal
struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
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


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.Xml.Schema.XmlSchemaAnnotated
struct XmlSchemaAnnotated_t94F7899A20B495CD62FA0976A4F23FD4A0847B7B  : public XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B
{
public:
	// System.String System.Xml.Schema.XmlSchemaAnnotated::id
	String_t* ___id_6;
	// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaAnnotated::annotation
	XmlSchemaAnnotation_tC8DD8E9A26CD3A12B16C25F0341600FF69C3B725 * ___annotation_7;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchemaAnnotated::moreAttributes
	XmlAttributeU5BU5D_t02E3E190564D2A07467AFE803FAB6C1CE82F7908* ___moreAttributes_8;

public:
	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t94F7899A20B495CD62FA0976A4F23FD4A0847B7B, ___id_6)); }
	inline String_t* get_id_6() const { return ___id_6; }
	inline String_t** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(String_t* value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_6), (void*)value);
	}

	inline static int32_t get_offset_of_annotation_7() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t94F7899A20B495CD62FA0976A4F23FD4A0847B7B, ___annotation_7)); }
	inline XmlSchemaAnnotation_tC8DD8E9A26CD3A12B16C25F0341600FF69C3B725 * get_annotation_7() const { return ___annotation_7; }
	inline XmlSchemaAnnotation_tC8DD8E9A26CD3A12B16C25F0341600FF69C3B725 ** get_address_of_annotation_7() { return &___annotation_7; }
	inline void set_annotation_7(XmlSchemaAnnotation_tC8DD8E9A26CD3A12B16C25F0341600FF69C3B725 * value)
	{
		___annotation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___annotation_7), (void*)value);
	}

	inline static int32_t get_offset_of_moreAttributes_8() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t94F7899A20B495CD62FA0976A4F23FD4A0847B7B, ___moreAttributes_8)); }
	inline XmlAttributeU5BU5D_t02E3E190564D2A07467AFE803FAB6C1CE82F7908* get_moreAttributes_8() const { return ___moreAttributes_8; }
	inline XmlAttributeU5BU5D_t02E3E190564D2A07467AFE803FAB6C1CE82F7908** get_address_of_moreAttributes_8() { return &___moreAttributes_8; }
	inline void set_moreAttributes_8(XmlAttributeU5BU5D_t02E3E190564D2A07467AFE803FAB6C1CE82F7908* value)
	{
		___moreAttributes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moreAttributes_8), (void*)value);
	}
};


// System.Xml.XmlCharType
struct XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9 
{
public:
	// System.Byte[] System.Xml.XmlCharType::charProperties
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___charProperties_2;

public:
	inline static int32_t get_offset_of_charProperties_2() { return static_cast<int32_t>(offsetof(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9, ___charProperties_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_charProperties_2() const { return ___charProperties_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_charProperties_2() { return &___charProperties_2; }
	inline void set_charProperties_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___charProperties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charProperties_2), (void*)value);
	}
};

struct XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_StaticFields
{
public:
	// System.Object System.Xml.XmlCharType::s_Lock
	RuntimeObject * ___s_Lock_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlCharType::s_CharProperties
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_CharProperties_1;

public:
	inline static int32_t get_offset_of_s_Lock_0() { return static_cast<int32_t>(offsetof(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_StaticFields, ___s_Lock_0)); }
	inline RuntimeObject * get_s_Lock_0() const { return ___s_Lock_0; }
	inline RuntimeObject ** get_address_of_s_Lock_0() { return &___s_Lock_0; }
	inline void set_s_Lock_0(RuntimeObject * value)
	{
		___s_Lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Lock_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_CharProperties_1() { return static_cast<int32_t>(offsetof(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_StaticFields, ___s_CharProperties_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_CharProperties_1() const { return ___s_CharProperties_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_CharProperties_1() { return &___s_CharProperties_1; }
	inline void set_s_CharProperties_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_CharProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CharProperties_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlCharType
struct XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};
// Native definition for COM marshalling of System.Xml.XmlCharType
struct XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};

// System.Xml.Xsl.Runtime.StringConcat
struct StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 
{
public:
	// System.String System.Xml.Xsl.Runtime.StringConcat::s1
	String_t* ___s1_0;
	// System.String System.Xml.Xsl.Runtime.StringConcat::s2
	String_t* ___s2_1;
	// System.String System.Xml.Xsl.Runtime.StringConcat::s3
	String_t* ___s3_2;
	// System.String System.Xml.Xsl.Runtime.StringConcat::s4
	String_t* ___s4_3;
	// System.String System.Xml.Xsl.Runtime.StringConcat::delimiter
	String_t* ___delimiter_4;
	// System.Collections.Generic.List`1<System.String> System.Xml.Xsl.Runtime.StringConcat::strList
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___strList_5;
	// System.Int32 System.Xml.Xsl.Runtime.StringConcat::idxStr
	int32_t ___idxStr_6;

public:
	inline static int32_t get_offset_of_s1_0() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___s1_0)); }
	inline String_t* get_s1_0() const { return ___s1_0; }
	inline String_t** get_address_of_s1_0() { return &___s1_0; }
	inline void set_s1_0(String_t* value)
	{
		___s1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s1_0), (void*)value);
	}

	inline static int32_t get_offset_of_s2_1() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___s2_1)); }
	inline String_t* get_s2_1() const { return ___s2_1; }
	inline String_t** get_address_of_s2_1() { return &___s2_1; }
	inline void set_s2_1(String_t* value)
	{
		___s2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s2_1), (void*)value);
	}

	inline static int32_t get_offset_of_s3_2() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___s3_2)); }
	inline String_t* get_s3_2() const { return ___s3_2; }
	inline String_t** get_address_of_s3_2() { return &___s3_2; }
	inline void set_s3_2(String_t* value)
	{
		___s3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s3_2), (void*)value);
	}

	inline static int32_t get_offset_of_s4_3() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___s4_3)); }
	inline String_t* get_s4_3() const { return ___s4_3; }
	inline String_t** get_address_of_s4_3() { return &___s4_3; }
	inline void set_s4_3(String_t* value)
	{
		___s4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s4_3), (void*)value);
	}

	inline static int32_t get_offset_of_delimiter_4() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___delimiter_4)); }
	inline String_t* get_delimiter_4() const { return ___delimiter_4; }
	inline String_t** get_address_of_delimiter_4() { return &___delimiter_4; }
	inline void set_delimiter_4(String_t* value)
	{
		___delimiter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delimiter_4), (void*)value);
	}

	inline static int32_t get_offset_of_strList_5() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___strList_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_strList_5() const { return ___strList_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_strList_5() { return &___strList_5; }
	inline void set_strList_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___strList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strList_5), (void*)value);
	}

	inline static int32_t get_offset_of_idxStr_6() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___idxStr_6)); }
	inline int32_t get_idxStr_6() const { return ___idxStr_6; }
	inline int32_t* get_address_of_idxStr_6() { return &___idxStr_6; }
	inline void set_idxStr_6(int32_t value)
	{
		___idxStr_6 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Xml.Xsl.Runtime.StringConcat
struct StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_pinvoke
{
	char* ___s1_0;
	char* ___s2_1;
	char* ___s3_2;
	char* ___s4_3;
	char* ___delimiter_4;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___strList_5;
	int32_t ___idxStr_6;
};
// Native definition for COM marshalling of System.Xml.Xsl.Runtime.StringConcat
struct StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_com
{
	Il2CppChar* ___s1_0;
	Il2CppChar* ___s2_1;
	Il2CppChar* ___s3_2;
	Il2CppChar* ___s4_3;
	Il2CppChar* ___delimiter_4;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___strList_5;
	int32_t ___idxStr_6;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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


// System.Uri/Flags
struct Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.ConformanceLevel
struct ConformanceLevel_t42F011B2E0FC7FB8324076CCBDEDAD7CC6FFBE1A 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConformanceLevel_t42F011B2E0FC7FB8324076CCBDEDAD7CC6FFBE1A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.DtdProcessing
struct DtdProcessing_tAB3B800A5365ED9C5841D71F40E5A38840D32DB3 
{
public:
	// System.Int32 System.Xml.DtdProcessing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DtdProcessing_tAB3B800A5365ED9C5841D71F40E5A38840D32DB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.ReadContentAsBinaryHelper/State
struct State_t0C92915E8C4E902724D043F981062725DE46FEAA 
{
public:
	// System.Int32 System.Xml.ReadContentAsBinaryHelper/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t0C92915E8C4E902724D043F981062725DE46FEAA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.ReadState
struct ReadState_tAAF15D8DE96B6A22379D2B6FEF22764640D05DD0 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReadState_tAAF15D8DE96B6A22379D2B6FEF22764640D05DD0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.SchemaType
struct SchemaType_t0EE4FECE10D4045A0C84698FEFBA18D9C34992DF 
{
public:
	// System.Int32 System.Xml.Schema.SchemaType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SchemaType_t0EE4FECE10D4045A0C84698FEFBA18D9C34992DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.ValidatorState
struct ValidatorState_tBFB3D6A7BF982DA0A31422C4EAAA1631AF81EE55 
{
public:
	// System.Int32 System.Xml.Schema.ValidatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValidatorState_tBFB3D6A7BF982DA0A31422C4EAAA1631AF81EE55, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaContentProcessing
struct XmlSchemaContentProcessing_tD85295E4C6FA245DAE6F9E4E1C927E76678B197A 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaContentProcessing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaContentProcessing_tD85295E4C6FA245DAE6F9E4E1C927E76678B197A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaContentType
struct XmlSchemaContentType_tAAF4C8374963BFF5F4C3F71FAA1AE9E8944E03E5 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaContentType_tAAF4C8374963BFF5F4C3F71FAA1AE9E8944E03E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaDerivationMethod
struct XmlSchemaDerivationMethod_t9C964CFFC430E62A1FF62E70B9FE2C976A3A5F58 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaDerivationMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaDerivationMethod_t9C964CFFC430E62A1FF62E70B9FE2C976A3A5F58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaForm
struct XmlSchemaForm_t86E3CD541907A35AC5B505EF118C3E20CC760276 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaForm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaForm_t86E3CD541907A35AC5B505EF118C3E20CC760276, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaParticle/Occurs
struct Occurs_t6B3513E522B1DF0DB690037276296BB18F81BCE0 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaParticle/Occurs::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Occurs_t6B3513E522B1DF0DB690037276296BB18F81BCE0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaUse
struct XmlSchemaUse_t69A028A548128D3041B789FCCCD1BEDCE2365BF3 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaUse::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaUse_t69A028A548128D3041B789FCCCD1BEDCE2365BF3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaValidationFlags
struct XmlSchemaValidationFlags_t866C695263C623EE4F1746A541248AE12D311A73 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaValidationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaValidationFlags_t866C695263C623EE4F1746A541248AE12D311A73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaValidity
struct XmlSchemaValidity_tFB9AEE7708C4FF08DC1564482F46991CF8FD0621 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaValidity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaValidity_tFB9AEE7708C4FF08DC1564482F46991CF8FD0621, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.ValidationType
struct ValidationType_tFA1BE5AAA395D6B8033755CD823243B8FAC2673E 
{
public:
	// System.Int32 System.Xml.ValidationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValidationType_tFA1BE5AAA395D6B8033755CD823243B8FAC2673E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlNamespaceScope
struct XmlNamespaceScope_t766C8BAF25857D9C5A3B0AC6235464C60B66D364 
{
public:
	// System.Int32 System.Xml.XmlNamespaceScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNamespaceScope_t766C8BAF25857D9C5A3B0AC6235464C60B66D364, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlNodeType
struct XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlSpace
struct XmlSpace_tC1A644D65B6BE72CF02BA2687B5AE169713271AB 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSpace_tC1A644D65B6BE72CF02BA2687B5AE169713271AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XsdCachingReader/CachingReaderState
struct CachingReaderState_t28388E57781451F791B55B64D533099BA1903229 
{
public:
	// System.Int32 System.Xml.XsdCachingReader/CachingReaderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CachingReaderState_t28388E57781451F791B55B64D533099BA1903229, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XsdValidatingReader/ValidatingReaderState
struct ValidatingReaderState_tC8CD733F0A228AA8345EEB6CC764A4F08AC0D2CE 
{
public:
	// System.Int32 System.Xml.XsdValidatingReader/ValidatingReaderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValidatingReaderState_tC8CD733F0A228AA8345EEB6CC764A4F08AC0D2CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_15)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_18)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.Xml.ReadContentAsBinaryHelper
struct ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797  : public RuntimeObject
{
public:
	// System.Xml.XmlReader System.Xml.ReadContentAsBinaryHelper::reader
	XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader_0;
	// System.Xml.ReadContentAsBinaryHelper/State System.Xml.ReadContentAsBinaryHelper::state
	int32_t ___state_1;
	// System.Int32 System.Xml.ReadContentAsBinaryHelper::valueOffset
	int32_t ___valueOffset_2;
	// System.Boolean System.Xml.ReadContentAsBinaryHelper::isEnd
	bool ___isEnd_3;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797, ___reader_0)); }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * get_reader_0() const { return ___reader_0; }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_valueOffset_2() { return static_cast<int32_t>(offsetof(ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797, ___valueOffset_2)); }
	inline int32_t get_valueOffset_2() const { return ___valueOffset_2; }
	inline int32_t* get_address_of_valueOffset_2() { return &___valueOffset_2; }
	inline void set_valueOffset_2(int32_t value)
	{
		___valueOffset_2 = value;
	}

	inline static int32_t get_offset_of_isEnd_3() { return static_cast<int32_t>(offsetof(ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797, ___isEnd_3)); }
	inline bool get_isEnd_3() const { return ___isEnd_3; }
	inline bool* get_address_of_isEnd_3() { return &___isEnd_3; }
	inline void set_isEnd_3(bool value)
	{
		___isEnd_3 = value;
	}
};


// System.Xml.Schema.Parser
struct Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920  : public RuntimeObject
{
public:
	// System.Xml.Schema.SchemaType System.Xml.Schema.Parser::schemaType
	int32_t ___schemaType_0;
	// System.Xml.XmlNameTable System.Xml.Schema.Parser::nameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable_1;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.Parser::schemaNames
	SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 * ___schemaNames_2;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.Parser::eventHandler
	ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * ___eventHandler_3;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.Parser::namespaceManager
	XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * ___namespaceManager_4;
	// System.Xml.XmlReader System.Xml.Schema.Parser::reader
	XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader_5;
	// System.Xml.PositionInfo System.Xml.Schema.Parser::positionInfo
	PositionInfo_tC35A3FA759E0F23D150BB8B774EC0391EA099684 * ___positionInfo_6;
	// System.Boolean System.Xml.Schema.Parser::isProcessNamespaces
	bool ___isProcessNamespaces_7;
	// System.Int32 System.Xml.Schema.Parser::schemaXmlDepth
	int32_t ___schemaXmlDepth_8;
	// System.Int32 System.Xml.Schema.Parser::markupDepth
	int32_t ___markupDepth_9;
	// System.Xml.Schema.SchemaBuilder System.Xml.Schema.Parser::builder
	SchemaBuilder_t6B2D813207751A3A8F89AB247E37E371F17450B7 * ___builder_10;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.Parser::schema
	XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * ___schema_11;
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.Parser::xdrSchema
	SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * ___xdrSchema_12;
	// System.Xml.XmlResolver System.Xml.Schema.Parser::xmlResolver
	XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___xmlResolver_13;
	// System.Xml.XmlDocument System.Xml.Schema.Parser::dummyDocument
	XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * ___dummyDocument_14;
	// System.Boolean System.Xml.Schema.Parser::processMarkup
	bool ___processMarkup_15;
	// System.Xml.XmlNode System.Xml.Schema.Parser::parentNode
	XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * ___parentNode_16;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.Parser::annotationNSManager
	XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * ___annotationNSManager_17;
	// System.String System.Xml.Schema.Parser::xmlns
	String_t* ___xmlns_18;
	// System.Xml.XmlCharType System.Xml.Schema.Parser::xmlCharType
	XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  ___xmlCharType_19;

public:
	inline static int32_t get_offset_of_schemaType_0() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___schemaType_0)); }
	inline int32_t get_schemaType_0() const { return ___schemaType_0; }
	inline int32_t* get_address_of_schemaType_0() { return &___schemaType_0; }
	inline void set_schemaType_0(int32_t value)
	{
		___schemaType_0 = value;
	}

	inline static int32_t get_offset_of_nameTable_1() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___nameTable_1)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_nameTable_1() const { return ___nameTable_1; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_nameTable_1() { return &___nameTable_1; }
	inline void set_nameTable_1(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___nameTable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_1), (void*)value);
	}

	inline static int32_t get_offset_of_schemaNames_2() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___schemaNames_2)); }
	inline SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 * get_schemaNames_2() const { return ___schemaNames_2; }
	inline SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 ** get_address_of_schemaNames_2() { return &___schemaNames_2; }
	inline void set_schemaNames_2(SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 * value)
	{
		___schemaNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_eventHandler_3() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___eventHandler_3)); }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * get_eventHandler_3() const { return ___eventHandler_3; }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF ** get_address_of_eventHandler_3() { return &___eventHandler_3; }
	inline void set_eventHandler_3(ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * value)
	{
		___eventHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceManager_4() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___namespaceManager_4)); }
	inline XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * get_namespaceManager_4() const { return ___namespaceManager_4; }
	inline XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F ** get_address_of_namespaceManager_4() { return &___namespaceManager_4; }
	inline void set_namespaceManager_4(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * value)
	{
		___namespaceManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_reader_5() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___reader_5)); }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * get_reader_5() const { return ___reader_5; }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB ** get_address_of_reader_5() { return &___reader_5; }
	inline void set_reader_5(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * value)
	{
		___reader_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_5), (void*)value);
	}

	inline static int32_t get_offset_of_positionInfo_6() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___positionInfo_6)); }
	inline PositionInfo_tC35A3FA759E0F23D150BB8B774EC0391EA099684 * get_positionInfo_6() const { return ___positionInfo_6; }
	inline PositionInfo_tC35A3FA759E0F23D150BB8B774EC0391EA099684 ** get_address_of_positionInfo_6() { return &___positionInfo_6; }
	inline void set_positionInfo_6(PositionInfo_tC35A3FA759E0F23D150BB8B774EC0391EA099684 * value)
	{
		___positionInfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionInfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_isProcessNamespaces_7() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___isProcessNamespaces_7)); }
	inline bool get_isProcessNamespaces_7() const { return ___isProcessNamespaces_7; }
	inline bool* get_address_of_isProcessNamespaces_7() { return &___isProcessNamespaces_7; }
	inline void set_isProcessNamespaces_7(bool value)
	{
		___isProcessNamespaces_7 = value;
	}

	inline static int32_t get_offset_of_schemaXmlDepth_8() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___schemaXmlDepth_8)); }
	inline int32_t get_schemaXmlDepth_8() const { return ___schemaXmlDepth_8; }
	inline int32_t* get_address_of_schemaXmlDepth_8() { return &___schemaXmlDepth_8; }
	inline void set_schemaXmlDepth_8(int32_t value)
	{
		___schemaXmlDepth_8 = value;
	}

	inline static int32_t get_offset_of_markupDepth_9() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___markupDepth_9)); }
	inline int32_t get_markupDepth_9() const { return ___markupDepth_9; }
	inline int32_t* get_address_of_markupDepth_9() { return &___markupDepth_9; }
	inline void set_markupDepth_9(int32_t value)
	{
		___markupDepth_9 = value;
	}

	inline static int32_t get_offset_of_builder_10() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___builder_10)); }
	inline SchemaBuilder_t6B2D813207751A3A8F89AB247E37E371F17450B7 * get_builder_10() const { return ___builder_10; }
	inline SchemaBuilder_t6B2D813207751A3A8F89AB247E37E371F17450B7 ** get_address_of_builder_10() { return &___builder_10; }
	inline void set_builder_10(SchemaBuilder_t6B2D813207751A3A8F89AB247E37E371F17450B7 * value)
	{
		___builder_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_10), (void*)value);
	}

	inline static int32_t get_offset_of_schema_11() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___schema_11)); }
	inline XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * get_schema_11() const { return ___schema_11; }
	inline XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F ** get_address_of_schema_11() { return &___schema_11; }
	inline void set_schema_11(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * value)
	{
		___schema_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schema_11), (void*)value);
	}

	inline static int32_t get_offset_of_xdrSchema_12() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___xdrSchema_12)); }
	inline SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * get_xdrSchema_12() const { return ___xdrSchema_12; }
	inline SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 ** get_address_of_xdrSchema_12() { return &___xdrSchema_12; }
	inline void set_xdrSchema_12(SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * value)
	{
		___xdrSchema_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xdrSchema_12), (void*)value);
	}

	inline static int32_t get_offset_of_xmlResolver_13() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___xmlResolver_13)); }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * get_xmlResolver_13() const { return ___xmlResolver_13; }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 ** get_address_of_xmlResolver_13() { return &___xmlResolver_13; }
	inline void set_xmlResolver_13(XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * value)
	{
		___xmlResolver_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlResolver_13), (void*)value);
	}

	inline static int32_t get_offset_of_dummyDocument_14() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___dummyDocument_14)); }
	inline XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * get_dummyDocument_14() const { return ___dummyDocument_14; }
	inline XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 ** get_address_of_dummyDocument_14() { return &___dummyDocument_14; }
	inline void set_dummyDocument_14(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * value)
	{
		___dummyDocument_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dummyDocument_14), (void*)value);
	}

	inline static int32_t get_offset_of_processMarkup_15() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___processMarkup_15)); }
	inline bool get_processMarkup_15() const { return ___processMarkup_15; }
	inline bool* get_address_of_processMarkup_15() { return &___processMarkup_15; }
	inline void set_processMarkup_15(bool value)
	{
		___processMarkup_15 = value;
	}

	inline static int32_t get_offset_of_parentNode_16() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___parentNode_16)); }
	inline XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * get_parentNode_16() const { return ___parentNode_16; }
	inline XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB ** get_address_of_parentNode_16() { return &___parentNode_16; }
	inline void set_parentNode_16(XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * value)
	{
		___parentNode_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_16), (void*)value);
	}

	inline static int32_t get_offset_of_annotationNSManager_17() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___annotationNSManager_17)); }
	inline XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * get_annotationNSManager_17() const { return ___annotationNSManager_17; }
	inline XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F ** get_address_of_annotationNSManager_17() { return &___annotationNSManager_17; }
	inline void set_annotationNSManager_17(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * value)
	{
		___annotationNSManager_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___annotationNSManager_17), (void*)value);
	}

	inline static int32_t get_offset_of_xmlns_18() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___xmlns_18)); }
	inline String_t* get_xmlns_18() const { return ___xmlns_18; }
	inline String_t** get_address_of_xmlns_18() { return &___xmlns_18; }
	inline void set_xmlns_18(String_t* value)
	{
		___xmlns_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlns_18), (void*)value);
	}

	inline static int32_t get_offset_of_xmlCharType_19() { return static_cast<int32_t>(offsetof(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920, ___xmlCharType_19)); }
	inline XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  get_xmlCharType_19() const { return ___xmlCharType_19; }
	inline XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9 * get_address_of_xmlCharType_19() { return &___xmlCharType_19; }
	inline void set_xmlCharType_19(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  value)
	{
		___xmlCharType_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___xmlCharType_19))->___charProperties_2), (void*)NULL);
	}
};


// System.Xml.Schema.XmlSchema
struct XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F  : public XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B
{
public:
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::attributeFormDefault
	int32_t ___attributeFormDefault_6;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::elementFormDefault
	int32_t ___elementFormDefault_7;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::blockDefault
	int32_t ___blockDefault_8;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::finalDefault
	int32_t ___finalDefault_9;
	// System.String System.Xml.Schema.XmlSchema::targetNs
	String_t* ___targetNs_10;
	// System.String System.Xml.Schema.XmlSchema::version
	String_t* ___version_11;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::includes
	XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 * ___includes_12;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::items
	XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 * ___items_13;
	// System.String System.Xml.Schema.XmlSchema::id
	String_t* ___id_14;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchema::moreAttributes
	XmlAttributeU5BU5D_t02E3E190564D2A07467AFE803FAB6C1CE82F7908* ___moreAttributes_15;
	// System.Boolean System.Xml.Schema.XmlSchema::isCompiled
	bool ___isCompiled_16;
	// System.Boolean System.Xml.Schema.XmlSchema::isCompiledBySet
	bool ___isCompiledBySet_17;
	// System.Boolean System.Xml.Schema.XmlSchema::isPreprocessed
	bool ___isPreprocessed_18;
	// System.Boolean System.Xml.Schema.XmlSchema::isRedefined
	bool ___isRedefined_19;
	// System.Int32 System.Xml.Schema.XmlSchema::errorCount
	int32_t ___errorCount_20;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributes
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___attributes_21;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributeGroups
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___attributeGroups_22;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::elements
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___elements_23;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::types
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___types_24;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::groups
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___groups_25;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::notations
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___notations_26;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::identityConstraints
	XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * ___identityConstraints_27;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchema::importedSchemas
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___importedSchemas_29;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchema::importedNamespaces
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___importedNamespaces_30;
	// System.Int32 System.Xml.Schema.XmlSchema::schemaId
	int32_t ___schemaId_31;
	// System.Uri System.Xml.Schema.XmlSchema::baseUri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___baseUri_32;
	// System.Boolean System.Xml.Schema.XmlSchema::isChameleon
	bool ___isChameleon_33;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchema::ids
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___ids_34;
	// System.Xml.XmlDocument System.Xml.Schema.XmlSchema::document
	XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * ___document_35;

public:
	inline static int32_t get_offset_of_attributeFormDefault_6() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___attributeFormDefault_6)); }
	inline int32_t get_attributeFormDefault_6() const { return ___attributeFormDefault_6; }
	inline int32_t* get_address_of_attributeFormDefault_6() { return &___attributeFormDefault_6; }
	inline void set_attributeFormDefault_6(int32_t value)
	{
		___attributeFormDefault_6 = value;
	}

	inline static int32_t get_offset_of_elementFormDefault_7() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___elementFormDefault_7)); }
	inline int32_t get_elementFormDefault_7() const { return ___elementFormDefault_7; }
	inline int32_t* get_address_of_elementFormDefault_7() { return &___elementFormDefault_7; }
	inline void set_elementFormDefault_7(int32_t value)
	{
		___elementFormDefault_7 = value;
	}

	inline static int32_t get_offset_of_blockDefault_8() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___blockDefault_8)); }
	inline int32_t get_blockDefault_8() const { return ___blockDefault_8; }
	inline int32_t* get_address_of_blockDefault_8() { return &___blockDefault_8; }
	inline void set_blockDefault_8(int32_t value)
	{
		___blockDefault_8 = value;
	}

	inline static int32_t get_offset_of_finalDefault_9() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___finalDefault_9)); }
	inline int32_t get_finalDefault_9() const { return ___finalDefault_9; }
	inline int32_t* get_address_of_finalDefault_9() { return &___finalDefault_9; }
	inline void set_finalDefault_9(int32_t value)
	{
		___finalDefault_9 = value;
	}

	inline static int32_t get_offset_of_targetNs_10() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___targetNs_10)); }
	inline String_t* get_targetNs_10() const { return ___targetNs_10; }
	inline String_t** get_address_of_targetNs_10() { return &___targetNs_10; }
	inline void set_targetNs_10(String_t* value)
	{
		___targetNs_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetNs_10), (void*)value);
	}

	inline static int32_t get_offset_of_version_11() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___version_11)); }
	inline String_t* get_version_11() const { return ___version_11; }
	inline String_t** get_address_of_version_11() { return &___version_11; }
	inline void set_version_11(String_t* value)
	{
		___version_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_11), (void*)value);
	}

	inline static int32_t get_offset_of_includes_12() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___includes_12)); }
	inline XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 * get_includes_12() const { return ___includes_12; }
	inline XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 ** get_address_of_includes_12() { return &___includes_12; }
	inline void set_includes_12(XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 * value)
	{
		___includes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___includes_12), (void*)value);
	}

	inline static int32_t get_offset_of_items_13() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___items_13)); }
	inline XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 * get_items_13() const { return ___items_13; }
	inline XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 ** get_address_of_items_13() { return &___items_13; }
	inline void set_items_13(XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 * value)
	{
		___items_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_13), (void*)value);
	}

	inline static int32_t get_offset_of_id_14() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___id_14)); }
	inline String_t* get_id_14() const { return ___id_14; }
	inline String_t** get_address_of_id_14() { return &___id_14; }
	inline void set_id_14(String_t* value)
	{
		___id_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_14), (void*)value);
	}

	inline static int32_t get_offset_of_moreAttributes_15() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___moreAttributes_15)); }
	inline XmlAttributeU5BU5D_t02E3E190564D2A07467AFE803FAB6C1CE82F7908* get_moreAttributes_15() const { return ___moreAttributes_15; }
	inline XmlAttributeU5BU5D_t02E3E190564D2A07467AFE803FAB6C1CE82F7908** get_address_of_moreAttributes_15() { return &___moreAttributes_15; }
	inline void set_moreAttributes_15(XmlAttributeU5BU5D_t02E3E190564D2A07467AFE803FAB6C1CE82F7908* value)
	{
		___moreAttributes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moreAttributes_15), (void*)value);
	}

	inline static int32_t get_offset_of_isCompiled_16() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___isCompiled_16)); }
	inline bool get_isCompiled_16() const { return ___isCompiled_16; }
	inline bool* get_address_of_isCompiled_16() { return &___isCompiled_16; }
	inline void set_isCompiled_16(bool value)
	{
		___isCompiled_16 = value;
	}

	inline static int32_t get_offset_of_isCompiledBySet_17() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___isCompiledBySet_17)); }
	inline bool get_isCompiledBySet_17() const { return ___isCompiledBySet_17; }
	inline bool* get_address_of_isCompiledBySet_17() { return &___isCompiledBySet_17; }
	inline void set_isCompiledBySet_17(bool value)
	{
		___isCompiledBySet_17 = value;
	}

	inline static int32_t get_offset_of_isPreprocessed_18() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___isPreprocessed_18)); }
	inline bool get_isPreprocessed_18() const { return ___isPreprocessed_18; }
	inline bool* get_address_of_isPreprocessed_18() { return &___isPreprocessed_18; }
	inline void set_isPreprocessed_18(bool value)
	{
		___isPreprocessed_18 = value;
	}

	inline static int32_t get_offset_of_isRedefined_19() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___isRedefined_19)); }
	inline bool get_isRedefined_19() const { return ___isRedefined_19; }
	inline bool* get_address_of_isRedefined_19() { return &___isRedefined_19; }
	inline void set_isRedefined_19(bool value)
	{
		___isRedefined_19 = value;
	}

	inline static int32_t get_offset_of_errorCount_20() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___errorCount_20)); }
	inline int32_t get_errorCount_20() const { return ___errorCount_20; }
	inline int32_t* get_address_of_errorCount_20() { return &___errorCount_20; }
	inline void set_errorCount_20(int32_t value)
	{
		___errorCount_20 = value;
	}

	inline static int32_t get_offset_of_attributes_21() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___attributes_21)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_attributes_21() const { return ___attributes_21; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_attributes_21() { return &___attributes_21; }
	inline void set_attributes_21(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___attributes_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_21), (void*)value);
	}

	inline static int32_t get_offset_of_attributeGroups_22() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___attributeGroups_22)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_attributeGroups_22() const { return ___attributeGroups_22; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_attributeGroups_22() { return &___attributeGroups_22; }
	inline void set_attributeGroups_22(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___attributeGroups_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeGroups_22), (void*)value);
	}

	inline static int32_t get_offset_of_elements_23() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___elements_23)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_elements_23() const { return ___elements_23; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_elements_23() { return &___elements_23; }
	inline void set_elements_23(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___elements_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elements_23), (void*)value);
	}

	inline static int32_t get_offset_of_types_24() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___types_24)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_types_24() const { return ___types_24; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_types_24() { return &___types_24; }
	inline void set_types_24(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___types_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_24), (void*)value);
	}

	inline static int32_t get_offset_of_groups_25() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___groups_25)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_groups_25() const { return ___groups_25; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_groups_25() { return &___groups_25; }
	inline void set_groups_25(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___groups_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groups_25), (void*)value);
	}

	inline static int32_t get_offset_of_notations_26() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___notations_26)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_notations_26() const { return ___notations_26; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_notations_26() { return &___notations_26; }
	inline void set_notations_26(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___notations_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notations_26), (void*)value);
	}

	inline static int32_t get_offset_of_identityConstraints_27() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___identityConstraints_27)); }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * get_identityConstraints_27() const { return ___identityConstraints_27; }
	inline XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 ** get_address_of_identityConstraints_27() { return &___identityConstraints_27; }
	inline void set_identityConstraints_27(XmlSchemaObjectTable_t8052FBDE5AB8FDD05FA48092BB0D511C496D3833 * value)
	{
		___identityConstraints_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identityConstraints_27), (void*)value);
	}

	inline static int32_t get_offset_of_importedSchemas_29() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___importedSchemas_29)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_importedSchemas_29() const { return ___importedSchemas_29; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_importedSchemas_29() { return &___importedSchemas_29; }
	inline void set_importedSchemas_29(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___importedSchemas_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___importedSchemas_29), (void*)value);
	}

	inline static int32_t get_offset_of_importedNamespaces_30() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___importedNamespaces_30)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_importedNamespaces_30() const { return ___importedNamespaces_30; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_importedNamespaces_30() { return &___importedNamespaces_30; }
	inline void set_importedNamespaces_30(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___importedNamespaces_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___importedNamespaces_30), (void*)value);
	}

	inline static int32_t get_offset_of_schemaId_31() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___schemaId_31)); }
	inline int32_t get_schemaId_31() const { return ___schemaId_31; }
	inline int32_t* get_address_of_schemaId_31() { return &___schemaId_31; }
	inline void set_schemaId_31(int32_t value)
	{
		___schemaId_31 = value;
	}

	inline static int32_t get_offset_of_baseUri_32() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___baseUri_32)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_baseUri_32() const { return ___baseUri_32; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_baseUri_32() { return &___baseUri_32; }
	inline void set_baseUri_32(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___baseUri_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseUri_32), (void*)value);
	}

	inline static int32_t get_offset_of_isChameleon_33() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___isChameleon_33)); }
	inline bool get_isChameleon_33() const { return ___isChameleon_33; }
	inline bool* get_address_of_isChameleon_33() { return &___isChameleon_33; }
	inline void set_isChameleon_33(bool value)
	{
		___isChameleon_33 = value;
	}

	inline static int32_t get_offset_of_ids_34() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___ids_34)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_ids_34() const { return ___ids_34; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_ids_34() { return &___ids_34; }
	inline void set_ids_34(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___ids_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ids_34), (void*)value);
	}

	inline static int32_t get_offset_of_document_35() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F, ___document_35)); }
	inline XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * get_document_35() const { return ___document_35; }
	inline XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 ** get_address_of_document_35() { return &___document_35; }
	inline void set_document_35(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * value)
	{
		___document_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___document_35), (void*)value);
	}
};

struct XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F_StaticFields
{
public:
	// System.Int32 System.Xml.Schema.XmlSchema::globalIdCounter
	int32_t ___globalIdCounter_28;

public:
	inline static int32_t get_offset_of_globalIdCounter_28() { return static_cast<int32_t>(offsetof(XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F_StaticFields, ___globalIdCounter_28)); }
	inline int32_t get_globalIdCounter_28() const { return ___globalIdCounter_28; }
	inline int32_t* get_address_of_globalIdCounter_28() { return &___globalIdCounter_28; }
	inline void set_globalIdCounter_28(int32_t value)
	{
		___globalIdCounter_28 = value;
	}
};


// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B  : public XmlSchemaAnnotated_t94F7899A20B495CD62FA0976A4F23FD4A0847B7B
{
public:
	// System.String System.Xml.Schema.XmlSchemaAttribute::defaultValue
	String_t* ___defaultValue_9;
	// System.String System.Xml.Schema.XmlSchemaAttribute::fixedValue
	String_t* ___fixedValue_10;
	// System.String System.Xml.Schema.XmlSchemaAttribute::name
	String_t* ___name_11;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaAttribute::form
	int32_t ___form_12;
	// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::use
	int32_t ___use_13;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::refName
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___refName_14;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::typeName
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___typeName_15;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::qualifiedName
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___qualifiedName_16;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::type
	XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * ___type_17;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::attributeType
	XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * ___attributeType_18;
	// System.Xml.Schema.SchemaAttDef System.Xml.Schema.XmlSchemaAttribute::attDef
	SchemaAttDef_t6701AAE5762853EDC86D272CC2A79EABB36924A4 * ___attDef_19;

public:
	inline static int32_t get_offset_of_defaultValue_9() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___defaultValue_9)); }
	inline String_t* get_defaultValue_9() const { return ___defaultValue_9; }
	inline String_t** get_address_of_defaultValue_9() { return &___defaultValue_9; }
	inline void set_defaultValue_9(String_t* value)
	{
		___defaultValue_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_9), (void*)value);
	}

	inline static int32_t get_offset_of_fixedValue_10() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___fixedValue_10)); }
	inline String_t* get_fixedValue_10() const { return ___fixedValue_10; }
	inline String_t** get_address_of_fixedValue_10() { return &___fixedValue_10; }
	inline void set_fixedValue_10(String_t* value)
	{
		___fixedValue_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixedValue_10), (void*)value);
	}

	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___name_11)); }
	inline String_t* get_name_11() const { return ___name_11; }
	inline String_t** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(String_t* value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_11), (void*)value);
	}

	inline static int32_t get_offset_of_form_12() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___form_12)); }
	inline int32_t get_form_12() const { return ___form_12; }
	inline int32_t* get_address_of_form_12() { return &___form_12; }
	inline void set_form_12(int32_t value)
	{
		___form_12 = value;
	}

	inline static int32_t get_offset_of_use_13() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___use_13)); }
	inline int32_t get_use_13() const { return ___use_13; }
	inline int32_t* get_address_of_use_13() { return &___use_13; }
	inline void set_use_13(int32_t value)
	{
		___use_13 = value;
	}

	inline static int32_t get_offset_of_refName_14() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___refName_14)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_refName_14() const { return ___refName_14; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_refName_14() { return &___refName_14; }
	inline void set_refName_14(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___refName_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refName_14), (void*)value);
	}

	inline static int32_t get_offset_of_typeName_15() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___typeName_15)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_typeName_15() const { return ___typeName_15; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_typeName_15() { return &___typeName_15; }
	inline void set_typeName_15(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___typeName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_15), (void*)value);
	}

	inline static int32_t get_offset_of_qualifiedName_16() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___qualifiedName_16)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_qualifiedName_16() const { return ___qualifiedName_16; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_qualifiedName_16() { return &___qualifiedName_16; }
	inline void set_qualifiedName_16(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___qualifiedName_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qualifiedName_16), (void*)value);
	}

	inline static int32_t get_offset_of_type_17() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___type_17)); }
	inline XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * get_type_17() const { return ___type_17; }
	inline XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A ** get_address_of_type_17() { return &___type_17; }
	inline void set_type_17(XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * value)
	{
		___type_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_17), (void*)value);
	}

	inline static int32_t get_offset_of_attributeType_18() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___attributeType_18)); }
	inline XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * get_attributeType_18() const { return ___attributeType_18; }
	inline XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A ** get_address_of_attributeType_18() { return &___attributeType_18; }
	inline void set_attributeType_18(XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * value)
	{
		___attributeType_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeType_18), (void*)value);
	}

	inline static int32_t get_offset_of_attDef_19() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B, ___attDef_19)); }
	inline SchemaAttDef_t6701AAE5762853EDC86D272CC2A79EABB36924A4 * get_attDef_19() const { return ___attDef_19; }
	inline SchemaAttDef_t6701AAE5762853EDC86D272CC2A79EABB36924A4 ** get_address_of_attDef_19() { return &___attDef_19; }
	inline void set_attDef_19(SchemaAttDef_t6701AAE5762853EDC86D272CC2A79EABB36924A4 * value)
	{
		___attDef_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attDef_19), (void*)value);
	}
};


// System.Xml.Schema.XmlSchemaInfo
struct XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaInfo::isDefault
	bool ___isDefault_0;
	// System.Boolean System.Xml.Schema.XmlSchemaInfo::isNil
	bool ___isNil_1;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaInfo::schemaElement
	XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * ___schemaElement_2;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaInfo::schemaAttribute
	XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B * ___schemaAttribute_3;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaInfo::schemaType
	XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * ___schemaType_4;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaInfo::memberType
	XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * ___memberType_5;
	// System.Xml.Schema.XmlSchemaValidity System.Xml.Schema.XmlSchemaInfo::validity
	int32_t ___validity_6;
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaInfo::contentType
	int32_t ___contentType_7;

public:
	inline static int32_t get_offset_of_isDefault_0() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035, ___isDefault_0)); }
	inline bool get_isDefault_0() const { return ___isDefault_0; }
	inline bool* get_address_of_isDefault_0() { return &___isDefault_0; }
	inline void set_isDefault_0(bool value)
	{
		___isDefault_0 = value;
	}

	inline static int32_t get_offset_of_isNil_1() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035, ___isNil_1)); }
	inline bool get_isNil_1() const { return ___isNil_1; }
	inline bool* get_address_of_isNil_1() { return &___isNil_1; }
	inline void set_isNil_1(bool value)
	{
		___isNil_1 = value;
	}

	inline static int32_t get_offset_of_schemaElement_2() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035, ___schemaElement_2)); }
	inline XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * get_schemaElement_2() const { return ___schemaElement_2; }
	inline XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D ** get_address_of_schemaElement_2() { return &___schemaElement_2; }
	inline void set_schemaElement_2(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * value)
	{
		___schemaElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_schemaAttribute_3() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035, ___schemaAttribute_3)); }
	inline XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B * get_schemaAttribute_3() const { return ___schemaAttribute_3; }
	inline XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B ** get_address_of_schemaAttribute_3() { return &___schemaAttribute_3; }
	inline void set_schemaAttribute_3(XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B * value)
	{
		___schemaAttribute_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaAttribute_3), (void*)value);
	}

	inline static int32_t get_offset_of_schemaType_4() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035, ___schemaType_4)); }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * get_schemaType_4() const { return ___schemaType_4; }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 ** get_address_of_schemaType_4() { return &___schemaType_4; }
	inline void set_schemaType_4(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * value)
	{
		___schemaType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaType_4), (void*)value);
	}

	inline static int32_t get_offset_of_memberType_5() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035, ___memberType_5)); }
	inline XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * get_memberType_5() const { return ___memberType_5; }
	inline XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A ** get_address_of_memberType_5() { return &___memberType_5; }
	inline void set_memberType_5(XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * value)
	{
		___memberType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberType_5), (void*)value);
	}

	inline static int32_t get_offset_of_validity_6() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035, ___validity_6)); }
	inline int32_t get_validity_6() const { return ___validity_6; }
	inline int32_t* get_address_of_validity_6() { return &___validity_6; }
	inline void set_validity_6(int32_t value)
	{
		___validity_6 = value;
	}

	inline static int32_t get_offset_of_contentType_7() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035, ___contentType_7)); }
	inline int32_t get_contentType_7() const { return ___contentType_7; }
	inline int32_t* get_address_of_contentType_7() { return &___contentType_7; }
	inline void set_contentType_7(int32_t value)
	{
		___contentType_7 = value;
	}
};


// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671  : public XmlSchemaAnnotated_t94F7899A20B495CD62FA0976A4F23FD4A0847B7B
{
public:
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::minOccurs
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___minOccurs_9;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::maxOccurs
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___maxOccurs_10;
	// System.Xml.Schema.XmlSchemaParticle/Occurs System.Xml.Schema.XmlSchemaParticle::flags
	int32_t ___flags_11;

public:
	inline static int32_t get_offset_of_minOccurs_9() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671, ___minOccurs_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_minOccurs_9() const { return ___minOccurs_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_minOccurs_9() { return &___minOccurs_9; }
	inline void set_minOccurs_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___minOccurs_9 = value;
	}

	inline static int32_t get_offset_of_maxOccurs_10() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671, ___maxOccurs_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_maxOccurs_10() const { return ___maxOccurs_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_maxOccurs_10() { return &___maxOccurs_10; }
	inline void set_maxOccurs_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___maxOccurs_10 = value;
	}

	inline static int32_t get_offset_of_flags_11() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671, ___flags_11)); }
	inline int32_t get_flags_11() const { return ___flags_11; }
	inline int32_t* get_address_of_flags_11() { return &___flags_11; }
	inline void set_flags_11(int32_t value)
	{
		___flags_11 = value;
	}
};

struct XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::Empty
	XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671 * ___Empty_12;

public:
	inline static int32_t get_offset_of_Empty_12() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671_StaticFields, ___Empty_12)); }
	inline XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671 * get_Empty_12() const { return ___Empty_12; }
	inline XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671 ** get_address_of_Empty_12() { return &___Empty_12; }
	inline void set_Empty_12(XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671 * value)
	{
		___Empty_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_12), (void*)value);
	}
};


// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9  : public XmlSchemaAnnotated_t94F7899A20B495CD62FA0976A4F23FD4A0847B7B
{
public:
	// System.String System.Xml.Schema.XmlSchemaType::name
	String_t* ___name_9;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::final
	int32_t ___final_10;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::derivedBy
	int32_t ___derivedBy_11;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::baseSchemaType
	XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * ___baseSchemaType_12;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::datatype
	XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * ___datatype_13;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::finalResolved
	int32_t ___finalResolved_14;
	// System.Xml.Schema.SchemaElementDecl modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.XmlSchemaType::elementDecl
	SchemaElementDecl_t1D19D717C111EFE96DCB86F7A029BE5E2616C466 * ___elementDecl_15;
	// System.Xml.XmlQualifiedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.XmlSchemaType::qname
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___qname_16;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::redefined
	XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * ___redefined_17;
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaType::contentType
	int32_t ___contentType_18;

public:
	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_final_10() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___final_10)); }
	inline int32_t get_final_10() const { return ___final_10; }
	inline int32_t* get_address_of_final_10() { return &___final_10; }
	inline void set_final_10(int32_t value)
	{
		___final_10 = value;
	}

	inline static int32_t get_offset_of_derivedBy_11() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___derivedBy_11)); }
	inline int32_t get_derivedBy_11() const { return ___derivedBy_11; }
	inline int32_t* get_address_of_derivedBy_11() { return &___derivedBy_11; }
	inline void set_derivedBy_11(int32_t value)
	{
		___derivedBy_11 = value;
	}

	inline static int32_t get_offset_of_baseSchemaType_12() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___baseSchemaType_12)); }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * get_baseSchemaType_12() const { return ___baseSchemaType_12; }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 ** get_address_of_baseSchemaType_12() { return &___baseSchemaType_12; }
	inline void set_baseSchemaType_12(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * value)
	{
		___baseSchemaType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseSchemaType_12), (void*)value);
	}

	inline static int32_t get_offset_of_datatype_13() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___datatype_13)); }
	inline XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * get_datatype_13() const { return ___datatype_13; }
	inline XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 ** get_address_of_datatype_13() { return &___datatype_13; }
	inline void set_datatype_13(XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * value)
	{
		___datatype_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datatype_13), (void*)value);
	}

	inline static int32_t get_offset_of_finalResolved_14() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___finalResolved_14)); }
	inline int32_t get_finalResolved_14() const { return ___finalResolved_14; }
	inline int32_t* get_address_of_finalResolved_14() { return &___finalResolved_14; }
	inline void set_finalResolved_14(int32_t value)
	{
		___finalResolved_14 = value;
	}

	inline static int32_t get_offset_of_elementDecl_15() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___elementDecl_15)); }
	inline SchemaElementDecl_t1D19D717C111EFE96DCB86F7A029BE5E2616C466 * get_elementDecl_15() const { return ___elementDecl_15; }
	inline SchemaElementDecl_t1D19D717C111EFE96DCB86F7A029BE5E2616C466 ** get_address_of_elementDecl_15() { return &___elementDecl_15; }
	inline void set_elementDecl_15(SchemaElementDecl_t1D19D717C111EFE96DCB86F7A029BE5E2616C466 * value)
	{
		___elementDecl_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementDecl_15), (void*)value);
	}

	inline static int32_t get_offset_of_qname_16() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___qname_16)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_qname_16() const { return ___qname_16; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_qname_16() { return &___qname_16; }
	inline void set_qname_16(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___qname_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qname_16), (void*)value);
	}

	inline static int32_t get_offset_of_redefined_17() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___redefined_17)); }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * get_redefined_17() const { return ___redefined_17; }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 ** get_address_of_redefined_17() { return &___redefined_17; }
	inline void set_redefined_17(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * value)
	{
		___redefined_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___redefined_17), (void*)value);
	}

	inline static int32_t get_offset_of_contentType_18() { return static_cast<int32_t>(offsetof(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9, ___contentType_18)); }
	inline int32_t get_contentType_18() const { return ___contentType_18; }
	inline int32_t* get_address_of_contentType_18() { return &___contentType_18; }
	inline void set_contentType_18(int32_t value)
	{
		___contentType_18 = value;
	}
};


// System.Xml.Schema.XmlSchemaValidator
struct XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C  : public RuntimeObject
{
public:
	// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaValidator::schemaSet
	XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * ___schemaSet_0;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.Schema.XmlSchemaValidator::validationFlags
	int32_t ___validationFlags_1;
	// System.Int32 System.Xml.Schema.XmlSchemaValidator::startIDConstraint
	int32_t ___startIDConstraint_2;
	// System.Boolean System.Xml.Schema.XmlSchemaValidator::isRoot
	bool ___isRoot_3;
	// System.Boolean System.Xml.Schema.XmlSchemaValidator::rootHasSchema
	bool ___rootHasSchema_4;
	// System.Boolean System.Xml.Schema.XmlSchemaValidator::attrValid
	bool ___attrValid_5;
	// System.Boolean System.Xml.Schema.XmlSchemaValidator::checkEntity
	bool ___checkEntity_6;
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.XmlSchemaValidator::compiledSchemaInfo
	SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * ___compiledSchemaInfo_7;
	// System.Xml.IDtdInfo System.Xml.Schema.XmlSchemaValidator::dtdSchemaInfo
	RuntimeObject* ___dtdSchemaInfo_8;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaValidator::validatedNamespaces
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___validatedNamespaces_9;
	// System.Xml.HWStack System.Xml.Schema.XmlSchemaValidator::validationStack
	HWStack_t2ECA5857AF5B3AF7C1BD51CEA64D131A6342BCDE * ___validationStack_10;
	// System.Xml.Schema.ValidationState System.Xml.Schema.XmlSchemaValidator::context
	ValidationState_t87AD0243195FC5C4B8643516747B92387F06A38B * ___context_11;
	// System.Xml.Schema.ValidatorState System.Xml.Schema.XmlSchemaValidator::currentState
	int32_t ___currentState_12;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaValidator::attPresence
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___attPresence_13;
	// System.Xml.Schema.SchemaAttDef System.Xml.Schema.XmlSchemaValidator::wildID
	SchemaAttDef_t6701AAE5762853EDC86D272CC2A79EABB36924A4 * ___wildID_14;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaValidator::IDs
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___IDs_15;
	// System.Xml.Schema.IdRefNode System.Xml.Schema.XmlSchemaValidator::idRefListHead
	IdRefNode_t8E92E33D4D596CFC17454D41C07CD7627A8825E2 * ___idRefListHead_16;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaValidator::contextQName
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___contextQName_17;
	// System.String System.Xml.Schema.XmlSchemaValidator::NsXs
	String_t* ___NsXs_18;
	// System.String System.Xml.Schema.XmlSchemaValidator::NsXsi
	String_t* ___NsXsi_19;
	// System.String System.Xml.Schema.XmlSchemaValidator::NsXmlNs
	String_t* ___NsXmlNs_20;
	// System.String System.Xml.Schema.XmlSchemaValidator::NsXml
	String_t* ___NsXml_21;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaValidator::partialValidationType
	XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * ___partialValidationType_22;
	// System.Text.StringBuilder System.Xml.Schema.XmlSchemaValidator::textValue
	StringBuilder_t * ___textValue_23;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaValidator::eventHandler
	ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * ___eventHandler_24;
	// System.Object System.Xml.Schema.XmlSchemaValidator::validationEventSender
	RuntimeObject * ___validationEventSender_25;
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaValidator::nameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable_26;
	// System.Xml.IXmlLineInfo System.Xml.Schema.XmlSchemaValidator::positionInfo
	RuntimeObject* ___positionInfo_27;
	// System.Xml.IXmlLineInfo System.Xml.Schema.XmlSchemaValidator::dummyPositionInfo
	RuntimeObject* ___dummyPositionInfo_28;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaValidator::xmlResolver
	XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___xmlResolver_29;
	// System.Uri System.Xml.Schema.XmlSchemaValidator::sourceUri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___sourceUri_30;
	// System.String System.Xml.Schema.XmlSchemaValidator::sourceUriString
	String_t* ___sourceUriString_31;
	// System.Xml.IXmlNamespaceResolver System.Xml.Schema.XmlSchemaValidator::nsResolver
	RuntimeObject* ___nsResolver_32;
	// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaValidator::processContents
	int32_t ___processContents_33;
	// System.String System.Xml.Schema.XmlSchemaValidator::xsiTypeString
	String_t* ___xsiTypeString_34;
	// System.String System.Xml.Schema.XmlSchemaValidator::xsiNilString
	String_t* ___xsiNilString_35;
	// System.String System.Xml.Schema.XmlSchemaValidator::xsiSchemaLocationString
	String_t* ___xsiSchemaLocationString_36;
	// System.String System.Xml.Schema.XmlSchemaValidator::xsiNoNamespaceSchemaLocationString
	String_t* ___xsiNoNamespaceSchemaLocationString_37;
	// System.Xml.XmlCharType System.Xml.Schema.XmlSchemaValidator::xmlCharType
	XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  ___xmlCharType_43;

public:
	inline static int32_t get_offset_of_schemaSet_0() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___schemaSet_0)); }
	inline XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * get_schemaSet_0() const { return ___schemaSet_0; }
	inline XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F ** get_address_of_schemaSet_0() { return &___schemaSet_0; }
	inline void set_schemaSet_0(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * value)
	{
		___schemaSet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaSet_0), (void*)value);
	}

	inline static int32_t get_offset_of_validationFlags_1() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___validationFlags_1)); }
	inline int32_t get_validationFlags_1() const { return ___validationFlags_1; }
	inline int32_t* get_address_of_validationFlags_1() { return &___validationFlags_1; }
	inline void set_validationFlags_1(int32_t value)
	{
		___validationFlags_1 = value;
	}

	inline static int32_t get_offset_of_startIDConstraint_2() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___startIDConstraint_2)); }
	inline int32_t get_startIDConstraint_2() const { return ___startIDConstraint_2; }
	inline int32_t* get_address_of_startIDConstraint_2() { return &___startIDConstraint_2; }
	inline void set_startIDConstraint_2(int32_t value)
	{
		___startIDConstraint_2 = value;
	}

	inline static int32_t get_offset_of_isRoot_3() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___isRoot_3)); }
	inline bool get_isRoot_3() const { return ___isRoot_3; }
	inline bool* get_address_of_isRoot_3() { return &___isRoot_3; }
	inline void set_isRoot_3(bool value)
	{
		___isRoot_3 = value;
	}

	inline static int32_t get_offset_of_rootHasSchema_4() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___rootHasSchema_4)); }
	inline bool get_rootHasSchema_4() const { return ___rootHasSchema_4; }
	inline bool* get_address_of_rootHasSchema_4() { return &___rootHasSchema_4; }
	inline void set_rootHasSchema_4(bool value)
	{
		___rootHasSchema_4 = value;
	}

	inline static int32_t get_offset_of_attrValid_5() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___attrValid_5)); }
	inline bool get_attrValid_5() const { return ___attrValid_5; }
	inline bool* get_address_of_attrValid_5() { return &___attrValid_5; }
	inline void set_attrValid_5(bool value)
	{
		___attrValid_5 = value;
	}

	inline static int32_t get_offset_of_checkEntity_6() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___checkEntity_6)); }
	inline bool get_checkEntity_6() const { return ___checkEntity_6; }
	inline bool* get_address_of_checkEntity_6() { return &___checkEntity_6; }
	inline void set_checkEntity_6(bool value)
	{
		___checkEntity_6 = value;
	}

	inline static int32_t get_offset_of_compiledSchemaInfo_7() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___compiledSchemaInfo_7)); }
	inline SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * get_compiledSchemaInfo_7() const { return ___compiledSchemaInfo_7; }
	inline SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 ** get_address_of_compiledSchemaInfo_7() { return &___compiledSchemaInfo_7; }
	inline void set_compiledSchemaInfo_7(SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * value)
	{
		___compiledSchemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compiledSchemaInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_dtdSchemaInfo_8() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___dtdSchemaInfo_8)); }
	inline RuntimeObject* get_dtdSchemaInfo_8() const { return ___dtdSchemaInfo_8; }
	inline RuntimeObject** get_address_of_dtdSchemaInfo_8() { return &___dtdSchemaInfo_8; }
	inline void set_dtdSchemaInfo_8(RuntimeObject* value)
	{
		___dtdSchemaInfo_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtdSchemaInfo_8), (void*)value);
	}

	inline static int32_t get_offset_of_validatedNamespaces_9() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___validatedNamespaces_9)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_validatedNamespaces_9() const { return ___validatedNamespaces_9; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_validatedNamespaces_9() { return &___validatedNamespaces_9; }
	inline void set_validatedNamespaces_9(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___validatedNamespaces_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___validatedNamespaces_9), (void*)value);
	}

	inline static int32_t get_offset_of_validationStack_10() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___validationStack_10)); }
	inline HWStack_t2ECA5857AF5B3AF7C1BD51CEA64D131A6342BCDE * get_validationStack_10() const { return ___validationStack_10; }
	inline HWStack_t2ECA5857AF5B3AF7C1BD51CEA64D131A6342BCDE ** get_address_of_validationStack_10() { return &___validationStack_10; }
	inline void set_validationStack_10(HWStack_t2ECA5857AF5B3AF7C1BD51CEA64D131A6342BCDE * value)
	{
		___validationStack_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___validationStack_10), (void*)value);
	}

	inline static int32_t get_offset_of_context_11() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___context_11)); }
	inline ValidationState_t87AD0243195FC5C4B8643516747B92387F06A38B * get_context_11() const { return ___context_11; }
	inline ValidationState_t87AD0243195FC5C4B8643516747B92387F06A38B ** get_address_of_context_11() { return &___context_11; }
	inline void set_context_11(ValidationState_t87AD0243195FC5C4B8643516747B92387F06A38B * value)
	{
		___context_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_11), (void*)value);
	}

	inline static int32_t get_offset_of_currentState_12() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___currentState_12)); }
	inline int32_t get_currentState_12() const { return ___currentState_12; }
	inline int32_t* get_address_of_currentState_12() { return &___currentState_12; }
	inline void set_currentState_12(int32_t value)
	{
		___currentState_12 = value;
	}

	inline static int32_t get_offset_of_attPresence_13() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___attPresence_13)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_attPresence_13() const { return ___attPresence_13; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_attPresence_13() { return &___attPresence_13; }
	inline void set_attPresence_13(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___attPresence_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attPresence_13), (void*)value);
	}

	inline static int32_t get_offset_of_wildID_14() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___wildID_14)); }
	inline SchemaAttDef_t6701AAE5762853EDC86D272CC2A79EABB36924A4 * get_wildID_14() const { return ___wildID_14; }
	inline SchemaAttDef_t6701AAE5762853EDC86D272CC2A79EABB36924A4 ** get_address_of_wildID_14() { return &___wildID_14; }
	inline void set_wildID_14(SchemaAttDef_t6701AAE5762853EDC86D272CC2A79EABB36924A4 * value)
	{
		___wildID_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wildID_14), (void*)value);
	}

	inline static int32_t get_offset_of_IDs_15() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___IDs_15)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_IDs_15() const { return ___IDs_15; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_IDs_15() { return &___IDs_15; }
	inline void set_IDs_15(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___IDs_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IDs_15), (void*)value);
	}

	inline static int32_t get_offset_of_idRefListHead_16() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___idRefListHead_16)); }
	inline IdRefNode_t8E92E33D4D596CFC17454D41C07CD7627A8825E2 * get_idRefListHead_16() const { return ___idRefListHead_16; }
	inline IdRefNode_t8E92E33D4D596CFC17454D41C07CD7627A8825E2 ** get_address_of_idRefListHead_16() { return &___idRefListHead_16; }
	inline void set_idRefListHead_16(IdRefNode_t8E92E33D4D596CFC17454D41C07CD7627A8825E2 * value)
	{
		___idRefListHead_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idRefListHead_16), (void*)value);
	}

	inline static int32_t get_offset_of_contextQName_17() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___contextQName_17)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_contextQName_17() const { return ___contextQName_17; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_contextQName_17() { return &___contextQName_17; }
	inline void set_contextQName_17(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___contextQName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contextQName_17), (void*)value);
	}

	inline static int32_t get_offset_of_NsXs_18() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___NsXs_18)); }
	inline String_t* get_NsXs_18() const { return ___NsXs_18; }
	inline String_t** get_address_of_NsXs_18() { return &___NsXs_18; }
	inline void set_NsXs_18(String_t* value)
	{
		___NsXs_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXs_18), (void*)value);
	}

	inline static int32_t get_offset_of_NsXsi_19() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___NsXsi_19)); }
	inline String_t* get_NsXsi_19() const { return ___NsXsi_19; }
	inline String_t** get_address_of_NsXsi_19() { return &___NsXsi_19; }
	inline void set_NsXsi_19(String_t* value)
	{
		___NsXsi_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXsi_19), (void*)value);
	}

	inline static int32_t get_offset_of_NsXmlNs_20() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___NsXmlNs_20)); }
	inline String_t* get_NsXmlNs_20() const { return ___NsXmlNs_20; }
	inline String_t** get_address_of_NsXmlNs_20() { return &___NsXmlNs_20; }
	inline void set_NsXmlNs_20(String_t* value)
	{
		___NsXmlNs_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXmlNs_20), (void*)value);
	}

	inline static int32_t get_offset_of_NsXml_21() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___NsXml_21)); }
	inline String_t* get_NsXml_21() const { return ___NsXml_21; }
	inline String_t** get_address_of_NsXml_21() { return &___NsXml_21; }
	inline void set_NsXml_21(String_t* value)
	{
		___NsXml_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXml_21), (void*)value);
	}

	inline static int32_t get_offset_of_partialValidationType_22() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___partialValidationType_22)); }
	inline XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * get_partialValidationType_22() const { return ___partialValidationType_22; }
	inline XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B ** get_address_of_partialValidationType_22() { return &___partialValidationType_22; }
	inline void set_partialValidationType_22(XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * value)
	{
		___partialValidationType_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___partialValidationType_22), (void*)value);
	}

	inline static int32_t get_offset_of_textValue_23() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___textValue_23)); }
	inline StringBuilder_t * get_textValue_23() const { return ___textValue_23; }
	inline StringBuilder_t ** get_address_of_textValue_23() { return &___textValue_23; }
	inline void set_textValue_23(StringBuilder_t * value)
	{
		___textValue_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textValue_23), (void*)value);
	}

	inline static int32_t get_offset_of_eventHandler_24() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___eventHandler_24)); }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * get_eventHandler_24() const { return ___eventHandler_24; }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF ** get_address_of_eventHandler_24() { return &___eventHandler_24; }
	inline void set_eventHandler_24(ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * value)
	{
		___eventHandler_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventHandler_24), (void*)value);
	}

	inline static int32_t get_offset_of_validationEventSender_25() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___validationEventSender_25)); }
	inline RuntimeObject * get_validationEventSender_25() const { return ___validationEventSender_25; }
	inline RuntimeObject ** get_address_of_validationEventSender_25() { return &___validationEventSender_25; }
	inline void set_validationEventSender_25(RuntimeObject * value)
	{
		___validationEventSender_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___validationEventSender_25), (void*)value);
	}

	inline static int32_t get_offset_of_nameTable_26() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___nameTable_26)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_nameTable_26() const { return ___nameTable_26; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_nameTable_26() { return &___nameTable_26; }
	inline void set_nameTable_26(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___nameTable_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_26), (void*)value);
	}

	inline static int32_t get_offset_of_positionInfo_27() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___positionInfo_27)); }
	inline RuntimeObject* get_positionInfo_27() const { return ___positionInfo_27; }
	inline RuntimeObject** get_address_of_positionInfo_27() { return &___positionInfo_27; }
	inline void set_positionInfo_27(RuntimeObject* value)
	{
		___positionInfo_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionInfo_27), (void*)value);
	}

	inline static int32_t get_offset_of_dummyPositionInfo_28() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___dummyPositionInfo_28)); }
	inline RuntimeObject* get_dummyPositionInfo_28() const { return ___dummyPositionInfo_28; }
	inline RuntimeObject** get_address_of_dummyPositionInfo_28() { return &___dummyPositionInfo_28; }
	inline void set_dummyPositionInfo_28(RuntimeObject* value)
	{
		___dummyPositionInfo_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dummyPositionInfo_28), (void*)value);
	}

	inline static int32_t get_offset_of_xmlResolver_29() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___xmlResolver_29)); }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * get_xmlResolver_29() const { return ___xmlResolver_29; }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 ** get_address_of_xmlResolver_29() { return &___xmlResolver_29; }
	inline void set_xmlResolver_29(XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * value)
	{
		___xmlResolver_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlResolver_29), (void*)value);
	}

	inline static int32_t get_offset_of_sourceUri_30() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___sourceUri_30)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_sourceUri_30() const { return ___sourceUri_30; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_sourceUri_30() { return &___sourceUri_30; }
	inline void set_sourceUri_30(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___sourceUri_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceUri_30), (void*)value);
	}

	inline static int32_t get_offset_of_sourceUriString_31() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___sourceUriString_31)); }
	inline String_t* get_sourceUriString_31() const { return ___sourceUriString_31; }
	inline String_t** get_address_of_sourceUriString_31() { return &___sourceUriString_31; }
	inline void set_sourceUriString_31(String_t* value)
	{
		___sourceUriString_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceUriString_31), (void*)value);
	}

	inline static int32_t get_offset_of_nsResolver_32() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___nsResolver_32)); }
	inline RuntimeObject* get_nsResolver_32() const { return ___nsResolver_32; }
	inline RuntimeObject** get_address_of_nsResolver_32() { return &___nsResolver_32; }
	inline void set_nsResolver_32(RuntimeObject* value)
	{
		___nsResolver_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsResolver_32), (void*)value);
	}

	inline static int32_t get_offset_of_processContents_33() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___processContents_33)); }
	inline int32_t get_processContents_33() const { return ___processContents_33; }
	inline int32_t* get_address_of_processContents_33() { return &___processContents_33; }
	inline void set_processContents_33(int32_t value)
	{
		___processContents_33 = value;
	}

	inline static int32_t get_offset_of_xsiTypeString_34() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___xsiTypeString_34)); }
	inline String_t* get_xsiTypeString_34() const { return ___xsiTypeString_34; }
	inline String_t** get_address_of_xsiTypeString_34() { return &___xsiTypeString_34; }
	inline void set_xsiTypeString_34(String_t* value)
	{
		___xsiTypeString_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xsiTypeString_34), (void*)value);
	}

	inline static int32_t get_offset_of_xsiNilString_35() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___xsiNilString_35)); }
	inline String_t* get_xsiNilString_35() const { return ___xsiNilString_35; }
	inline String_t** get_address_of_xsiNilString_35() { return &___xsiNilString_35; }
	inline void set_xsiNilString_35(String_t* value)
	{
		___xsiNilString_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xsiNilString_35), (void*)value);
	}

	inline static int32_t get_offset_of_xsiSchemaLocationString_36() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___xsiSchemaLocationString_36)); }
	inline String_t* get_xsiSchemaLocationString_36() const { return ___xsiSchemaLocationString_36; }
	inline String_t** get_address_of_xsiSchemaLocationString_36() { return &___xsiSchemaLocationString_36; }
	inline void set_xsiSchemaLocationString_36(String_t* value)
	{
		___xsiSchemaLocationString_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xsiSchemaLocationString_36), (void*)value);
	}

	inline static int32_t get_offset_of_xsiNoNamespaceSchemaLocationString_37() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___xsiNoNamespaceSchemaLocationString_37)); }
	inline String_t* get_xsiNoNamespaceSchemaLocationString_37() const { return ___xsiNoNamespaceSchemaLocationString_37; }
	inline String_t** get_address_of_xsiNoNamespaceSchemaLocationString_37() { return &___xsiNoNamespaceSchemaLocationString_37; }
	inline void set_xsiNoNamespaceSchemaLocationString_37(String_t* value)
	{
		___xsiNoNamespaceSchemaLocationString_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xsiNoNamespaceSchemaLocationString_37), (void*)value);
	}

	inline static int32_t get_offset_of_xmlCharType_43() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C, ___xmlCharType_43)); }
	inline XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  get_xmlCharType_43() const { return ___xmlCharType_43; }
	inline XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9 * get_address_of_xmlCharType_43() { return &___xmlCharType_43; }
	inline void set_xmlCharType_43(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  value)
	{
		___xmlCharType_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___xmlCharType_43))->___charProperties_2), (void*)NULL);
	}
};

struct XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaValidator::dtQName
	XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * ___dtQName_38;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaValidator::dtCDATA
	XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * ___dtCDATA_39;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaValidator::dtStringArray
	XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * ___dtStringArray_40;
	// System.Xml.Schema.XmlSchemaParticle[] System.Xml.Schema.XmlSchemaValidator::EmptyParticleArray
	XmlSchemaParticleU5BU5D_tCA99C9F23120839B45A59D3FD77E88564CEAD800* ___EmptyParticleArray_41;
	// System.Xml.Schema.XmlSchemaAttribute[] System.Xml.Schema.XmlSchemaValidator::EmptyAttributeArray
	XmlSchemaAttributeU5BU5D_tFDBB08A9CF45CD6E2DE3A8AADCC8487BA5CD896F* ___EmptyAttributeArray_42;
	// System.Boolean[0...,0...] System.Xml.Schema.XmlSchemaValidator::ValidStates
	BooleanU5BU2CU5D_tCD5854E1A55166EC93998DDED119F97FF5A5ECDC* ___ValidStates_44;
	// System.String[] System.Xml.Schema.XmlSchemaValidator::MethodNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___MethodNames_45;

public:
	inline static int32_t get_offset_of_dtQName_38() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_StaticFields, ___dtQName_38)); }
	inline XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * get_dtQName_38() const { return ___dtQName_38; }
	inline XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 ** get_address_of_dtQName_38() { return &___dtQName_38; }
	inline void set_dtQName_38(XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * value)
	{
		___dtQName_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtQName_38), (void*)value);
	}

	inline static int32_t get_offset_of_dtCDATA_39() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_StaticFields, ___dtCDATA_39)); }
	inline XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * get_dtCDATA_39() const { return ___dtCDATA_39; }
	inline XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 ** get_address_of_dtCDATA_39() { return &___dtCDATA_39; }
	inline void set_dtCDATA_39(XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * value)
	{
		___dtCDATA_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtCDATA_39), (void*)value);
	}

	inline static int32_t get_offset_of_dtStringArray_40() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_StaticFields, ___dtStringArray_40)); }
	inline XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * get_dtStringArray_40() const { return ___dtStringArray_40; }
	inline XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 ** get_address_of_dtStringArray_40() { return &___dtStringArray_40; }
	inline void set_dtStringArray_40(XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * value)
	{
		___dtStringArray_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtStringArray_40), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyParticleArray_41() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_StaticFields, ___EmptyParticleArray_41)); }
	inline XmlSchemaParticleU5BU5D_tCA99C9F23120839B45A59D3FD77E88564CEAD800* get_EmptyParticleArray_41() const { return ___EmptyParticleArray_41; }
	inline XmlSchemaParticleU5BU5D_tCA99C9F23120839B45A59D3FD77E88564CEAD800** get_address_of_EmptyParticleArray_41() { return &___EmptyParticleArray_41; }
	inline void set_EmptyParticleArray_41(XmlSchemaParticleU5BU5D_tCA99C9F23120839B45A59D3FD77E88564CEAD800* value)
	{
		___EmptyParticleArray_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyParticleArray_41), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyAttributeArray_42() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_StaticFields, ___EmptyAttributeArray_42)); }
	inline XmlSchemaAttributeU5BU5D_tFDBB08A9CF45CD6E2DE3A8AADCC8487BA5CD896F* get_EmptyAttributeArray_42() const { return ___EmptyAttributeArray_42; }
	inline XmlSchemaAttributeU5BU5D_tFDBB08A9CF45CD6E2DE3A8AADCC8487BA5CD896F** get_address_of_EmptyAttributeArray_42() { return &___EmptyAttributeArray_42; }
	inline void set_EmptyAttributeArray_42(XmlSchemaAttributeU5BU5D_tFDBB08A9CF45CD6E2DE3A8AADCC8487BA5CD896F* value)
	{
		___EmptyAttributeArray_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyAttributeArray_42), (void*)value);
	}

	inline static int32_t get_offset_of_ValidStates_44() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_StaticFields, ___ValidStates_44)); }
	inline BooleanU5BU2CU5D_tCD5854E1A55166EC93998DDED119F97FF5A5ECDC* get_ValidStates_44() const { return ___ValidStates_44; }
	inline BooleanU5BU2CU5D_tCD5854E1A55166EC93998DDED119F97FF5A5ECDC** get_address_of_ValidStates_44() { return &___ValidStates_44; }
	inline void set_ValidStates_44(BooleanU5BU2CU5D_tCD5854E1A55166EC93998DDED119F97FF5A5ECDC* value)
	{
		___ValidStates_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidStates_44), (void*)value);
	}

	inline static int32_t get_offset_of_MethodNames_45() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_StaticFields, ___MethodNames_45)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_MethodNames_45() const { return ___MethodNames_45; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_MethodNames_45() { return &___MethodNames_45; }
	inline void set_MethodNames_45(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___MethodNames_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MethodNames_45), (void*)value);
	}
};


// System.Xml.ValidatingReaderNodeData
struct ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F  : public RuntimeObject
{
public:
	// System.String System.Xml.ValidatingReaderNodeData::localName
	String_t* ___localName_0;
	// System.String System.Xml.ValidatingReaderNodeData::namespaceUri
	String_t* ___namespaceUri_1;
	// System.String System.Xml.ValidatingReaderNodeData::prefix
	String_t* ___prefix_2;
	// System.String System.Xml.ValidatingReaderNodeData::nameWPrefix
	String_t* ___nameWPrefix_3;
	// System.String System.Xml.ValidatingReaderNodeData::rawValue
	String_t* ___rawValue_4;
	// System.String System.Xml.ValidatingReaderNodeData::originalStringValue
	String_t* ___originalStringValue_5;
	// System.Int32 System.Xml.ValidatingReaderNodeData::depth
	int32_t ___depth_6;
	// System.Xml.AttributePSVIInfo System.Xml.ValidatingReaderNodeData::attributePSVIInfo
	AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * ___attributePSVIInfo_7;
	// System.Xml.XmlNodeType System.Xml.ValidatingReaderNodeData::nodeType
	int32_t ___nodeType_8;
	// System.Int32 System.Xml.ValidatingReaderNodeData::lineNo
	int32_t ___lineNo_9;
	// System.Int32 System.Xml.ValidatingReaderNodeData::linePos
	int32_t ___linePos_10;

public:
	inline static int32_t get_offset_of_localName_0() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___localName_0)); }
	inline String_t* get_localName_0() const { return ___localName_0; }
	inline String_t** get_address_of_localName_0() { return &___localName_0; }
	inline void set_localName_0(String_t* value)
	{
		___localName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_0), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceUri_1() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___namespaceUri_1)); }
	inline String_t* get_namespaceUri_1() const { return ___namespaceUri_1; }
	inline String_t** get_address_of_namespaceUri_1() { return &___namespaceUri_1; }
	inline void set_namespaceUri_1(String_t* value)
	{
		___namespaceUri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceUri_1), (void*)value);
	}

	inline static int32_t get_offset_of_prefix_2() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___prefix_2)); }
	inline String_t* get_prefix_2() const { return ___prefix_2; }
	inline String_t** get_address_of_prefix_2() { return &___prefix_2; }
	inline void set_prefix_2(String_t* value)
	{
		___prefix_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameWPrefix_3() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___nameWPrefix_3)); }
	inline String_t* get_nameWPrefix_3() const { return ___nameWPrefix_3; }
	inline String_t** get_address_of_nameWPrefix_3() { return &___nameWPrefix_3; }
	inline void set_nameWPrefix_3(String_t* value)
	{
		___nameWPrefix_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameWPrefix_3), (void*)value);
	}

	inline static int32_t get_offset_of_rawValue_4() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___rawValue_4)); }
	inline String_t* get_rawValue_4() const { return ___rawValue_4; }
	inline String_t** get_address_of_rawValue_4() { return &___rawValue_4; }
	inline void set_rawValue_4(String_t* value)
	{
		___rawValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_originalStringValue_5() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___originalStringValue_5)); }
	inline String_t* get_originalStringValue_5() const { return ___originalStringValue_5; }
	inline String_t** get_address_of_originalStringValue_5() { return &___originalStringValue_5; }
	inline void set_originalStringValue_5(String_t* value)
	{
		___originalStringValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalStringValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_depth_6() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___depth_6)); }
	inline int32_t get_depth_6() const { return ___depth_6; }
	inline int32_t* get_address_of_depth_6() { return &___depth_6; }
	inline void set_depth_6(int32_t value)
	{
		___depth_6 = value;
	}

	inline static int32_t get_offset_of_attributePSVIInfo_7() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___attributePSVIInfo_7)); }
	inline AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * get_attributePSVIInfo_7() const { return ___attributePSVIInfo_7; }
	inline AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 ** get_address_of_attributePSVIInfo_7() { return &___attributePSVIInfo_7; }
	inline void set_attributePSVIInfo_7(AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * value)
	{
		___attributePSVIInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributePSVIInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_nodeType_8() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___nodeType_8)); }
	inline int32_t get_nodeType_8() const { return ___nodeType_8; }
	inline int32_t* get_address_of_nodeType_8() { return &___nodeType_8; }
	inline void set_nodeType_8(int32_t value)
	{
		___nodeType_8 = value;
	}

	inline static int32_t get_offset_of_lineNo_9() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___lineNo_9)); }
	inline int32_t get_lineNo_9() const { return ___lineNo_9; }
	inline int32_t* get_address_of_lineNo_9() { return &___lineNo_9; }
	inline void set_lineNo_9(int32_t value)
	{
		___lineNo_9 = value;
	}

	inline static int32_t get_offset_of_linePos_10() { return static_cast<int32_t>(offsetof(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F, ___linePos_10)); }
	inline int32_t get_linePos_10() const { return ___linePos_10; }
	inline int32_t* get_address_of_linePos_10() { return &___linePos_10; }
	inline void set_linePos_10(int32_t value)
	{
		___linePos_10 = value;
	}
};


// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlReaderSettings::useAsync
	bool ___useAsync_0;
	// System.Xml.XmlNameTable System.Xml.XmlReaderSettings::nameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable_1;
	// System.Xml.XmlResolver System.Xml.XmlReaderSettings::xmlResolver
	XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___xmlResolver_2;
	// System.Int32 System.Xml.XmlReaderSettings::lineNumberOffset
	int32_t ___lineNumberOffset_3;
	// System.Int32 System.Xml.XmlReaderSettings::linePositionOffset
	int32_t ___linePositionOffset_4;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformanceLevel
	int32_t ___conformanceLevel_5;
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_6;
	// System.Int64 System.Xml.XmlReaderSettings::maxCharactersInDocument
	int64_t ___maxCharactersInDocument_7;
	// System.Int64 System.Xml.XmlReaderSettings::maxCharactersFromEntities
	int64_t ___maxCharactersFromEntities_8;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreWhitespace
	bool ___ignoreWhitespace_9;
	// System.Boolean System.Xml.XmlReaderSettings::ignorePIs
	bool ___ignorePIs_10;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreComments
	bool ___ignoreComments_11;
	// System.Xml.DtdProcessing System.Xml.XmlReaderSettings::dtdProcessing
	int32_t ___dtdProcessing_12;
	// System.Xml.ValidationType System.Xml.XmlReaderSettings::validationType
	int32_t ___validationType_13;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_14;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * ___schemas_15;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlReaderSettings::valEventHandler
	ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * ___valEventHandler_16;
	// System.Boolean System.Xml.XmlReaderSettings::closeInput
	bool ___closeInput_17;
	// System.Boolean System.Xml.XmlReaderSettings::isReadOnly
	bool ___isReadOnly_18;
	// System.Boolean System.Xml.XmlReaderSettings::<IsXmlResolverSet>k__BackingField
	bool ___U3CIsXmlResolverSetU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_useAsync_0() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___useAsync_0)); }
	inline bool get_useAsync_0() const { return ___useAsync_0; }
	inline bool* get_address_of_useAsync_0() { return &___useAsync_0; }
	inline void set_useAsync_0(bool value)
	{
		___useAsync_0 = value;
	}

	inline static int32_t get_offset_of_nameTable_1() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___nameTable_1)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_nameTable_1() const { return ___nameTable_1; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_nameTable_1() { return &___nameTable_1; }
	inline void set_nameTable_1(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___nameTable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_1), (void*)value);
	}

	inline static int32_t get_offset_of_xmlResolver_2() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___xmlResolver_2)); }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * get_xmlResolver_2() const { return ___xmlResolver_2; }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 ** get_address_of_xmlResolver_2() { return &___xmlResolver_2; }
	inline void set_xmlResolver_2(XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * value)
	{
		___xmlResolver_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlResolver_2), (void*)value);
	}

	inline static int32_t get_offset_of_lineNumberOffset_3() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___lineNumberOffset_3)); }
	inline int32_t get_lineNumberOffset_3() const { return ___lineNumberOffset_3; }
	inline int32_t* get_address_of_lineNumberOffset_3() { return &___lineNumberOffset_3; }
	inline void set_lineNumberOffset_3(int32_t value)
	{
		___lineNumberOffset_3 = value;
	}

	inline static int32_t get_offset_of_linePositionOffset_4() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___linePositionOffset_4)); }
	inline int32_t get_linePositionOffset_4() const { return ___linePositionOffset_4; }
	inline int32_t* get_address_of_linePositionOffset_4() { return &___linePositionOffset_4; }
	inline void set_linePositionOffset_4(int32_t value)
	{
		___linePositionOffset_4 = value;
	}

	inline static int32_t get_offset_of_conformanceLevel_5() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___conformanceLevel_5)); }
	inline int32_t get_conformanceLevel_5() const { return ___conformanceLevel_5; }
	inline int32_t* get_address_of_conformanceLevel_5() { return &___conformanceLevel_5; }
	inline void set_conformanceLevel_5(int32_t value)
	{
		___conformanceLevel_5 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_6() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___checkCharacters_6)); }
	inline bool get_checkCharacters_6() const { return ___checkCharacters_6; }
	inline bool* get_address_of_checkCharacters_6() { return &___checkCharacters_6; }
	inline void set_checkCharacters_6(bool value)
	{
		___checkCharacters_6 = value;
	}

	inline static int32_t get_offset_of_maxCharactersInDocument_7() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___maxCharactersInDocument_7)); }
	inline int64_t get_maxCharactersInDocument_7() const { return ___maxCharactersInDocument_7; }
	inline int64_t* get_address_of_maxCharactersInDocument_7() { return &___maxCharactersInDocument_7; }
	inline void set_maxCharactersInDocument_7(int64_t value)
	{
		___maxCharactersInDocument_7 = value;
	}

	inline static int32_t get_offset_of_maxCharactersFromEntities_8() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___maxCharactersFromEntities_8)); }
	inline int64_t get_maxCharactersFromEntities_8() const { return ___maxCharactersFromEntities_8; }
	inline int64_t* get_address_of_maxCharactersFromEntities_8() { return &___maxCharactersFromEntities_8; }
	inline void set_maxCharactersFromEntities_8(int64_t value)
	{
		___maxCharactersFromEntities_8 = value;
	}

	inline static int32_t get_offset_of_ignoreWhitespace_9() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___ignoreWhitespace_9)); }
	inline bool get_ignoreWhitespace_9() const { return ___ignoreWhitespace_9; }
	inline bool* get_address_of_ignoreWhitespace_9() { return &___ignoreWhitespace_9; }
	inline void set_ignoreWhitespace_9(bool value)
	{
		___ignoreWhitespace_9 = value;
	}

	inline static int32_t get_offset_of_ignorePIs_10() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___ignorePIs_10)); }
	inline bool get_ignorePIs_10() const { return ___ignorePIs_10; }
	inline bool* get_address_of_ignorePIs_10() { return &___ignorePIs_10; }
	inline void set_ignorePIs_10(bool value)
	{
		___ignorePIs_10 = value;
	}

	inline static int32_t get_offset_of_ignoreComments_11() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___ignoreComments_11)); }
	inline bool get_ignoreComments_11() const { return ___ignoreComments_11; }
	inline bool* get_address_of_ignoreComments_11() { return &___ignoreComments_11; }
	inline void set_ignoreComments_11(bool value)
	{
		___ignoreComments_11 = value;
	}

	inline static int32_t get_offset_of_dtdProcessing_12() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___dtdProcessing_12)); }
	inline int32_t get_dtdProcessing_12() const { return ___dtdProcessing_12; }
	inline int32_t* get_address_of_dtdProcessing_12() { return &___dtdProcessing_12; }
	inline void set_dtdProcessing_12(int32_t value)
	{
		___dtdProcessing_12 = value;
	}

	inline static int32_t get_offset_of_validationType_13() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___validationType_13)); }
	inline int32_t get_validationType_13() const { return ___validationType_13; }
	inline int32_t* get_address_of_validationType_13() { return &___validationType_13; }
	inline void set_validationType_13(int32_t value)
	{
		___validationType_13 = value;
	}

	inline static int32_t get_offset_of_validationFlags_14() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___validationFlags_14)); }
	inline int32_t get_validationFlags_14() const { return ___validationFlags_14; }
	inline int32_t* get_address_of_validationFlags_14() { return &___validationFlags_14; }
	inline void set_validationFlags_14(int32_t value)
	{
		___validationFlags_14 = value;
	}

	inline static int32_t get_offset_of_schemas_15() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___schemas_15)); }
	inline XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * get_schemas_15() const { return ___schemas_15; }
	inline XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F ** get_address_of_schemas_15() { return &___schemas_15; }
	inline void set_schemas_15(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * value)
	{
		___schemas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemas_15), (void*)value);
	}

	inline static int32_t get_offset_of_valEventHandler_16() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___valEventHandler_16)); }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * get_valEventHandler_16() const { return ___valEventHandler_16; }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF ** get_address_of_valEventHandler_16() { return &___valEventHandler_16; }
	inline void set_valEventHandler_16(ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * value)
	{
		___valEventHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valEventHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_closeInput_17() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___closeInput_17)); }
	inline bool get_closeInput_17() const { return ___closeInput_17; }
	inline bool* get_address_of_closeInput_17() { return &___closeInput_17; }
	inline void set_closeInput_17(bool value)
	{
		___closeInput_17 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_18() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___isReadOnly_18)); }
	inline bool get_isReadOnly_18() const { return ___isReadOnly_18; }
	inline bool* get_address_of_isReadOnly_18() { return &___isReadOnly_18; }
	inline void set_isReadOnly_18(bool value)
	{
		___isReadOnly_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsXmlResolverSetU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65, ___U3CIsXmlResolverSetU3Ek__BackingField_19)); }
	inline bool get_U3CIsXmlResolverSetU3Ek__BackingField_19() const { return ___U3CIsXmlResolverSetU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CIsXmlResolverSetU3Ek__BackingField_19() { return &___U3CIsXmlResolverSetU3Ek__BackingField_19; }
	inline void set_U3CIsXmlResolverSetU3Ek__BackingField_19(bool value)
	{
		___U3CIsXmlResolverSetU3Ek__BackingField_19 = value;
	}
};

struct XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65_StaticFields
{
public:
	// System.Nullable`1<System.Boolean> System.Xml.XmlReaderSettings::s_enableLegacyXmlSettings
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___s_enableLegacyXmlSettings_20;

public:
	inline static int32_t get_offset_of_s_enableLegacyXmlSettings_20() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65_StaticFields, ___s_enableLegacyXmlSettings_20)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_s_enableLegacyXmlSettings_20() const { return ___s_enableLegacyXmlSettings_20; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_s_enableLegacyXmlSettings_20() { return &___s_enableLegacyXmlSettings_20; }
	inline void set_s_enableLegacyXmlSettings_20(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___s_enableLegacyXmlSettings_20 = value;
	}
};


// System.Xml.XsdCachingReader
struct XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51  : public XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB
{
public:
	// System.Xml.XmlReader System.Xml.XsdCachingReader::coreReader
	XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___coreReader_3;
	// System.Xml.XmlNameTable System.Xml.XsdCachingReader::coreReaderNameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___coreReaderNameTable_4;
	// System.Xml.ValidatingReaderNodeData[] System.Xml.XsdCachingReader::contentEvents
	ValidatingReaderNodeDataU5BU5D_tFBEB81BF53C53E8F95978989EB44D14E42E30DCF* ___contentEvents_5;
	// System.Xml.ValidatingReaderNodeData[] System.Xml.XsdCachingReader::attributeEvents
	ValidatingReaderNodeDataU5BU5D_tFBEB81BF53C53E8F95978989EB44D14E42E30DCF* ___attributeEvents_6;
	// System.Xml.ValidatingReaderNodeData System.Xml.XsdCachingReader::cachedNode
	ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * ___cachedNode_7;
	// System.Xml.XsdCachingReader/CachingReaderState System.Xml.XsdCachingReader::cacheState
	int32_t ___cacheState_8;
	// System.Int32 System.Xml.XsdCachingReader::contentIndex
	int32_t ___contentIndex_9;
	// System.Int32 System.Xml.XsdCachingReader::attributeCount
	int32_t ___attributeCount_10;
	// System.Boolean System.Xml.XsdCachingReader::returnOriginalStringValues
	bool ___returnOriginalStringValues_11;
	// System.Xml.CachingEventHandler System.Xml.XsdCachingReader::cacheHandler
	CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6 * ___cacheHandler_12;
	// System.Int32 System.Xml.XsdCachingReader::currentAttrIndex
	int32_t ___currentAttrIndex_13;
	// System.Int32 System.Xml.XsdCachingReader::currentContentIndex
	int32_t ___currentContentIndex_14;
	// System.Boolean System.Xml.XsdCachingReader::readAhead
	bool ___readAhead_15;
	// System.Xml.IXmlLineInfo System.Xml.XsdCachingReader::lineInfo
	RuntimeObject* ___lineInfo_16;
	// System.Xml.ValidatingReaderNodeData System.Xml.XsdCachingReader::textNode
	ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * ___textNode_17;

public:
	inline static int32_t get_offset_of_coreReader_3() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___coreReader_3)); }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * get_coreReader_3() const { return ___coreReader_3; }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB ** get_address_of_coreReader_3() { return &___coreReader_3; }
	inline void set_coreReader_3(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * value)
	{
		___coreReader_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coreReader_3), (void*)value);
	}

	inline static int32_t get_offset_of_coreReaderNameTable_4() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___coreReaderNameTable_4)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_coreReaderNameTable_4() const { return ___coreReaderNameTable_4; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_coreReaderNameTable_4() { return &___coreReaderNameTable_4; }
	inline void set_coreReaderNameTable_4(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___coreReaderNameTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coreReaderNameTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_contentEvents_5() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___contentEvents_5)); }
	inline ValidatingReaderNodeDataU5BU5D_tFBEB81BF53C53E8F95978989EB44D14E42E30DCF* get_contentEvents_5() const { return ___contentEvents_5; }
	inline ValidatingReaderNodeDataU5BU5D_tFBEB81BF53C53E8F95978989EB44D14E42E30DCF** get_address_of_contentEvents_5() { return &___contentEvents_5; }
	inline void set_contentEvents_5(ValidatingReaderNodeDataU5BU5D_tFBEB81BF53C53E8F95978989EB44D14E42E30DCF* value)
	{
		___contentEvents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentEvents_5), (void*)value);
	}

	inline static int32_t get_offset_of_attributeEvents_6() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___attributeEvents_6)); }
	inline ValidatingReaderNodeDataU5BU5D_tFBEB81BF53C53E8F95978989EB44D14E42E30DCF* get_attributeEvents_6() const { return ___attributeEvents_6; }
	inline ValidatingReaderNodeDataU5BU5D_tFBEB81BF53C53E8F95978989EB44D14E42E30DCF** get_address_of_attributeEvents_6() { return &___attributeEvents_6; }
	inline void set_attributeEvents_6(ValidatingReaderNodeDataU5BU5D_tFBEB81BF53C53E8F95978989EB44D14E42E30DCF* value)
	{
		___attributeEvents_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeEvents_6), (void*)value);
	}

	inline static int32_t get_offset_of_cachedNode_7() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___cachedNode_7)); }
	inline ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * get_cachedNode_7() const { return ___cachedNode_7; }
	inline ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F ** get_address_of_cachedNode_7() { return &___cachedNode_7; }
	inline void set_cachedNode_7(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * value)
	{
		___cachedNode_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedNode_7), (void*)value);
	}

	inline static int32_t get_offset_of_cacheState_8() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___cacheState_8)); }
	inline int32_t get_cacheState_8() const { return ___cacheState_8; }
	inline int32_t* get_address_of_cacheState_8() { return &___cacheState_8; }
	inline void set_cacheState_8(int32_t value)
	{
		___cacheState_8 = value;
	}

	inline static int32_t get_offset_of_contentIndex_9() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___contentIndex_9)); }
	inline int32_t get_contentIndex_9() const { return ___contentIndex_9; }
	inline int32_t* get_address_of_contentIndex_9() { return &___contentIndex_9; }
	inline void set_contentIndex_9(int32_t value)
	{
		___contentIndex_9 = value;
	}

	inline static int32_t get_offset_of_attributeCount_10() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___attributeCount_10)); }
	inline int32_t get_attributeCount_10() const { return ___attributeCount_10; }
	inline int32_t* get_address_of_attributeCount_10() { return &___attributeCount_10; }
	inline void set_attributeCount_10(int32_t value)
	{
		___attributeCount_10 = value;
	}

	inline static int32_t get_offset_of_returnOriginalStringValues_11() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___returnOriginalStringValues_11)); }
	inline bool get_returnOriginalStringValues_11() const { return ___returnOriginalStringValues_11; }
	inline bool* get_address_of_returnOriginalStringValues_11() { return &___returnOriginalStringValues_11; }
	inline void set_returnOriginalStringValues_11(bool value)
	{
		___returnOriginalStringValues_11 = value;
	}

	inline static int32_t get_offset_of_cacheHandler_12() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___cacheHandler_12)); }
	inline CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6 * get_cacheHandler_12() const { return ___cacheHandler_12; }
	inline CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6 ** get_address_of_cacheHandler_12() { return &___cacheHandler_12; }
	inline void set_cacheHandler_12(CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6 * value)
	{
		___cacheHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cacheHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_currentAttrIndex_13() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___currentAttrIndex_13)); }
	inline int32_t get_currentAttrIndex_13() const { return ___currentAttrIndex_13; }
	inline int32_t* get_address_of_currentAttrIndex_13() { return &___currentAttrIndex_13; }
	inline void set_currentAttrIndex_13(int32_t value)
	{
		___currentAttrIndex_13 = value;
	}

	inline static int32_t get_offset_of_currentContentIndex_14() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___currentContentIndex_14)); }
	inline int32_t get_currentContentIndex_14() const { return ___currentContentIndex_14; }
	inline int32_t* get_address_of_currentContentIndex_14() { return &___currentContentIndex_14; }
	inline void set_currentContentIndex_14(int32_t value)
	{
		___currentContentIndex_14 = value;
	}

	inline static int32_t get_offset_of_readAhead_15() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___readAhead_15)); }
	inline bool get_readAhead_15() const { return ___readAhead_15; }
	inline bool* get_address_of_readAhead_15() { return &___readAhead_15; }
	inline void set_readAhead_15(bool value)
	{
		___readAhead_15 = value;
	}

	inline static int32_t get_offset_of_lineInfo_16() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___lineInfo_16)); }
	inline RuntimeObject* get_lineInfo_16() const { return ___lineInfo_16; }
	inline RuntimeObject** get_address_of_lineInfo_16() { return &___lineInfo_16; }
	inline void set_lineInfo_16(RuntimeObject* value)
	{
		___lineInfo_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineInfo_16), (void*)value);
	}

	inline static int32_t get_offset_of_textNode_17() { return static_cast<int32_t>(offsetof(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51, ___textNode_17)); }
	inline ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * get_textNode_17() const { return ___textNode_17; }
	inline ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F ** get_address_of_textNode_17() { return &___textNode_17; }
	inline void set_textNode_17(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * value)
	{
		___textNode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textNode_17), (void*)value);
	}
};


// System.Xml.XsdValidatingReader
struct XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5  : public XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB
{
public:
	// System.Xml.XmlReader System.Xml.XsdValidatingReader::coreReader
	XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___coreReader_3;
	// System.Xml.IXmlNamespaceResolver System.Xml.XsdValidatingReader::coreReaderNSResolver
	RuntimeObject* ___coreReaderNSResolver_4;
	// System.Xml.IXmlNamespaceResolver System.Xml.XsdValidatingReader::thisNSResolver
	RuntimeObject* ___thisNSResolver_5;
	// System.Xml.Schema.XmlSchemaValidator System.Xml.XsdValidatingReader::validator
	XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * ___validator_6;
	// System.Xml.XmlResolver System.Xml.XsdValidatingReader::xmlResolver
	XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___xmlResolver_7;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XsdValidatingReader::validationEvent
	ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * ___validationEvent_8;
	// System.Xml.XsdValidatingReader/ValidatingReaderState System.Xml.XsdValidatingReader::validationState
	int32_t ___validationState_9;
	// System.Xml.Schema.XmlValueGetter System.Xml.XsdValidatingReader::valueGetter
	XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * ___valueGetter_10;
	// System.Xml.XmlNamespaceManager System.Xml.XsdValidatingReader::nsManager
	XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * ___nsManager_11;
	// System.Boolean System.Xml.XsdValidatingReader::manageNamespaces
	bool ___manageNamespaces_12;
	// System.Boolean System.Xml.XsdValidatingReader::processInlineSchema
	bool ___processInlineSchema_13;
	// System.Boolean System.Xml.XsdValidatingReader::replayCache
	bool ___replayCache_14;
	// System.Xml.ValidatingReaderNodeData System.Xml.XsdValidatingReader::cachedNode
	ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * ___cachedNode_15;
	// System.Xml.AttributePSVIInfo System.Xml.XsdValidatingReader::attributePSVI
	AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * ___attributePSVI_16;
	// System.Int32 System.Xml.XsdValidatingReader::attributeCount
	int32_t ___attributeCount_17;
	// System.Int32 System.Xml.XsdValidatingReader::coreReaderAttributeCount
	int32_t ___coreReaderAttributeCount_18;
	// System.Int32 System.Xml.XsdValidatingReader::currentAttrIndex
	int32_t ___currentAttrIndex_19;
	// System.Xml.AttributePSVIInfo[] System.Xml.XsdValidatingReader::attributePSVINodes
	AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* ___attributePSVINodes_20;
	// System.Collections.ArrayList System.Xml.XsdValidatingReader::defaultAttributes
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___defaultAttributes_21;
	// System.Xml.Schema.Parser System.Xml.XsdValidatingReader::inlineSchemaParser
	Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * ___inlineSchemaParser_22;
	// System.Object System.Xml.XsdValidatingReader::atomicValue
	RuntimeObject * ___atomicValue_23;
	// System.Xml.Schema.XmlSchemaInfo System.Xml.XsdValidatingReader::xmlSchemaInfo
	XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * ___xmlSchemaInfo_24;
	// System.String System.Xml.XsdValidatingReader::originalAtomicValueString
	String_t* ___originalAtomicValueString_25;
	// System.Xml.XmlNameTable System.Xml.XsdValidatingReader::coreReaderNameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___coreReaderNameTable_26;
	// System.Xml.XsdCachingReader System.Xml.XsdValidatingReader::cachingReader
	XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * ___cachingReader_27;
	// System.Xml.ValidatingReaderNodeData System.Xml.XsdValidatingReader::textNode
	ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * ___textNode_28;
	// System.String System.Xml.XsdValidatingReader::NsXmlNs
	String_t* ___NsXmlNs_29;
	// System.String System.Xml.XsdValidatingReader::NsXs
	String_t* ___NsXs_30;
	// System.String System.Xml.XsdValidatingReader::NsXsi
	String_t* ___NsXsi_31;
	// System.String System.Xml.XsdValidatingReader::XsiType
	String_t* ___XsiType_32;
	// System.String System.Xml.XsdValidatingReader::XsiNil
	String_t* ___XsiNil_33;
	// System.String System.Xml.XsdValidatingReader::XsdSchema
	String_t* ___XsdSchema_34;
	// System.String System.Xml.XsdValidatingReader::XsiSchemaLocation
	String_t* ___XsiSchemaLocation_35;
	// System.String System.Xml.XsdValidatingReader::XsiNoNamespaceSchemaLocation
	String_t* ___XsiNoNamespaceSchemaLocation_36;
	// System.Xml.XmlCharType System.Xml.XsdValidatingReader::xmlCharType
	XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  ___xmlCharType_37;
	// System.Xml.IXmlLineInfo System.Xml.XsdValidatingReader::lineInfo
	RuntimeObject* ___lineInfo_38;
	// System.Xml.ReadContentAsBinaryHelper System.Xml.XsdValidatingReader::readBinaryHelper
	ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * ___readBinaryHelper_39;
	// System.Xml.XsdValidatingReader/ValidatingReaderState System.Xml.XsdValidatingReader::savedState
	int32_t ___savedState_40;

public:
	inline static int32_t get_offset_of_coreReader_3() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___coreReader_3)); }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * get_coreReader_3() const { return ___coreReader_3; }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB ** get_address_of_coreReader_3() { return &___coreReader_3; }
	inline void set_coreReader_3(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * value)
	{
		___coreReader_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coreReader_3), (void*)value);
	}

	inline static int32_t get_offset_of_coreReaderNSResolver_4() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___coreReaderNSResolver_4)); }
	inline RuntimeObject* get_coreReaderNSResolver_4() const { return ___coreReaderNSResolver_4; }
	inline RuntimeObject** get_address_of_coreReaderNSResolver_4() { return &___coreReaderNSResolver_4; }
	inline void set_coreReaderNSResolver_4(RuntimeObject* value)
	{
		___coreReaderNSResolver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coreReaderNSResolver_4), (void*)value);
	}

	inline static int32_t get_offset_of_thisNSResolver_5() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___thisNSResolver_5)); }
	inline RuntimeObject* get_thisNSResolver_5() const { return ___thisNSResolver_5; }
	inline RuntimeObject** get_address_of_thisNSResolver_5() { return &___thisNSResolver_5; }
	inline void set_thisNSResolver_5(RuntimeObject* value)
	{
		___thisNSResolver_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisNSResolver_5), (void*)value);
	}

	inline static int32_t get_offset_of_validator_6() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___validator_6)); }
	inline XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * get_validator_6() const { return ___validator_6; }
	inline XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C ** get_address_of_validator_6() { return &___validator_6; }
	inline void set_validator_6(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * value)
	{
		___validator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___validator_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlResolver_7() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___xmlResolver_7)); }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * get_xmlResolver_7() const { return ___xmlResolver_7; }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 ** get_address_of_xmlResolver_7() { return &___xmlResolver_7; }
	inline void set_xmlResolver_7(XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * value)
	{
		___xmlResolver_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlResolver_7), (void*)value);
	}

	inline static int32_t get_offset_of_validationEvent_8() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___validationEvent_8)); }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * get_validationEvent_8() const { return ___validationEvent_8; }
	inline ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF ** get_address_of_validationEvent_8() { return &___validationEvent_8; }
	inline void set_validationEvent_8(ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * value)
	{
		___validationEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___validationEvent_8), (void*)value);
	}

	inline static int32_t get_offset_of_validationState_9() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___validationState_9)); }
	inline int32_t get_validationState_9() const { return ___validationState_9; }
	inline int32_t* get_address_of_validationState_9() { return &___validationState_9; }
	inline void set_validationState_9(int32_t value)
	{
		___validationState_9 = value;
	}

	inline static int32_t get_offset_of_valueGetter_10() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___valueGetter_10)); }
	inline XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * get_valueGetter_10() const { return ___valueGetter_10; }
	inline XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF ** get_address_of_valueGetter_10() { return &___valueGetter_10; }
	inline void set_valueGetter_10(XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * value)
	{
		___valueGetter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueGetter_10), (void*)value);
	}

	inline static int32_t get_offset_of_nsManager_11() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___nsManager_11)); }
	inline XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * get_nsManager_11() const { return ___nsManager_11; }
	inline XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F ** get_address_of_nsManager_11() { return &___nsManager_11; }
	inline void set_nsManager_11(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * value)
	{
		___nsManager_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsManager_11), (void*)value);
	}

	inline static int32_t get_offset_of_manageNamespaces_12() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___manageNamespaces_12)); }
	inline bool get_manageNamespaces_12() const { return ___manageNamespaces_12; }
	inline bool* get_address_of_manageNamespaces_12() { return &___manageNamespaces_12; }
	inline void set_manageNamespaces_12(bool value)
	{
		___manageNamespaces_12 = value;
	}

	inline static int32_t get_offset_of_processInlineSchema_13() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___processInlineSchema_13)); }
	inline bool get_processInlineSchema_13() const { return ___processInlineSchema_13; }
	inline bool* get_address_of_processInlineSchema_13() { return &___processInlineSchema_13; }
	inline void set_processInlineSchema_13(bool value)
	{
		___processInlineSchema_13 = value;
	}

	inline static int32_t get_offset_of_replayCache_14() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___replayCache_14)); }
	inline bool get_replayCache_14() const { return ___replayCache_14; }
	inline bool* get_address_of_replayCache_14() { return &___replayCache_14; }
	inline void set_replayCache_14(bool value)
	{
		___replayCache_14 = value;
	}

	inline static int32_t get_offset_of_cachedNode_15() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___cachedNode_15)); }
	inline ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * get_cachedNode_15() const { return ___cachedNode_15; }
	inline ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F ** get_address_of_cachedNode_15() { return &___cachedNode_15; }
	inline void set_cachedNode_15(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * value)
	{
		___cachedNode_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedNode_15), (void*)value);
	}

	inline static int32_t get_offset_of_attributePSVI_16() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___attributePSVI_16)); }
	inline AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * get_attributePSVI_16() const { return ___attributePSVI_16; }
	inline AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 ** get_address_of_attributePSVI_16() { return &___attributePSVI_16; }
	inline void set_attributePSVI_16(AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * value)
	{
		___attributePSVI_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributePSVI_16), (void*)value);
	}

	inline static int32_t get_offset_of_attributeCount_17() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___attributeCount_17)); }
	inline int32_t get_attributeCount_17() const { return ___attributeCount_17; }
	inline int32_t* get_address_of_attributeCount_17() { return &___attributeCount_17; }
	inline void set_attributeCount_17(int32_t value)
	{
		___attributeCount_17 = value;
	}

	inline static int32_t get_offset_of_coreReaderAttributeCount_18() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___coreReaderAttributeCount_18)); }
	inline int32_t get_coreReaderAttributeCount_18() const { return ___coreReaderAttributeCount_18; }
	inline int32_t* get_address_of_coreReaderAttributeCount_18() { return &___coreReaderAttributeCount_18; }
	inline void set_coreReaderAttributeCount_18(int32_t value)
	{
		___coreReaderAttributeCount_18 = value;
	}

	inline static int32_t get_offset_of_currentAttrIndex_19() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___currentAttrIndex_19)); }
	inline int32_t get_currentAttrIndex_19() const { return ___currentAttrIndex_19; }
	inline int32_t* get_address_of_currentAttrIndex_19() { return &___currentAttrIndex_19; }
	inline void set_currentAttrIndex_19(int32_t value)
	{
		___currentAttrIndex_19 = value;
	}

	inline static int32_t get_offset_of_attributePSVINodes_20() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___attributePSVINodes_20)); }
	inline AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* get_attributePSVINodes_20() const { return ___attributePSVINodes_20; }
	inline AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951** get_address_of_attributePSVINodes_20() { return &___attributePSVINodes_20; }
	inline void set_attributePSVINodes_20(AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* value)
	{
		___attributePSVINodes_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributePSVINodes_20), (void*)value);
	}

	inline static int32_t get_offset_of_defaultAttributes_21() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___defaultAttributes_21)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_defaultAttributes_21() const { return ___defaultAttributes_21; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_defaultAttributes_21() { return &___defaultAttributes_21; }
	inline void set_defaultAttributes_21(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___defaultAttributes_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultAttributes_21), (void*)value);
	}

	inline static int32_t get_offset_of_inlineSchemaParser_22() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___inlineSchemaParser_22)); }
	inline Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * get_inlineSchemaParser_22() const { return ___inlineSchemaParser_22; }
	inline Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 ** get_address_of_inlineSchemaParser_22() { return &___inlineSchemaParser_22; }
	inline void set_inlineSchemaParser_22(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * value)
	{
		___inlineSchemaParser_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inlineSchemaParser_22), (void*)value);
	}

	inline static int32_t get_offset_of_atomicValue_23() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___atomicValue_23)); }
	inline RuntimeObject * get_atomicValue_23() const { return ___atomicValue_23; }
	inline RuntimeObject ** get_address_of_atomicValue_23() { return &___atomicValue_23; }
	inline void set_atomicValue_23(RuntimeObject * value)
	{
		___atomicValue_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atomicValue_23), (void*)value);
	}

	inline static int32_t get_offset_of_xmlSchemaInfo_24() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___xmlSchemaInfo_24)); }
	inline XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * get_xmlSchemaInfo_24() const { return ___xmlSchemaInfo_24; }
	inline XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 ** get_address_of_xmlSchemaInfo_24() { return &___xmlSchemaInfo_24; }
	inline void set_xmlSchemaInfo_24(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * value)
	{
		___xmlSchemaInfo_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlSchemaInfo_24), (void*)value);
	}

	inline static int32_t get_offset_of_originalAtomicValueString_25() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___originalAtomicValueString_25)); }
	inline String_t* get_originalAtomicValueString_25() const { return ___originalAtomicValueString_25; }
	inline String_t** get_address_of_originalAtomicValueString_25() { return &___originalAtomicValueString_25; }
	inline void set_originalAtomicValueString_25(String_t* value)
	{
		___originalAtomicValueString_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalAtomicValueString_25), (void*)value);
	}

	inline static int32_t get_offset_of_coreReaderNameTable_26() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___coreReaderNameTable_26)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_coreReaderNameTable_26() const { return ___coreReaderNameTable_26; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_coreReaderNameTable_26() { return &___coreReaderNameTable_26; }
	inline void set_coreReaderNameTable_26(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___coreReaderNameTable_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coreReaderNameTable_26), (void*)value);
	}

	inline static int32_t get_offset_of_cachingReader_27() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___cachingReader_27)); }
	inline XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * get_cachingReader_27() const { return ___cachingReader_27; }
	inline XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 ** get_address_of_cachingReader_27() { return &___cachingReader_27; }
	inline void set_cachingReader_27(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * value)
	{
		___cachingReader_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachingReader_27), (void*)value);
	}

	inline static int32_t get_offset_of_textNode_28() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___textNode_28)); }
	inline ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * get_textNode_28() const { return ___textNode_28; }
	inline ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F ** get_address_of_textNode_28() { return &___textNode_28; }
	inline void set_textNode_28(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * value)
	{
		___textNode_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textNode_28), (void*)value);
	}

	inline static int32_t get_offset_of_NsXmlNs_29() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___NsXmlNs_29)); }
	inline String_t* get_NsXmlNs_29() const { return ___NsXmlNs_29; }
	inline String_t** get_address_of_NsXmlNs_29() { return &___NsXmlNs_29; }
	inline void set_NsXmlNs_29(String_t* value)
	{
		___NsXmlNs_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXmlNs_29), (void*)value);
	}

	inline static int32_t get_offset_of_NsXs_30() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___NsXs_30)); }
	inline String_t* get_NsXs_30() const { return ___NsXs_30; }
	inline String_t** get_address_of_NsXs_30() { return &___NsXs_30; }
	inline void set_NsXs_30(String_t* value)
	{
		___NsXs_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXs_30), (void*)value);
	}

	inline static int32_t get_offset_of_NsXsi_31() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___NsXsi_31)); }
	inline String_t* get_NsXsi_31() const { return ___NsXsi_31; }
	inline String_t** get_address_of_NsXsi_31() { return &___NsXsi_31; }
	inline void set_NsXsi_31(String_t* value)
	{
		___NsXsi_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NsXsi_31), (void*)value);
	}

	inline static int32_t get_offset_of_XsiType_32() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___XsiType_32)); }
	inline String_t* get_XsiType_32() const { return ___XsiType_32; }
	inline String_t** get_address_of_XsiType_32() { return &___XsiType_32; }
	inline void set_XsiType_32(String_t* value)
	{
		___XsiType_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsiType_32), (void*)value);
	}

	inline static int32_t get_offset_of_XsiNil_33() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___XsiNil_33)); }
	inline String_t* get_XsiNil_33() const { return ___XsiNil_33; }
	inline String_t** get_address_of_XsiNil_33() { return &___XsiNil_33; }
	inline void set_XsiNil_33(String_t* value)
	{
		___XsiNil_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsiNil_33), (void*)value);
	}

	inline static int32_t get_offset_of_XsdSchema_34() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___XsdSchema_34)); }
	inline String_t* get_XsdSchema_34() const { return ___XsdSchema_34; }
	inline String_t** get_address_of_XsdSchema_34() { return &___XsdSchema_34; }
	inline void set_XsdSchema_34(String_t* value)
	{
		___XsdSchema_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsdSchema_34), (void*)value);
	}

	inline static int32_t get_offset_of_XsiSchemaLocation_35() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___XsiSchemaLocation_35)); }
	inline String_t* get_XsiSchemaLocation_35() const { return ___XsiSchemaLocation_35; }
	inline String_t** get_address_of_XsiSchemaLocation_35() { return &___XsiSchemaLocation_35; }
	inline void set_XsiSchemaLocation_35(String_t* value)
	{
		___XsiSchemaLocation_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsiSchemaLocation_35), (void*)value);
	}

	inline static int32_t get_offset_of_XsiNoNamespaceSchemaLocation_36() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___XsiNoNamespaceSchemaLocation_36)); }
	inline String_t* get_XsiNoNamespaceSchemaLocation_36() const { return ___XsiNoNamespaceSchemaLocation_36; }
	inline String_t** get_address_of_XsiNoNamespaceSchemaLocation_36() { return &___XsiNoNamespaceSchemaLocation_36; }
	inline void set_XsiNoNamespaceSchemaLocation_36(String_t* value)
	{
		___XsiNoNamespaceSchemaLocation_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XsiNoNamespaceSchemaLocation_36), (void*)value);
	}

	inline static int32_t get_offset_of_xmlCharType_37() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___xmlCharType_37)); }
	inline XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  get_xmlCharType_37() const { return ___xmlCharType_37; }
	inline XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9 * get_address_of_xmlCharType_37() { return &___xmlCharType_37; }
	inline void set_xmlCharType_37(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  value)
	{
		___xmlCharType_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___xmlCharType_37))->___charProperties_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_lineInfo_38() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___lineInfo_38)); }
	inline RuntimeObject* get_lineInfo_38() const { return ___lineInfo_38; }
	inline RuntimeObject** get_address_of_lineInfo_38() { return &___lineInfo_38; }
	inline void set_lineInfo_38(RuntimeObject* value)
	{
		___lineInfo_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineInfo_38), (void*)value);
	}

	inline static int32_t get_offset_of_readBinaryHelper_39() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___readBinaryHelper_39)); }
	inline ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * get_readBinaryHelper_39() const { return ___readBinaryHelper_39; }
	inline ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 ** get_address_of_readBinaryHelper_39() { return &___readBinaryHelper_39; }
	inline void set_readBinaryHelper_39(ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * value)
	{
		___readBinaryHelper_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readBinaryHelper_39), (void*)value);
	}

	inline static int32_t get_offset_of_savedState_40() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5, ___savedState_40)); }
	inline int32_t get_savedState_40() const { return ___savedState_40; }
	inline int32_t* get_address_of_savedState_40() { return &___savedState_40; }
	inline void set_savedState_40(int32_t value)
	{
		___savedState_40 = value;
	}
};

struct XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5_StaticFields
{
public:
	// System.Type modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XsdValidatingReader::TypeOfString
	Type_t * ___TypeOfString_41;

public:
	inline static int32_t get_offset_of_TypeOfString_41() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5_StaticFields, ___TypeOfString_41)); }
	inline Type_t * get_TypeOfString_41() const { return ___TypeOfString_41; }
	inline Type_t ** get_address_of_TypeOfString_41() { return &___TypeOfString_41; }
	inline void set_TypeOfString_41(Type_t * value)
	{
		___TypeOfString_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeOfString_41), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Xml.CachingEventHandler
struct CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D  : public XmlSchemaParticle_tB790C2363C7041009BE94F64F031BDDA1E389671
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isAbstract
	bool ___isAbstract_13;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::hasAbstractAttribute
	bool ___hasAbstractAttribute_14;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isNillable
	bool ___isNillable_15;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::hasNillableAttribute
	bool ___hasNillableAttribute_16;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isLocalTypeDerivationChecked
	bool ___isLocalTypeDerivationChecked_17;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::block
	int32_t ___block_18;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::final
	int32_t ___final_19;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaElement::form
	int32_t ___form_20;
	// System.String System.Xml.Schema.XmlSchemaElement::defaultValue
	String_t* ___defaultValue_21;
	// System.String System.Xml.Schema.XmlSchemaElement::fixedValue
	String_t* ___fixedValue_22;
	// System.String System.Xml.Schema.XmlSchemaElement::name
	String_t* ___name_23;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::refName
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___refName_24;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::substitutionGroup
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___substitutionGroup_25;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::typeName
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___typeName_26;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::type
	XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * ___type_27;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::qualifiedName
	XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * ___qualifiedName_28;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::elementType
	XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * ___elementType_29;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::blockResolved
	int32_t ___blockResolved_30;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::finalResolved
	int32_t ___finalResolved_31;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaElement::constraints
	XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 * ___constraints_32;
	// System.Xml.Schema.SchemaElementDecl System.Xml.Schema.XmlSchemaElement::elementDecl
	SchemaElementDecl_t1D19D717C111EFE96DCB86F7A029BE5E2616C466 * ___elementDecl_33;

public:
	inline static int32_t get_offset_of_isAbstract_13() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___isAbstract_13)); }
	inline bool get_isAbstract_13() const { return ___isAbstract_13; }
	inline bool* get_address_of_isAbstract_13() { return &___isAbstract_13; }
	inline void set_isAbstract_13(bool value)
	{
		___isAbstract_13 = value;
	}

	inline static int32_t get_offset_of_hasAbstractAttribute_14() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___hasAbstractAttribute_14)); }
	inline bool get_hasAbstractAttribute_14() const { return ___hasAbstractAttribute_14; }
	inline bool* get_address_of_hasAbstractAttribute_14() { return &___hasAbstractAttribute_14; }
	inline void set_hasAbstractAttribute_14(bool value)
	{
		___hasAbstractAttribute_14 = value;
	}

	inline static int32_t get_offset_of_isNillable_15() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___isNillable_15)); }
	inline bool get_isNillable_15() const { return ___isNillable_15; }
	inline bool* get_address_of_isNillable_15() { return &___isNillable_15; }
	inline void set_isNillable_15(bool value)
	{
		___isNillable_15 = value;
	}

	inline static int32_t get_offset_of_hasNillableAttribute_16() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___hasNillableAttribute_16)); }
	inline bool get_hasNillableAttribute_16() const { return ___hasNillableAttribute_16; }
	inline bool* get_address_of_hasNillableAttribute_16() { return &___hasNillableAttribute_16; }
	inline void set_hasNillableAttribute_16(bool value)
	{
		___hasNillableAttribute_16 = value;
	}

	inline static int32_t get_offset_of_isLocalTypeDerivationChecked_17() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___isLocalTypeDerivationChecked_17)); }
	inline bool get_isLocalTypeDerivationChecked_17() const { return ___isLocalTypeDerivationChecked_17; }
	inline bool* get_address_of_isLocalTypeDerivationChecked_17() { return &___isLocalTypeDerivationChecked_17; }
	inline void set_isLocalTypeDerivationChecked_17(bool value)
	{
		___isLocalTypeDerivationChecked_17 = value;
	}

	inline static int32_t get_offset_of_block_18() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___block_18)); }
	inline int32_t get_block_18() const { return ___block_18; }
	inline int32_t* get_address_of_block_18() { return &___block_18; }
	inline void set_block_18(int32_t value)
	{
		___block_18 = value;
	}

	inline static int32_t get_offset_of_final_19() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___final_19)); }
	inline int32_t get_final_19() const { return ___final_19; }
	inline int32_t* get_address_of_final_19() { return &___final_19; }
	inline void set_final_19(int32_t value)
	{
		___final_19 = value;
	}

	inline static int32_t get_offset_of_form_20() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___form_20)); }
	inline int32_t get_form_20() const { return ___form_20; }
	inline int32_t* get_address_of_form_20() { return &___form_20; }
	inline void set_form_20(int32_t value)
	{
		___form_20 = value;
	}

	inline static int32_t get_offset_of_defaultValue_21() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___defaultValue_21)); }
	inline String_t* get_defaultValue_21() const { return ___defaultValue_21; }
	inline String_t** get_address_of_defaultValue_21() { return &___defaultValue_21; }
	inline void set_defaultValue_21(String_t* value)
	{
		___defaultValue_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_21), (void*)value);
	}

	inline static int32_t get_offset_of_fixedValue_22() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___fixedValue_22)); }
	inline String_t* get_fixedValue_22() const { return ___fixedValue_22; }
	inline String_t** get_address_of_fixedValue_22() { return &___fixedValue_22; }
	inline void set_fixedValue_22(String_t* value)
	{
		___fixedValue_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixedValue_22), (void*)value);
	}

	inline static int32_t get_offset_of_name_23() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___name_23)); }
	inline String_t* get_name_23() const { return ___name_23; }
	inline String_t** get_address_of_name_23() { return &___name_23; }
	inline void set_name_23(String_t* value)
	{
		___name_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_23), (void*)value);
	}

	inline static int32_t get_offset_of_refName_24() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___refName_24)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_refName_24() const { return ___refName_24; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_refName_24() { return &___refName_24; }
	inline void set_refName_24(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___refName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refName_24), (void*)value);
	}

	inline static int32_t get_offset_of_substitutionGroup_25() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___substitutionGroup_25)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_substitutionGroup_25() const { return ___substitutionGroup_25; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_substitutionGroup_25() { return &___substitutionGroup_25; }
	inline void set_substitutionGroup_25(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___substitutionGroup_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___substitutionGroup_25), (void*)value);
	}

	inline static int32_t get_offset_of_typeName_26() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___typeName_26)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_typeName_26() const { return ___typeName_26; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_typeName_26() { return &___typeName_26; }
	inline void set_typeName_26(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___typeName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_26), (void*)value);
	}

	inline static int32_t get_offset_of_type_27() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___type_27)); }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * get_type_27() const { return ___type_27; }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 ** get_address_of_type_27() { return &___type_27; }
	inline void set_type_27(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * value)
	{
		___type_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_27), (void*)value);
	}

	inline static int32_t get_offset_of_qualifiedName_28() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___qualifiedName_28)); }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * get_qualifiedName_28() const { return ___qualifiedName_28; }
	inline XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD ** get_address_of_qualifiedName_28() { return &___qualifiedName_28; }
	inline void set_qualifiedName_28(XmlQualifiedName_tF72E1729FE6150B6ADABFE331F26F5E743E15BAD * value)
	{
		___qualifiedName_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qualifiedName_28), (void*)value);
	}

	inline static int32_t get_offset_of_elementType_29() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___elementType_29)); }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * get_elementType_29() const { return ___elementType_29; }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 ** get_address_of_elementType_29() { return &___elementType_29; }
	inline void set_elementType_29(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * value)
	{
		___elementType_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementType_29), (void*)value);
	}

	inline static int32_t get_offset_of_blockResolved_30() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___blockResolved_30)); }
	inline int32_t get_blockResolved_30() const { return ___blockResolved_30; }
	inline int32_t* get_address_of_blockResolved_30() { return &___blockResolved_30; }
	inline void set_blockResolved_30(int32_t value)
	{
		___blockResolved_30 = value;
	}

	inline static int32_t get_offset_of_finalResolved_31() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___finalResolved_31)); }
	inline int32_t get_finalResolved_31() const { return ___finalResolved_31; }
	inline int32_t* get_address_of_finalResolved_31() { return &___finalResolved_31; }
	inline void set_finalResolved_31(int32_t value)
	{
		___finalResolved_31 = value;
	}

	inline static int32_t get_offset_of_constraints_32() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___constraints_32)); }
	inline XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 * get_constraints_32() const { return ___constraints_32; }
	inline XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 ** get_address_of_constraints_32() { return &___constraints_32; }
	inline void set_constraints_32(XmlSchemaObjectCollection_t6DCC2B614786CE467B1572B384A163DEE72F1280 * value)
	{
		___constraints_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraints_32), (void*)value);
	}

	inline static int32_t get_offset_of_elementDecl_33() { return static_cast<int32_t>(offsetof(XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D, ___elementDecl_33)); }
	inline SchemaElementDecl_t1D19D717C111EFE96DCB86F7A029BE5E2616C466 * get_elementDecl_33() const { return ___elementDecl_33; }
	inline SchemaElementDecl_t1D19D717C111EFE96DCB86F7A029BE5E2616C466 ** get_address_of_elementDecl_33() { return &___elementDecl_33; }
	inline void set_elementDecl_33(SchemaElementDecl_t1D19D717C111EFE96DCB86F7A029BE5E2616C466 * value)
	{
		___elementDecl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementDecl_33), (void*)value);
	}
};


// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A  : public XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9
{
public:
	// System.Xml.Schema.XmlSchemaSimpleTypeContent System.Xml.Schema.XmlSchemaSimpleType::content
	XmlSchemaSimpleTypeContent_t87EF2A2F4B2F3D7827EA18B0FCB8393EA0201A3E * ___content_19;

public:
	inline static int32_t get_offset_of_content_19() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A, ___content_19)); }
	inline XmlSchemaSimpleTypeContent_t87EF2A2F4B2F3D7827EA18B0FCB8393EA0201A3E * get_content_19() const { return ___content_19; }
	inline XmlSchemaSimpleTypeContent_t87EF2A2F4B2F3D7827EA18B0FCB8393EA0201A3E ** get_address_of_content_19() { return &___content_19; }
	inline void set_content_19(XmlSchemaSimpleTypeContent_t87EF2A2F4B2F3D7827EA18B0FCB8393EA0201A3E * value)
	{
		___content_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_19), (void*)value);
	}
};


// System.Xml.Schema.XmlValueGetter
struct XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Xml.AttributePSVIInfo[]
struct AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * m_Items[1];

public:
	inline AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Xml.XmlCharType System.Xml.XmlCharType::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  XmlCharType_get_Instance_mEAAD3E43BD5AC72FA94C12096B2A9C9684557210 (const RuntimeMethod* method);
// System.Void System.Xml.XmlReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReader__ctor_mC2DEF8F2F0D68263FE0A20A34B5B4D999C72B769 (XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNamespaceManager__ctor_m91AF661F916CA539FAB6EC1F0E5B93BA312BCEEE (XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * __this, XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable0, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::get_ValidationFlags()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlReaderSettings_get_ValidationFlags_m89FED9E7941956F89CE39987E9B73BDE4E05A731_inline (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_Init_m85810F6C7F4730EEB1CEACCCD1B6A614408FEACA (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::SetupValidator(System.Xml.XmlReaderSettings,System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_SetupValidator_mF2515C3F155F79D88C4C11A966C0F76DDF01CB5D (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * ___readerSettings0, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader1, XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * ___partialValidationType2, const RuntimeMethod* method);
// System.Xml.Schema.ValidationEventHandler System.Xml.XmlReaderSettings::GetEventHandler()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * XmlReaderSettings_GetEventHandler_m8EA4503D608F4AF8F1737AF9347AFAF1953D6A0A_inline (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlResolver,System.Xml.XmlReaderSettings,System.Xml.Schema.XmlSchemaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader__ctor_m895625E55BAEEED246A47FD8240D72A33C7C0C92 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___xmlResolver1, XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * ___readerSettings2, XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * ___partialValidationType3, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6 (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlValueGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlValueGetter__ctor_mDFBA4B35927F63FB2BA3373FF55EAC08E5EF0364 (XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaInfo__ctor_mA3F669856B242259DCB51C2BD3EA41038F701FEB (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::get_Schemas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * XmlReaderSettings_get_Schemas_m092542FE9F7250CB20F32A02E11534E90DD82D56 (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::.ctor(System.Xml.XmlNameTable,System.Xml.Schema.XmlSchemaSet,System.Xml.IXmlNamespaceResolver,System.Xml.Schema.XmlSchemaValidationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator__ctor_m21D7A11470C053C16DF4995DB654E86C79C80857 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable0, XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * ___schemas1, RuntimeObject* ___namespaceResolver2, int32_t ___validationFlags3, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::set_XmlResolver(System.Xml.XmlResolver)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XmlSchemaValidator_set_XmlResolver_mBD191D531B90E42D6D0ECB16A51718497F82C2C6_inline (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___value0, const RuntimeMethod* method);
// System.Uri System.Xml.XmlConvert::ToUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * XmlConvert_ToUri_mBEED3A5DD904ACCFABCCD656E5BF9DFD0DD0A48C (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::set_SourceUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_set_SourceUri_m4FB157E39496935DF3B9FBE32F3E684ECDA27B17 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::set_ValidationEventSender(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XmlSchemaValidator_set_ValidationEventSender_mC9B13895979D2742F51BB6FDE65E4449DC115062_inline (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_add_ValidationEventHandler_m26B324871434A81B1A18F02C3DEDCF1F6F12289A (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::set_LineInfoProvider(System.Xml.IXmlLineInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_set_LineInfoProvider_m6C8C8C942E82F1D5DDCEC34AC734E2CA2235EEC1 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XmlSchemaValidator::get_ProcessSchemaHints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlSchemaValidator_get_ProcessSchemaHints_mAEDDC54847A7F6B7C47D926F058896392378360A (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaValidator::get_SchemaSet()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * XmlSchemaValidator_get_SchemaSet_mD7A7967F25B07ABD9B1816DE7E91F3B5F580327F_inline (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, const RuntimeMethod* method);
// System.Xml.XmlReaderSettings System.Xml.Schema.XmlSchemaSet::get_ReaderSettings()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * XmlSchemaSet_get_ReaderSettings_mDE46E12D557EFDBE1CDE4FB82AC9BFDB179CA3BC_inline (XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * __this, const RuntimeMethod* method);
// System.Xml.DtdProcessing System.Xml.XmlReaderSettings::get_DtdProcessing()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlReaderSettings_get_DtdProcessing_m9A26B00E1047537404699EF2AAA1444F0A26C2F2_inline (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_DtdProcessing(System.Xml.DtdProcessing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderSettings_set_DtdProcessing_mE6A359CCFDA42CB3306DC5D5846CE01353CFC2F5 (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::SetDtdSchemaInfo(System.Xml.IDtdInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_SetDtdSchemaInfo_mD46880C3B361C7909FEBD7D9AEBD738248DC1C41 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, RuntimeObject* ___dtdSchemaInfo0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::Initialize(System.Xml.Schema.XmlSchemaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_Initialize_m534AFA775A5C69FD8920403F2302E1E2D0C6D43B (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * ___partialValidationType0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_Initialize_m5553D7F360AA4156C222AA96B97FE31547EA2BEE (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, const RuntimeMethod* method);
// System.Xml.XmlReaderSettings System.Xml.XmlReaderSettings::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * XmlReaderSettings_Clone_mBDADF83225E07432CA74C6A1BAD85930796891F0 (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderSettings__ctor_mA092AC14229264BE95E505CD336F85CE40D7F9DE (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_Schemas(System.Xml.Schema.XmlSchemaSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderSettings_set_Schemas_mD854A8F396A6E7AA74544FE32FD0EEA8BC0F614B (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_ValidationType(System.Xml.ValidationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderSettings_set_ValidationType_mC4CC9AD0FDEA9391D9A0EA87B9C0036A423E9CCD (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.Schema.XmlSchemaValidator::get_ValidationFlags()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlSchemaValidator_get_ValidationFlags_m2E7C8957A9816ACFF43C40E045E7DA7FA352EF4D_inline (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_ValidationFlags(System.Xml.Schema.XmlSchemaValidationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderSettings_set_ValidationFlags_m50E6AA00B0F2E3A30C493085C8AE693D17D556C5 (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_ReadOnly(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XmlReaderSettings_set_ReadOnly_mE10CB07BB78FCCE8406261229BD32DA8559FE540_inline (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, bool ___value0, const RuntimeMethod* method);
// System.Xml.XmlNodeType System.Xml.ValidatingReaderNodeData::get_NodeType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ValidatingReaderNodeData_get_NodeType_m0A6E5091F3FE3F7EC6D92CECD150763159D427FD_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaValidator::get_CurrentContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlSchemaValidator_get_CurrentContentType_m4522F5CCA3E16C7F32CB5DE050F1636194DE3865 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, const RuntimeMethod* method);
// System.String System.Xml.ValidatingReaderNodeData::get_Namespace()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ValidatingReaderNodeData_get_Namespace_m665D8181BB49C284A46295E7B8C2F17F4C1AFE53_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method);
// System.String System.Xml.Schema.XmlSchemaValidator::GetDefaultAttributePrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlSchemaValidator_GetDefaultAttributePrefix_m4376DB0F0F091D31333F140EED5C465A0678337A (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, String_t* ___attributeNS0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.Xml.ValidatingReaderNodeData::get_LocalName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ValidatingReaderNodeData_get_LocalName_mD8F76DD6578DA1E592371099C12CB1C5490BEECD_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.String System.Xml.ValidatingReaderNodeData::get_Prefix()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ValidatingReaderNodeData_get_Prefix_mD43D0F3E03CE33FD3A9056B6F45D957D95D43A7A_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method);
// System.String System.Xml.ValidatingReaderNodeData::get_RawValue()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ValidatingReaderNodeData_get_RawValue_m9423A1244D964F62AC3382E6C22AD73A25163235_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.ValidatingReaderNodeData::get_Depth()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ValidatingReaderNodeData_get_Depth_mF0AB24A1198767166226CEF7681E36ECF407671D_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaInfo::get_ContentType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlSchemaInfo_get_ContentType_m77897D691202B05FBD0C1C7F69CA73F3DF35924F_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaInfo::get_SchemaType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * XmlSchemaInfo_get_SchemaType_m413D24A7AC6C0775A0538316E5BA013E647A7137_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::get_Datatype()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * XmlSchemaType_get_Datatype_m2322612F38435EFB3B49E62EA23DB6408BF6BF54_inline (XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaInfo System.Xml.XsdValidatingReader::get_AttributeSchemaInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * XsdValidatingReader_get_AttributeSchemaInfo_mA54864779AA1E3BAC906B150BE61C6DA7781CCCD (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Xml.ValidatingReaderNodeData System.Xml.XsdValidatingReader::GetDefaultAttribute(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * XsdValidatingReader_GetDefaultAttribute_m319560394B573921789FA729CF7D0A819E6DD57A (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___name0, bool ___updatePosition1, const RuntimeMethod* method);
// System.Xml.ValidatingReaderNodeData System.Xml.XsdValidatingReader::GetDefaultAttribute(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * XsdValidatingReader_GetDefaultAttribute_m886683896C8C7B89F525CC84B2D1E37D1E9EFB8C (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___attrLocalName0, String_t* ___ns1, bool ___updatePosition2, const RuntimeMethod* method);
// System.Xml.AttributePSVIInfo System.Xml.XsdValidatingReader::GetAttributePSVI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * XsdValidatingReader_GetAttributePSVI_mE8EC1E880CFF68F8BDCA75280BA5117BE09D3D3D (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Xml.AttributePSVIInfo System.Xml.ValidatingReaderNodeData::get_AttInfo()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * ValidatingReaderNodeData_get_AttInfo_mA1CC10671610DCE1466169A47AC69EAC96A4B993_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method);
// System.Void System.Xml.ReadContentAsBinaryHelper::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadContentAsBinaryHelper_Finish_mA945E4969A417235AB755CA077A631794F3C172F (ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::ProcessReaderEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ProcessReaderEvent_m722FC0B61083823F7FC17DD03600E9B81BBBCF1D (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::EndValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_EndValidation_m32D3C67F28B51043C99E237EA8E6D9F0F669949F (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::ProcessInlineSchema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ProcessInlineSchema_m343CC25820C5022EAD0D6D5D4C6948230F6A17C9 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::ClearAttributesInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ClearAttributesInfo_m1EC9BD9A9145BD5091AF0961E7A6B539C6DD97C8 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XmlSchemaInfo::get_IsUnionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlSchemaInfo_get_IsUnionType_mB1E024466A8CD77B36D5D33E17FDA28FA0367E03 (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XmlSchemaInfo::get_IsDefault()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::SkipToEndElement(System.Xml.Schema.XmlSchemaInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_SkipToEndElement_m20D060EC0B88FFDCF06632178FE2CF2B4EB7AB65 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * ___schemaInfo0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1F94EA1226068BD1B7EAA1B836A59C99979F579E (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, const RuntimeMethod* method);
// System.Xml.ValidatingReaderNodeData System.Xml.XsdValidatingReader::CreateDummyTextNode(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * XsdValidatingReader_CreateDummyTextNode_m63BAF57EC15ED06ED442B5521C62C887CC5A9B46 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___attributeValue0, int32_t ___depth1, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::GetIsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_GetIsDefault_m5498C296A342BF23079FB179DD01F8FC1F008230 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XmlSchemaInfo::get_IsNil()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XmlSchemaInfo_get_IsNil_mAED336D8A790E5B35251D6804D4E5BEDB190409C_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaValidity System.Xml.Schema.XmlSchemaInfo::get_Validity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlSchemaInfo_get_Validity_mA52D9F702D24A830CE1CD9C129293702F90D3924_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::GetMemberType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_GetMemberType_m866701B4F3C840CBC568FAC18BFD1480EBFDC221 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaInfo::get_MemberType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * XmlSchemaInfo_get_MemberType_m2CD5F67195CABE679D3643DA6A550A6FD43A49B2_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaInfo::get_SchemaElement()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * XmlSchemaInfo_get_SchemaElement_mD5FF5600CD686A883DFFDE4E953AA3EE842913C3_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaInfo::get_SchemaAttribute()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B * XmlSchemaInfo_get_SchemaAttribute_mFC3EA434A7F15923970FA1DBEE84FE21BFE9708C_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::ProcessElementEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ProcessElementEvent_m2DC0A3D923DC437A428C19211B835CBEF24F879E (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateWhitespace(System.Xml.Schema.XmlValueGetter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_ValidateWhitespace_m9105BE38EC4B852C5843747C5679C479A7B1A8BE (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * ___elementValue0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateText(System.Xml.Schema.XmlValueGetter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_ValidateText_mEC98CA08C8049A6A223B891C5B87E7967F6FB4E6 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * ___elementValue0, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::ProcessEndElementEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ProcessEndElementEvent_m75F9D9D9E983A05EE3781796BA2643C030F289C9 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XsdValidatingReader::IsXSDRoot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_IsXSDRoot_mA688FC148DC47A8B448584DD326AC4BCE2AAC1BC (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaInfo::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaInfo_Clear_m9505DA955F34689416DC8DEA4816A879675C3B4C (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Xml.Schema.SchemaNames System.Xml.Schema.XmlSchemaSet::GetSchemaNames(System.Xml.XmlNameTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 * XmlSchemaSet_GetSchemaNames_mB1DBEA05D74F6A05A906029EE08B08A0CE95A41F (XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * __this, XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nt0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.Parser::.ctor(System.Xml.Schema.SchemaType,System.Xml.XmlNameTable,System.Xml.Schema.SchemaNames,System.Xml.Schema.ValidationEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mCAE678571A7DD523F4D78EDF5BE29109E92546FB (Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * __this, int32_t ___schemaType0, XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable1, SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 * ___schemaNames2, ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * ___eventHandler3, const RuntimeMethod* method);
// System.Void System.Xml.Schema.Parser::StartParsing(System.Xml.XmlReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_StartParsing_m2B720703BC796D9695E4AD9CB3A9D84F9D3088D0 (Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, String_t* ___targetNamespace1, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.Parser::ParseReaderNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseReaderNode_mED9C349925499459D94E658A18691C2B8F9119A4 (Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Ref::Equal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00 (String_t* ___strA0, String_t* ___strB1, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateElement(System.String,System.String,System.Xml.Schema.XmlSchemaInfo,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_ValidateElement_m61AC91E4271334755060BE164544EC07D9A9383F (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, String_t* ___localName0, String_t* ___namespaceUri1, XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * ___schemaInfo2, String_t* ___xsiType3, String_t* ___xsiNil4, String_t* ___xsiSchemaLocation5, String_t* ___xsiNoNamespaceSchemaLocation6, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::ValidateAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ValidateAttributes_mD05E6D7BB9625D94A1616B348B70A04A26E8A805 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateEndOfAttributes(System.Xml.Schema.XmlSchemaInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_ValidateEndOfAttributes_m6795FD739AECBCE7DA9E978ABC51392BC587E532 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * ___schemaInfo0, const RuntimeMethod* method);
// System.Object System.Xml.Schema.XmlSchemaValidator::ValidateEndElement(System.Xml.Schema.XmlSchemaInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlSchemaValidator_ValidateEndElement_mF63F5F6AB7428530BD1973EBF6B319E4B8119486 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * ___schemaInfo0, const RuntimeMethod* method);
// System.String System.Xml.XsdValidatingReader::GetOriginalAtomicValueStringOfElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_GetOriginalAtomicValueStringOfElement_m1630A664BBF86AADC4E3C6F83A330E8ADC7237D2 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Xml.XsdCachingReader System.Xml.XsdValidatingReader::GetCachingReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * XsdValidatingReader_GetCachingReader_mF33698664D3DF4B31EA3C10BC727F6033989E5AB (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaInfo::get_XmlType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * XmlSchemaInfo_get_XmlType_m973F86FEE3CAD715D8290025248DEAF326E1813B (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlSchemaType::get_ValueConverter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * XmlSchemaType_get_ValueConverter_m5CD7C260106A4DCBAE6A160823EB242F5BC9941E (XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * __this, const RuntimeMethod* method);
// System.Xml.ValidatingReaderNodeData System.Xml.XsdCachingReader::RecordTextNode(System.String,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * XsdCachingReader_RecordTextNode_m81595BD7367E8EDAAFC172BB67218658CE8A335F (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, String_t* ___textValue0, String_t* ___originalStringValue1, int32_t ___depth2, int32_t ___lineNo3, int32_t ___linePos4, const RuntimeMethod* method);
// System.Void System.Xml.XsdCachingReader::RecordEndElementNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdCachingReader_RecordEndElementNode_m5AFEE59E51FB8CB764A42D62E4111E68D674CFBB (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XsdCachingReader::SetToReplayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdCachingReader_SetToReplayMode_mE3A6B50BC6DFF867D3FE67CBE0B60E0E1898AB20 (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, const RuntimeMethod* method);
// System.Xml.AttributePSVIInfo System.Xml.XsdValidatingReader::AddAttributePSVI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * XsdValidatingReader_AddAttributePSVI_m9C63491571E684A954FFBF35C1EE2243AC33AEB8 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, int32_t ___attIndex0, const RuntimeMethod* method);
// System.Object System.Xml.Schema.XmlSchemaValidator::ValidateAttribute(System.String,System.String,System.Xml.Schema.XmlValueGetter,System.Xml.Schema.XmlSchemaInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlSchemaValidator_ValidateAttribute_m164F9C6AB7E6FDD2726E4BFF3DAC01CC2B0F1112 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, String_t* ___localName0, String_t* ___namespaceUri1, XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * ___attributeValue2, XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * ___schemaInfo3, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaInfo::set_Validity(System.Xml.Schema.XmlSchemaValidity)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XmlSchemaInfo_set_Validity_mE43C075415C50FAD9951AEC92D91A08F437DF9BC_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::GetUnspecifiedDefaultAttributes(System.Collections.ArrayList,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_GetUnspecifiedDefaultAttributes_mF095D750B9EC2A46E341D708AA2DAF20AE181A0A (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___defaultAttributes0, bool ___createNodeData1, const RuntimeMethod* method);
// System.Void System.Xml.ValidateNames::SplitQName(System.String,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateNames_SplitQName_m7CB5F05E3C3C2C3A0FA388DA7389E88BFCE0591D (String_t* ___name0, String_t** ___prefix1, String_t** ___lname2, const RuntimeMethod* method);
// System.Xml.AttributePSVIInfo System.Xml.XsdValidatingReader::GetAttributePSVI(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * XsdValidatingReader_GetAttributePSVI_m2086BD37841978079FE736B8E916223ED109D551 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method);
// System.Void System.Xml.AttributePSVIInfo::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributePSVIInfo_Reset_mCA8C4CEDF39DDCCB70519FAE28C51B4757E6BB60 (AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.Xml.AttributePSVIInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributePSVIInfo__ctor_m179040B65F68D7802BD4A398B169A70FE563B285 (AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * __this, const RuntimeMethod* method);
// System.Xml.Schema.SchemaType System.Xml.Schema.Parser::FinishParsing()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Parser_FinishParsing_m443D8C585A12C5601FC3E171B8720E0A52D1FDFC_inline (Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchema System.Xml.Schema.Parser::get_XmlSchema()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * Parser_get_XmlSchema_mF4616651AA57B08D39F850C0225CC86C0296D963_inline (Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaValidator::AddSchema(System.Xml.Schema.XmlSchema)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaValidator_AddSchema_m295A52A9C2FA6F15267508249D58AA1C8FC82F7C (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * ___schema0, const RuntimeMethod* method);
// System.Void System.Xml.XsdCachingReader::SwitchTextNodeAndEndElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdCachingReader_SwitchTextNodeAndEndElement_m35E29C5C0030E9236697990D55E27F6BEB12F327 (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, String_t* ___textValue0, String_t* ___originalStringValue1, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XmlSchemaInfo::get_HasDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlSchemaInfo_get_HasDefaultValue_mB92691DCD64A51A3EDED71349C679DF837233A42 (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XsdValidatingReader::ReadAheadForMemberType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ReadAheadForMemberType_mEC899F9EF6F531077A5F22E643A54FFACF64683F (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method);
// System.Void System.Xml.CachingEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachingEventHandler__ctor_mFF22B7B986AA934E4918DBA2541024257231F2F5 (CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Xml.XsdCachingReader::.ctor(System.Xml.XmlReader,System.Xml.IXmlLineInfo,System.Xml.CachingEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdCachingReader__ctor_mD427EF9C114B53C4873763730F47AC0738CEDF62 (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, RuntimeObject* ___lineInfo1, CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6 * ___handlerMethod2, const RuntimeMethod* method);
// System.Void System.Xml.XsdCachingReader::Reset(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdCachingReader_Reset_m06DD32BD7C249F1E0EE1FFA71E1FC71B01DF1B51 (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, const RuntimeMethod* method);
// System.Void System.Xml.ValidatingReaderNodeData::.ctor(System.Xml.XmlNodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidatingReaderNodeData__ctor_m76D1896B70DF9B1C4C6F052BA2CA3C6E47A33D2C (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, int32_t ___nodeType0, const RuntimeMethod* method);
// System.Void System.Xml.ValidatingReaderNodeData::set_Depth(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValidatingReaderNodeData_set_Depth_m9700A8C585C8030F9CF3F35415FFABD4C115D210_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Xml.ValidatingReaderNodeData::set_RawValue(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValidatingReaderNodeData_set_RawValue_mE3CBAC0F908D97155CA10A935461B723CC9A6919_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Xml.XmlReader System.Xml.XsdCachingReader::GetCoreReader()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * XsdCachingReader_GetCoreReader_m0E9B56C4CDD74BA165A246EFF92FE5683E7FCDED_inline (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, const RuntimeMethod* method);
// System.Xml.IXmlLineInfo System.Xml.XsdCachingReader::GetLineInfo()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* XsdCachingReader_GetLineInfo_m9F6BCA2D58E2BE98F8BB2EA5EB462040C3B2D234_inline (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, const RuntimeMethod* method);
// System.String System.Xml.Schema.XmlSchemaElement::get_DefaultValue()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* XmlSchemaElement_get_DefaultValue_m3D061C2C39BABA68ADD2D91101E02B4911FD6BB9_inline (XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * __this, const RuntimeMethod* method);
// System.String System.Xml.Schema.XmlSchemaElement::get_FixedValue()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* XmlSchemaElement_get_FixedValue_m60A08365AE37E004EF5601418CFBB1AA2B1F2556_inline (XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * __this, const RuntimeMethod* method);
// System.String System.Xml.Schema.XmlSchemaValidator::GetConcatenatedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlSchemaValidator_GetConcatenatedValue_mE42DF0BB3E5BE32162BD1C6F9D85B08AC8C56167 (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.Runtime.StringConcat::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConcat_Clear_m03C1710FADCD2580A01A47B92B406938564CF681 (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.Xsl.Runtime.StringConcat::get_Count()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184_inline (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.String System.Xml.Xsl.Runtime.StringConcat::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Xml.Xsl.Runtime.StringConcat::ConcatNoDelimiter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, String_t* ___s0, const RuntimeMethod* method);
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
// System.Void System.Xml.XsdValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlResolver,System.Xml.XmlReaderSettings,System.Xml.Schema.XmlSchemaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader__ctor_m895625E55BAEEED246A47FD8240D72A33C7C0C92 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___xmlResolver1, XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * ___readerSettings2, XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * ___partialValidationType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader__ctor_m895625E55BAEEED246A47FD8240D72A33C7C0C92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  L_0 = XmlCharType_get_Instance_mEAAD3E43BD5AC72FA94C12096B2A9C9684557210(/*hidden argument*/NULL);
		__this->set_xmlCharType_37(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_il2cpp_TypeInfo_var);
		XmlReader__ctor_mC2DEF8F2F0D68263FE0A20A34B5B4D999C72B769(__this, /*hidden argument*/NULL);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = ___reader0;
		__this->set_coreReader_3(L_1);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_2 = ___reader0;
		__this->set_coreReaderNSResolver_4(((RuntimeObject*)IsInst((RuntimeObject*)L_2, IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427_il2cpp_TypeInfo_var)));
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = ___reader0;
		__this->set_lineInfo_38(((RuntimeObject*)IsInst((RuntimeObject*)L_3, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var)));
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_4 = __this->get_coreReader_3();
		NullCheck(L_4);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_5 = VirtFuncInvoker0< XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * >::Invoke(36 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_4);
		__this->set_coreReaderNameTable_26(L_5);
		RuntimeObject* L_6 = __this->get_coreReaderNSResolver_4();
		if (L_6)
		{
			goto IL_0061;
		}
	}
	{
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_7 = __this->get_coreReaderNameTable_26();
		XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * L_8 = (XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F *)il2cpp_codegen_object_new(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m91AF661F916CA539FAB6EC1F0E5B93BA312BCEEE(L_8, L_7, /*hidden argument*/NULL);
		__this->set_nsManager_11(L_8);
		__this->set_manageNamespaces_12((bool)1);
	}

IL_0061:
	{
		__this->set_thisNSResolver_5(__this);
		XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * L_9 = ___xmlResolver1;
		__this->set_xmlResolver_7(L_9);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_10 = ___readerSettings2;
		NullCheck(L_10);
		int32_t L_11 = XmlReaderSettings_get_ValidationFlags_m89FED9E7941956F89CE39987E9B73BDE4E05A731_inline(L_10, /*hidden argument*/NULL);
		__this->set_processInlineSchema_13((bool)((!(((uint32_t)((int32_t)((int32_t)L_11&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0));
		XsdValidatingReader_Init_m85810F6C7F4730EEB1CEACCCD1B6A614408FEACA(__this, /*hidden argument*/NULL);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_12 = ___readerSettings2;
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_13 = ___reader0;
		XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * L_14 = ___partialValidationType3;
		XsdValidatingReader_SetupValidator_mF2515C3F155F79D88C4C11A966C0F76DDF01CB5D(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_15 = ___readerSettings2;
		NullCheck(L_15);
		ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * L_16 = XmlReaderSettings_GetEventHandler_m8EA4503D608F4AF8F1737AF9347AFAF1953D6A0A_inline(L_15, /*hidden argument*/NULL);
		__this->set_validationEvent_8(L_16);
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlResolver,System.Xml.XmlReaderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader__ctor_mABAABFD6810EC294B9387742704CD2A95D395A37 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___xmlResolver1, XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * ___readerSettings2, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = ___reader0;
		XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * L_1 = ___xmlResolver1;
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_2 = ___readerSettings2;
		XsdValidatingReader__ctor_m895625E55BAEEED246A47FD8240D72A33C7C0C92(__this, L_0, L_1, L_2, (XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_Init_m85810F6C7F4730EEB1CEACCCD1B6A614408FEACA (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_Init_m85810F6C7F4730EEB1CEACCCD1B6A614408FEACA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_validationState_9(1);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_0, /*hidden argument*/NULL);
		__this->set_defaultAttributes_21(L_0);
		__this->set_currentAttrIndex_19((-1));
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_1 = (AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951*)(AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951*)SZArrayNew(AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_attributePSVINodes_20(L_1);
		XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * L_2 = (XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF *)il2cpp_codegen_object_new(XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF_il2cpp_TypeInfo_var);
		XmlValueGetter__ctor_mDFBA4B35927F63FB2BA3373FF55EAC08E5EF0364(L_2, __this, (intptr_t)((intptr_t)XsdValidatingReader_GetStringValue_m7B26377231669CB9DE33D16E5BF1DCB2C2A12C84_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_valueGetter_10(L_2);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		((XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5_StaticFields*)il2cpp_codegen_static_fields_for(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5_il2cpp_TypeInfo_var))->set_TypeOfString_41(L_4);
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_5 = (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 *)il2cpp_codegen_object_new(XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035_il2cpp_TypeInfo_var);
		XmlSchemaInfo__ctor_mA3F669856B242259DCB51C2BD3EA41038F701FEB(L_5, /*hidden argument*/NULL);
		__this->set_xmlSchemaInfo_24(L_5);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_6 = __this->get_coreReaderNameTable_26();
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_6, _stringLiteralA27E2E9EF6A0C7CC58D71302FCA9E93BA677C130);
		__this->set_NsXmlNs_29(L_7);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_8 = __this->get_coreReaderNameTable_26();
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_8, _stringLiteralCD7236D24C2A685E5C9D6FC9D0AC7D11486CB220);
		__this->set_NsXs_30(L_9);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_10 = __this->get_coreReaderNameTable_26();
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_10, _stringLiteral6F137837A6AC36446D241D345BB78254AA77DFAE);
		__this->set_NsXsi_31(L_11);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_12 = __this->get_coreReaderNameTable_26();
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_12, _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9);
		__this->set_XsiType_32(L_13);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_14 = __this->get_coreReaderNameTable_26();
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_14, _stringLiteralB5366A2D2AC98DAE978423083F8B09E5CDDC705D);
		__this->set_XsiNil_33(L_15);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_16 = __this->get_coreReaderNameTable_26();
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_16, _stringLiteral13F239F9809C279B79B6886F9B3F7CF764AEFA80);
		__this->set_XsiSchemaLocation_35(L_17);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_18 = __this->get_coreReaderNameTable_26();
		NullCheck(L_18);
		String_t* L_19 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_18, _stringLiteral8305398E4C08A0A71B9DED7B6C1F25CE3CEE6D1A);
		__this->set_XsiNoNamespaceSchemaLocation_36(L_19);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_20 = __this->get_coreReaderNameTable_26();
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_20, _stringLiteralFE7042CB74A5576F32A19F0F44A2C6E304936B11);
		__this->set_XsdSchema_34(L_21);
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::SetupValidator(System.Xml.XmlReaderSettings,System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_SetupValidator_mF2515C3F155F79D88C4C11A966C0F76DDF01CB5D (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * ___readerSettings0, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader1, XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * ___partialValidationType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_SetupValidator_mF2515C3F155F79D88C4C11A966C0F76DDF01CB5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_0 = __this->get_coreReaderNameTable_26();
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_1 = ___readerSettings0;
		NullCheck(L_1);
		XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * L_2 = XmlReaderSettings_get_Schemas_m092542FE9F7250CB20F32A02E11534E90DD82D56(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = __this->get_thisNSResolver_5();
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_4 = ___readerSettings0;
		NullCheck(L_4);
		int32_t L_5 = XmlReaderSettings_get_ValidationFlags_m89FED9E7941956F89CE39987E9B73BDE4E05A731_inline(L_4, /*hidden argument*/NULL);
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_6 = (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C *)il2cpp_codegen_object_new(XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C_il2cpp_TypeInfo_var);
		XmlSchemaValidator__ctor_m21D7A11470C053C16DF4995DB654E86C79C80857(L_6, L_0, L_2, L_3, L_5, /*hidden argument*/NULL);
		__this->set_validator_6(L_6);
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_7 = __this->get_validator_6();
		XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * L_8 = __this->get_xmlResolver_7();
		NullCheck(L_7);
		XmlSchemaValidator_set_XmlResolver_mBD191D531B90E42D6D0ECB16A51718497F82C2C6_inline(L_7, L_8, /*hidden argument*/NULL);
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_9 = __this->get_validator_6();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_10 = ___reader1;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t0ED1642D9D0E4F0F7CB233F75C42460578F8ABF7_il2cpp_TypeInfo_var);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_12 = XmlConvert_ToUri_mBEED3A5DD904ACCFABCCD656E5BF9DFD0DD0A48C(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		XmlSchemaValidator_set_SourceUri_m4FB157E39496935DF3B9FBE32F3E684ECDA27B17(L_9, L_12, /*hidden argument*/NULL);
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_13 = __this->get_validator_6();
		NullCheck(L_13);
		XmlSchemaValidator_set_ValidationEventSender_mC9B13895979D2742F51BB6FDE65E4449DC115062_inline(L_13, __this, /*hidden argument*/NULL);
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_14 = __this->get_validator_6();
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_15 = ___readerSettings0;
		NullCheck(L_15);
		ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * L_16 = XmlReaderSettings_GetEventHandler_m8EA4503D608F4AF8F1737AF9347AFAF1953D6A0A_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		XmlSchemaValidator_add_ValidationEventHandler_m26B324871434A81B1A18F02C3DEDCF1F6F12289A(L_14, L_16, /*hidden argument*/NULL);
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_17 = __this->get_validator_6();
		RuntimeObject* L_18 = __this->get_lineInfo_38();
		NullCheck(L_17);
		XmlSchemaValidator_set_LineInfoProvider_m6C8C8C942E82F1D5DDCEC34AC734E2CA2235EEC1(L_17, L_18, /*hidden argument*/NULL);
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_19 = __this->get_validator_6();
		NullCheck(L_19);
		bool L_20 = XmlSchemaValidator_get_ProcessSchemaHints_mAEDDC54847A7F6B7C47D926F058896392378360A(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_21 = __this->get_validator_6();
		NullCheck(L_21);
		XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * L_22 = XmlSchemaValidator_get_SchemaSet_mD7A7967F25B07ABD9B1816DE7E91F3B5F580327F_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_23 = XmlSchemaSet_get_ReaderSettings_mDE46E12D557EFDBE1CDE4FB82AC9BFDB179CA3BC_inline(L_22, /*hidden argument*/NULL);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_24 = ___readerSettings0;
		NullCheck(L_24);
		int32_t L_25 = XmlReaderSettings_get_DtdProcessing_m9A26B00E1047537404699EF2AAA1444F0A26C2F2_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		XmlReaderSettings_set_DtdProcessing_mE6A359CCFDA42CB3306DC5D5846CE01353CFC2F5(L_23, L_25, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_26 = __this->get_validator_6();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_27 = ___reader1;
		NullCheck(L_27);
		RuntimeObject* L_28 = VirtFuncInvoker0< RuntimeObject* >::Invoke(52 /* System.Xml.IDtdInfo System.Xml.XmlReader::get_DtdInfo() */, L_27);
		NullCheck(L_26);
		XmlSchemaValidator_SetDtdSchemaInfo_mD46880C3B361C7909FEBD7D9AEBD738248DC1C41(L_26, L_28, /*hidden argument*/NULL);
		XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * L_29 = ___partialValidationType2;
		if (!L_29)
		{
			goto IL_00c1;
		}
	}
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_30 = __this->get_validator_6();
		XmlSchemaObject_tB5695348FF2B08149CAE95CD10F39F21EDB1F57B * L_31 = ___partialValidationType2;
		NullCheck(L_30);
		XmlSchemaValidator_Initialize_m534AFA775A5C69FD8920403F2302E1E2D0C6D43B(L_30, L_31, /*hidden argument*/NULL);
		return;
	}

IL_00c1:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_32 = __this->get_validator_6();
		NullCheck(L_32);
		XmlSchemaValidator_Initialize_m5553D7F360AA4156C222AA96B97FE31547EA2BEE(L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlReaderSettings System.Xml.XsdValidatingReader::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * XsdValidatingReader_get_Settings_mEC8699503227ECFDAFA0D4EA87DC6EAFF3BD9107 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_get_Settings_mEC8699503227ECFDAFA0D4EA87DC6EAFF3BD9107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * V_0 = NULL;
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_1 = VirtFuncInvoker0< XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * >::Invoke(5 /* System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings() */, L_0);
		V_0 = L_1;
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_3 = V_0;
		NullCheck(L_3);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_4 = XmlReaderSettings_Clone_mBDADF83225E07432CA74C6A1BAD85930796891F0(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0016:
	{
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_5 = V_0;
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_6 = (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 *)il2cpp_codegen_object_new(XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65_il2cpp_TypeInfo_var);
		XmlReaderSettings__ctor_mA092AC14229264BE95E505CD336F85CE40D7F9DE(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_001f:
	{
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_7 = V_0;
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_8 = __this->get_validator_6();
		NullCheck(L_8);
		XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * L_9 = XmlSchemaValidator_get_SchemaSet_mD7A7967F25B07ABD9B1816DE7E91F3B5F580327F_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		XmlReaderSettings_set_Schemas_mD854A8F396A6E7AA74544FE32FD0EEA8BC0F614B(L_7, L_9, /*hidden argument*/NULL);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_10 = V_0;
		NullCheck(L_10);
		XmlReaderSettings_set_ValidationType_mC4CC9AD0FDEA9391D9A0EA87B9C0036A423E9CCD(L_10, 4, /*hidden argument*/NULL);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_11 = V_0;
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_12 = __this->get_validator_6();
		NullCheck(L_12);
		int32_t L_13 = XmlSchemaValidator_get_ValidationFlags_m2E7C8957A9816ACFF43C40E045E7DA7FA352EF4D_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		XmlReaderSettings_set_ValidationFlags_m50E6AA00B0F2E3A30C493085C8AE693D17D556C5(L_11, L_13, /*hidden argument*/NULL);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_14 = V_0;
		NullCheck(L_14);
		XmlReaderSettings_set_ReadOnly_mE10CB07BB78FCCE8406261229BD32DA8559FE540_inline(L_14, (bool)1, /*hidden argument*/NULL);
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_15 = V_0;
		return L_15;
	}
}
// System.Xml.XmlNodeType System.Xml.XsdValidatingReader::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdValidatingReader_get_NodeType_m6A6A898DA251A87123BA3822909606265ED12972 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_1 = __this->get_cachedNode_15();
		NullCheck(L_1);
		int32_t L_2 = ValidatingReaderNodeData_get_NodeType_m0A6E5091F3FE3F7EC6D92CECD150763159D427FD_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0044;
		}
	}
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_6 = __this->get_validator_6();
		NullCheck(L_6);
		int32_t L_7 = XmlSchemaValidator_get_CurrentContentType_m4522F5CCA3E16C7F32CB5DE050F1636194DE3865(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_8 = __this->get_validator_6();
		NullCheck(L_8);
		int32_t L_9 = XmlSchemaValidator_get_CurrentContentType_m4522F5CCA3E16C7F32CB5DE050F1636194DE3865(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_0044;
		}
	}

IL_0041:
	{
		return (int32_t)(((int32_t)14));
	}

IL_0044:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.String System.Xml.XsdValidatingReader::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_get_Name_mFAB294150C73A961E4BAE2C611749920AD7F6CBC (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_get_Name_mFAB294150C73A961E4BAE2C611749920AD7F6CBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_005c;
		}
	}
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_1 = __this->get_validator_6();
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_2 = __this->get_cachedNode_15();
		NullCheck(L_2);
		String_t* L_3 = ValidatingReaderNodeData_get_Namespace_m665D8181BB49C284A46295E7B8C2F17F4C1AFE53_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_4 = XmlSchemaValidator_GetDefaultAttributePrefix_m4376DB0F0F091D31333F140EED5C465A0678337A(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		String_t* L_10 = V_0;
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_11 = __this->get_cachedNode_15();
		NullCheck(L_11);
		String_t* L_12 = ValidatingReaderNodeData_get_LocalName_mD8F76DD6578DA1E592371099C12CB1C5490BEECD_inline(L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_10, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		String_t* L_14 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_9, /*hidden argument*/NULL);
		return L_14;
	}

IL_0050:
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_15 = __this->get_cachedNode_15();
		NullCheck(L_15);
		String_t* L_16 = ValidatingReaderNodeData_get_LocalName_mD8F76DD6578DA1E592371099C12CB1C5490BEECD_inline(L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_005c:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_17 = __this->get_coreReader_3();
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_17);
		return L_18;
	}
}
// System.String System.Xml.XsdValidatingReader::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_get_LocalName_mC12AF9D26D422E4F1D9D04C3DA223A89F5CDD913 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_1 = __this->get_cachedNode_15();
		NullCheck(L_1);
		String_t* L_2 = ValidatingReaderNodeData_get_LocalName_mD8F76DD6578DA1E592371099C12CB1C5490BEECD_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_3);
		return L_4;
	}
}
// System.String System.Xml.XsdValidatingReader::get_NamespaceURI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_get_NamespaceURI_m7E464DA6A98027BE6EEA34306AF8E9C925C09399 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_1 = __this->get_cachedNode_15();
		NullCheck(L_1);
		String_t* L_2 = ValidatingReaderNodeData_get_Namespace_m665D8181BB49C284A46295E7B8C2F17F4C1AFE53_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_3);
		return L_4;
	}
}
// System.String System.Xml.XsdValidatingReader::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_get_Prefix_mE47A69AF0B99503B0AE342C6F8AD970659798D9E (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_1 = __this->get_cachedNode_15();
		NullCheck(L_1);
		String_t* L_2 = ValidatingReaderNodeData_get_Prefix_mD43D0F3E03CE33FD3A9056B6F45D957D95D43A7A_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_3);
		return L_4;
	}
}
// System.String System.Xml.XsdValidatingReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_get_Value_m0B9BB8966D70C965641D7DB36BF8DED9FA80B2AE (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_1 = __this->get_cachedNode_15();
		NullCheck(L_1);
		String_t* L_2 = ValidatingReaderNodeData_get_RawValue_m9423A1244D964F62AC3382E6C22AD73A25163235_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_3);
		return L_4;
	}
}
// System.Int32 System.Xml.XsdValidatingReader::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdValidatingReader_get_Depth_mEE729C5FDAE6EBBC3C3E99D8096800B17E887AA7 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_1 = __this->get_cachedNode_15();
		NullCheck(L_1);
		int32_t L_2 = ValidatingReaderNodeData_get_Depth_mF0AB24A1198767166226CEF7681E36ECF407671D_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_3);
		return L_4;
	}
}
// System.String System.Xml.XsdValidatingReader::get_BaseURI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_get_BaseURI_m2CA2A0B07BA05FF5F6B39E40B9278A1E69107720 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::get_IsEmptyElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_get_IsEmptyElement_m351F387D5B1DE9A773A38B2A09DFDBB5A40CDA7F (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_get_IsDefault_mE4B647B02D727BCEC7B0E4A0BD5563096AD5A4D8 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = __this->get_coreReader_3();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		return L_2;
	}
}
// System.Char System.Xml.XsdValidatingReader::get_QuoteChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar XsdValidatingReader_get_QuoteChar_mF7FD3E5ED41BCF4CCCAD64AB7FE6F6071FA1B8CC (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		Il2CppChar L_1 = VirtFuncInvoker0< Il2CppChar >::Invoke(16 /* System.Char System.Xml.XmlReader::get_QuoteChar() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlSpace System.Xml.XsdValidatingReader::get_XmlSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdValidatingReader_get_XmlSpace_mCD07ACD034726C203EA05FEC95E22433D9567088 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XsdValidatingReader::get_XmlLang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_get_XmlLang_m2BE9F69A9E63EE1EE903F8FF26534172D7F04254 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_XmlLang() */, L_0);
		return L_1;
	}
}
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XsdValidatingReader::get_SchemaInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XsdValidatingReader_get_SchemaInfo_m37A992A2BFC755FEE93320F05DE1C2AD0263B5E6 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Type System.Xml.XsdValidatingReader::get_ValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XsdValidatingReader_get_ValueType_mB7C3E06A0AD46EFAB54656669CED49C79F870EC7 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_get_ValueType_mB7C3E06A0AD46EFAB54656669CED49C79F870EC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0062;
		}
	}

IL_0014:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_4 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_4);
		int32_t L_5 = XmlSchemaInfo_get_ContentType_m77897D691202B05FBD0C1C7F69CA73F3DF35924F_inline(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0062;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_6 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_6);
		XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * L_7 = XmlSchemaInfo_get_SchemaType_m413D24A7AC6C0775A0538316E5BA013E647A7137_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * L_8 = XmlSchemaType_get_Datatype_m2322612F38435EFB3B49E62EA23DB6408BF6BF54_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(4 /* System.Type System.Xml.Schema.XmlSchemaDatatype::get_ValueType() */, L_8);
		return L_9;
	}

IL_0037:
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_10 = __this->get_attributePSVI_16();
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_11 = XsdValidatingReader_get_AttributeSchemaInfo_mA54864779AA1E3BAC906B150BE61C6DA7781CCCD(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = XmlSchemaInfo_get_ContentType_m77897D691202B05FBD0C1C7F69CA73F3DF35924F_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0062;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_13 = XsdValidatingReader_get_AttributeSchemaInfo_mA54864779AA1E3BAC906B150BE61C6DA7781CCCD(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * L_14 = XmlSchemaInfo_get_SchemaType_m413D24A7AC6C0775A0538316E5BA013E647A7137_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * L_15 = XmlSchemaType_get_Datatype_m2322612F38435EFB3B49E62EA23DB6408BF6BF54_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Type_t * L_16 = VirtFuncInvoker0< Type_t * >::Invoke(4 /* System.Type System.Xml.Schema.XmlSchemaDatatype::get_ValueType() */, L_15);
		return L_16;
	}

IL_0062:
	{
		Type_t * L_17 = ((XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5_StaticFields*)il2cpp_codegen_static_fields_for(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5_il2cpp_TypeInfo_var))->get_TypeOfString_41();
		il2cpp_codegen_memory_barrier();
		return L_17;
	}
}
// System.Int32 System.Xml.XsdValidatingReader::get_AttributeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdValidatingReader_get_AttributeCount_mE5B229E9FA1300F9E35597D1C894252908A5F20E (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_attributeCount_17();
		return L_0;
	}
}
// System.String System.Xml.XsdValidatingReader::GetAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_GetAttribute_mB0602FDDFC9494D64B499F15B99D596889435936 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * V_1 = NULL;
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = __this->get_attributeCount_17();
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_5 = ___name0;
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_6 = XsdValidatingReader_GetDefaultAttribute_m319560394B573921789FA729CF7D0A819E6DD57A(__this, L_5, (bool)0, /*hidden argument*/NULL);
		V_1 = L_6;
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_7 = V_1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = ValidatingReaderNodeData_get_RawValue_m9423A1244D964F62AC3382E6C22AD73A25163235_inline(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_002c:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String System.Xml.XsdValidatingReader::GetAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_GetAttribute_m375FBA779E23A25FF76BA1729C18E2E68B15A827 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___name0, String_t* ___namespaceURI1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_GetAttribute_m375FBA779E23A25FF76BA1729C18E2E68B15A827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * V_1 = NULL;
	String_t* G_B5_0 = NULL;
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		String_t* L_1 = ___name0;
		String_t* L_2 = ___namespaceURI1;
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::GetAttribute(System.String,System.String) */, L_0, L_1, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (L_4)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_5 = __this->get_attributeCount_17();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_6 = ___namespaceURI1;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_7 = __this->get_coreReaderNameTable_26();
		String_t* L_8 = ___namespaceURI1;
		NullCheck(L_7);
		String_t* L_9 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_7, L_8);
		G_B5_0 = L_9;
		goto IL_0030;
	}

IL_002b:
	{
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B5_0 = L_10;
	}

IL_0030:
	{
		___namespaceURI1 = G_B5_0;
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_11 = __this->get_coreReaderNameTable_26();
		String_t* L_12 = ___name0;
		NullCheck(L_11);
		String_t* L_13 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_11, L_12);
		___name0 = L_13;
		String_t* L_14 = ___name0;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_15 = ___namespaceURI1;
		if (L_15)
		{
			goto IL_0048;
		}
	}

IL_0046:
	{
		return (String_t*)NULL;
	}

IL_0048:
	{
		String_t* L_16 = ___name0;
		String_t* L_17 = ___namespaceURI1;
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_18 = XsdValidatingReader_GetDefaultAttribute_m886683896C8C7B89F525CC84B2D1E37D1E9EFB8C(__this, L_16, L_17, (bool)0, /*hidden argument*/NULL);
		V_1 = L_18;
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_19 = V_1;
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = ValidatingReaderNodeData_get_RawValue_m9423A1244D964F62AC3382E6C22AD73A25163235_inline(L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_005c:
	{
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.String System.Xml.XsdValidatingReader::GetAttribute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_GetAttribute_mBB5661330251BF81D3F632FD74F9771F14D4B368 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_GetAttribute_mBB5661330251BF81D3F632FD74F9771F14D4B368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_attributeCount_17();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->get_coreReaderAttributeCount_18();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		String_t* L_5 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(24 /* System.String System.Xml.XmlReader::GetAttribute(System.Int32) */, L_3, L_4);
		return L_5;
	}

IL_0020:
	{
		int32_t L_6 = ___i0;
		int32_t L_7 = __this->get_coreReaderAttributeCount_18();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_8 = __this->get_defaultAttributes_21();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_10 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(((ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F *)CastclassClass((RuntimeObject*)L_10, ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F_il2cpp_TypeInfo_var)));
		String_t* L_11 = ValidatingReaderNodeData_get_RawValue_m9423A1244D964F62AC3382E6C22AD73A25163235_inline(((ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F *)CastclassClass((RuntimeObject*)L_10, ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::MoveToAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_MoveToAttribute_mE5163AD1F00577F82ED71CBCB33F4C4FF5DC2E30 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * V_0 = NULL;
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(25 /* System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_validationState_9(3);
		String_t* L_3 = ___name0;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_4 = XsdValidatingReader_GetAttributePSVI_mE8EC1E880CFF68F8BDCA75280BA5117BE09D3D3D(__this, L_3, /*hidden argument*/NULL);
		__this->set_attributePSVI_16(L_4);
		goto IL_0057;
	}

IL_0024:
	{
		int32_t L_5 = __this->get_attributeCount_17();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_6 = ___name0;
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_7 = XsdValidatingReader_GetDefaultAttribute_m319560394B573921789FA729CF7D0A819E6DD57A(__this, L_6, (bool)1, /*hidden argument*/NULL);
		V_0 = L_7;
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		__this->set_validationState_9((-1));
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_9 = V_0;
		NullCheck(L_9);
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_10 = ValidatingReaderNodeData_get_AttInfo_mA1CC10671610DCE1466169A47AC69EAC96A4B993_inline(L_9, /*hidden argument*/NULL);
		__this->set_attributePSVI_16(L_10);
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_11 = V_0;
		__this->set_cachedNode_15(L_11);
		goto IL_0057;
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		int32_t L_12 = __this->get_validationState_9();
		if ((!(((uint32_t)L_12) == ((uint32_t)7))))
		{
			goto IL_0077;
		}
	}
	{
		ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * L_13 = __this->get_readBinaryHelper_39();
		NullCheck(L_13);
		ReadContentAsBinaryHelper_Finish_mA945E4969A417235AB755CA077A631794F3C172F(L_13, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_savedState_40();
		__this->set_validationState_9(L_14);
	}

IL_0077:
	{
		return (bool)1;
	}
}
// System.Void System.Xml.XsdValidatingReader::MoveToAttribute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_MoveToAttribute_m78A59416F2206A88D65686E0B8DABE320403DBC4 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_MoveToAttribute_m78A59416F2206A88D65686E0B8DABE320403DBC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___i0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->get_attributeCount_17();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral042DC4512FA3D391C5170CF3AA61E6A638F84342, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, XsdValidatingReader_MoveToAttribute_m78A59416F2206A88D65686E0B8DABE320403DBC4_RuntimeMethod_var);
	}

IL_0018:
	{
		int32_t L_4 = ___i0;
		__this->set_currentAttrIndex_19(L_4);
		int32_t L_5 = ___i0;
		int32_t L_6 = __this->get_coreReaderAttributeCount_18();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_005c;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_7 = __this->get_coreReader_3();
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(26 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_7, L_8);
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_9 = __this->get_inlineSchemaParser_22();
		if (L_9)
		{
			goto IL_004c;
		}
	}
	{
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_10 = __this->get_attributePSVINodes_20();
		int32_t L_11 = ___i0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->set_attributePSVI_16(L_13);
		goto IL_0053;
	}

IL_004c:
	{
		__this->set_attributePSVI_16((AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 *)NULL);
	}

IL_0053:
	{
		__this->set_validationState_9(3);
		goto IL_0094;
	}

IL_005c:
	{
		int32_t L_14 = ___i0;
		int32_t L_15 = __this->get_coreReaderAttributeCount_18();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_16 = __this->get_defaultAttributes_21();
		int32_t L_17 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_18 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_16, L_17);
		__this->set_cachedNode_15(((ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F *)CastclassClass((RuntimeObject*)L_18, ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F_il2cpp_TypeInfo_var)));
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_19 = __this->get_cachedNode_15();
		NullCheck(L_19);
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_20 = ValidatingReaderNodeData_get_AttInfo_mA1CC10671610DCE1466169A47AC69EAC96A4B993_inline(L_19, /*hidden argument*/NULL);
		__this->set_attributePSVI_16(L_20);
		__this->set_validationState_9((-1));
	}

IL_0094:
	{
		int32_t L_21 = __this->get_validationState_9();
		if ((!(((uint32_t)L_21) == ((uint32_t)7))))
		{
			goto IL_00b4;
		}
	}
	{
		ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * L_22 = __this->get_readBinaryHelper_39();
		NullCheck(L_22);
		ReadContentAsBinaryHelper_Finish_mA945E4969A417235AB755CA077A631794F3C172F(L_22, /*hidden argument*/NULL);
		int32_t L_23 = __this->get_savedState_40();
		__this->set_validationState_9(L_23);
	}

IL_00b4:
	{
		return;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::MoveToFirstAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_MoveToFirstAttribute_mAA4819F5A1E9EE08E309BF5A3FC3086E29702C08 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_MoveToFirstAttribute_mAA4819F5A1E9EE08E309BF5A3FC3086E29702C08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_0);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_currentAttrIndex_19(0);
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_2 = __this->get_inlineSchemaParser_22();
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_3 = __this->get_attributePSVINodes_20();
		NullCheck(L_3);
		int32_t L_4 = 0;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->set_attributePSVI_16(L_5);
		goto IL_0033;
	}

IL_002c:
	{
		__this->set_attributePSVI_16((AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 *)NULL);
	}

IL_0033:
	{
		__this->set_validationState_9(3);
		goto IL_0084;
	}

IL_003c:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_6 = __this->get_defaultAttributes_21();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_8 = __this->get_defaultAttributes_21();
		NullCheck(L_8);
		RuntimeObject * L_9 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_8, 0);
		__this->set_cachedNode_15(((ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F *)CastclassClass((RuntimeObject*)L_9, ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F_il2cpp_TypeInfo_var)));
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_10 = __this->get_cachedNode_15();
		NullCheck(L_10);
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_11 = ValidatingReaderNodeData_get_AttInfo_mA1CC10671610DCE1466169A47AC69EAC96A4B993_inline(L_10, /*hidden argument*/NULL);
		__this->set_attributePSVI_16(L_11);
		__this->set_currentAttrIndex_19(0);
		__this->set_validationState_9((-1));
		goto IL_0084;
	}

IL_0082:
	{
		return (bool)0;
	}

IL_0084:
	{
		int32_t L_12 = __this->get_validationState_9();
		if ((!(((uint32_t)L_12) == ((uint32_t)7))))
		{
			goto IL_00a4;
		}
	}
	{
		ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * L_13 = __this->get_readBinaryHelper_39();
		NullCheck(L_13);
		ReadContentAsBinaryHelper_Finish_mA945E4969A417235AB755CA077A631794F3C172F(L_13, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_savedState_40();
		__this->set_validationState_9(L_14);
	}

IL_00a4:
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::MoveToNextAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_MoveToNextAttribute_m680F960CA7022939B98100D0E790BAACDFE65E50 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_MoveToNextAttribute_m680F960CA7022939B98100D0E790BAACDFE65E50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_currentAttrIndex_19();
		int32_t L_1 = __this->get_coreReaderAttributeCount_18();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) >= ((int32_t)L_1)))
		{
			goto IL_0057;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_2 = __this->get_coreReader_3();
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_2);
		int32_t L_3 = __this->get_currentAttrIndex_19();
		__this->set_currentAttrIndex_19(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_4 = __this->get_inlineSchemaParser_22();
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_5 = __this->get_attributePSVINodes_20();
		int32_t L_6 = __this->get_currentAttrIndex_19();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_attributePSVI_16(L_8);
		goto IL_004e;
	}

IL_0047:
	{
		__this->set_attributePSVI_16((AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 *)NULL);
	}

IL_004e:
	{
		__this->set_validationState_9(3);
		goto IL_00b3;
	}

IL_0057:
	{
		int32_t L_9 = __this->get_currentAttrIndex_19();
		int32_t L_10 = __this->get_attributeCount_17();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))) >= ((int32_t)L_10)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_11 = __this->get_currentAttrIndex_19();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		int32_t L_12 = V_1;
		__this->set_currentAttrIndex_19(L_12);
		int32_t L_13 = V_1;
		int32_t L_14 = __this->get_coreReaderAttributeCount_18();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14));
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_15 = __this->get_defaultAttributes_21();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject * L_17 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_15, L_16);
		__this->set_cachedNode_15(((ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F *)CastclassClass((RuntimeObject*)L_17, ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F_il2cpp_TypeInfo_var)));
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_18 = __this->get_cachedNode_15();
		NullCheck(L_18);
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_19 = ValidatingReaderNodeData_get_AttInfo_mA1CC10671610DCE1466169A47AC69EAC96A4B993_inline(L_18, /*hidden argument*/NULL);
		__this->set_attributePSVI_16(L_19);
		__this->set_validationState_9((-1));
		goto IL_00b3;
	}

IL_00b1:
	{
		return (bool)0;
	}

IL_00b3:
	{
		int32_t L_20 = __this->get_validationState_9();
		if ((!(((uint32_t)L_20) == ((uint32_t)7))))
		{
			goto IL_00d3;
		}
	}
	{
		ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * L_21 = __this->get_readBinaryHelper_39();
		NullCheck(L_21);
		ReadContentAsBinaryHelper_Finish_mA945E4969A417235AB755CA077A631794F3C172F(L_21, /*hidden argument*/NULL);
		int32_t L_22 = __this->get_savedState_40();
		__this->set_validationState_9(L_22);
	}

IL_00d3:
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::MoveToElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_MoveToElement_m62AC8F2B7B55ECECCD745751873846279B59255A (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_0);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = __this->get_validationState_9();
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0016:
	{
		__this->set_currentAttrIndex_19((-1));
		__this->set_validationState_9(4);
		return (bool)1;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_Read_mC4C672F1D70013E8CE777D7AD2A93A0226638DE1 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_validationState_9();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-2))))
		{
			case 0:
			{
				goto IL_0084;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_00f9;
			}
			case 3:
			{
				goto IL_00d7;
			}
			case 4:
			{
				goto IL_0045;
			}
			case 5:
			{
				goto IL_0084;
			}
			case 6:
			{
				goto IL_0084;
			}
			case 7:
			{
				goto IL_007c;
			}
			case 8:
			{
				goto IL_00a4;
			}
			case 9:
			{
				goto IL_00b9;
			}
			case 10:
			{
				goto IL_00f7;
			}
			case 11:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_00f9;
	}

IL_0045:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_2 = __this->get_coreReader_3();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, L_2);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		XsdValidatingReader_ProcessReaderEvent_m722FC0B61083823F7FC17DD03600E9B81BBBCF1D(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_005a:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_4 = __this->get_validator_6();
		NullCheck(L_4);
		XmlSchemaValidator_EndValidation_m32D3C67F28B51043C99E237EA8E6D9F0F669949F(L_4, /*hidden argument*/NULL);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_5 = __this->get_coreReader_3();
		NullCheck(L_5);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_5);
		if (!L_6)
		{
			goto IL_007a;
		}
	}
	{
		__this->set_validationState_9(((int32_t)9));
	}

IL_007a:
	{
		return (bool)0;
	}

IL_007c:
	{
		XsdValidatingReader_ProcessInlineSchema_m343CC25820C5022EAD0D6D5D4C6948230F6A17C9(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0084:
	{
		XsdValidatingReader_ClearAttributesInfo_m1EC9BD9A9145BD5091AF0961E7A6B539C6DD97C8(__this, /*hidden argument*/NULL);
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_7 = __this->get_inlineSchemaParser_22();
		if (!L_7)
		{
			goto IL_009b;
		}
	}
	{
		__this->set_validationState_9(5);
		goto IL_007c;
	}

IL_009b:
	{
		__this->set_validationState_9(2);
		goto IL_0045;
	}

IL_00a4:
	{
		XsdValidatingReader_ClearAttributesInfo_m1EC9BD9A9145BD5091AF0961E7A6B539C6DD97C8(__this, /*hidden argument*/NULL);
		XsdValidatingReader_ProcessReaderEvent_m722FC0B61083823F7FC17DD03600E9B81BBBCF1D(__this, /*hidden argument*/NULL);
		__this->set_validationState_9(2);
		return (bool)1;
	}

IL_00b9:
	{
		int32_t L_8 = __this->get_savedState_40();
		__this->set_validationState_9(L_8);
		ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * L_9 = __this->get_readBinaryHelper_39();
		NullCheck(L_9);
		ReadContentAsBinaryHelper_Finish_mA945E4969A417235AB755CA077A631794F3C172F(L_9, /*hidden argument*/NULL);
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return L_10;
	}

IL_00d7:
	{
		__this->set_validationState_9(2);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_11 = __this->get_coreReader_3();
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0045;
		}
	}
	{
		XsdValidatingReader_ProcessReaderEvent_m722FC0B61083823F7FC17DD03600E9B81BBBCF1D(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_00f7:
	{
		return (bool)0;
	}

IL_00f9:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::get_EOF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_get_EOF_mAD66EBD6E9192236748221550D7D127633E005AF (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_0);
		return L_1;
	}
}
// System.Void System.Xml.XsdValidatingReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_Close_m5D7DA5DCAACCC8227E37D735534329A67C338455 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Xml.XmlReader::Close() */, L_0);
		__this->set_validationState_9(8);
		return;
	}
}
// System.Xml.ReadState System.Xml.XsdValidatingReader::get_ReadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdValidatingReader_get_ReadState_m07B292AA8820B755B0FE4195CF4674CC25CB8017 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = __this->get_coreReader_3();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_1);
		return L_2;
	}

IL_0015:
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XsdValidatingReader::Skip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_Skip_mC151116963EF47547B85D8475223210269614252 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_Skip_mC151116963EF47547B85D8475223210269614252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0081;
	}

IL_0018:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_3);
		if (L_4)
		{
			goto IL_0081;
		}
	}
	{
		V_1 = (bool)1;
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_5 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_5);
		bool L_6 = XmlSchemaInfo_get_IsUnionType_mB1E024466A8CD77B36D5D33E17FDA28FA0367E03(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_7 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_7);
		bool L_8 = XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}

IL_0041:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_9 = __this->get_coreReader_3();
		if (!((XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 *)IsInstClass((RuntimeObject*)L_9, XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		V_1 = (bool)0;
	}

IL_0050:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_10 = __this->get_coreReader_3();
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(35 /* System.Void System.Xml.XmlReader::Skip() */, L_10);
		__this->set_validationState_9(6);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_12 = __this->get_validator_6();
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_13 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_12);
		XmlSchemaValidator_SkipToEndElement_m20D060EC0B88FFDCF06632178FE2CF2B4EB7AB65(L_12, L_13, /*hidden argument*/NULL);
		goto IL_0081;
	}

IL_0078:
	{
		VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
		goto IL_0018;
	}

IL_0081:
	{
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}
}
// System.Xml.XmlNameTable System.Xml.XsdValidatingReader::get_NameTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * XsdValidatingReader_get_NameTable_m49988AB8EB9EF0215DEDE3CF702172B7ADC0C36A (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_0 = __this->get_coreReaderNameTable_26();
		return L_0;
	}
}
// System.String System.Xml.XsdValidatingReader::LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_LookupNamespace_mE004DCA7C0CE85F7DA37BDBBE91C251DE18E0FE8 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_LookupNamespace_mE004DCA7C0CE85F7DA37BDBBE91C251DE18E0FE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_thisNSResolver_5();
		String_t* L_1 = ___prefix0;
		NullCheck(L_0);
		String_t* L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String System.Xml.IXmlNamespaceResolver::LookupNamespace(System.String) */, IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XsdValidatingReader::ResolveEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ResolveEntity_m27D0FDB0EE081F02E59F86E231651898D14881C0 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_ResolveEntity_m27D0FDB0EE081F02E59F86E231651898D14881C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_0 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1F94EA1226068BD1B7EAA1B836A59C99979F579E(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, XsdValidatingReader_ResolveEntity_m27D0FDB0EE081F02E59F86E231651898D14881C0_RuntimeMethod_var);
	}
}
// System.Boolean System.Xml.XsdValidatingReader::ReadAttributeValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_ReadAttributeValue_m0BC999C018E605A06232DE633B39803CEBF5E664 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationState_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0020;
		}
	}
	{
		ReadContentAsBinaryHelper_t3CD837B0BD1C1C1D2E4EEF057C0C22742A766797 * L_1 = __this->get_readBinaryHelper_39();
		NullCheck(L_1);
		ReadContentAsBinaryHelper_Finish_mA945E4969A417235AB755CA077A631794F3C172F(L_1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_savedState_40();
		__this->set_validationState_9(L_2);
	}

IL_0020:
	{
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_4 = __this->get_validationState_9();
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_5 = __this->get_cachedNode_15();
		NullCheck(L_5);
		String_t* L_6 = ValidatingReaderNodeData_get_RawValue_m9423A1244D964F62AC3382E6C22AD73A25163235_inline(L_5, /*hidden argument*/NULL);
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_7 = __this->get_cachedNode_15();
		NullCheck(L_7);
		int32_t L_8 = ValidatingReaderNodeData_get_Depth_mF0AB24A1198767166226CEF7681E36ECF407671D_inline(L_7, /*hidden argument*/NULL);
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_9 = XsdValidatingReader_CreateDummyTextNode_m63BAF57EC15ED06ED442B5521C62C887CC5A9B46(__this, L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_cachedNode_15(L_9);
		__this->set_validationState_9(((int32_t)-2));
		return (bool)1;
	}

IL_0060:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_10 = __this->get_coreReader_3();
		NullCheck(L_10);
		bool L_11 = VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_10);
		return L_11;
	}

IL_006c:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::System.Xml.Schema.IXmlSchemaInfo.get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_System_Xml_Schema_IXmlSchemaInfo_get_IsDefault_m7E323834435DBF0C11F2108EE36CAE20DC4A3A2F (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)15))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0055;
	}

IL_0016:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_4 = __this->get_coreReader_3();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_4);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		XsdValidatingReader_GetIsDefault_m5498C296A342BF23079FB179DD01F8FC1F008230(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_6 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_6);
		bool L_7 = XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0035:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_8 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_8);
		bool L_9 = XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline(L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0041:
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_10 = __this->get_attributePSVI_16();
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_11 = XsdValidatingReader_get_AttributeSchemaInfo_mA54864779AA1E3BAC906B150BE61C6DA7781CCCD(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0055:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::System.Xml.Schema.IXmlSchemaInfo.get_IsNil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_System_Xml_Schema_IXmlSchemaInfo_get_IsNil_m97935D55B22B44CD147249137172447E2F65C9C7 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001c;
		}
	}

IL_0010:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_3 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_3);
		bool L_4 = XmlSchemaInfo_get_IsNil_mAED336D8A790E5B35251D6804D4E5BEDB190409C_inline(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Xml.Schema.XmlSchemaValidity System.Xml.XsdValidatingReader::System.Xml.Schema.IXmlSchemaInfo.get_Validity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdValidatingReader_System_Xml_Schema_IXmlSchemaInfo_get_Validity_m7501525E8A1306BDBAEB303B30CD41B0EB88A2D6 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)15))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_006b;
	}

IL_0016:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_4 = __this->get_coreReader_3();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_6 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_6);
		int32_t L_7 = XmlSchemaInfo_get_Validity_mA52D9F702D24A830CE1CD9C129293702F90D3924_inline(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002f:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_8 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_8);
		int32_t L_9 = XmlSchemaInfo_get_Validity_mA52D9F702D24A830CE1CD9C129293702F90D3924_inline(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_003f:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_10 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_10);
		int32_t L_11 = XmlSchemaInfo_get_Validity_mA52D9F702D24A830CE1CD9C129293702F90D3924_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_004b:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_12 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_12);
		int32_t L_13 = XmlSchemaInfo_get_Validity_mA52D9F702D24A830CE1CD9C129293702F90D3924_inline(L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0057:
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_14 = __this->get_attributePSVI_16();
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_15 = XsdValidatingReader_get_AttributeSchemaInfo_mA54864779AA1E3BAC906B150BE61C6DA7781CCCD(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = XmlSchemaInfo_get_Validity_mA52D9F702D24A830CE1CD9C129293702F90D3924_inline(L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_006b:
	{
		return (int32_t)(0);
	}
}
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.XsdValidatingReader::System.Xml.Schema.IXmlSchemaInfo.get_MemberType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * XsdValidatingReader_System_Xml_Schema_IXmlSchemaInfo_get_MemberType_mC38FEB632755315FCFF10C27F2ACAFD201B764C1 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)15))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0057;
	}

IL_0016:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_4 = __this->get_coreReader_3();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_4);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		XsdValidatingReader_GetMemberType_m866701B4F3C840CBC568FAC18BFD1480EBFDC221(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_6 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_6);
		XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * L_7 = XmlSchemaInfo_get_MemberType_m2CD5F67195CABE679D3643DA6A550A6FD43A49B2_inline(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0035:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_8 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_8);
		XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * L_9 = XmlSchemaInfo_get_MemberType_m2CD5F67195CABE679D3643DA6A550A6FD43A49B2_inline(L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0041:
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_10 = __this->get_attributePSVI_16();
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_11 = XsdValidatingReader_get_AttributeSchemaInfo_mA54864779AA1E3BAC906B150BE61C6DA7781CCCD(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * L_12 = XmlSchemaInfo_get_MemberType_m2CD5F67195CABE679D3643DA6A550A6FD43A49B2_inline(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0055:
	{
		return (XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A *)NULL;
	}

IL_0057:
	{
		return (XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A *)NULL;
	}
}
// System.Xml.Schema.XmlSchemaType System.Xml.XsdValidatingReader::System.Xml.Schema.IXmlSchemaInfo.get_SchemaType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * XsdValidatingReader_System_Xml_Schema_IXmlSchemaInfo_get_SchemaType_m8F9E1AA29629B093CEA13769AACE55A2E59C2CE7 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0036;
		}
	}

IL_0014:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_4 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_4);
		XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * L_5 = XmlSchemaInfo_get_SchemaType_m413D24A7AC6C0775A0538316E5BA013E647A7137_inline(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0020:
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_6 = __this->get_attributePSVI_16();
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_7 = XsdValidatingReader_get_AttributeSchemaInfo_mA54864779AA1E3BAC906B150BE61C6DA7781CCCD(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * L_8 = XmlSchemaInfo_get_SchemaType_m413D24A7AC6C0775A0538316E5BA013E647A7137_inline(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0034:
	{
		return (XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 *)NULL;
	}

IL_0036:
	{
		return (XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 *)NULL;
	}
}
// System.Xml.Schema.XmlSchemaElement System.Xml.XsdValidatingReader::System.Xml.Schema.IXmlSchemaInfo.get_SchemaElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * XsdValidatingReader_System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement_mE0D77B88C4A2DF4D345AD2120BA0455E9A5A5E6F (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001f;
		}
	}

IL_0013:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_2 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_2);
		XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * L_3 = XmlSchemaInfo_get_SchemaElement_mD5FF5600CD686A883DFFDE4E953AA3EE842913C3_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001f:
	{
		return (XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D *)NULL;
	}
}
// System.Xml.Schema.XmlSchemaAttribute System.Xml.XsdValidatingReader::System.Xml.Schema.IXmlSchemaInfo.get_SchemaAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B * XsdValidatingReader_System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute_mE2CE355D2E27348E2AA03DAAE5ECE6D3FD8A8A2C (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_1 = __this->get_attributePSVI_16();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_2 = XsdValidatingReader_get_AttributeSchemaInfo_mA54864779AA1E3BAC906B150BE61C6DA7781CCCD(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B * L_3 = XmlSchemaInfo_get_SchemaAttribute_mFC3EA434A7F15923970FA1DBEE84FE21BFE9708C_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		return (XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B *)NULL;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::HasLineInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_HasLineInfo_m427BF123FF3304A33209E3C84E11D741B5CB72FB (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 System.Xml.XsdValidatingReader::get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdValidatingReader_get_LineNumber_m1440C8D90D2CB1B31FAAD10CBBB825EF87618AD3 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_get_LineNumber_m1440C8D90D2CB1B31FAAD10CBBB825EF87618AD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_lineInfo_38();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_lineInfo_38();
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return 0;
	}
}
// System.Int32 System.Xml.XsdValidatingReader::get_LinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdValidatingReader_get_LinePosition_m36754C16EEC8F06BD868D37F0E1F24BBD93AAFAD (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_get_LinePosition_m36754C16EEC8F06BD868D37F0E1F24BBD93AAFAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_lineInfo_38();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_lineInfo_38();
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return 0;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Xml.XsdValidatingReader::System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(System.Xml.XmlNamespaceScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XsdValidatingReader_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope_m2B4B99CC46463901299AD8428F490A4A4BE88E8C (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, int32_t ___scope0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope_m2B4B99CC46463901299AD8428F490A4A4BE88E8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_coreReaderNSResolver_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_coreReaderNSResolver_4();
		int32_t L_2 = ___scope0;
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Collections.Generic.IDictionary`2<System.String,System.String> System.Xml.IXmlNamespaceResolver::GetNamespacesInScope(System.Xml.XmlNamespaceScope) */, IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * L_4 = __this->get_nsManager_11();
		int32_t L_5 = ___scope0;
		NullCheck(L_4);
		RuntimeObject* L_6 = VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(15 /* System.Collections.Generic.IDictionary`2<System.String,System.String> System.Xml.XmlNamespaceManager::GetNamespacesInScope(System.Xml.XmlNamespaceScope) */, L_4, L_5);
		return L_6;
	}
}
// System.String System.Xml.XsdValidatingReader::System.Xml.IXmlNamespaceResolver.LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_System_Xml_IXmlNamespaceResolver_LookupNamespace_m24EA4662863981EB29125CCF838D6438584C61EC (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_System_Xml_IXmlNamespaceResolver_LookupNamespace_m24EA4662863981EB29125CCF838D6438584C61EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_coreReaderNSResolver_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_coreReaderNSResolver_4();
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String System.Xml.IXmlNamespaceResolver::LookupNamespace(System.String) */, IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * L_4 = __this->get_nsManager_11();
		String_t* L_5 = ___prefix0;
		NullCheck(L_4);
		String_t* L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_4, L_5);
		return L_6;
	}
}
// System.String System.Xml.XsdValidatingReader::System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_System_Xml_IXmlNamespaceResolver_LookupPrefix_mDF0556C9A1C324C279CD8E711B1EFBFE122F3F42 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_System_Xml_IXmlNamespaceResolver_LookupPrefix_mDF0556C9A1C324C279CD8E711B1EFBFE122F3F42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_coreReaderNSResolver_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_coreReaderNSResolver_4();
		String_t* L_2 = ___namespaceName0;
		NullCheck(L_1);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(2 /* System.String System.Xml.IXmlNamespaceResolver::LookupPrefix(System.String) */, IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * L_4 = __this->get_nsManager_11();
		String_t* L_5 = ___namespaceName0;
		NullCheck(L_4);
		String_t* L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_4, L_5);
		return L_6;
	}
}
// System.Object System.Xml.XsdValidatingReader::GetStringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XsdValidatingReader_GetStringValue_m7B26377231669CB9DE33D16E5BF1DCB2C2A12C84 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_0);
		return L_1;
	}
}
// System.Xml.Schema.XmlSchemaInfo System.Xml.XsdValidatingReader::get_AttributeSchemaInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * XsdValidatingReader_get_AttributeSchemaInfo_mA54864779AA1E3BAC906B150BE61C6DA7781CCCD (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_0 = __this->get_attributePSVI_16();
		NullCheck(L_0);
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_1 = L_0->get_attributeSchemaInfo_3();
		return L_1;
	}
}
// System.Void System.Xml.XsdValidatingReader::ProcessReaderEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ProcessReaderEvent_m722FC0B61083823F7FC17DD03600E9B81BBBCF1D (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_ProcessReaderEvent_m722FC0B61083823F7FC17DD03600E9B81BBBCF1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_replayCache_14();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = __this->get_coreReader_3();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_005a;
			}
			case 1:
			{
				goto IL_00b4;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_0079;
			}
			case 4:
			{
				goto IL_0098;
			}
			case 5:
			{
				goto IL_00b4;
			}
			case 6:
			{
				goto IL_00b4;
			}
			case 7:
			{
				goto IL_00b4;
			}
			case 8:
			{
				goto IL_00b4;
			}
			case 9:
			{
				goto IL_009e;
			}
			case 10:
			{
				goto IL_00b4;
			}
			case 11:
			{
				goto IL_00b4;
			}
			case 12:
			{
				goto IL_0061;
			}
			case 13:
			{
				goto IL_0061;
			}
			case 14:
			{
				goto IL_0091;
			}
		}
	}
	{
		return;
	}

IL_005a:
	{
		XsdValidatingReader_ProcessElementEvent_m2DC0A3D923DC437A428C19211B835CBEF24F879E(__this, /*hidden argument*/NULL);
		return;
	}

IL_0061:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_4 = __this->get_validator_6();
		XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * L_5 = (XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF *)il2cpp_codegen_object_new(XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF_il2cpp_TypeInfo_var);
		XmlValueGetter__ctor_mDFBA4B35927F63FB2BA3373FF55EAC08E5EF0364(L_5, __this, (intptr_t)((intptr_t)XsdValidatingReader_GetStringValue_m7B26377231669CB9DE33D16E5BF1DCB2C2A12C84_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		XmlSchemaValidator_ValidateWhitespace_m9105BE38EC4B852C5843747C5679C479A7B1A8BE(L_4, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0079:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_6 = __this->get_validator_6();
		XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * L_7 = (XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF *)il2cpp_codegen_object_new(XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF_il2cpp_TypeInfo_var);
		XmlValueGetter__ctor_mDFBA4B35927F63FB2BA3373FF55EAC08E5EF0364(L_7, __this, (intptr_t)((intptr_t)XsdValidatingReader_GetStringValue_m7B26377231669CB9DE33D16E5BF1DCB2C2A12C84_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		XmlSchemaValidator_ValidateText_mEC98CA08C8049A6A223B891C5B87E7967F6FB4E6(L_6, L_7, /*hidden argument*/NULL);
		return;
	}

IL_0091:
	{
		XsdValidatingReader_ProcessEndElementEvent_m75F9D9D9E983A05EE3781796BA2643C030F289C9(__this, /*hidden argument*/NULL);
		return;
	}

IL_0098:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_8 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1F94EA1226068BD1B7EAA1B836A59C99979F579E(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, XsdValidatingReader_ProcessReaderEvent_m722FC0B61083823F7FC17DD03600E9B81BBBCF1D_RuntimeMethod_var);
	}

IL_009e:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_9 = __this->get_validator_6();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_10 = __this->get_coreReader_3();
		NullCheck(L_10);
		RuntimeObject* L_11 = VirtFuncInvoker0< RuntimeObject* >::Invoke(52 /* System.Xml.IDtdInfo System.Xml.XmlReader::get_DtdInfo() */, L_10);
		NullCheck(L_9);
		XmlSchemaValidator_SetDtdSchemaInfo_mD46880C3B361C7909FEBD7D9AEBD738248DC1C41(L_9, L_11, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::ProcessElementEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ProcessElementEvent_m2DC0A3D923DC437A428C19211B835CBEF24F879E (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_ProcessElementEvent_m2DC0A3D923DC437A428C19211B835CBEF24F879E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * G_B22_0 = NULL;
	XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * G_B21_0 = NULL;
	String_t* G_B23_0 = NULL;
	XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * G_B23_1 = NULL;
	{
		bool L_0 = __this->get_processInlineSchema_13();
		if (!L_0)
		{
			goto IL_00cb;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = __this->get_coreReader_3();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_1);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_3);
		bool L_5 = XsdValidatingReader_IsXSDRoot_mA688FC148DC47A8B448584DD326AC4BCE2AAC1BC(__this, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00cb;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_6 = __this->get_coreReader_3();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_6);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_8 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_8);
		XmlSchemaInfo_Clear_m9505DA955F34689416DC8DEA4816A879675C3B4C(L_8, /*hidden argument*/NULL);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_9 = __this->get_coreReader_3();
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_9);
		int32_t L_11 = L_10;
		V_0 = L_11;
		__this->set_coreReaderAttributeCount_18(L_11);
		int32_t L_12 = V_0;
		__this->set_attributeCount_17(L_12);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_13 = __this->get_coreReader_3();
		NullCheck(L_13);
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_13);
		if (L_14)
		{
			goto IL_00c3;
		}
	}
	{
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_15 = __this->get_coreReaderNameTable_26();
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_16 = __this->get_validator_6();
		NullCheck(L_16);
		XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * L_17 = XmlSchemaValidator_get_SchemaSet_mD7A7967F25B07ABD9B1816DE7E91F3B5F580327F_inline(L_16, /*hidden argument*/NULL);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_18 = __this->get_coreReaderNameTable_26();
		NullCheck(L_17);
		SchemaNames_t15BD91B1C74FC6C9F9825D572D9C2F15726A1E89 * L_19 = XmlSchemaSet_GetSchemaNames_mB1DBEA05D74F6A05A906029EE08B08A0CE95A41F(L_17, L_18, /*hidden argument*/NULL);
		ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * L_20 = __this->get_validationEvent_8();
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_21 = (Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 *)il2cpp_codegen_object_new(Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920_il2cpp_TypeInfo_var);
		Parser__ctor_mCAE678571A7DD523F4D78EDF5BE29109E92546FB(L_21, 3, L_15, L_19, L_20, /*hidden argument*/NULL);
		__this->set_inlineSchemaParser_22(L_21);
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_22 = __this->get_inlineSchemaParser_22();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_23 = __this->get_coreReader_3();
		NullCheck(L_22);
		Parser_StartParsing_m2B720703BC796D9695E4AD9CB3A9D84F9D3088D0(L_22, L_23, (String_t*)NULL, /*hidden argument*/NULL);
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_24 = __this->get_inlineSchemaParser_22();
		NullCheck(L_24);
		Parser_ParseReaderNode_mED9C349925499459D94E658A18691C2B8F9119A4(L_24, /*hidden argument*/NULL);
		__this->set_validationState_9(5);
		return;
	}

IL_00c3:
	{
		__this->set_validationState_9(4);
		return;
	}

IL_00cb:
	{
		__this->set_atomicValue_23(NULL);
		__this->set_originalAtomicValueString_25((String_t*)NULL);
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_25 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_25);
		XmlSchemaInfo_Clear_m9505DA955F34689416DC8DEA4816A879675C3B4C(L_25, /*hidden argument*/NULL);
		bool L_26 = __this->get_manageNamespaces_12();
		if (!L_26)
		{
			goto IL_00f7;
		}
	}
	{
		XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * L_27 = __this->get_nsManager_11();
		NullCheck(L_27);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_27);
	}

IL_00f7:
	{
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		V_3 = (String_t*)NULL;
		V_4 = (String_t*)NULL;
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_28 = __this->get_coreReader_3();
		NullCheck(L_28);
		bool L_29 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_28);
		if (!L_29)
		{
			goto IL_021e;
		}
	}

IL_0110:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_30 = __this->get_coreReader_3();
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_30);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_32 = __this->get_coreReader_3();
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_32);
		V_5 = L_33;
		String_t* L_34 = __this->get_NsXsi_31();
		bool L_35 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_31, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_01a8;
		}
	}
	{
		String_t* L_36 = V_5;
		String_t* L_37 = __this->get_XsiSchemaLocation_35();
		bool L_38 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0152;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_39 = __this->get_coreReader_3();
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_39);
		V_1 = L_40;
		goto IL_01a8;
	}

IL_0152:
	{
		String_t* L_41 = V_5;
		String_t* L_42 = __this->get_XsiNoNamespaceSchemaLocation_36();
		bool L_43 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_016f;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_44 = __this->get_coreReader_3();
		NullCheck(L_44);
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_44);
		V_2 = L_45;
		goto IL_01a8;
	}

IL_016f:
	{
		String_t* L_46 = V_5;
		String_t* L_47 = __this->get_XsiType_32();
		bool L_48 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_46, L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_018d;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_49 = __this->get_coreReader_3();
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		V_4 = L_50;
		goto IL_01a8;
	}

IL_018d:
	{
		String_t* L_51 = V_5;
		String_t* L_52 = __this->get_XsiNil_33();
		bool L_53 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01a8;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_54 = __this->get_coreReader_3();
		NullCheck(L_54);
		String_t* L_55 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_54);
		V_3 = L_55;
	}

IL_01a8:
	{
		bool L_56 = __this->get_manageNamespaces_12();
		if (!L_56)
		{
			goto IL_0202;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_57 = __this->get_coreReader_3();
		NullCheck(L_57);
		String_t* L_58 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_57);
		String_t* L_59 = __this->get_NsXmlNs_29();
		bool L_60 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_58, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0202;
		}
	}
	{
		XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * L_61 = __this->get_nsManager_11();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_62 = __this->get_coreReader_3();
		NullCheck(L_62);
		String_t* L_63 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_62);
		NullCheck(L_63);
		int32_t L_64 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_63, /*hidden argument*/NULL);
		G_B21_0 = L_61;
		if (!L_64)
		{
			G_B22_0 = L_61;
			goto IL_01ed;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_65 = __this->get_coreReader_3();
		NullCheck(L_65);
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_65);
		G_B23_0 = L_66;
		G_B23_1 = G_B21_0;
		goto IL_01f2;
	}

IL_01ed:
	{
		String_t* L_67 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B23_0 = L_67;
		G_B23_1 = G_B22_0;
	}

IL_01f2:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_68 = __this->get_coreReader_3();
		NullCheck(L_68);
		String_t* L_69 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_68);
		NullCheck(G_B23_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, G_B23_1, G_B23_0, L_69);
	}

IL_0202:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_70 = __this->get_coreReader_3();
		NullCheck(L_70);
		bool L_71 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_70);
		if (L_71)
		{
			goto IL_0110;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_72 = __this->get_coreReader_3();
		NullCheck(L_72);
		VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_72);
	}

IL_021e:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_73 = __this->get_validator_6();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_74 = __this->get_coreReader_3();
		NullCheck(L_74);
		String_t* L_75 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_74);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_76 = __this->get_coreReader_3();
		NullCheck(L_76);
		String_t* L_77 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_76);
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_78 = __this->get_xmlSchemaInfo_24();
		String_t* L_79 = V_4;
		String_t* L_80 = V_3;
		String_t* L_81 = V_1;
		String_t* L_82 = V_2;
		NullCheck(L_73);
		XmlSchemaValidator_ValidateElement_m61AC91E4271334755060BE164544EC07D9A9383F(L_73, L_75, L_77, L_78, L_79, L_80, L_81, L_82, /*hidden argument*/NULL);
		XsdValidatingReader_ValidateAttributes_mD05E6D7BB9625D94A1616B348B70A04A26E8A805(__this, /*hidden argument*/NULL);
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_83 = __this->get_validator_6();
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_84 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_83);
		XmlSchemaValidator_ValidateEndOfAttributes_m6795FD739AECBCE7DA9E978ABC51392BC587E532(L_83, L_84, /*hidden argument*/NULL);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_85 = __this->get_coreReader_3();
		NullCheck(L_85);
		bool L_86 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_85);
		if (!L_86)
		{
			goto IL_0274;
		}
	}
	{
		XsdValidatingReader_ProcessEndElementEvent_m75F9D9D9E983A05EE3781796BA2643C030F289C9(__this, /*hidden argument*/NULL);
	}

IL_0274:
	{
		__this->set_validationState_9(4);
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::ProcessEndElementEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ProcessEndElementEvent_m75F9D9D9E983A05EE3781796BA2643C030F289C9 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_0 = __this->get_validator_6();
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_1 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_0);
		RuntimeObject * L_2 = XmlSchemaValidator_ValidateEndElement_mF63F5F6AB7428530BD1973EBF6B319E4B8119486(L_0, L_1, /*hidden argument*/NULL);
		__this->set_atomicValue_23(L_2);
		String_t* L_3 = XsdValidatingReader_GetOriginalAtomicValueStringOfElement_m1630A664BBF86AADC4E3C6F83A330E8ADC7237D2(__this, /*hidden argument*/NULL);
		__this->set_originalAtomicValueString_25(L_3);
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_4 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_4);
		bool L_5 = XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0098;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_6 = __this->get_coreReader_3();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_6);
		V_0 = L_7;
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_8 = XsdValidatingReader_GetCachingReader_mF33698664D3DF4B31EA3C10BC727F6033989E5AB(__this, /*hidden argument*/NULL);
		__this->set_coreReader_3(L_8);
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_9 = __this->get_cachingReader_27();
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_10 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_10);
		XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * L_11 = XmlSchemaInfo_get_XmlType_m973F86FEE3CAD715D8290025248DEAF326E1813B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_12 = XmlSchemaType_get_ValueConverter_m5CD7C260106A4DCBAE6A160823EB242F5BC9941E(L_11, /*hidden argument*/NULL);
		RuntimeObject * L_13 = __this->get_atomicValue_23();
		NullCheck(L_12);
		String_t* L_14 = VirtFuncInvoker1< String_t*, RuntimeObject * >::Invoke(51 /* System.String System.Xml.Schema.XmlValueConverter::ToString(System.Object) */, L_12, L_13);
		String_t* L_15 = __this->get_originalAtomicValueString_25();
		int32_t L_16 = V_0;
		NullCheck(L_9);
		XsdCachingReader_RecordTextNode_m81595BD7367E8EDAAFC172BB67218658CE8A335F(L_9, L_14, L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), 0, 0, /*hidden argument*/NULL);
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_17 = __this->get_cachingReader_27();
		NullCheck(L_17);
		XsdCachingReader_RecordEndElementNode_m5AFEE59E51FB8CB764A42D62E4111E68D674CFBB(L_17, /*hidden argument*/NULL);
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_18 = __this->get_cachingReader_27();
		NullCheck(L_18);
		XsdCachingReader_SetToReplayMode_mE3A6B50BC6DFF867D3FE67CBE0B60E0E1898AB20(L_18, /*hidden argument*/NULL);
		__this->set_replayCache_14((bool)1);
		return;
	}

IL_0098:
	{
		bool L_19 = __this->get_manageNamespaces_12();
		if (!L_19)
		{
			goto IL_00ac;
		}
	}
	{
		XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * L_20 = __this->get_nsManager_11();
		NullCheck(L_20);
		VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_20);
	}

IL_00ac:
	{
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::ValidateAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ValidateAttributes_mD05E6D7BB9625D94A1616B348B70A04A26E8A805 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_0);
		int32_t L_2 = L_1;
		V_3 = L_2;
		__this->set_coreReaderAttributeCount_18(L_2);
		int32_t L_3 = V_3;
		__this->set_attributeCount_17(L_3);
		V_1 = 0;
		V_2 = (bool)0;
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_4 = __this->get_coreReader_3();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_4);
		if (!L_5)
		{
			goto IL_00b7;
		}
	}

IL_002e:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_6 = __this->get_coreReader_3();
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_6);
		V_4 = L_7;
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_8 = __this->get_coreReader_3();
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_8);
		V_5 = L_9;
		int32_t L_10 = V_1;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_11 = XsdValidatingReader_AddAttributePSVI_m9C63491571E684A954FFBF35C1EE2243AC33AEB8(__this, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_12 = V_0;
		String_t* L_13 = V_4;
		NullCheck(L_12);
		L_12->set_localName_0(L_13);
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_14 = V_0;
		String_t* L_15 = V_5;
		NullCheck(L_14);
		L_14->set_namespaceUri_1(L_15);
		String_t* L_16 = V_5;
		String_t* L_17 = __this->get_NsXmlNs_29();
		if ((!(((RuntimeObject*)(String_t*)L_16) == ((RuntimeObject*)(String_t*)L_17))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		goto IL_00a7;
	}

IL_0070:
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_19 = V_0;
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_20 = __this->get_validator_6();
		String_t* L_21 = V_4;
		String_t* L_22 = V_5;
		XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * L_23 = __this->get_valueGetter_10();
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_24 = V_0;
		NullCheck(L_24);
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_25 = L_24->get_attributeSchemaInfo_3();
		NullCheck(L_20);
		RuntimeObject * L_26 = XmlSchemaValidator_ValidateAttribute_m164F9C6AB7E6FDD2726E4BFF3DAC01CC2B0F1112(L_20, L_21, L_22, L_23, L_25, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_typedAttributeValue_2(L_26);
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_00a3;
		}
	}
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_28 = V_0;
		NullCheck(L_28);
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_29 = L_28->get_attributeSchemaInfo_3();
		NullCheck(L_29);
		int32_t L_30 = XmlSchemaInfo_get_Validity_mA52D9F702D24A830CE1CD9C129293702F90D3924_inline(L_29, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_30) == ((int32_t)2))? 1 : 0);
	}

IL_00a3:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00a7:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_32 = __this->get_coreReader_3();
		NullCheck(L_32);
		bool L_33 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_32);
		if (L_33)
		{
			goto IL_002e;
		}
	}

IL_00b7:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_34 = __this->get_coreReader_3();
		NullCheck(L_34);
		VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_34);
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_00d2;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_36 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_36);
		XmlSchemaInfo_set_Validity_mE43C075415C50FAD9951AEC92D91A08F437DF9BC_inline(L_36, 2, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_37 = __this->get_validator_6();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_38 = __this->get_defaultAttributes_21();
		NullCheck(L_37);
		XmlSchemaValidator_GetUnspecifiedDefaultAttributes_mF095D750B9EC2A46E341D708AA2DAF20AE181A0A(L_37, L_38, (bool)1, /*hidden argument*/NULL);
		int32_t L_39 = __this->get_attributeCount_17();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_40 = __this->get_defaultAttributes_21();
		NullCheck(L_40);
		int32_t L_41 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_40);
		__this->set_attributeCount_17(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_41)));
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::ClearAttributesInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ClearAttributesInfo_m1EC9BD9A9145BD5091AF0961E7A6B539C6DD97C8 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	{
		__this->set_attributeCount_17(0);
		__this->set_coreReaderAttributeCount_18(0);
		__this->set_currentAttrIndex_19((-1));
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_defaultAttributes_21();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		__this->set_attributePSVI_16((AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 *)NULL);
		return;
	}
}
// System.Xml.AttributePSVIInfo System.Xml.XsdValidatingReader::GetAttributePSVI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * XsdValidatingReader_GetAttributePSVI_mE8EC1E880CFF68F8BDCA75280BA5117BE09D3D3D (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_GetAttributePSVI_mE8EC1E880CFF68F8BDCA75280BA5117BE09D3D3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_0 = __this->get_inlineSchemaParser_22();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 *)NULL;
	}

IL_000a:
	{
		String_t* L_1 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ValidateNames_tC00080F7F263345A2F0842B10BE16D0BAB77EB26_il2cpp_TypeInfo_var);
		ValidateNames_SplitQName_m7CB5F05E3C3C2C3A0FA388DA7389E88BFCE0591D(L_1, (String_t**)(&V_1), (String_t**)(&V_0), /*hidden argument*/NULL);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_2 = __this->get_coreReaderNameTable_26();
		String_t* L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_2, L_3);
		V_1 = L_4;
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_5 = __this->get_coreReaderNameTable_26();
		String_t* L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_5, L_6);
		V_0 = L_7;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_10;
		goto IL_004b;
	}

IL_003e:
	{
		RuntimeObject* L_11 = __this->get_thisNSResolver_5();
		String_t* L_12 = V_1;
		NullCheck(L_11);
		String_t* L_13 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String System.Xml.IXmlNamespaceResolver::LookupNamespace(System.String) */, IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427_il2cpp_TypeInfo_var, L_11, L_12);
		V_2 = L_13;
	}

IL_004b:
	{
		String_t* L_14 = V_0;
		String_t* L_15 = V_2;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_16 = XsdValidatingReader_GetAttributePSVI_m2086BD37841978079FE736B8E916223ED109D551(__this, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Xml.AttributePSVIInfo System.Xml.XsdValidatingReader::GetAttributePSVI(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * XsdValidatingReader_GetAttributePSVI_m2086BD37841978079FE736B8E916223ED109D551 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 *)NULL;
		V_1 = 0;
		goto IL_003b;
	}

IL_0006:
	{
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_0 = __this->get_attributePSVINodes_20();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_5 = ___localName0;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_localName_0();
		bool L_8 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_9 = ___ns1;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_namespaceUri_1();
		bool L_12 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_13 = V_1;
		__this->set_currentAttrIndex_19(L_13);
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_14 = V_0;
		return L_14;
	}

IL_0037:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003b:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_coreReaderAttributeCount_18();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0006;
		}
	}
	{
		return (AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 *)NULL;
	}
}
// System.Xml.ValidatingReaderNodeData System.Xml.XsdValidatingReader::GetDefaultAttribute(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * XsdValidatingReader_GetDefaultAttribute_m319560394B573921789FA729CF7D0A819E6DD57A (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___name0, bool ___updatePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_GetDefaultAttribute_m319560394B573921789FA729CF7D0A819E6DD57A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ValidateNames_tC00080F7F263345A2F0842B10BE16D0BAB77EB26_il2cpp_TypeInfo_var);
		ValidateNames_SplitQName_m7CB5F05E3C3C2C3A0FA388DA7389E88BFCE0591D(L_0, (String_t**)(&V_1), (String_t**)(&V_0), /*hidden argument*/NULL);
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_1 = __this->get_coreReaderNameTable_26();
		String_t* L_2 = V_1;
		NullCheck(L_1);
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_1, L_2);
		V_1 = L_3;
		XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * L_4 = __this->get_coreReaderNameTable_26();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_4, L_5);
		V_0 = L_6;
		String_t* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_9;
		goto IL_0041;
	}

IL_0034:
	{
		RuntimeObject* L_10 = __this->get_thisNSResolver_5();
		String_t* L_11 = V_1;
		NullCheck(L_10);
		String_t* L_12 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String System.Xml.IXmlNamespaceResolver::LookupNamespace(System.String) */, IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427_il2cpp_TypeInfo_var, L_10, L_11);
		V_2 = L_12;
	}

IL_0041:
	{
		String_t* L_13 = V_0;
		String_t* L_14 = V_2;
		bool L_15 = ___updatePosition1;
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_16 = XsdValidatingReader_GetDefaultAttribute_m886683896C8C7B89F525CC84B2D1E37D1E9EFB8C(__this, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Xml.ValidatingReaderNodeData System.Xml.XsdValidatingReader::GetDefaultAttribute(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * XsdValidatingReader_GetDefaultAttribute_m886683896C8C7B89F525CC84B2D1E37D1E9EFB8C (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___attrLocalName0, String_t* ___ns1, bool ___updatePosition2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_GetDefaultAttribute_m886683896C8C7B89F525CC84B2D1E37D1E9EFB8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F *)NULL;
		V_1 = 0;
		goto IL_0050;
	}

IL_0006:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_defaultAttributes_21();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_0 = ((ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F *)CastclassClass((RuntimeObject*)L_2, ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F_il2cpp_TypeInfo_var));
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = ValidatingReaderNodeData_get_LocalName_mD8F76DD6578DA1E592371099C12CB1C5490BEECD_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___attrLocalName0;
		bool L_6 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = ValidatingReaderNodeData_get_Namespace_m665D8181BB49C284A46295E7B8C2F17F4C1AFE53_inline(L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___ns1;
		bool L_10 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___updatePosition2;
		if (!L_11)
		{
			goto IL_004a;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_12 = __this->get_coreReader_3();
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_12);
		int32_t L_14 = V_1;
		__this->set_currentAttrIndex_19(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)));
	}

IL_004a:
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_15 = V_0;
		return L_15;
	}

IL_004c:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_17 = V_1;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_18 = __this->get_defaultAttributes_21();
		NullCheck(L_18);
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0006;
		}
	}
	{
		return (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F *)NULL;
	}
}
// System.Xml.AttributePSVIInfo System.Xml.XsdValidatingReader::AddAttributePSVI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * XsdValidatingReader_AddAttributePSVI_m9C63491571E684A954FFBF35C1EE2243AC33AEB8 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, int32_t ___attIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_AddAttributePSVI_m9C63491571E684A954FFBF35C1EE2243AC33AEB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * V_0 = NULL;
	AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* V_1 = NULL;
	{
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_0 = __this->get_attributePSVINodes_20();
		int32_t L_1 = ___attIndex0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_5 = V_0;
		NullCheck(L_5);
		AttributePSVIInfo_Reset_mCA8C4CEDF39DDCCB70519FAE28C51B4757E6BB60(L_5, /*hidden argument*/NULL);
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_6 = V_0;
		return L_6;
	}

IL_0014:
	{
		int32_t L_7 = ___attIndex0;
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_8 = __this->get_attributePSVINodes_20();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), (int32_t)1)))))
		{
			goto IL_004e;
		}
	}
	{
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_9 = __this->get_attributePSVINodes_20();
		NullCheck(L_9);
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_10 = (AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951*)(AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951*)SZArrayNew(AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))), (int32_t)2)));
		V_1 = L_10;
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_11 = __this->get_attributePSVINodes_20();
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_12 = V_1;
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_13 = __this->get_attributePSVINodes_20();
		NullCheck(L_13);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_11, 0, (RuntimeArray *)(RuntimeArray *)L_12, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))), /*hidden argument*/NULL);
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_14 = V_1;
		__this->set_attributePSVINodes_20(L_14);
	}

IL_004e:
	{
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_15 = __this->get_attributePSVINodes_20();
		int32_t L_16 = ___attIndex0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = L_18;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_19 = V_0;
		if (L_19)
		{
			goto IL_0069;
		}
	}
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_20 = (AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 *)il2cpp_codegen_object_new(AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94_il2cpp_TypeInfo_var);
		AttributePSVIInfo__ctor_m179040B65F68D7802BD4A398B169A70FE563B285(L_20, /*hidden argument*/NULL);
		V_0 = L_20;
		AttributePSVIInfoU5BU5D_tB383C48FDFE60597390398272BA52949B7ADE951* L_21 = __this->get_attributePSVINodes_20();
		int32_t L_22 = ___attIndex0;
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_23 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 *)L_23);
	}

IL_0069:
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_24 = V_0;
		return L_24;
	}
}
// System.Boolean System.Xml.XsdValidatingReader::IsXSDRoot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdValidatingReader_IsXSDRoot_mA688FC148DC47A8B448584DD326AC4BCE2AAC1BC (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___ns1;
		String_t* L_1 = __this->get_NsXs_30();
		bool L_2 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = ___localName0;
		String_t* L_4 = __this->get_XsdSchema_34();
		bool L_5 = Ref_Equal_mE6DE69202A01B55D8F7C88627331ADB96F88CA00(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001b:
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XsdValidatingReader::ProcessInlineSchema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ProcessInlineSchema_m343CC25820C5022EAD0D6D5D4C6948230F6A17C9 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * V_1 = NULL;
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, L_0);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_2 = __this->get_coreReader_3();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_4 = __this->get_coreReader_3();
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_4);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->set_coreReaderAttributeCount_18(L_6);
		int32_t L_7 = V_0;
		__this->set_attributeCount_17(L_7);
		goto IL_003d;
	}

IL_0037:
	{
		XsdValidatingReader_ClearAttributesInfo_m1EC9BD9A9145BD5091AF0961E7A6B539C6DD97C8(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_8 = __this->get_inlineSchemaParser_22();
		NullCheck(L_8);
		bool L_9 = Parser_ParseReaderNode_mED9C349925499459D94E658A18691C2B8F9119A4(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_10 = __this->get_inlineSchemaParser_22();
		NullCheck(L_10);
		Parser_FinishParsing_m443D8C585A12C5601FC3E171B8720E0A52D1FDFC_inline(L_10, /*hidden argument*/NULL);
		Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * L_11 = __this->get_inlineSchemaParser_22();
		NullCheck(L_11);
		XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * L_12 = Parser_get_XmlSchema_mF4616651AA57B08D39F850C0225CC86C0296D963_inline(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_13 = __this->get_validator_6();
		XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * L_14 = V_1;
		NullCheck(L_13);
		XmlSchemaValidator_AddSchema_m295A52A9C2FA6F15267508249D58AA1C8FC82F7C(L_13, L_14, /*hidden argument*/NULL);
		__this->set_inlineSchemaParser_22((Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 *)NULL);
		__this->set_validationState_9(2);
	}

IL_007c:
	{
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::ReadAheadForMemberType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_ReadAheadForMemberType_mEC899F9EF6F531077A5F22E643A54FFACF64683F (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_ReadAheadForMemberType_mEC899F9EF6F531077A5F22E643A54FFACF64683F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		goto IL_00fc;
	}

IL_0005:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00fc;
			}
			case 1:
			{
				goto IL_00fc;
			}
			case 2:
			{
				goto IL_005a;
			}
			case 3:
			{
				goto IL_005a;
			}
			case 4:
			{
				goto IL_00fc;
			}
			case 5:
			{
				goto IL_00fc;
			}
			case 6:
			{
				goto IL_00fc;
			}
			case 7:
			{
				goto IL_00fc;
			}
			case 8:
			{
				goto IL_00fc;
			}
			case 9:
			{
				goto IL_00fc;
			}
			case 10:
			{
				goto IL_00fc;
			}
			case 11:
			{
				goto IL_00fc;
			}
			case 12:
			{
				goto IL_0076;
			}
			case 13:
			{
				goto IL_0076;
			}
			case 14:
			{
				goto IL_008f;
			}
		}
	}
	{
		goto IL_00fc;
	}

IL_005a:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_3 = __this->get_validator_6();
		XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * L_4 = (XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF *)il2cpp_codegen_object_new(XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF_il2cpp_TypeInfo_var);
		XmlValueGetter__ctor_mDFBA4B35927F63FB2BA3373FF55EAC08E5EF0364(L_4, __this, (intptr_t)((intptr_t)XsdValidatingReader_GetStringValue_m7B26377231669CB9DE33D16E5BF1DCB2C2A12C84_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		XmlSchemaValidator_ValidateText_mEC98CA08C8049A6A223B891C5B87E7967F6FB4E6(L_3, L_4, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_0076:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_5 = __this->get_validator_6();
		XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * L_6 = (XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF *)il2cpp_codegen_object_new(XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF_il2cpp_TypeInfo_var);
		XmlValueGetter__ctor_mDFBA4B35927F63FB2BA3373FF55EAC08E5EF0364(L_6, __this, (intptr_t)((intptr_t)XsdValidatingReader_GetStringValue_m7B26377231669CB9DE33D16E5BF1DCB2C2A12C84_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		XmlSchemaValidator_ValidateWhitespace_m9105BE38EC4B852C5843747C5679C479A7B1A8BE(L_5, L_6, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_008f:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_7 = __this->get_validator_6();
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_8 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_7);
		RuntimeObject * L_9 = XmlSchemaValidator_ValidateEndElement_mF63F5F6AB7428530BD1973EBF6B319E4B8119486(L_7, L_8, /*hidden argument*/NULL);
		__this->set_atomicValue_23(L_9);
		String_t* L_10 = XsdValidatingReader_GetOriginalAtomicValueStringOfElement_m1630A664BBF86AADC4E3C6F83A330E8ADC7237D2(__this, /*hidden argument*/NULL);
		__this->set_originalAtomicValueString_25(L_10);
		RuntimeObject * L_11 = __this->get_atomicValue_23();
		if (L_11)
		{
			goto IL_00c2;
		}
	}
	{
		__this->set_atomicValue_23(__this);
		return;
	}

IL_00c2:
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_12 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_12);
		bool L_13 = XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_010c;
		}
	}
	{
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_14 = __this->get_cachingReader_27();
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_15 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_15);
		XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * L_16 = XmlSchemaInfo_get_XmlType_m973F86FEE3CAD715D8290025248DEAF326E1813B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_17 = XmlSchemaType_get_ValueConverter_m5CD7C260106A4DCBAE6A160823EB242F5BC9941E(L_16, /*hidden argument*/NULL);
		RuntimeObject * L_18 = __this->get_atomicValue_23();
		NullCheck(L_17);
		String_t* L_19 = VirtFuncInvoker1< String_t*, RuntimeObject * >::Invoke(51 /* System.String System.Xml.Schema.XmlValueConverter::ToString(System.Object) */, L_17, L_18);
		String_t* L_20 = __this->get_originalAtomicValueString_25();
		NullCheck(L_14);
		XsdCachingReader_SwitchTextNodeAndEndElement_m35E29C5C0030E9236697990D55E27F6BEB12F327(L_14, L_19, L_20, /*hidden argument*/NULL);
		return;
	}

IL_00fc:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_21 = __this->get_coreReader_3();
		NullCheck(L_21);
		bool L_22 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, L_21);
		if (L_22)
		{
			goto IL_0005;
		}
	}

IL_010c:
	{
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::GetIsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_GetIsDefault_m5498C296A342BF23079FB179DD01F8FC1F008230 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_GetIsDefault_m5498C296A342BF23079FB179DD01F8FC1F008230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		if (((XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 *)IsInstClass((RuntimeObject*)L_0, XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51_il2cpp_TypeInfo_var)))
		{
			goto IL_0156;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_1 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_1);
		bool L_2 = XmlSchemaInfo_get_HasDefaultValue_mB92691DCD64A51A3EDED71349C679DF837233A42(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0156;
		}
	}
	{
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_3 = XsdValidatingReader_GetCachingReader_mF33698664D3DF4B31EA3C10BC727F6033989E5AB(__this, /*hidden argument*/NULL);
		__this->set_coreReader_3(L_3);
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_4 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_4);
		bool L_5 = XmlSchemaInfo_get_IsUnionType_mB1E024466A8CD77B36D5D33E17FDA28FA0367E03(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_6 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_6);
		bool L_7 = XmlSchemaInfo_get_IsNil_mAED336D8A790E5B35251D6804D4E5BEDB190409C_inline(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		XsdValidatingReader_ReadAheadForMemberType_mEC899F9EF6F531077A5F22E643A54FFACF64683F(__this, /*hidden argument*/NULL);
		goto IL_0144;
	}

IL_0051:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_8 = __this->get_coreReader_3();
		NullCheck(L_8);
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, L_8);
		if (!L_9)
		{
			goto IL_0144;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_10 = __this->get_coreReader_3();
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_10);
		V_0 = L_11;
		int32_t L_12 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0144;
			}
			case 1:
			{
				goto IL_0144;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00b6;
			}
			case 4:
			{
				goto IL_0144;
			}
			case 5:
			{
				goto IL_0144;
			}
			case 6:
			{
				goto IL_0144;
			}
			case 7:
			{
				goto IL_0144;
			}
			case 8:
			{
				goto IL_0144;
			}
			case 9:
			{
				goto IL_0144;
			}
			case 10:
			{
				goto IL_0144;
			}
			case 11:
			{
				goto IL_0144;
			}
			case 12:
			{
				goto IL_00cf;
			}
			case 13:
			{
				goto IL_00cf;
			}
			case 14:
			{
				goto IL_00e8;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_00b6:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_13 = __this->get_validator_6();
		XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * L_14 = (XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF *)il2cpp_codegen_object_new(XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF_il2cpp_TypeInfo_var);
		XmlValueGetter__ctor_mDFBA4B35927F63FB2BA3373FF55EAC08E5EF0364(L_14, __this, (intptr_t)((intptr_t)XsdValidatingReader_GetStringValue_m7B26377231669CB9DE33D16E5BF1DCB2C2A12C84_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		XmlSchemaValidator_ValidateText_mEC98CA08C8049A6A223B891C5B87E7967F6FB4E6(L_13, L_14, /*hidden argument*/NULL);
		goto IL_0144;
	}

IL_00cf:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_15 = __this->get_validator_6();
		XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF * L_16 = (XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF *)il2cpp_codegen_object_new(XmlValueGetter_tE51E83B894C27BA5CD229FD9E8C5FC9C851555DF_il2cpp_TypeInfo_var);
		XmlValueGetter__ctor_mDFBA4B35927F63FB2BA3373FF55EAC08E5EF0364(L_16, __this, (intptr_t)((intptr_t)XsdValidatingReader_GetStringValue_m7B26377231669CB9DE33D16E5BF1DCB2C2A12C84_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		XmlSchemaValidator_ValidateWhitespace_m9105BE38EC4B852C5843747C5679C479A7B1A8BE(L_15, L_16, /*hidden argument*/NULL);
		goto IL_0144;
	}

IL_00e8:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_17 = __this->get_validator_6();
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_18 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_17);
		RuntimeObject * L_19 = XmlSchemaValidator_ValidateEndElement_mF63F5F6AB7428530BD1973EBF6B319E4B8119486(L_17, L_18, /*hidden argument*/NULL);
		__this->set_atomicValue_23(L_19);
		String_t* L_20 = XsdValidatingReader_GetOriginalAtomicValueStringOfElement_m1630A664BBF86AADC4E3C6F83A330E8ADC7237D2(__this, /*hidden argument*/NULL);
		__this->set_originalAtomicValueString_25(L_20);
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_21 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_21);
		bool L_22 = XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0144;
		}
	}
	{
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_23 = __this->get_cachingReader_27();
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_24 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_24);
		XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * L_25 = XmlSchemaInfo_get_XmlType_m973F86FEE3CAD715D8290025248DEAF326E1813B(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = XmlSchemaType_get_ValueConverter_m5CD7C260106A4DCBAE6A160823EB242F5BC9941E(L_25, /*hidden argument*/NULL);
		RuntimeObject * L_27 = __this->get_atomicValue_23();
		NullCheck(L_26);
		String_t* L_28 = VirtFuncInvoker1< String_t*, RuntimeObject * >::Invoke(51 /* System.String System.Xml.Schema.XmlValueConverter::ToString(System.Object) */, L_26, L_27);
		String_t* L_29 = __this->get_originalAtomicValueString_25();
		NullCheck(L_23);
		XsdCachingReader_SwitchTextNodeAndEndElement_m35E29C5C0030E9236697990D55E27F6BEB12F327(L_23, L_28, L_29, /*hidden argument*/NULL);
	}

IL_0144:
	{
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_30 = __this->get_cachingReader_27();
		NullCheck(L_30);
		XsdCachingReader_SetToReplayMode_mE3A6B50BC6DFF867D3FE67CBE0B60E0E1898AB20(L_30, /*hidden argument*/NULL);
		__this->set_replayCache_14((bool)1);
	}

IL_0156:
	{
		return;
	}
}
// System.Void System.Xml.XsdValidatingReader::GetMemberType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_GetMemberType_m866701B4F3C840CBC568FAC18BFD1480EBFDC221 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_GetMemberType_m866701B4F3C840CBC568FAC18BFD1480EBFDC221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_0 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_0);
		XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * L_1 = XmlSchemaInfo_get_MemberType_m2CD5F67195CABE679D3643DA6A550A6FD43A49B2_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject * L_2 = __this->get_atomicValue_23();
		if ((!(((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 *)__this))))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		return;
	}

IL_0017:
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_coreReader_3();
		if (((XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 *)IsInstClass((RuntimeObject*)L_3, XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_4 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_4);
		bool L_5 = XmlSchemaInfo_get_IsUnionType_mB1E024466A8CD77B36D5D33E17FDA28FA0367E03(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_6 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_6);
		bool L_7 = XmlSchemaInfo_get_IsNil_mAED336D8A790E5B35251D6804D4E5BEDB190409C_inline(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_8 = XsdValidatingReader_GetCachingReader_mF33698664D3DF4B31EA3C10BC727F6033989E5AB(__this, /*hidden argument*/NULL);
		__this->set_coreReader_3(L_8);
		XsdValidatingReader_ReadAheadForMemberType_mEC899F9EF6F531077A5F22E643A54FFACF64683F(__this, /*hidden argument*/NULL);
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_9 = __this->get_cachingReader_27();
		NullCheck(L_9);
		XsdCachingReader_SetToReplayMode_mE3A6B50BC6DFF867D3FE67CBE0B60E0E1898AB20(L_9, /*hidden argument*/NULL);
		__this->set_replayCache_14((bool)1);
	}

IL_0062:
	{
		return;
	}
}
// System.Xml.XsdCachingReader System.Xml.XsdValidatingReader::GetCachingReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * XsdValidatingReader_GetCachingReader_mF33698664D3DF4B31EA3C10BC727F6033989E5AB (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_GetCachingReader_mF33698664D3DF4B31EA3C10BC727F6033989E5AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_0 = __this->get_cachingReader_27();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = __this->get_coreReader_3();
		RuntimeObject* L_2 = __this->get_lineInfo_38();
		CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6 * L_3 = (CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6 *)il2cpp_codegen_object_new(CachingEventHandler_t44C6A67E0AAD2F217D8A9FFAAFF39575AEF642F6_il2cpp_TypeInfo_var);
		CachingEventHandler__ctor_mFF22B7B986AA934E4918DBA2541024257231F2F5(L_3, __this, (intptr_t)((intptr_t)XsdValidatingReader_CachingCallBack_m65B17C117CA8C577569843BFC4454776347C3A00_RuntimeMethod_var), /*hidden argument*/NULL);
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_4 = (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 *)il2cpp_codegen_object_new(XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51_il2cpp_TypeInfo_var);
		XsdCachingReader__ctor_mD427EF9C114B53C4873763730F47AC0738CEDF62(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_cachingReader_27(L_4);
		goto IL_003e;
	}

IL_002d:
	{
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_5 = __this->get_cachingReader_27();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_6 = __this->get_coreReader_3();
		NullCheck(L_5);
		XsdCachingReader_Reset_m06DD32BD7C249F1E0EE1FFA71E1FC71B01DF1B51(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_7 = __this->get_cachingReader_27();
		__this->set_lineInfo_38(L_7);
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_8 = __this->get_cachingReader_27();
		return L_8;
	}
}
// System.Xml.ValidatingReaderNodeData System.Xml.XsdValidatingReader::CreateDummyTextNode(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * XsdValidatingReader_CreateDummyTextNode_m63BAF57EC15ED06ED442B5521C62C887CC5A9B46 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, String_t* ___attributeValue0, int32_t ___depth1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_CreateDummyTextNode_m63BAF57EC15ED06ED442B5521C62C887CC5A9B46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_0 = __this->get_textNode_28();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_1 = (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F *)il2cpp_codegen_object_new(ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F_il2cpp_TypeInfo_var);
		ValidatingReaderNodeData__ctor_m76D1896B70DF9B1C4C6F052BA2CA3C6E47A33D2C(L_1, 3, /*hidden argument*/NULL);
		__this->set_textNode_28(L_1);
	}

IL_0014:
	{
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_2 = __this->get_textNode_28();
		int32_t L_3 = ___depth1;
		NullCheck(L_2);
		ValidatingReaderNodeData_set_Depth_m9700A8C585C8030F9CF3F35415FFABD4C115D210_inline(L_2, L_3, /*hidden argument*/NULL);
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_4 = __this->get_textNode_28();
		String_t* L_5 = ___attributeValue0;
		NullCheck(L_4);
		ValidatingReaderNodeData_set_RawValue_mE3CBAC0F908D97155CA10A935461B723CC9A6919_inline(L_4, L_5, /*hidden argument*/NULL);
		ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * L_6 = __this->get_textNode_28();
		return L_6;
	}
}
// System.Void System.Xml.XsdValidatingReader::CachingCallBack(System.Xml.XsdCachingReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdValidatingReader_CachingCallBack_m65B17C117CA8C577569843BFC4454776347C3A00 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * ___cachingReader0, const RuntimeMethod* method)
{
	{
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_0 = ___cachingReader0;
		NullCheck(L_0);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = XsdCachingReader_GetCoreReader_m0E9B56C4CDD74BA165A246EFF92FE5683E7FCDED_inline(L_0, /*hidden argument*/NULL);
		__this->set_coreReader_3(L_1);
		XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * L_2 = ___cachingReader0;
		NullCheck(L_2);
		RuntimeObject* L_3 = XsdCachingReader_GetLineInfo_m9F6BCA2D58E2BE98F8BB2EA5EB462040C3B2D234_inline(L_2, /*hidden argument*/NULL);
		__this->set_lineInfo_38(L_3);
		__this->set_replayCache_14((bool)0);
		return;
	}
}
// System.String System.Xml.XsdValidatingReader::GetOriginalAtomicValueStringOfElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdValidatingReader_GetOriginalAtomicValueStringOfElement_m1630A664BBF86AADC4E3C6F83A330E8ADC7237D2 (XsdValidatingReader_t34A7241660D82975EDF0B427CBDF6CC04B1B91E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsdValidatingReader_GetOriginalAtomicValueStringOfElement_m1630A664BBF86AADC4E3C6F83A330E8ADC7237D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * V_0 = NULL;
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_0 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_0);
		bool L_1 = XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * L_2 = __this->get_xmlSchemaInfo_24();
		NullCheck(L_2);
		XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * L_3 = XmlSchemaInfo_get_SchemaElement_mD5FF5600CD686A883DFFDE4E953AA3EE842913C3_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = XmlSchemaElement_get_DefaultValue_m3D061C2C39BABA68ADD2D91101E02B4911FD6BB9_inline(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = XmlSchemaElement_get_FixedValue_m60A08365AE37E004EF5601418CFBB1AA2B1F2556_inline(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002b:
	{
		XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = XmlSchemaElement_get_DefaultValue_m3D061C2C39BABA68ADD2D91101E02B4911FD6BB9_inline(L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0032:
	{
		XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * L_11 = __this->get_validator_6();
		NullCheck(L_11);
		String_t* L_12 = XmlSchemaValidator_GetConcatenatedValue_mE42DF0BB3E5BE32162BD1C6F9D85B08AC8C56167(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003e:
	{
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_13;
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
// Conversion methods for marshalling of: System.Xml.Xsl.Runtime.StringConcat
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_pinvoke(const StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43& unmarshaled, StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_pinvoke& marshaled)
{
	Exception_t* ___strList_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'strList' of type 'StringConcat'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___strList_5Exception, NULL);
}
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_pinvoke_back(const StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_pinvoke& marshaled, StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43& unmarshaled)
{
	Exception_t* ___strList_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'strList' of type 'StringConcat'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___strList_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Xsl.Runtime.StringConcat
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_pinvoke_cleanup(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.Xsl.Runtime.StringConcat
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_com(const StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43& unmarshaled, StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_com& marshaled)
{
	Exception_t* ___strList_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'strList' of type 'StringConcat'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___strList_5Exception, NULL);
}
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_com_back(const StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_com& marshaled, StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43& unmarshaled)
{
	Exception_t* ___strList_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'strList' of type 'StringConcat'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___strList_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Xsl.Runtime.StringConcat
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_com_cleanup(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_com& marshaled)
{
}
// System.Void System.Xml.Xsl.Runtime.StringConcat::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConcat_Clear_m03C1710FADCD2580A01A47B92B406938564CF681 (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method)
{
	{
		__this->set_idxStr_6(0);
		__this->set_delimiter_4((String_t*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StringConcat_Clear_m03C1710FADCD2580A01A47B92B406938564CF681_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * _thisAdjusted = reinterpret_cast<StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 *>(__this + _offset);
	StringConcat_Clear_m03C1710FADCD2580A01A47B92B406938564CF681(_thisAdjusted, method);
}
// System.Int32 System.Xml.Xsl.Runtime.StringConcat::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184 (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_idxStr_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * _thisAdjusted = reinterpret_cast<StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 *>(__this + _offset);
	return StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184_inline(_thisAdjusted, method);
}
// System.String System.Xml.Xsl.Runtime.StringConcat::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_idxStr_6();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0042;
			}
			case 4:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_0078;
	}

IL_0023:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0029:
	{
		String_t* L_3 = __this->get_s1_0();
		return L_3;
	}

IL_0030:
	{
		String_t* L_4 = __this->get_s1_0();
		String_t* L_5 = __this->get_s2_1();
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0042:
	{
		String_t* L_7 = __this->get_s1_0();
		String_t* L_8 = __this->get_s2_1();
		String_t* L_9 = __this->get_s3_2();
		String_t* L_10 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_005a:
	{
		String_t* L_11 = __this->get_s1_0();
		String_t* L_12 = __this->get_s2_1();
		String_t* L_13 = __this->get_s3_2();
		String_t* L_14 = __this->get_s4_3();
		String_t* L_15 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0078:
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_16 = __this->get_strList_5();
		NullCheck(L_16);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38(L_16, /*hidden argument*/List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var);
		String_t* L_18 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * _thisAdjusted = reinterpret_cast<StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 *>(__this + _offset);
	return StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C(_thisAdjusted, method);
}
// System.Void System.Xml.Xsl.Runtime.StringConcat::ConcatNoDelimiter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_2 = NULL;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->get_idxStr_6();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_003e;
			}
			case 4:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_009c;
	}

IL_0023:
	{
		String_t* L_2 = ___s0;
		__this->set_s1_0(L_2);
		goto IL_00a8;
	}

IL_002c:
	{
		String_t* L_3 = ___s0;
		__this->set_s2_1(L_3);
		goto IL_00a8;
	}

IL_0035:
	{
		String_t* L_4 = ___s0;
		__this->set_s3_2(L_4);
		goto IL_00a8;
	}

IL_003e:
	{
		String_t* L_5 = ___s0;
		__this->set_s4_3(L_5);
		goto IL_00a8;
	}

IL_0047:
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = __this->get_strList_5();
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_7 = __this->get_strList_5();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_7, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		G_B9_0 = L_8;
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 8;
	}

IL_005d:
	{
		V_1 = G_B9_0;
		int32_t L_9 = V_1;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_10 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377(L_10, L_9, /*hidden argument*/List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_11 = L_10;
		V_2 = L_11;
		__this->set_strList_5(L_11);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_12 = V_2;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_13 = L_12;
		String_t* L_14 = __this->get_s1_0();
		NullCheck(L_13);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_13, L_14, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_15 = L_13;
		String_t* L_16 = __this->get_s2_1();
		NullCheck(L_15);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_15, L_16, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_17 = L_15;
		String_t* L_18 = __this->get_s3_2();
		NullCheck(L_17);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_17, L_18, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		String_t* L_19 = __this->get_s4_3();
		NullCheck(L_17);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_17, L_19, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
	}

IL_009c:
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_20 = __this->get_strList_5();
		String_t* L_21 = ___s0;
		NullCheck(L_20);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_20, L_21, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
	}

IL_00a8:
	{
		int32_t L_22 = __this->get_idxStr_6();
		__this->set_idxStr_6(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		return;
	}
}
IL2CPP_EXTERN_C  void StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E_AdjustorThunk (RuntimeObject * __this, String_t* ___s0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * _thisAdjusted = reinterpret_cast<StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 *>(__this + _offset);
	StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E(_thisAdjusted, ___s0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlReaderSettings_get_ValidationFlags_m89FED9E7941956F89CE39987E9B73BDE4E05A731_inline (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationFlags_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * XmlReaderSettings_GetEventHandler_m8EA4503D608F4AF8F1737AF9347AFAF1953D6A0A_inline (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, const RuntimeMethod* method)
{
	{
		ValidationEventHandler_t4485151111870B499F014BC4EC05B066589AF4BF * L_0 = __this->get_valEventHandler_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XmlSchemaValidator_set_XmlResolver_mBD191D531B90E42D6D0ECB16A51718497F82C2C6_inline (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___value0, const RuntimeMethod* method)
{
	{
		XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * L_0 = ___value0;
		__this->set_xmlResolver_29(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XmlSchemaValidator_set_ValidationEventSender_mC9B13895979D2742F51BB6FDE65E4449DC115062_inline (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_validationEventSender_25(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * XmlSchemaValidator_get_SchemaSet_mD7A7967F25B07ABD9B1816DE7E91F3B5F580327F_inline (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, const RuntimeMethod* method)
{
	{
		XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * L_0 = __this->get_schemaSet_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * XmlSchemaSet_get_ReaderSettings_mDE46E12D557EFDBE1CDE4FB82AC9BFDB179CA3BC_inline (XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * __this, const RuntimeMethod* method)
{
	{
		XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * L_0 = __this->get_readerSettings_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlReaderSettings_get_DtdProcessing_m9A26B00E1047537404699EF2AAA1444F0A26C2F2_inline (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_dtdProcessing_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlSchemaValidator_get_ValidationFlags_m2E7C8957A9816ACFF43C40E045E7DA7FA352EF4D_inline (XmlSchemaValidator_tF0EF8E608FF1DD4877C70FC7DC2DE2662A0B072C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationFlags_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XmlReaderSettings_set_ReadOnly_mE10CB07BB78FCCE8406261229BD32DA8559FE540_inline (XmlReaderSettings_t33E632C6BB215A5F2B4EAA81B289E027AF617F65 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isReadOnly_18(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ValidatingReaderNodeData_get_NodeType_m0A6E5091F3FE3F7EC6D92CECD150763159D427FD_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_nodeType_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ValidatingReaderNodeData_get_Namespace_m665D8181BB49C284A46295E7B8C2F17F4C1AFE53_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_namespaceUri_1();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ValidatingReaderNodeData_get_LocalName_mD8F76DD6578DA1E592371099C12CB1C5490BEECD_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_localName_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ValidatingReaderNodeData_get_Prefix_mD43D0F3E03CE33FD3A9056B6F45D957D95D43A7A_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_prefix_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ValidatingReaderNodeData_get_RawValue_m9423A1244D964F62AC3382E6C22AD73A25163235_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_rawValue_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ValidatingReaderNodeData_get_Depth_mF0AB24A1198767166226CEF7681E36ECF407671D_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_depth_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlSchemaInfo_get_ContentType_m77897D691202B05FBD0C1C7F69CA73F3DF35924F_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_contentType_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * XmlSchemaInfo_get_SchemaType_m413D24A7AC6C0775A0538316E5BA013E647A7137_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method)
{
	{
		XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * L_0 = __this->get_schemaType_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * XmlSchemaType_get_Datatype_m2322612F38435EFB3B49E62EA23DB6408BF6BF54_inline (XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * __this, const RuntimeMethod* method)
{
	{
		XmlSchemaDatatype_t6D9535C4B3780086DF21646303E2350D40A5A550 * L_0 = __this->get_datatype_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * ValidatingReaderNodeData_get_AttInfo_mA1CC10671610DCE1466169A47AC69EAC96A4B993_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, const RuntimeMethod* method)
{
	{
		AttributePSVIInfo_t1991F050207B868048BC97BE0C50F6CC9A430C94 * L_0 = __this->get_attributePSVIInfo_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XmlSchemaInfo_get_IsDefault_mA61FE66FB9A6AF00ACEE19643606C37234FA6E08_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isDefault_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XmlSchemaInfo_get_IsNil_mAED336D8A790E5B35251D6804D4E5BEDB190409C_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isNil_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XmlSchemaInfo_get_Validity_mA52D9F702D24A830CE1CD9C129293702F90D3924_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validity_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * XmlSchemaInfo_get_MemberType_m2CD5F67195CABE679D3643DA6A550A6FD43A49B2_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method)
{
	{
		XmlSchemaSimpleType_t3E090F6F088E02B69D984EED6C2A209ACB42A68A * L_0 = __this->get_memberType_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * XmlSchemaInfo_get_SchemaElement_mD5FF5600CD686A883DFFDE4E953AA3EE842913C3_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method)
{
	{
		XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * L_0 = __this->get_schemaElement_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B * XmlSchemaInfo_get_SchemaAttribute_mFC3EA434A7F15923970FA1DBEE84FE21BFE9708C_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, const RuntimeMethod* method)
{
	{
		XmlSchemaAttribute_tC31F76D28F8D593EFB409CD27FABFC32AF27E99B * L_0 = __this->get_schemaAttribute_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XmlSchemaInfo_set_Validity_mE43C075415C50FAD9951AEC92D91A08F437DF9BC_inline (XmlSchemaInfo_tEC7C8E9E6FC5CF178F83789C9B3336C5A9145035 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_validity_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Parser_FinishParsing_m443D8C585A12C5601FC3E171B8720E0A52D1FDFC_inline (Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_schemaType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * Parser_get_XmlSchema_mF4616651AA57B08D39F850C0225CC86C0296D963_inline (Parser_tAF8FC602A0D1411B91B8B88BABCB6E59F20EB920 * __this, const RuntimeMethod* method)
{
	{
		XmlSchema_tBCBDA8467097049177257E2A0493EDF5C8FD477F * L_0 = __this->get_schema_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValidatingReaderNodeData_set_Depth_m9700A8C585C8030F9CF3F35415FFABD4C115D210_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_depth_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValidatingReaderNodeData_set_RawValue_mE3CBAC0F908D97155CA10A935461B723CC9A6919_inline (ValidatingReaderNodeData_tB7D1981AED7CEDF168218AA0F59586DBB3502E3F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_rawValue_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * XsdCachingReader_GetCoreReader_m0E9B56C4CDD74BA165A246EFF92FE5683E7FCDED_inline (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_coreReader_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* XsdCachingReader_GetLineInfo_m9F6BCA2D58E2BE98F8BB2EA5EB462040C3B2D234_inline (XsdCachingReader_t8EA10A18D0BF0FC40EC21E5C14F47233231D2B51 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_lineInfo_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* XmlSchemaElement_get_DefaultValue_m3D061C2C39BABA68ADD2D91101E02B4911FD6BB9_inline (XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_defaultValue_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* XmlSchemaElement_get_FixedValue_m60A08365AE37E004EF5601418CFBB1AA2B1F2556_inline (XmlSchemaElement_tF3C95D404CFEB675C3BE8ECDC5C73FFD0F92568D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_fixedValue_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184_inline (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_idxStr_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
