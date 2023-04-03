#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<Fungus.Block>
struct List_1_t4B09BE8D107B89B59177531279B99C1C6D8BC8F9;
// System.Collections.Generic.List`1<Fungus.Command>
struct List_1_t2F6741EAA67132EED2090F49CF3A820C4CA27D97;
// System.Collections.Generic.List`1<Fungus.Flowchart>
struct List_1_t751943B87291EEE6E585CA52EC05C239AD6EF82F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Fungus.Variable>
struct List_1_t2B8F5054F5939897E93A8E3D83BF8EE0543965A7;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<System.String>>
struct TaskFactory_1_tC329C8C070F6C9CB24E2A226B02F2CD53832F0F5;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// ChallengerContoller
struct ChallengerContoller_tE2313099260B49158E1D9F5703D2D61F5A41D649;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Exception
struct Exception_t;
// Fungus.Flowchart
struct Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Unity.Services.Analytics.IAnalyticsService
struct IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Authentication.IAuthenticationService
struct IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737;
// Unity.Services.CloudSave.ICloudSaveService
struct ICloudSaveService_tCE7C960A43D4BCA710CD4AD57ED04A1E6B957D5D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// InitWithDefault
struct InitWithDefault_t8CC5B3FDC0D8B97E450C6A5CBB8217E9E86AA178;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// InteractableItem
struct InteractableItem_t4A620044E79C7A9F7C257617C60D097D696128B6;
// Interactables
struct Interactables_tCC0548122132F32B4EC5FB506E25B0BA443E57FA;
// Fungus.LuaEnvironment
struct LuaEnvironment_t3A112639A541B28F520F776FFA44BD7BED631804;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NPCController
struct NPCController_t8FB7D6175D04DE204AB49C3B0C8E50FD2B352EFA;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PickUp
struct PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Fungus.StringSubstituter
struct StringSubstituter_t9DE9C22E0B57A025869BB86C3EEA2A0DF49BD40F;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// TestCloudSave
struct TestCloudSave_tF0824C0ECFC466AC5B8E1B350DD397F687A47F81;
// TestForm
struct TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TransparencySortGraphicsHelper
struct TransparencySortGraphicsHelper_t7C9A0044E3724B8A18EF058FC12DCD8DD1A63B81;
// UGS_Analytics
struct UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// PlayerController/<Move>d__12
struct U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// TestForm/<FillForm>d__6
struct U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D;
// TestForm/<RetrieveDataFromSheet>d__7
struct U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A;

IL2CPP_EXTERN_C RuntimeClass* ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloudSaveDataClient_t4DA96D7AE27F489F3EA3F255C5199CF7C56A535A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloudSaveService_tCE7C960A43D4BCA710CD4AD57ED04A1E6B957D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Interactables_tCC0548122132F32B4EC5FB506E25B0BA443E57FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1A493FA47ABE4163A03C1C8839398BCFFED566D8;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C;
IL2CPP_EXTERN_C String_t* _stringLiteral25E6F24DBB8CA9C607EC73120BF128D322121033;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F64A4CB80CF853793F7A468ECADE6D758ACFD91;
IL2CPP_EXTERN_C String_t* _stringLiteral33CBB87B050C6D7307565806CDEDC96B9EFE9A8F;
IL2CPP_EXTERN_C String_t* _stringLiteral4047C290C2BA0C8ABAB91603F8E770E5750497CB;
IL2CPP_EXTERN_C String_t* _stringLiteral448C989F9E2FFA2ACCF9821BF0F1B34E01A65085;
IL2CPP_EXTERN_C String_t* _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral841DA9A8888CFB8CB70A50F24BD45DEB65DB9651;
IL2CPP_EXTERN_C String_t* _stringLiteral8A7E132F5C188D5494BA4F4A7B6CBCDA76E13A7A;
IL2CPP_EXTERN_C String_t* _stringLiteral97E7757A55F87B040EA4E04FFD7A66A76E01B9C1;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9;
IL2CPP_EXTERN_C String_t* _stringLiteralA003D62EF417557C5B848188B5B3947ED732A503;
IL2CPP_EXTERN_C String_t* _stringLiteralA02BE1EBB0991F6003E6D6ACE9580E1EA5A55BFA;
IL2CPP_EXTERN_C String_t* _stringLiteralA64B82AABA6570692962ACFD43D68F23D9DF60AE;
IL2CPP_EXTERN_C String_t* _stringLiteralAA8A7D8D6DB22FB8310B459B8C4F6BDFEA338E2B;
IL2CPP_EXTERN_C String_t* _stringLiteralAC8FB01AEB91A16A16798F70853261F7D166D583;
IL2CPP_EXTERN_C String_t* _stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496;
IL2CPP_EXTERN_C String_t* _stringLiteralEDB92D7F701917747391F54A9FA0042A0F0470C1;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_m7CC396FB762127580388FF5DACDD64FA565E99F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mCB12CBEBB8EA75321C15323D72D69F0934D38716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m94CA0DF4C2A0456B8E83021BAA485C49BA10EB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mDF1FEF56B19EC06D288E3F5DD2D33C70786469C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_mDAC2CF021DFF54004BF52FB1FA6E746B26515949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m4A53C35BD34B71BF376BF6F63C459483698FE129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInteractables_tCC0548122132F32B4EC5FB506E25B0BA443E57FA_mB6C8D520F7826578A8DF5893F564DFF39D95AB4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7_mA8A82BE9D209A0729497465EBCF3384D69AF7C1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE056F96CA22AF4CE783276EC5B965C5EA4ABAEC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m717E17DF7B7BE508365E7449ED7110AF11B474BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m970DD1ECEBE9AA97C61C1E81861071E20F3E64E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFillFormU3Ed__6_System_Collections_IEnumerator_Reset_m83F1F8C8D1102091572F81B9187E3F731E420EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveU3Ed__12_System_Collections_IEnumerator_Reset_m90598F5CAE441A58E14112F8B1587BF87A1962E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRetrieveDataFromSheetU3Ed__7_System_Collections_IEnumerator_Reset_m7470E74AEC593B33491E52D742B1CC69E848E2BA_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::<Values>k__BackingField
	RuntimeObject* ___U3CValuesU3Ek__BackingField_0;
};

// Unity.Services.Authentication.SignInOptions
struct SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291  : public RuntimeObject
{
	// System.Boolean Unity.Services.Authentication.SignInOptions::<CreateAccount>k__BackingField
	bool ___U3CCreateAccountU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// TransparencySortGraphicsHelper
struct TransparencySortGraphicsHelper_t7C9A0044E3724B8A18EF058FC12DCD8DD1A63B81  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// TestForm/<FillForm>d__6
struct U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D  : public RuntimeObject
{
	// System.Int32 TestForm/<FillForm>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestForm/<FillForm>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String TestForm/<FillForm>d__6::entry
	String_t* ___entry_2;
	// System.String TestForm/<FillForm>d__6::value
	String_t* ___value_3;
	// TestForm TestForm/<FillForm>d__6::<>4__this
	TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* ___U3CU3E4__this_4;
	// UnityEngine.Networking.UnityWebRequest TestForm/<FillForm>d__6::<req>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CreqU3E5__2_5;
};

// TestForm/<RetrieveDataFromSheet>d__7
struct U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A  : public RuntimeObject
{
	// System.Int32 TestForm/<RetrieveDataFromSheet>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestForm/<RetrieveDataFromSheet>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TestForm TestForm/<RetrieveDataFromSheet>d__7::<>4__this
	TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest TestForm/<RetrieveDataFromSheet>d__7::<req>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CreqU3E5__2_3;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<System.String>>
struct TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_result_38;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// PlayerController/<Move>d__12
struct U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8  : public RuntimeObject
{
	// System.Int32 PlayerController/<Move>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Move>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Move>d__12::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 PlayerController/<Move>d__12::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00  : public Exception_t
{
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// InitWithDefault/<Start>d__1
struct U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486 
{
	// System.Int32 InitWithDefault/<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder InitWithDefault/<Start>d__1::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// InitWithDefault InitWithDefault/<Start>d__1::<>4__this
	InitWithDefault_t8CC5B3FDC0D8B97E450C6A5CBB8217E9E86AA178* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter InitWithDefault/<Start>d__1::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<System.String>> InitWithDefault/<Start>d__1::<>u__2
	TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E ___U3CU3Eu__2_4;
};

// TestCloudSave/<Start>d__1
struct U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5 
{
	// System.Int32 TestCloudSave/<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TestCloudSave/<Start>d__1::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// TestCloudSave TestCloudSave/<Start>d__1::<>4__this
	TestCloudSave_tF0824C0ECFC466AC5B8E1B350DD397F687A47F81* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter TestCloudSave/<Start>d__1::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// UGS_Analytics/<Start>d__1
struct U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE 
{
	// System.Int32 UGS_Analytics/<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder UGS_Analytics/<Start>d__1::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// UGS_Analytics UGS_Analytics/<Start>d__1::<>4__this
	UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter UGS_Analytics/<Start>d__1::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Services.Analytics.ConsentCheckException
struct ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D  : public RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00
{
	// Unity.Services.Analytics.ConsentCheckExceptionReason Unity.Services.Analytics.ConsentCheckException::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_19;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// ChallengerContoller
struct ChallengerContoller_tE2313099260B49158E1D9F5703D2D61F5A41D649  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fungus.Flowchart
struct Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Fungus.Flowchart::version
	int32_t ___version_5;
	// UnityEngine.Vector2 Fungus.Flowchart::scrollPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollPos_6;
	// UnityEngine.Vector2 Fungus.Flowchart::variablesScrollPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___variablesScrollPos_7;
	// System.Boolean Fungus.Flowchart::variablesExpanded
	bool ___variablesExpanded_8;
	// System.Single Fungus.Flowchart::blockViewHeight
	float ___blockViewHeight_9;
	// System.Single Fungus.Flowchart::zoom
	float ___zoom_10;
	// UnityEngine.Rect Fungus.Flowchart::scrollViewRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___scrollViewRect_11;
	// System.Collections.Generic.List`1<Fungus.Block> Fungus.Flowchart::selectedBlocks
	List_1_t4B09BE8D107B89B59177531279B99C1C6D8BC8F9* ___selectedBlocks_12;
	// System.Collections.Generic.List`1<Fungus.Command> Fungus.Flowchart::selectedCommands
	List_1_t2F6741EAA67132EED2090F49CF3A820C4CA27D97* ___selectedCommands_13;
	// System.Collections.Generic.List`1<Fungus.Variable> Fungus.Flowchart::variables
	List_1_t2B8F5054F5939897E93A8E3D83BF8EE0543965A7* ___variables_14;
	// System.String Fungus.Flowchart::description
	String_t* ___description_15;
	// System.Single Fungus.Flowchart::stepPause
	float ___stepPause_16;
	// System.Boolean Fungus.Flowchart::colorCommands
	bool ___colorCommands_17;
	// System.Boolean Fungus.Flowchart::hideComponents
	bool ___hideComponents_18;
	// System.Boolean Fungus.Flowchart::saveSelection
	bool ___saveSelection_19;
	// System.String Fungus.Flowchart::localizationId
	String_t* ___localizationId_20;
	// System.Boolean Fungus.Flowchart::showLineNumbers
	bool ___showLineNumbers_21;
	// System.Collections.Generic.List`1<System.String> Fungus.Flowchart::hideCommands
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___hideCommands_22;
	// Fungus.LuaEnvironment Fungus.Flowchart::luaEnvironment
	LuaEnvironment_t3A112639A541B28F520F776FFA44BD7BED631804* ___luaEnvironment_23;
	// System.String Fungus.Flowchart::luaBindingName
	String_t* ___luaBindingName_24;
	// Fungus.StringSubstituter Fungus.Flowchart::stringSubstituer
	StringSubstituter_t9DE9C22E0B57A025869BB86C3EEA2A0DF49BD40F* ___stringSubstituer_27;
	// UnityEngine.Vector2 Fungus.Flowchart::<CenterPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CCenterPositionU3Ek__BackingField_28;
};

// InitWithDefault
struct InitWithDefault_t8CC5B3FDC0D8B97E450C6A5CBB8217E9E86AA178  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String InitWithDefault::environment
	String_t* ___environment_4;
};

// InteractableItem
struct InteractableItem_t4A620044E79C7A9F7C257617C60D097D696128B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NPCController
struct NPCController_t8FB7D6175D04DE204AB49C3B0C8E50FD2B352EFA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Fungus.Flowchart NPCController::npcFlowchart
	Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2* ___npcFlowchart_4;
	// System.String NPCController::npcBlock
	String_t* ___npcBlock_5;
};

// PickUp
struct PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform PickUp::holdSpot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___holdSpot_4;
	// UnityEngine.LayerMask PickUp::pickUpMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___pickUpMask_5;
	// UnityEngine.Vector2 PickUp::<Direction>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CDirectionU3Ek__BackingField_6;
	// UnityEngine.GameObject PickUp::itemHolding
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___itemHolding_7;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_4;
	// System.Boolean PlayerController::isMoving
	bool ___isMoving_5;
	// UnityEngine.Vector2 PlayerController::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_6;
	// UnityEngine.Rigidbody2D PlayerController::playerRigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___playerRigidbody_7;
	// UnityEngine.Animator PlayerController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_8;
	// UnityEngine.LayerMask PlayerController::solidObjLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___solidObjLayer_9;
	// UnityEngine.LayerMask PlayerController::interactableLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___interactableLayer_10;
	// PickUp PlayerController::pickUp
	PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* ___pickUp_11;
};

// TestCloudSave
struct TestCloudSave_tF0824C0ECFC466AC5B8E1B350DD397F687A47F81  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TestCloudSave::environment
	String_t* ___environment_4;
};

// TestForm
struct TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TestForm::form_uri
	String_t* ___form_uri_4;
	// System.Collections.Generic.List`1<System.String> TestForm::entryList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___entryList_5;
	// System.String TestForm::sheet_id
	String_t* ___sheet_id_6;
	// System.String TestForm::sheet_name
	String_t* ___sheet_name_7;
	// System.String TestForm::api_key
	String_t* ___api_key_8;
	// System.String TestForm::request_uri
	String_t* ___request_uri_9;
};

// UGS_Analytics
struct UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UGS_Analytics::environment
	String_t* ___environment_4;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// Unity.Services.Core.InitializationOptions

// Unity.Services.Core.InitializationOptions

// Unity.Services.Authentication.SignInOptions

// Unity.Services.Authentication.SignInOptions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// TransparencySortGraphicsHelper

// TransparencySortGraphicsHelper

// System.ValueType

// System.ValueType

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// UnityEngine.WWWForm

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Readme/Section

// Readme/Section

// TestForm/<FillForm>d__6

// TestForm/<FillForm>d__6

// TestForm/<RetrieveDataFromSheet>d__7

// TestForm/<RetrieveDataFromSheet>d__7

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<System.String>>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<System.String>>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC329C8C070F6C9CB24E2A226B02F2CD53832F0F5* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// PlayerController/<Move>d__12

// PlayerController/<Move>d__12

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Unity.Services.Core.RequestFailedException

// Unity.Services.Core.RequestFailedException

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// InitWithDefault/<Start>d__1

// InitWithDefault/<Start>d__1

// TestCloudSave/<Start>d__1

// TestCloudSave/<Start>d__1

// UGS_Analytics/<Start>d__1

// UGS_Analytics/<Start>d__1

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Unity.Services.Analytics.ConsentCheckException

// Unity.Services.Analytics.ConsentCheckException

// System.NotSupportedException

// System.NotSupportedException

// Readme

// Readme

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// ChallengerContoller

// ChallengerContoller

// Fungus.Flowchart
struct Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_StaticFields
{
	// System.Collections.Generic.List`1<Fungus.Flowchart> Fungus.Flowchart::cachedFlowcharts
	List_1_t751943B87291EEE6E585CA52EC05C239AD6EF82F* ___cachedFlowcharts_25;
	// System.Boolean Fungus.Flowchart::eventSystemPresent
	bool ___eventSystemPresent_26;
};

// Fungus.Flowchart

// InitWithDefault

// InitWithDefault

// InteractableItem

// InteractableItem

// NPCController

// NPCController

// PickUp

// PickUp

// PlayerController

// PlayerController

// TestCloudSave

// TestCloudSave

// TestForm

// TestForm

// UGS_Analytics

// UGS_Analytics
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<InitWithDefault/<Start>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mDF1FEF56B19EC06D288E3F5DD2D33C70786469C8_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,InitWithDefault/<Start>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mCB12CBEBB8EA75321C15323D72D69F0934D38716_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,InitWithDefault/<Start>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_m20D7497054F892B7DD22A8333300AC6C0A77E3FC_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TestCloudSave/<Start>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_mDAC2CF021DFF54004BF52FB1FA6E746B26515949_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TestCloudSave/<Start>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UGS_Analytics/<Start>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m4A53C35BD34B71BF376BF6F63C459483698FE129_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UGS_Analytics/<Start>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m94CA0DF4C2A0456B8E83021BAA485C49BA10EB4D_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* ___1_stateMachine, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<InitWithDefault/<Start>d__1>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mDF1FEF56B19EC06D288E3F5DD2D33C70786469C8 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mDF1FEF56B19EC06D288E3F5DD2D33C70786469C8_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.InitializationOptions Unity.Services.Core.Environments.EnvironmentsOptionsExtensions::SetEnvironmentName(Unity.Services.Core.InitializationOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* EnvironmentsOptionsExtensions_SetEnvironmentName_m1C764119160C1912CC49ECD80B3ED86DAC6240A8 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___0_self, String_t* ___1_environmentName, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,InitWithDefault/<Start>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mCB12CBEBB8EA75321C15323D72D69F0934D38716 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mCB12CBEBB8EA75321C15323D72D69F0934D38716_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// Unity.Services.Analytics.IAnalyticsService Unity.Services.Analytics.AnalyticsService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>::GetAwaiter()
inline TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E Task_1_GetAwaiter_m970DD1ECEBE9AA97C61C1E81861071E20F3E64E0 (Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E (*) (Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<System.String>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m717E17DF7B7BE508365E7449ED7110AF11B474BA (TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<System.String>>,InitWithDefault/<Start>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_m7CC396FB762127580388FF5DACDD64FA565E99F2 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E* ___0_awaiter, U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E*, U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_m20D7497054F892B7DD22A8333300AC6C0A77E3FC_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<System.String>>::GetResult()
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* TaskAwaiter_1_GetResult_mE056F96CA22AF4CE783276EC5B965C5EA4ABAEC8 (TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E* __this, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void InitWithDefault/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_MoveNext_mE6EEEC51C11FA7F8DC3930568804123244180B7A (U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void InitWithDefault/<Start>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_SetStateMachine_m66D7153F5954256A5E811B0F5E75A2B25526E9A3 (U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TestCloudSave/<Start>d__1>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_mDAC2CF021DFF54004BF52FB1FA6E746B26515949 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_mDAC2CF021DFF54004BF52FB1FA6E746B26515949_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___0_options, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TestCloudSave/<Start>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// Unity.Services.Authentication.IAuthenticationService Unity.Services.Authentication.AuthenticationService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// Unity.Services.CloudSave.ICloudSaveService Unity.Services.CloudSave.CloudSaveService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CloudSaveService_get_Instance_m4D869DA2225F3D4C085C6F48100F590149F4FF87 (const RuntimeMethod* method) ;
// System.Void TestCloudSave/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_MoveNext_mC00B6309C916BAFC16BA6E7DA9D9B80282594D59 (U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* __this, const RuntimeMethod* method) ;
// System.Void TestCloudSave/<Start>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_SetStateMachine_m8D9F12FB04ECBA1826CEB98754F9D13184B2445A (U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UGS_Analytics/<Start>d__1>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m4A53C35BD34B71BF376BF6F63C459483698FE129 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m4A53C35BD34B71BF376BF6F63C459483698FE129_gshared)(__this, ___0_stateMachine, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UGS_Analytics/<Start>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m94CA0DF4C2A0456B8E83021BAA485C49BA10EB4D (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m94CA0DF4C2A0456B8E83021BAA485C49BA10EB4D_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void UGS_Analytics::LevelCompletedCustomEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UGS_Analytics_LevelCompletedCustomEvent_mC095AA2159E4F696C2119A2DD8D24467987ECACD (UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B* __this, const RuntimeMethod* method) ;
// System.Void UGS_Analytics/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_MoveNext_mCAE593CD30BACB5A07D4FE12B896A9D420F5AB6E (U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* __this, const RuntimeMethod* method) ;
// System.Void UGS_Analytics/<Start>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_SetStateMachine_m08FFE91F97BF22E53072189CF59DA393230B096B (U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void TransparencySortGraphicsHelper::OnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransparencySortGraphicsHelper_OnLoad_m0B6B4C7624C6A714C2E38F8E1CCE84D08D5C640B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.GraphicsSettings::set_transparencySortMode(UnityEngine.TransparencySortMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsSettings_set_transparencySortMode_mCE5358895ECAA2C6CCC8F59A37EAC78612D6B589 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.GraphicsSettings::set_transparencySortAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsSettings_set_transparencySortAxis_mA0903B2C446C7BA9FE82588104EBFB93233420B3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 PickUp::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PickUp_get_Direction_mE78A8088F143AFE6039C72699F27496358250C94_inline (PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_simulated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_point, float ___1_radius, int32_t ___2_layerMask, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PickUp>()
inline PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* Component_GetComponent_TisPickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7_mA8A82BE9D209A0729497465EBCF3384D69AF7C1C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PickUp::set_Direction(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUp_set_Direction_m58744F93D8A99E4CCB23994A8BF886BA4ADE6825_inline (PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Boolean PlayerController::isWalkable(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_isWalkable_mD67A6030E8FB0706D91C5AE2DCB0217552BB2E33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Void PlayerController::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveCharacter_mB7EE937845138E7A6A2F2FBE2E798CA320DD6C3B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void PlayerController::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Interact_mB89E689F3137124186FDD4055C626222B94EDC5D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Interactables>()
inline RuntimeObject* Component_GetComponent_TisInteractables_tCC0548122132F32B4EC5FB506E25B0BA443E57FA_mB6C8D520F7826578A8DF5893F564DFF39D95AB4E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerController/<Move>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__12__ctor_mC5370549048B6B8C7819A1CF91B07D7F98CF9256 (U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void TestForm/<FillForm>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFillFormU3Ed__6__ctor_m0D8A39480D42370CC83D359B5771EAE0DCA4F25E (U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TestForm/<RetrieveDataFromSheet>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveDataFromSheetU3Ed__7__ctor_m6023412931A4C829C118BC921865928219974232 (U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TestForm::RetrieveDataFromSheet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestForm_RetrieveDataFromSheet_m26BE2FFC63C3C26DD4BF980ABE6448E3766A453B (TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Collections.IEnumerator TestForm::FillForm(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestForm_FillForm_mA9BA2BA0F58BE4584FCF737FAE2815E2D3C97EBF (TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* __this, String_t* ___0_entry, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___0_fieldName, String_t* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373 (String_t* ___0_uri, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___1_formData, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___0_uri, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
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
// System.Void ChallengerContoller::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChallengerContoller_Interact_m6CB30A2FABD403033D144805D7C643A65A32B95A (ChallengerContoller_tE2313099260B49158E1D9F5703D2D61F5A41D649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral841DA9A8888CFB8CB70A50F24BD45DEB65DB9651);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Interact with Challenger " + gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral841DA9A8888CFB8CB70A50F24BD45DEB65DB9651, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void ChallengerContoller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChallengerContoller_Start_m599ABFC063E4EBC406D9CED69BA4991283CB7C8F (ChallengerContoller_tE2313099260B49158E1D9F5703D2D61F5A41D649* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChallengerContoller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChallengerContoller_Update_m13978D822BEDE9A961F3303DEB3699099F877C6F (ChallengerContoller_tE2313099260B49158E1D9F5703D2D61F5A41D649* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChallengerContoller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChallengerContoller__ctor_m2FE4E382E97880C73A060351741738B371B8E4DD (ChallengerContoller_tE2313099260B49158E1D9F5703D2D61F5A41D649* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void InitWithDefault::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitWithDefault_Start_m57BBFBF876A01907CECC270B79990B6834DC7530 (InitWithDefault_t8CC5B3FDC0D8B97E450C6A5CBB8217E9E86AA178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mDF1FEF56B19EC06D288E3F5DD2D33C70786469C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mDF1FEF56B19EC06D288E3F5DD2D33C70786469C8(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mDF1FEF56B19EC06D288E3F5DD2D33C70786469C8_RuntimeMethod_var);
		return;
	}
}
// System.Void InitWithDefault::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitWithDefault__ctor_m063BA086BF30E89E6B3C3D85EA82903FE1C2BC89 (InitWithDefault_t8CC5B3FDC0D8B97E450C6A5CBB8217E9E86AA178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string environment = "dev";
		__this->___environment_4 = _stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___environment_4), (void*)_stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void InitWithDefault/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_MoveNext_mE6EEEC51C11FA7F8DC3930568804123244180B7A (U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_m7CC396FB762127580388FF5DACDD64FA565E99F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mCB12CBEBB8EA75321C15323D72D69F0934D38716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE056F96CA22AF4CE783276EC5B965C5EA4ABAEC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m717E17DF7B7BE508365E7449ED7110AF11B474BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m970DD1ECEBE9AA97C61C1E81861071E20F3E64E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InitWithDefault_t8CC5B3FDC0D8B97E450C6A5CBB8217E9E86AA178* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InitWithDefault_t8CC5B3FDC0D8B97E450C6A5CBB8217E9E86AA178* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0065_2;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_00c1_2;
				}
			}
			{
				// var options = new InitializationOptions()
				//     .SetEnvironmentName(environment);
				InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_5 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)il2cpp_codegen_object_new(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
				InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0(L_5, NULL);
				InitWithDefault_t8CC5B3FDC0D8B97E450C6A5CBB8217E9E86AA178* L_6 = V_1;
				String_t* L_7 = L_6->___environment_4;
				InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_8;
				L_8 = EnvironmentsOptionsExtensions_SetEnvironmentName_m1C764119160C1912CC49ECD80B3ED86DAC6240A8(L_5, L_7, NULL);
				// await UnityServices.InitializeAsync();
				il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
				L_9 = UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A(NULL);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10;
				L_10 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_9, NULL);
				V_2 = L_10;
				bool L_11;
				L_11 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
				if (L_11)
				{
					goto IL_0081_2;
				}
			}
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13 = V_2;
				__this->___U3CU3Eu__1_3 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mCB12CBEBB8EA75321C15323D72D69F0934D38716(L_14, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_mCB12CBEBB8EA75321C15323D72D69F0934D38716_RuntimeMethod_var);
				goto IL_0118;
			}

IL_0065_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = __this->___U3CU3Eu__1_3;
				V_2 = L_15;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_16 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_17 = (-1);
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
			}

IL_0081_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
				// List<string> consentIdentifiers = await AnalyticsService.Instance.CheckForRequiredConsents();
				RuntimeObject* L_18;
				L_18 = AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059(NULL);
				Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* L_19;
				L_19 = InterfaceFuncInvoker0< Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* >::Invoke(7 /* System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>> Unity.Services.Analytics.IAnalyticsService::CheckForRequiredConsents() */, IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0_il2cpp_TypeInfo_var, L_18);
				TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E L_20;
				L_20 = Task_1_GetAwaiter_m970DD1ECEBE9AA97C61C1E81861071E20F3E64E0(L_19, Task_1_GetAwaiter_m970DD1ECEBE9AA97C61C1E81861071E20F3E64E0_RuntimeMethod_var);
				V_3 = L_20;
				bool L_21;
				L_21 = TaskAwaiter_1_get_IsCompleted_m717E17DF7B7BE508365E7449ED7110AF11B474BA((&V_3), TaskAwaiter_1_get_IsCompleted_m717E17DF7B7BE508365E7449ED7110AF11B474BA_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_00dd_2;
				}
			}
			{
				int32_t L_22 = 1;
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
				TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E L_23 = V_3;
				__this->___U3CU3Eu__2_4 = L_23;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_m7CC396FB762127580388FF5DACDD64FA565E99F2(L_24, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E_TisU3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486_m7CC396FB762127580388FF5DACDD64FA565E99F2_RuntimeMethod_var);
				goto IL_0118;
			}

IL_00c1_2:
			{
				TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E L_25 = __this->___U3CU3Eu__2_4;
				V_3 = L_25;
				TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E* L_26 = (&__this->___U3CU3Eu__2_4);
				il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t6F1C14AD9CF09F454AA6CAFE995D5B1F3608C40E));
				int32_t L_27 = (-1);
				V_0 = L_27;
				__this->___U3CU3E1__state_0 = L_27;
			}

IL_00dd_2:
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28;
				L_28 = TaskAwaiter_1_GetResult_mE056F96CA22AF4CE783276EC5B965C5EA4ABAEC8((&V_3), TaskAwaiter_1_GetResult_mE056F96CA22AF4CE783276EC5B965C5EA4ABAEC8_RuntimeMethod_var);
				// }
				goto IL_00ea_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e7_1;
			}
			throw e;
		}

CATCH_00e7_1:
		{// begin catch(Unity.Services.Analytics.ConsentCheckException)
			// catch (ConsentCheckException e)
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ea_1;
		}// end catch (depth: 2)

IL_00ea_1:
		{
			goto IL_0105;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ec;
		}
		throw e;
	}

CATCH_00ec:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_29 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_30 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_29, L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0118;
	}// end catch (depth: 1)

IL_0105:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_31 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_31, NULL);
	}

IL_0118:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__1_MoveNext_mE6EEEC51C11FA7F8DC3930568804123244180B7A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486*>(__this + _offset);
	U3CStartU3Ed__1_MoveNext_mE6EEEC51C11FA7F8DC3930568804123244180B7A(_thisAdjusted, method);
}
// System.Void InitWithDefault/<Start>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_SetStateMachine_m66D7153F5954256A5E811B0F5E75A2B25526E9A3 (U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__1_SetStateMachine_m66D7153F5954256A5E811B0F5E75A2B25526E9A3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__1_t154DFF53A9CC815AA2641197BCB7BD344F959486*>(__this + _offset);
	U3CStartU3Ed__1_SetStateMachine_m66D7153F5954256A5E811B0F5E75A2B25526E9A3(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestCloudSave::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestCloudSave_Start_m8F36032DA1E80CDCAEFEC38AC5C2B062EF2FB19A (TestCloudSave_tF0824C0ECFC466AC5B8E1B350DD397F687A47F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_mDAC2CF021DFF54004BF52FB1FA6E746B26515949_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_mDAC2CF021DFF54004BF52FB1FA6E746B26515949(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_mDAC2CF021DFF54004BF52FB1FA6E746B26515949_RuntimeMethod_var);
		return;
	}
}
// System.Void TestCloudSave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestCloudSave__ctor_m5CD41CC74AFF338A5F334696FA97CD26E0DF6811 (TestCloudSave_tF0824C0ECFC466AC5B8E1B350DD397F687A47F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string environment = "production";
		__this->___environment_4 = _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___environment_4), (void*)_stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TestCloudSave/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_MoveNext_mC00B6309C916BAFC16BA6E7DA9D9B80282594D59 (U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudSaveDataClient_t4DA96D7AE27F489F3EA3F255C5199CF7C56A535A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudSaveService_tCE7C960A43D4BCA710CD4AD57ED04A1E6B957D5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97E7757A55F87B040EA4E04FFD7A66A76E01B9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02BE1EBB0991F6003E6D6ACE9580E1EA5A55BFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestCloudSave_tF0824C0ECFC466AC5B8E1B350DD397F687A47F81* V_1 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TestCloudSave_tF0824C0ECFC466AC5B8E1B350DD397F687A47F81* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				switch (L_3)
				{
					case 0:
					{
						goto IL_006c_2;
					}
					case 1:
					{
						goto IL_00cc_2;
					}
					case 2:
					{
						goto IL_0144_2;
					}
				}
			}
			{
				// var options = new InitializationOptions()
				//     .SetEnvironmentName(environment);
				InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_4 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)il2cpp_codegen_object_new(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
				InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0(L_4, NULL);
				TestCloudSave_tF0824C0ECFC466AC5B8E1B350DD397F687A47F81* L_5 = V_1;
				String_t* L_6 = L_5->___environment_4;
				InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_7;
				L_7 = EnvironmentsOptionsExtensions_SetEnvironmentName_m1C764119160C1912CC49ECD80B3ED86DAC6240A8(L_4, L_6, NULL);
				// await UnityServices.InitializeAsync(options);
				il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
				L_8 = UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F(L_7, NULL);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
				L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
				V_3 = L_9;
				bool L_10;
				L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
				if (L_10)
				{
					goto IL_0088_2;
				}
			}
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->___U3CU3E1__state_0 = L_11;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_3;
				__this->___U3CU3Eu__1_3 = L_12;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_13 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4(L_13, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4_RuntimeMethod_var);
				goto IL_019a;
			}

IL_006c_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_3;
				V_3 = L_14;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
			}

IL_0088_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
				// await AuthenticationService.Instance.SignInAnonymouslyAsync();
				RuntimeObject* L_17;
				L_17 = AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1(NULL);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
				L_18 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* >::Invoke(16 /* System.Threading.Tasks.Task Unity.Services.Authentication.IAuthenticationService::SignInAnonymouslyAsync(Unity.Services.Authentication.SignInOptions) */, IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var, L_17, (SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291*)NULL);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_19;
				L_19 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_18, NULL);
				V_3 = L_19;
				bool L_20;
				L_20 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
				if (L_20)
				{
					goto IL_00e8_2;
				}
			}
			{
				int32_t L_21 = 1;
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_22 = V_3;
				__this->___U3CU3Eu__1_3 = L_22;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_23 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4(L_23, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4_RuntimeMethod_var);
				goto IL_019a;
			}

IL_00cc_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_24 = __this->___U3CU3Eu__1_3;
				V_3 = L_24;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_25 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_26 = (-1);
				V_0 = L_26;
				__this->___U3CU3E1__state_0 = L_26;
			}

IL_00e8_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
				// var data = new Dictionary<string, object> { { "MySaveKey", "HelloWorld" } };
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_27 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
				Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_27, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_28 = L_27;
				Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_28, _stringLiteral97E7757A55F87B040EA4E04FFD7A66A76E01B9C1, _stringLiteralA02BE1EBB0991F6003E6D6ACE9580E1EA5A55BFA, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
				V_2 = L_28;
				// await CloudSaveService.Instance.Data.ForceSaveAsync(data);
				RuntimeObject* L_29;
				L_29 = CloudSaveService_get_Instance_m4D869DA2225F3D4C085C6F48100F590149F4FF87(NULL);
				RuntimeObject* L_30;
				L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.Services.CloudSave.ICloudSaveDataClient Unity.Services.CloudSave.ICloudSaveService::get_Data() */, ICloudSaveService_tCE7C960A43D4BCA710CD4AD57ED04A1E6B957D5D_il2cpp_TypeInfo_var, L_29);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_31 = V_2;
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_32;
				L_32 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(1 /* System.Threading.Tasks.Task Unity.Services.CloudSave.ICloudSaveDataClient::ForceSaveAsync(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ICloudSaveDataClient_t4DA96D7AE27F489F3EA3F255C5199CF7C56A535A_il2cpp_TypeInfo_var, L_30, L_31);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_33;
				L_33 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_32, NULL);
				V_3 = L_33;
				bool L_34;
				L_34 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
				if (L_34)
				{
					goto IL_0160_2;
				}
			}
			{
				int32_t L_35 = 2;
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_36 = V_3;
				__this->___U3CU3Eu__1_3 = L_36;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_37 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4(L_37, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5_m880EB8F3430E2D40BDD3CB12A51BC26C42C7B8D4_RuntimeMethod_var);
				goto IL_019a;
			}

IL_0144_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_38 = __this->___U3CU3Eu__1_3;
				V_3 = L_38;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_39 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_39, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_40 = (-1);
				V_0 = L_40;
				__this->___U3CU3E1__state_0 = L_40;
			}

IL_0160_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
				// }
				goto IL_016c_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0169_1;
			}
			throw e;
		}

CATCH_0169_1:
		{// begin catch(System.Exception)
			// catch (Exception exception)
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_016c_1;
		}// end catch (depth: 2)

IL_016c_1:
		{
			goto IL_0187;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_016e;
		}
		throw e;
	}

CATCH_016e:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_41 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_42 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_41, L_42, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019a;
	}// end catch (depth: 1)

IL_0187:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_43 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_43, NULL);
	}

IL_019a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__1_MoveNext_mC00B6309C916BAFC16BA6E7DA9D9B80282594D59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5*>(__this + _offset);
	U3CStartU3Ed__1_MoveNext_mC00B6309C916BAFC16BA6E7DA9D9B80282594D59(_thisAdjusted, method);
}
// System.Void TestCloudSave/<Start>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_SetStateMachine_m8D9F12FB04ECBA1826CEB98754F9D13184B2445A (U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__1_SetStateMachine_m8D9F12FB04ECBA1826CEB98754F9D13184B2445A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__1_t3433DADA0ADDD64A6F7D105BACCEF29E6478F5A5*>(__this + _offset);
	U3CStartU3Ed__1_SetStateMachine_m8D9F12FB04ECBA1826CEB98754F9D13184B2445A(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UGS_Analytics::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UGS_Analytics_Start_m3E8D5F98E573F33EFC5856E8D880E148A4A16EA0 (UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m4A53C35BD34B71BF376BF6F63C459483698FE129_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m4A53C35BD34B71BF376BF6F63C459483698FE129(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m4A53C35BD34B71BF376BF6F63C459483698FE129_RuntimeMethod_var);
		return;
	}
}
// System.Void UGS_Analytics::LevelCompletedCustomEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UGS_Analytics_LevelCompletedCustomEvent_mC095AA2159E4F696C2119A2DD8D24467987ECACD (UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4047C290C2BA0C8ABAB91603F8E770E5750497CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA64B82AABA6570692962ACFD43D68F23D9DF60AE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	{
		// int currentLevel = Random.Range(1, 4); //Gets a random number from 1-3
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 4, NULL);
		V_0 = L_0;
		//  Dictionary<string, object> parameters = new Dictionary<string, object>()
		// {
		//     { "levelName", "level" + currentLevel.ToString()}
		// };
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_1, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = L_1;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, L_3, NULL);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_2, _stringLiteral4047C290C2BA0C8ABAB91603F8E770E5750497CB, L_4, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_1 = L_2;
		// AnalyticsService.Instance.CustomData("levelCompleted", parameters);
		RuntimeObject* L_5;
		L_5 = AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = V_1;
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(5 /* System.Void Unity.Services.Analytics.IAnalyticsService::CustomData(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0_il2cpp_TypeInfo_var, L_5, _stringLiteralA64B82AABA6570692962ACFD43D68F23D9DF60AE, L_6);
		// AnalyticsService.Instance.Flush();
		RuntimeObject* L_7;
		L_7 = AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059(NULL);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.Services.Analytics.IAnalyticsService::Flush() */, IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0_il2cpp_TypeInfo_var, L_7);
		// }
		return;
	}
}
// System.Void UGS_Analytics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UGS_Analytics__ctor_m8CA6174065C65DE08C31BCF34543EEB45CE9D169 (UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string environment = "dev";
		__this->___environment_4 = _stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___environment_4), (void*)_stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UGS_Analytics/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_MoveNext_mCAE593CD30BACB5A07D4FE12B896A9D420F5AB6E (U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m94CA0DF4C2A0456B8E83021BAA485C49BA10EB4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0059_2;
				}
			}
			{
				// var options = new InitializationOptions().SetEnvironmentName(environment);
				InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_4 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)il2cpp_codegen_object_new(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
				InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0(L_4, NULL);
				UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B* L_5 = V_1;
				String_t* L_6 = L_5->___environment_4;
				InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_7;
				L_7 = EnvironmentsOptionsExtensions_SetEnvironmentName_m1C764119160C1912CC49ECD80B3ED86DAC6240A8(L_4, L_6, NULL);
				// await UnityServices.InitializeAsync();
				il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
				L_8 = UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A(NULL);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
				L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
				V_2 = L_9;
				bool L_10;
				L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
				if (L_10)
				{
					goto IL_0075_2;
				}
			}
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->___U3CU3E1__state_0 = L_11;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_2;
				__this->___U3CU3Eu__1_3 = L_12;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_13 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m94CA0DF4C2A0456B8E83021BAA485C49BA10EB4D(L_13, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE_m94CA0DF4C2A0456B8E83021BAA485C49BA10EB4D_RuntimeMethod_var);
				goto IL_00bc;
			}

IL_0059_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_3;
				V_2 = L_14;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
			}

IL_0075_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
				// LevelCompletedCustomEvent();
				UGS_Analytics_t767F3F9B94C53D2937D643B97C130FF8CBECEB1B* L_17 = V_1;
				UGS_Analytics_LevelCompletedCustomEvent_mC095AA2159E4F696C2119A2DD8D24467987ECACD(L_17, NULL);
				// }
				goto IL_0090_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0084_1;
			}
			throw e;
		}

CATCH_0084_1:
		{// begin catch(Unity.Services.Analytics.ConsentCheckException)
			// Debug.Log(e.ToString());
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)IL2CPP_GET_ACTIVE_EXCEPTION(ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0090_1;
		}// end catch (depth: 2)

IL_0090_1:
		{
			goto IL_00a9;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0092;
		}
		throw e;
	}

CATCH_0092:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bc;
	}// end catch (depth: 1)

IL_00a9:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_21 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_21, NULL);
	}

IL_00bc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__1_MoveNext_mCAE593CD30BACB5A07D4FE12B896A9D420F5AB6E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE*>(__this + _offset);
	U3CStartU3Ed__1_MoveNext_mCAE593CD30BACB5A07D4FE12B896A9D420F5AB6E(_thisAdjusted, method);
}
// System.Void UGS_Analytics/<Start>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_SetStateMachine_m08FFE91F97BF22E53072189CF59DA393230B096B (U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__1_SetStateMachine_m08FFE91F97BF22E53072189CF59DA393230B096B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__1_t8B910C7D104C42CA222262621857CEC31B5299EE*>(__this + _offset);
	U3CStartU3Ed__1_SetStateMachine_m08FFE91F97BF22E53072189CF59DA393230B096B(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InteractableItem::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableItem_Interact_m78F7E80D74195A1A7026C0AEF47874A4707C7096 (InteractableItem_t4A620044E79C7A9F7C257617C60D097D696128B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A7E132F5C188D5494BA4F4A7B6CBCDA76E13A7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Interact with " + gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8A7E132F5C188D5494BA4F4A7B6CBCDA76E13A7A, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void InteractableItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableItem_Start_mB9A3095DE8B6943C9D951BC236871A38462E8A16 (InteractableItem_t4A620044E79C7A9F7C257617C60D097D696128B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InteractableItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableItem_Update_mE5BFF93EB06D48FDA079270B589C8EF5D56C3C06 (InteractableItem_t4A620044E79C7A9F7C257617C60D097D696128B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InteractableItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableItem__ctor_m6B19FA82F90286DCF01B0E04F0762D90FFC70A79 (InteractableItem_t4A620044E79C7A9F7C257617C60D097D696128B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NPCController::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCController_Interact_m70598DDF241D1BB3C76F54479E6F1EB315B85F3A (NPCController_t8FB7D6175D04DE204AB49C3B0C8E50FD2B352EFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E6F24DBB8CA9C607EC73120BF128D322121033);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Interact with NPC "+ gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral25E6F24DBB8CA9C607EC73120BF128D322121033, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// npcFlowchart.ExecuteBlock(npcBlock);
		Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2* L_3 = __this->___npcFlowchart_4;
		String_t* L_4 = __this->___npcBlock_5;
		VirtualActionInvoker1< String_t* >::Invoke(47 /* System.Void Fungus.Flowchart::ExecuteBlock(System.String) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void NPCController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCController_Start_mBF597B7ABB8B15FABCA15E098C6427F2EF386D9C (NPCController_t8FB7D6175D04DE204AB49C3B0C8E50FD2B352EFA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NPCController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCController_Update_m010DD522D0CD8D333E0BAC7984B3012A195BE205 (NPCController_t8FB7D6175D04DE204AB49C3B0C8E50FD2B352EFA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NPCController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCController__ctor_m2D75601045191ECBD5163E1090CDAA7A2EA9D275 (NPCController_t8FB7D6175D04DE204AB49C3B0C8E50FD2B352EFA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TransparencySortGraphicsHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransparencySortGraphicsHelper__cctor_mDA1E6B7E59C849CCF1E8156F35E9AA7241EEEDBB (const RuntimeMethod* method) 
{
	{
		// OnLoad();
		TransparencySortGraphicsHelper_OnLoad_m0B6B4C7624C6A714C2E38F8E1CCE84D08D5C640B(NULL);
		// }
		return;
	}
}
// System.Void TransparencySortGraphicsHelper::OnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransparencySortGraphicsHelper_OnLoad_m0B6B4C7624C6A714C2E38F8E1CCE84D08D5C640B (const RuntimeMethod* method) 
{
	{
		// GraphicsSettings.transparencySortMode = TransparencySortMode.CustomAxis;
		GraphicsSettings_set_transparencySortMode_mCE5358895ECAA2C6CCC8F59A37EAC78612D6B589(3, NULL);
		// GraphicsSettings.transparencySortAxis = new Vector3(0.0f, 1.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		GraphicsSettings_set_transparencySortAxis_mA0903B2C446C7BA9FE82588104EBFB93233420B3(L_0, NULL);
		// }
		return;
	}
}
// System.Void TransparencySortGraphicsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransparencySortGraphicsHelper__ctor_m6F4280809A0BA5EEB20DFD806C87C717BF252AF9 (TransparencySortGraphicsHelper_t7C9A0044E3724B8A18EF058FC12DCD8DD1A63B81* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Vector2 PickUp::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PickUp_get_Direction_mE78A8088F143AFE6039C72699F27496358250C94 (PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CDirectionU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void PickUp::set_Direction(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUp_set_Direction_m58744F93D8A99E4CCB23994A8BF886BA4ADE6825 (PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CDirectionU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void PickUp::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUp_Update_mD293ADF8FED516E5951B5415B05ABE95EDFF5191 (PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_0 = NULL;
	{
		// if (Input.GetKeyDown(KeyCode.E))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_0)
		{
			goto IL_0185;
		}
	}
	{
		// if (itemHolding)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___itemHolding_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_00c6;
		}
	}
	{
		// itemHolding.transform.position = transform.position+ new Vector3(Direction.x, Direction.y, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___itemHolding_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = PickUp_get_Direction_mE78A8088F143AFE6039C72699F27496358250C94_inline(__this, NULL);
		float L_8 = L_7.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = PickUp_get_Direction_mE78A8088F143AFE6039C72699F27496358250C94_inline(__this, NULL);
		float L_10 = L_9.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, L_10, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_11, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_12, NULL);
		// itemHolding.transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___itemHolding_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_14, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// if (itemHolding.GetComponent<Rigidbody2D>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___itemHolding_7;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_16;
		L_16 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_15, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_16, NULL);
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		// itemHolding.GetComponent<Rigidbody2D>().simulated = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___itemHolding_7;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_19;
		L_19 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_18, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_19, (bool)1, NULL);
	}

IL_0090:
	{
		// if (itemHolding.GetComponent<SpriteRenderer>()) itemHolding.GetComponent<SpriteRenderer>().sortingOrder = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___itemHolding_7;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_21;
		L_21 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_20, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// if (itemHolding.GetComponent<SpriteRenderer>()) itemHolding.GetComponent<SpriteRenderer>().sortingOrder = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___itemHolding_7;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24;
		L_24 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_23, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_24, 1, NULL);
	}

IL_00b3:
	{
		// Debug.Log(itemHolding);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___itemHolding_7;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_25, NULL);
		// itemHolding = null;
		__this->___itemHolding_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemHolding_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		return;
	}

IL_00c6:
	{
		// Collider2D pickUpItem = Physics2D.OverlapCircle(new Vector2(transform.position.x, transform.position.y) + Direction, .4f, pickUpMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		float L_31 = L_30.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), L_28, L_31, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = PickUp_get_Direction_mE78A8088F143AFE6039C72699F27496358250C94_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_32, L_33, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_35 = __this->___pickUpMask_5;
		int32_t L_36;
		L_36 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_37;
		L_37 = Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18(L_34, (0.400000006f), L_36, NULL);
		V_0 = L_37;
		// if(pickUpItem)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_38 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_38, NULL);
		if (!L_39)
		{
			goto IL_0185;
		}
	}
	{
		// itemHolding = pickUpItem.gameObject;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_40 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		__this->___itemHolding_7 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemHolding_7), (void*)L_41);
		// itemHolding.transform.position = holdSpot.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___itemHolding_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->___holdSpot_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_45, NULL);
		// itemHolding.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___itemHolding_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_47, L_48, NULL);
		// if (itemHolding.GetComponent<Rigidbody2D>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___itemHolding_7;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_50;
		L_50 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_49, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_50, NULL);
		if (!L_51)
		{
			goto IL_0174;
		}
	}
	{
		// itemHolding.GetComponent<Rigidbody2D>().simulated = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___itemHolding_7;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_53;
		L_53 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_52, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_53, (bool)0, NULL);
	}

IL_0174:
	{
		// itemHolding.GetComponent<SpriteRenderer>().sortingOrder = -1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___itemHolding_7;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_55;
		L_55 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_54, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_55, (-1), NULL);
	}

IL_0185:
	{
		// }
		return;
	}
}
// System.Void PickUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUp__ctor_m441F0831F98EE45ECB49EC3B46CA8EDC4EDCE016 (PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7_mA8A82BE9D209A0729497465EBCF3384D69AF7C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerRigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___playerRigidbody_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRigidbody_7), (void*)L_0);
		// pickUp = GetComponent<PickUp>();
		PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* L_1;
		L_1 = Component_GetComponent_TisPickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7_mA8A82BE9D209A0729497465EBCF3384D69AF7C1C(__this, Component_GetComponent_TisPickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7_mA8A82BE9D209A0729497465EBCF3384D69AF7C1C_RuntimeMethod_var);
		__this->___pickUp_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickUp_11), (void*)L_1);
		// pickUp.Direction = new Vector2(0, -1);
		PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* L_2 = __this->___pickUp_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), (-1.0f), /*hidden argument*/NULL);
		PickUp_set_Direction_m58744F93D8A99E4CCB23994A8BF886BA4ADE6825_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F64A4CB80CF853793F7A468ECADE6D758ACFD91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA003D62EF417557C5B848188B5B3947ED732A503);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA8A7D8D6DB22FB8310B459B8C4F6BDFEA338E2B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// input.x = Input.GetAxisRaw("Horizontal");
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___input_6);
		float L_1;
		L_1 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		L_0->___x_0 = L_1;
		// input.y = Input.GetAxisRaw("Vertical");
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___input_6);
		float L_3;
		L_3 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		L_2->___y_1 = L_3;
		// if(input.x !=0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___input_6);
		float L_5 = L_4->___x_0;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		// input.y = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___input_6);
		L_6->___y_1 = (0.0f);
	}

IL_004c:
	{
		// if (input != Vector2.zero)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___input_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_9;
		L_9 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0108;
		}
	}
	{
		// animator.SetFloat("moveX", input.x);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___input_6);
		float L_12 = L_11->___x_0;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_10, _stringLiteral2F64A4CB80CF853793F7A468ECADE6D758ACFD91, L_12, NULL);
		// animator.SetFloat("moveY", input.y);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___animator_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___input_6);
		float L_15 = L_14->___y_1;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_13, _stringLiteralAA8A7D8D6DB22FB8310B459B8C4F6BDFEA338E2B, L_15, NULL);
		// var targetPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		V_0 = L_17;
		// targetPos.x += input.x;
		float* L_18 = (&(&V_0)->___x_2);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___input_6);
		float L_22 = L_21->___x_0;
		*((float*)L_19) = (float)((float)il2cpp_codegen_add(L_20, L_22));
		// targetPos.y += input.y;
		float* L_23 = (&(&V_0)->___y_3);
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&__this->___input_6);
		float L_27 = L_26->___y_1;
		*((float*)L_24) = (float)((float)il2cpp_codegen_add(L_25, L_27));
		// if (isWalkable(targetPos))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		bool L_29;
		L_29 = PlayerController_isWalkable_mD67A6030E8FB0706D91C5AE2DCB0217552BB2E33(__this, L_28, NULL);
		if (!L_29)
		{
			goto IL_00de;
		}
	}
	{
		// MoveCharacter();
		PlayerController_MoveCharacter_mB7EE937845138E7A6A2F2FBE2E798CA320DD6C3B(__this, NULL);
	}

IL_00de:
	{
		// if(input.sqrMagnitude > .1f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___input_6);
		float L_31;
		L_31 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_30, NULL);
		if ((!(((float)L_31) > ((float)(0.100000001f)))))
		{
			goto IL_010f;
		}
	}
	{
		// pickUp.Direction = input.normalized;
		PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* L_32 = __this->___pickUp_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___input_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_33, NULL);
		PickUp_set_Direction_m58744F93D8A99E4CCB23994A8BF886BA4ADE6825_inline(L_32, L_34, NULL);
		goto IL_010f;
	}

IL_0108:
	{
		// isMoving = false;
		__this->___isMoving_5 = (bool)0;
	}

IL_010f:
	{
		// animator.SetBool("isMoving", isMoving);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35 = __this->___animator_8;
		bool L_36 = __this->___isMoving_5;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_35, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, L_36, NULL);
		// if (Input.GetKeyDown(KeyCode.Z))
		bool L_37;
		L_37 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)122), NULL);
		if (!L_37)
		{
			goto IL_013e;
		}
	}
	{
		// Interact();
		PlayerController_Interact_mB89E689F3137124186FDD4055C626222B94EDC5D(__this, NULL);
		// Debug.Log("interact");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA003D62EF417557C5B848188B5B3947ED732A503, NULL);
	}

IL_013e:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Interact_mB89E689F3137124186FDD4055C626222B94EDC5D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInteractables_tCC0548122132F32B4EC5FB506E25B0BA443E57FA_mB6C8D520F7826578A8DF5893F564DFF39D95AB4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactables_tCC0548122132F32B4EC5FB506E25B0BA443E57FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F64A4CB80CF853793F7A468ECADE6D758ACFD91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA8A7D8D6DB22FB8310B459B8C4F6BDFEA338E2B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// var facingDir = new Vector3(animator.GetFloat("moveX"), animator.GetFloat("moveY"));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_8;
		float L_1;
		L_1 = Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A(L_0, _stringLiteral2F64A4CB80CF853793F7A468ECADE6D758ACFD91, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_8;
		float L_3;
		L_3 = Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A(L_2, _stringLiteralAA8A7D8D6DB22FB8310B459B8C4F6BDFEA338E2B, NULL);
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_0), L_1, L_3, NULL);
		// var interactPos = transform.position + facingDir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		// var collider = Physics2D.OverlapCircle(interactPos, 0.2f, interactableLayer);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_7, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9 = __this->___interactableLayer_10;
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11;
		L_11 = Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18(L_8, (0.200000003f), L_10, NULL);
		V_1 = L_11;
		// if (collider != null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		// collider.GetComponent<Interactables>()?.Interact();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_14 = V_1;
		RuntimeObject* L_15;
		L_15 = Component_GetComponent_TisInteractables_tCC0548122132F32B4EC5FB506E25B0BA443E57FA_mB6C8D520F7826578A8DF5893F564DFF39D95AB4E(L_14, Component_GetComponent_TisInteractables_tCC0548122132F32B4EC5FB506E25B0BA443E57FA_mB6C8D520F7826578A8DF5893F564DFF39D95AB4E_RuntimeMethod_var);
		RuntimeObject* L_16 = L_15;
		G_B2_0 = L_16;
		if (L_16)
		{
			G_B3_0 = L_16;
			goto IL_0067;
		}
	}
	{
		return;
	}

IL_0067:
	{
		InterfaceActionInvoker0::Invoke(0 /* System.Void Interactables::Interact() */, Interactables_tCC0548122132F32B4EC5FB506E25B0BA443E57FA_il2cpp_TypeInfo_var, G_B3_0);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Move_m6D6A5CC7044A9A460811826FF46CE8C3A88A394A (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* L_0 = (U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8*)il2cpp_codegen_object_new(U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8_il2cpp_TypeInfo_var);
		U3CMoveU3Ed__12__ctor_mC5370549048B6B8C7819A1CF91B07D7F98CF9256(L_0, 0, NULL);
		U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_targetPos;
		L_2->___targetPos_3 = L_3;
		return L_2;
	}
}
// System.Boolean PlayerController::isWalkable(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_isWalkable_mD67A6030E8FB0706D91C5AE2DCB0217552BB2E33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Physics2D.OverlapCircle(pos, 0.1f, solidObjLayer | interactableLayer ) != null)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_0, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2 = __this->___solidObjLayer_9;
		int32_t L_3;
		L_3 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_2, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___interactableLayer_10;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6;
		L_6 = Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18(L_1, (0.100000001f), ((int32_t)(L_3|L_5)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0031:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void PlayerController::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveCharacter_mB7EE937845138E7A6A2F2FBE2E798CA320DD6C3B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// isMoving = true;
		__this->___isMoving_5 = (bool)1;
		// playerRigidbody.MovePosition(transform.position + new Vector3(input.x, input.y, 0) * moveSpeed * 5f * Time.deltaTime);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___playerRigidbody_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_6);
		float L_4 = L_3->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___input_6);
		float L_6 = L_5->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_4, L_6, (0.0f), /*hidden argument*/NULL);
		float L_8 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, (5.0f), NULL);
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_0, L_14, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerController/<Move>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__12__ctor_mC5370549048B6B8C7819A1CF91B07D7F98CF9256 (U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Move>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__12_System_IDisposable_Dispose_m5BED33E629E6F46B25FEDF8F18315CB6F0D83CFA (U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Move>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveU3Ed__12_MoveNext_m3E7EB57EED7C5E7A4351A6BC2E3950E3579899FA (U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isMoving = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		L_4->___isMoving_5 = (bool)1;
		goto IL_006b;
	}

IL_0027:
	{
		// transform.position = Vector3.MoveTowards(transform.position, targetPos, moveSpeed * Time.deltaTime);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___targetPos_3;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = V_1;
		float L_12 = L_11->___moveSpeed_4;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_9, L_10, ((float)il2cpp_codegen_multiply(L_12, L_13)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_14, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0064:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006b:
	{
		// while((targetPos-transform.position).sqrMagnitude > Mathf.Epsilon)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___targetPos_3;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_16 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_18, NULL);
		V_2 = L_19;
		float L_20;
		L_20 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		float L_21 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((((float)L_20) > ((float)L_21)))
		{
			goto IL_0027;
		}
	}
	{
		// transform.position = targetPos;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_22 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___targetPos_3;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_24, NULL);
		// isMoving = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_25 = V_1;
		L_25->___isMoving_5 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Move>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFCDAEA0BACD8A3B24769B99469D6ED112838FAF4 (U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Move>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__12_System_Collections_IEnumerator_Reset_m90598F5CAE441A58E14112F8B1587BF87A1962E4 (U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveU3Ed__12_System_Collections_IEnumerator_Reset_m90598F5CAE441A58E14112F8B1587BF87A1962E4_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Move>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__12_System_Collections_IEnumerator_get_Current_m336ADFE1767D27FA1CDF33052A59D95396ADC651 (U3CMoveU3Ed__12_t9546C2EBBB87BCB0CA5471D72990EBAF95B5C6A8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Collections.IEnumerator TestForm::FillForm(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestForm_FillForm_mA9BA2BA0F58BE4584FCF737FAE2815E2D3C97EBF (TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* __this, String_t* ___0_entry, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* L_0 = (U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D*)il2cpp_codegen_object_new(U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D_il2cpp_TypeInfo_var);
		U3CFillFormU3Ed__6__ctor_m0D8A39480D42370CC83D359B5771EAE0DCA4F25E(L_0, 0, NULL);
		U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* L_1 = L_0;
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* L_2 = L_1;
		String_t* L_3 = ___0_entry;
		L_2->___entry_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___entry_2), (void*)L_3);
		U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* L_4 = L_2;
		String_t* L_5 = ___1_value;
		L_4->___value_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___value_3), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator TestForm::RetrieveDataFromSheet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestForm_RetrieveDataFromSheet_m26BE2FFC63C3C26DD4BF980ABE6448E3766A453B (TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A* L_0 = (U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A*)il2cpp_codegen_object_new(U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A_il2cpp_TypeInfo_var);
		U3CRetrieveDataFromSheetU3Ed__7__ctor_m6023412931A4C829C118BC921865928219974232(L_0, 0, NULL);
		U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TestForm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestForm_Start_m7B893E93E396C7B5DE8C362638636BE8F72AC9F0 (TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDB92D7F701917747391F54A9FA0042A0F0470C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// request_uri = String.Format("https://sheets.googleapis.com/v4/spreadsheets/{0}/values/{1}?key={2}", sheet_id, sheet_name, api_key);
		String_t* L_0 = __this->___sheet_id_6;
		String_t* L_1 = __this->___sheet_name_7;
		String_t* L_2 = __this->___api_key_8;
		String_t* L_3;
		L_3 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralEDB92D7F701917747391F54A9FA0042A0F0470C1, L_0, L_1, L_2, NULL);
		__this->___request_uri_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___request_uri_9), (void*)L_3);
		// Debug.Log(request_uri);
		String_t* L_4 = __this->___request_uri_9;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void TestForm::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestForm_Update_mBD93BDD2C819F8D978187781DE02AD6483F176F7 (TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)114), NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// StartCoroutine (RetrieveDataFromSheet());
		RuntimeObject* L_1;
		L_1 = TestForm_RetrieveDataFromSheet_m26BE2FFC63C3C26DD4BF980ABE6448E3766A453B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_0016:
	{
		// if (Input.GetKeyDown(KeyCode.F1))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)282), NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// StartCoroutine(FillForm(entryList[0], "t"));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___entryList_5;
		String_t* L_5;
		L_5 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		RuntimeObject* L_6;
		L_6 = TestForm_FillForm_mA9BA2BA0F58BE4584FCF737FAE2815E2D3C97EBF(__this, L_5, _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_0040:
	{
		// if (Input.GetKeyDown(KeyCode.F2))
		bool L_8;
		L_8 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)283), NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(FillForm(entryList[1], "t"));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___entryList_5;
		String_t* L_10;
		L_10 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_9, 1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		RuntimeObject* L_11;
		L_11 = TestForm_FillForm_mA9BA2BA0F58BE4584FCF737FAE2815E2D3C97EBF(__this, L_10, _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
	}

IL_006a:
	{
		// if (Input.GetKeyDown(KeyCode.F3))
		bool L_13;
		L_13 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)284), NULL);
		if (!L_13)
		{
			goto IL_0094;
		}
	}
	{
		// StartCoroutine(FillForm(entryList[2], "t"));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = __this->___entryList_5;
		String_t* L_15;
		L_15 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_14, 2, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		RuntimeObject* L_16;
		L_16 = TestForm_FillForm_mA9BA2BA0F58BE4584FCF737FAE2815E2D3C97EBF(__this, L_15, _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_16, NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void TestForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestForm__ctor_mC43FF49B132187CFD41C953AD57FF44184D3A423 (TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A493FA47ABE4163A03C1C8839398BCFFED566D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33CBB87B050C6D7307565806CDEDC96B9EFE9A8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral448C989F9E2FFA2ACCF9821BF0F1B34E01A65085);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC8FB01AEB91A16A16798F70853261F7D166D583);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string form_uri = "https://docs.google.com/forms/u/0/d/e/1FAIpQLSeip_fYwUWtQkVKsnsFZmbEr-sdzVOgfDSisiEVXMddvRjDVQ/formResponse";
		__this->___form_uri_4 = _stringLiteral1A493FA47ABE4163A03C1C8839398BCFFED566D8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___form_uri_4), (void*)_stringLiteral1A493FA47ABE4163A03C1C8839398BCFFED566D8);
		// private List<string> entryList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___entryList_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entryList_5), (void*)L_0);
		// private string sheet_id = "1RoXOC_fePvFVihXAWMm_1QXxDchDzIB2sXiTZ5lJUtM";
		__this->___sheet_id_6 = _stringLiteral448C989F9E2FFA2ACCF9821BF0F1B34E01A65085;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sheet_id_6), (void*)_stringLiteral448C989F9E2FFA2ACCF9821BF0F1B34E01A65085);
		// private string sheet_name = "SheetResponses";
		__this->___sheet_name_7 = _stringLiteral33CBB87B050C6D7307565806CDEDC96B9EFE9A8F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sheet_name_7), (void*)_stringLiteral33CBB87B050C6D7307565806CDEDC96B9EFE9A8F);
		// private string api_key = "AIzaSyDfxoUWmCNFo41DR42yqQ58_kumCOoE1Lc";
		__this->___api_key_8 = _stringLiteralAC8FB01AEB91A16A16798F70853261F7D166D583;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___api_key_8), (void*)_stringLiteralAC8FB01AEB91A16A16798F70853261F7D166D583);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TestForm/<FillForm>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFillFormU3Ed__6__ctor_m0D8A39480D42370CC83D359B5771EAE0DCA4F25E (U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TestForm/<FillForm>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFillFormU3Ed__6_System_IDisposable_Dispose_mD6A05ADD1237496CC042239BC6A37A0EB74AA252 (U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TestForm/<FillForm>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFillFormU3Ed__6_MoveNext_mCFB41BB7F5E9542E1C7BDAA5E3573CA0FD6F4BE7 (U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* V_1 = NULL;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* L_1 = __this->___U3CU3E4__this_4;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWWForm form = new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_4 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_4, NULL);
		V_2 = L_4;
		// form.AddField(entry, value);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_5 = V_2;
		String_t* L_6 = __this->___entry_2;
		String_t* L_7 = __this->___value_3;
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_5, L_6, L_7, NULL);
		// UnityWebRequest req = UnityWebRequest.Post(form_uri, form);
		TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* L_8 = V_1;
		String_t* L_9 = L_8->___form_uri_4;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_10 = V_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11;
		L_11 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_9, L_10, NULL);
		__this->___U3CreqU3E5__2_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_5), (void*)L_11);
		// yield return req.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CreqU3E5__2_5;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_13;
		L_13 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_12, NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0062:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log(req.result);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CreqU3E5__2_5;
		int32_t L_15;
		L_15 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_14, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var, &L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TestForm/<FillForm>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFillFormU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m285C39D19CD1250EFC3D0333E1DAD705DEB9863C (U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TestForm/<FillForm>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFillFormU3Ed__6_System_Collections_IEnumerator_Reset_m83F1F8C8D1102091572F81B9187E3F731E420EB3 (U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFillFormU3Ed__6_System_Collections_IEnumerator_Reset_m83F1F8C8D1102091572F81B9187E3F731E420EB3_RuntimeMethod_var)));
	}
}
// System.Object TestForm/<FillForm>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFillFormU3Ed__6_System_Collections_IEnumerator_get_Current_m18DF86362B751A01663CC00E1A67CDB1F8DD9060 (U3CFillFormU3Ed__6_tF6CE9392F28EBE313C4FDBD3000B4EF48EAD4A7D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TestForm/<RetrieveDataFromSheet>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveDataFromSheetU3Ed__7__ctor_m6023412931A4C829C118BC921865928219974232 (U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TestForm/<RetrieveDataFromSheet>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveDataFromSheetU3Ed__7_System_IDisposable_Dispose_mFCA301B04BFAA98BD98BA21E6DD740890ACE2C5C (U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TestForm/<RetrieveDataFromSheet>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRetrieveDataFromSheetU3Ed__7_MoveNext_mA56DAFE434080B52EC4EB961F5C542F8FB5C0DA0 (U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UnityWebRequest req = UnityWebRequest.Get(request_uri);
		TestForm_t1456FC26F28E0CE291E54E9EFF6D293A0FBE080F* L_4 = V_1;
		String_t* L_5 = L_4->___request_uri_9;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6;
		L_6 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_5, NULL);
		__this->___U3CreqU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_3), (void*)L_6);
		// yield return req.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CreqU3E5__2_3;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_8;
		L_8 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log(req.result);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CreqU3E5__2_3;
		int32_t L_10;
		L_10 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var, &L_11);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// Debug.Log(req.downloadHandler.text);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CreqU3E5__2_3;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14;
		L_14 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_13, NULL);
		String_t* L_15;
		L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_14, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TestForm/<RetrieveDataFromSheet>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRetrieveDataFromSheetU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mABC82592E753C53D644067D92CA031705EBDF91F (U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TestForm/<RetrieveDataFromSheet>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveDataFromSheetU3Ed__7_System_Collections_IEnumerator_Reset_m7470E74AEC593B33491E52D742B1CC69E848E2BA (U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRetrieveDataFromSheetU3Ed__7_System_Collections_IEnumerator_Reset_m7470E74AEC593B33491E52D742B1CC69E848E2BA_RuntimeMethod_var)));
	}
}
// System.Object TestForm/<RetrieveDataFromSheet>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRetrieveDataFromSheetU3Ed__7_System_Collections_IEnumerator_get_Current_m2A6364419AA896E2A09BCC2988648F7CE252A4FA (U3CRetrieveDataFromSheetU3Ed__7_t5629A0EFD3531576320C6F8160E9B1E29989404A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PickUp_get_Direction_mE78A8088F143AFE6039C72699F27496358250C94_inline (PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CDirectionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUp_set_Direction_m58744F93D8A99E4CCB23994A8BF886BA4ADE6825_inline (PickUp_t51B1A6915F3376D0B026E14BC35D3A5B495797C7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CDirectionU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
