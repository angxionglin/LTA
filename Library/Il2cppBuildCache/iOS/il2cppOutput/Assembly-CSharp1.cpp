#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t61231B053F1E40EB760E7E161322235AC46FD570;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80;
// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_tD3D7B4C276C5182ACF0A4B175305DF0854686FC4;
// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player>
struct Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t510FB791361517D9490A57D6259732545477D57C;
// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch>
struct Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9;
// System.Func`1<System.Double>
struct Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718;
// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker>
struct Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D;
// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView>
struct HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Photon.Pun.PhotonView>
struct List_1_t22AB20B25E776225271DB850CE278C084A9985EF;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder>
struct List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView>
struct NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_tFF9526B5F79416765882A99F02C06F237631B787;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA;
// Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>
struct ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>[]
struct EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>[]
struct EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// Photon.Realtime.AppSettings
struct AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Photon.Voice.Unity.AudioInEnumerator
struct AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A;
// AvatarHeadBehaviour
struct AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t4E594E9B8AABF4918890F9377E390A320E285E50;
// Photon.Voice.IAudioInChangeNotifier
struct IAudioInChangeNotifier_t3A534BDF3FCCEDAC005D11E8985F0FDE02B10836;
// Photon.Voice.IDeviceEnumerator
struct IDeviceEnumerator_t9B1719399BE2DED4A4D413B03FC06F14778A24E8;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t742D4B76141EAB4626FDEBDA253B131A1BAE312E;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t638EAC01DC5B173F187166A4312CBADD6CB1B51D;
// Photon.Pun.IPunPrefabPool
struct IPunPrefabPool_tA7FF722E5855D5361A1291E669A607E5EC89C6FF;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t146839F02C6023508DCE8313CF2DD0CD44C9C5BC;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Joystick
struct Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788;
// Photon.Voice.LocalVoice
struct LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Photon.Pun.PhotonStream
struct PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA;
// Photon.Voice.PhotonTransportProtocol
struct PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E;
// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43;
// Photon.Voice.PUN.PhotonVoiceNetwork
struct PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74;
// Photon.Voice.PUN.PhotonVoiceView
struct PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738;
// Photon.Voice.Unity.Recorder
struct Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Photon.Realtime.RegionHandler
struct RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53;
// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Photon.Pun.ServerSettings
struct ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// Photon.Voice.Unity.Speaker
struct Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// Photon.Realtime.SupportLogger
struct SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5;
// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1;
// UIVirtualButton
struct UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE;
// UIVirtualJoystick
struct UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D;
// UIVirtualTouchZone
struct UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// VariableJoystick
struct VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F;
// Photon.Voice.VoiceClient
struct VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704;
// ExitGames.Demos.DemoPunVoice.VoiceDemoUI
struct VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81;
// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96;
// Photon.Voice.AudioUtil/ILevelMeter
struct ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5;
// AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9
struct U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5;
// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle
struct OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged
struct OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A;
// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated
struct OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48;
// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c
struct U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// NetworkManager/PropertiesChanged
struct PropertiesChanged_t509772872821925E4E8CB6ACCDF06297559E1295;
// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;
// UIVirtualButton/BoolEvent
struct BoolEvent_tD84A3E3A4245DFD9FA5D608A5ADA77DBDFB6BD56;
// UIVirtualButton/Event
struct Event_tB8168EB885996D80674A82913E2B33B4915A9E23;
// UIVirtualJoystick/Event
struct Event_t5D63277B4BC67CE95DE0316A422A69420D3A368D;
// UIVirtualTouchZone/Event
struct Event_t1E1104A6087ED46DBF720AC59C7A8E63B974639D;
// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle
struct OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033579EC8D0117A4537FD03D9BB53510D041EB23;
IL2CPP_EXTERN_C String_t* _stringLiteral047B3F3A5713C4B341DAC643DC51392B3E671766;
IL2CPP_EXTERN_C String_t* _stringLiteral126C27EBBA7FB9D77EB1A44E51BF06EBA9C3FC63;
IL2CPP_EXTERN_C String_t* _stringLiteral18AF92CE6D406341CFFA209C15FD6F4392F16457;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF;
IL2CPP_EXTERN_C String_t* _stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9;
IL2CPP_EXTERN_C String_t* _stringLiteral2E5AB6E37311930D6035C8D2CB8DFF55F56024E3;
IL2CPP_EXTERN_C String_t* _stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94;
IL2CPP_EXTERN_C String_t* _stringLiteral4BC891A569A5D584FE65FFCAA41791C3F92BD535;
IL2CPP_EXTERN_C String_t* _stringLiteral5D774639089939D1DDB49955E154CC603511C5EB;
IL2CPP_EXTERN_C String_t* _stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35;
IL2CPP_EXTERN_C String_t* _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2;
IL2CPP_EXTERN_C String_t* _stringLiteral61A855DC0F7460245BD0DC4ADF10AA9246C5D820;
IL2CPP_EXTERN_C String_t* _stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F47CFD9E93EAB89DE69418C07595D68E3B365E4;
IL2CPP_EXTERN_C String_t* _stringLiteral89DD5BD5FB932912D679499612DA2FB3B7E9DCB6;
IL2CPP_EXTERN_C String_t* _stringLiteral928D3973E1B0159DFBC5ABBB4358EC8A0EA8591A;
IL2CPP_EXTERN_C String_t* _stringLiteral9A10E765B103F3A508B5EAE688B10607DD41ADA5;
IL2CPP_EXTERN_C String_t* _stringLiteralADA259DF8AC99BEC96AC7B9F0DBEFA73EEE956D8;
IL2CPP_EXTERN_C String_t* _stringLiteralB12AA9BFE40B6294F5B5BA7CB247F6D69E5F04D7;
IL2CPP_EXTERN_C String_t* _stringLiteralB1B959945E7E363C37693514A63BC4CF6D74EAB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E887A1AB7D5B8FCF53494172257215FB0D3892;
IL2CPP_EXTERN_C String_t* _stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29;
IL2CPP_EXTERN_C String_t* _stringLiteralD5834ACEC33AD574D2A7A320AEAB1D2F09D962F8;
IL2CPP_EXTERN_C String_t* _stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B;
IL2CPP_EXTERN_C String_t* _stringLiteralDF94361AE62C8E8418A75AE9F66772AC8DE7EB3E;
IL2CPP_EXTERN_C String_t* _stringLiteralE1921D3070489B1532E810684C2992B44215A052;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m27A52DC80581051397D5F6D3DF4B62AFD8D31402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m896E38D46B0FAA75134367CE2E3E8C9BB4C3D11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m164F8D3FD5DD2890F7E16B2E182DE5C67AA74473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTryGetAudioSpeakerU3Ed__9_System_Collections_IEnumerator_Reset_mDE769910C028C729E75F3B4EDE55C32EE5BB7989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_BetterToggle_ToggleValueChanged_m1CB8111F5EB65BBCCDE2630D14CCFFF5FA102497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_CalibrateButtonOnClick_m3B5F95DAAB7994D8BC2808BE3974F19883EF5688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_mA2E1C247ADEBC1140EA16E74016E35A19DD959BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_OnCameraChanged_m9805D3289474A100D896E3232105FF168856B5FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_PunClientStateChanged_mCDD0A99208FEBF6B721A4E1BD68244925E24BE1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_PunSwitchOnClick_mBCBF94B2A6F8FFBDFC3B3A1C93511EFE54D9B807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_VoiceClientStateChanged_mA738E7B437A2788F9EDB0F016472F735A1879D4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_VoiceSwitchOnClick_mAB712A4E30FED61E21B187D6A2F8ED7D193FDDC6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
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
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C* ___entries_1;
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
	KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___entries_1)); }
	inline EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___keys_7)); }
	inline KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___values_8)); }
	inline ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8* ___entries_1;
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
	KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___entries_1)); }
	inline EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___keys_7)); }
	inline KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___values_8)); }
	inline ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>
struct ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85  : public RuntimeObject
{
public:
	// System.String Photon.Voice.AudioUtil/ToneAudioReader`1::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_0;
	// System.Double Photon.Voice.AudioUtil/ToneAudioReader`1::k
	double ___k_1;
	// System.Int64 Photon.Voice.AudioUtil/ToneAudioReader`1::timeSamples
	int64_t ___timeSamples_2;
	// System.Func`1<System.Double> Photon.Voice.AudioUtil/ToneAudioReader`1::clockSec
	Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * ___clockSec_3;
	// System.Int32 Photon.Voice.AudioUtil/ToneAudioReader`1::samplingRate
	int32_t ___samplingRate_4;
	// System.Int32 Photon.Voice.AudioUtil/ToneAudioReader`1::channels
	int32_t ___channels_5;

public:
	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85, ___U3CErrorU3Ek__BackingField_0)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_0() const { return ___U3CErrorU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_0() { return &___U3CErrorU3Ek__BackingField_0; }
	inline void set_U3CErrorU3Ek__BackingField_0(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_k_1() { return static_cast<int32_t>(offsetof(ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85, ___k_1)); }
	inline double get_k_1() const { return ___k_1; }
	inline double* get_address_of_k_1() { return &___k_1; }
	inline void set_k_1(double value)
	{
		___k_1 = value;
	}

	inline static int32_t get_offset_of_timeSamples_2() { return static_cast<int32_t>(offsetof(ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85, ___timeSamples_2)); }
	inline int64_t get_timeSamples_2() const { return ___timeSamples_2; }
	inline int64_t* get_address_of_timeSamples_2() { return &___timeSamples_2; }
	inline void set_timeSamples_2(int64_t value)
	{
		___timeSamples_2 = value;
	}

	inline static int32_t get_offset_of_clockSec_3() { return static_cast<int32_t>(offsetof(ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85, ___clockSec_3)); }
	inline Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * get_clockSec_3() const { return ___clockSec_3; }
	inline Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 ** get_address_of_clockSec_3() { return &___clockSec_3; }
	inline void set_clockSec_3(Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * value)
	{
		___clockSec_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockSec_3), (void*)value);
	}

	inline static int32_t get_offset_of_samplingRate_4() { return static_cast<int32_t>(offsetof(ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85, ___samplingRate_4)); }
	inline int32_t get_samplingRate_4() const { return ___samplingRate_4; }
	inline int32_t* get_address_of_samplingRate_4() { return &___samplingRate_4; }
	inline void set_samplingRate_4(int32_t value)
	{
		___samplingRate_4 = value;
	}

	inline static int32_t get_offset_of_channels_5() { return static_cast<int32_t>(offsetof(ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85, ___channels_5)); }
	inline int32_t get_channels_5() const { return ___channels_5; }
	inline int32_t* get_address_of_channels_5() { return &___channels_5; }
	inline void set_channels_5(int32_t value)
	{
		___channels_5 = value;
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_8;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_U3CHasRejoinedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CHasRejoinedU3Ek__BackingField_3)); }
	inline bool get_U3CHasRejoinedU3Ek__BackingField_3() const { return ___U3CHasRejoinedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasRejoinedU3Ek__BackingField_3() { return &___U3CHasRejoinedU3Ek__BackingField_3; }
	inline void set_U3CHasRejoinedU3Ek__BackingField_3(bool value)
	{
		___U3CHasRejoinedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_nickName_4() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___nickName_4)); }
	inline String_t* get_nickName_4() const { return ___nickName_4; }
	inline String_t** get_address_of_nickName_4() { return &___nickName_4; }
	inline void set_nickName_4(String_t* value)
	{
		___nickName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CUserIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_5() const { return ___U3CUserIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_5() { return &___U3CUserIdU3Ek__BackingField_5; }
	inline void set_U3CUserIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CIsInactiveU3Ek__BackingField_6)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_6() const { return ___U3CIsInactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_6() { return &___U3CIsInactiveU3Ek__BackingField_6; }
	inline void set_U3CIsInactiveU3Ek__BackingField_6(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CCustomPropertiesU3Ek__BackingField_7)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_U3CCustomPropertiesU3Ek__BackingField_7() const { return ___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_7() { return &___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_7(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_8() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___TagObject_8)); }
	inline RuntimeObject * get_TagObject_8() const { return ___TagObject_8; }
	inline RuntimeObject ** get_address_of_TagObject_8() { return &___TagObject_8; }
	inline void set_TagObject_8(RuntimeObject * value)
	{
		___TagObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_8), (void*)value);
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


// Photon.Voice.Unity.Demos.UiExtensions
struct UiExtensions_t5005F1D6A2E038B3B2BA8A4AEF0458F5773CCA9C  : public RuntimeObject
{
public:

public:
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9
struct U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5  : public RuntimeObject
{
public:
	// System.Int32 AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AvatarHeadBehaviour AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9::<>4__this
	AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5, ___U3CU3E4__this_2)); }
	inline AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___U3CmatchWithInputManagerU3Ek__BackingField_1)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_1() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return &___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_1(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___m_LastPressedFrame_2)); }
	inline int32_t get_m_LastPressedFrame_2() const { return ___m_LastPressedFrame_2; }
	inline int32_t* get_address_of_m_LastPressedFrame_2() { return &___m_LastPressedFrame_2; }
	inline void set_m_LastPressedFrame_2(int32_t value)
	{
		___m_LastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___m_ReleasedFrame_3)); }
	inline int32_t get_m_ReleasedFrame_3() const { return ___m_ReleasedFrame_3; }
	inline int32_t* get_address_of_m_ReleasedFrame_3() { return &___m_ReleasedFrame_3; }
	inline void set_m_ReleasedFrame_3(int32_t value)
	{
		___m_ReleasedFrame_3 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_4() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___m_Pressed_4)); }
	inline bool get_m_Pressed_4() const { return ___m_Pressed_4; }
	inline bool* get_address_of_m_Pressed_4() { return &___m_Pressed_4; }
	inline void set_m_Pressed_4(bool value)
	{
		___m_Pressed_4 = value;
	}
};


// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c
struct U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_StaticFields
{
public:
	// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::<>9
	U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * ___U3CU3E9_0;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::<>9__68_0
	Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * ___U3CU3E9__68_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__68_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_StaticFields, ___U3CU3E9__68_0_1)); }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * get_U3CU3E9__68_0_1() const { return ___U3CU3E9__68_0_1; }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 ** get_address_of_U3CU3E9__68_0_1() { return &___U3CU3E9__68_0_1; }
	inline void set_U3CU3E9__68_0_1(Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * value)
	{
		___U3CU3E9__68_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__68_0_1), (void*)value);
	}
};


// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

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

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF  : public Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D
{
public:

public:
};

struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_StaticFields
{
public:
	// System.Object[] ExitGames.Client.Photon.Hashtable::boxedByte
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___boxedByte_14;

public:
	inline static int32_t get_offset_of_boxedByte_14() { return static_cast<int32_t>(offsetof(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_StaticFields, ___boxedByte_14)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_boxedByte_14() const { return ___boxedByte_14; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_boxedByte_14() { return &___boxedByte_14; }
	inline void set_boxedByte_14(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___boxedByte_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxedByte_14), (void*)value);
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


// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 
{
public:
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;

public:
	inline static int32_t get_offset_of_NameServerPort_1() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___NameServerPort_1)); }
	inline uint16_t get_NameServerPort_1() const { return ___NameServerPort_1; }
	inline uint16_t* get_address_of_NameServerPort_1() { return &___NameServerPort_1; }
	inline void set_NameServerPort_1(uint16_t value)
	{
		___NameServerPort_1 = value;
	}

	inline static int32_t get_offset_of_MasterServerPort_2() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___MasterServerPort_2)); }
	inline uint16_t get_MasterServerPort_2() const { return ___MasterServerPort_2; }
	inline uint16_t* get_address_of_MasterServerPort_2() { return &___MasterServerPort_2; }
	inline void set_MasterServerPort_2(uint16_t value)
	{
		___MasterServerPort_2 = value;
	}

	inline static int32_t get_offset_of_GameServerPort_3() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___GameServerPort_3)); }
	inline uint16_t get_GameServerPort_3() const { return ___GameServerPort_3; }
	inline uint16_t* get_address_of_GameServerPort_3() { return &___GameServerPort_3; }
	inline void set_GameServerPort_3(uint16_t value)
	{
		___GameServerPort_3 = value;
	}
};

struct PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0_StaticFields
{
public:
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  ___AlternativeUdpPorts_0;

public:
	inline static int32_t get_offset_of_AlternativeUdpPorts_0() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0_StaticFields, ___AlternativeUdpPorts_0)); }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  get_AlternativeUdpPorts_0() const { return ___AlternativeUdpPorts_0; }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 * get_address_of_AlternativeUdpPorts_0() { return &___AlternativeUdpPorts_0; }
	inline void set_AlternativeUdpPorts_0(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  value)
	{
		___AlternativeUdpPorts_0 = value;
	}
};


// Photon.Voice.Unity.PlaybackDelaySettings
struct PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3 
{
public:
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MinDelaySoft
	int32_t ___MinDelaySoft_3;
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MaxDelaySoft
	int32_t ___MaxDelaySoft_4;
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MaxDelayHard
	int32_t ___MaxDelayHard_5;

public:
	inline static int32_t get_offset_of_MinDelaySoft_3() { return static_cast<int32_t>(offsetof(PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3, ___MinDelaySoft_3)); }
	inline int32_t get_MinDelaySoft_3() const { return ___MinDelaySoft_3; }
	inline int32_t* get_address_of_MinDelaySoft_3() { return &___MinDelaySoft_3; }
	inline void set_MinDelaySoft_3(int32_t value)
	{
		___MinDelaySoft_3 = value;
	}

	inline static int32_t get_offset_of_MaxDelaySoft_4() { return static_cast<int32_t>(offsetof(PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3, ___MaxDelaySoft_4)); }
	inline int32_t get_MaxDelaySoft_4() const { return ___MaxDelaySoft_4; }
	inline int32_t* get_address_of_MaxDelaySoft_4() { return &___MaxDelaySoft_4; }
	inline void set_MaxDelaySoft_4(int32_t value)
	{
		___MaxDelaySoft_4 = value;
	}

	inline static int32_t get_offset_of_MaxDelayHard_5() { return static_cast<int32_t>(offsetof(PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3, ___MaxDelayHard_5)); }
	inline int32_t get_MaxDelayHard_5() const { return ___MaxDelayHard_5; }
	inline int32_t* get_address_of_MaxDelayHard_5() { return &___MaxDelayHard_5; }
	inline void set_MaxDelayHard_5(int32_t value)
	{
		___MaxDelayHard_5 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Photon.Voice.IOS.AudioSessionCategory
struct AudioSessionCategory_tE250FDE11CD1BE66B77C0CDD6F78F2CC73F821C3 
{
public:
	// System.Int32 Photon.Voice.IOS.AudioSessionCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioSessionCategory_tE250FDE11CD1BE66B77C0CDD6F78F2CC73F821C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.IOS.AudioSessionMode
struct AudioSessionMode_tCE654A88A20960DF6620AF7DA7C66E5AB9401EEB 
{
public:
	// System.Int32 Photon.Voice.IOS.AudioSessionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioSessionMode_tCE654A88A20960DF6620AF7DA7C66E5AB9401EEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AuthModeOption
struct AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8 
{
public:
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AxisOptions
struct AxisOptions_tBA55DF2DF082DD4057B8F9CF10A86CD579BE9582 
{
public:
	// System.Int32 AxisOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOptions_tBA55DF2DF082DD4057B8F9CF10A86CD579BE9582, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientAppType
struct ClientAppType_t01DC8E82AB058170EEDEA419365F12ACFD487298 
{
public:
	// System.Int32 Photon.Realtime.ClientAppType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientAppType_t01DC8E82AB058170EEDEA419365F12ACFD487298, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientState
struct ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE 
{
public:
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// Photon.Pun.ConnectMethod
struct ConnectMethod_tA13C60CAD48EBE9B1ED72E47FC72070A48660BDD 
{
public:
	// System.Int32 Photon.Pun.ConnectMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectMethod_tA13C60CAD48EBE9B1ED72E47FC72070A48660BDD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_tD2BDC5B7F51B6082132AEDBF91A5CBF93E06B40E 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tD2BDC5B7F51B6082132AEDBF91A5CBF93E06B40E, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_tA121543C9778860E3BA2B55FB5C958F4DACA92E2 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tA121543C9778860E3BA2B55FB5C958F4DACA92E2, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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

// Photon.Realtime.DisconnectCause
struct DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.EncryptionMode
struct EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD 
{
public:
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Photon.Realtime.JoinType
struct JoinType_t2B1031B1428F1DD0B093F43E3D4242D91E23FF65 
{
public:
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t2B1031B1428F1DD0B093F43E3D4242D91E23FF65, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JoystickType
struct JoystickType_tECFD3828A2B1A2D40861C9426AD88888B2C028F9 
{
public:
	// System.Int32 JoystickType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoystickType_tECFD3828A2B1A2D40861C9426AD88888B2C028F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Photon.Pun.OwnershipOption
struct OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771 
{
public:
	// System.Int32 Photon.Pun.OwnershipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PunLogLevel
struct PunLogLevel_t32F30888D76A17E85CDDA79DBD838574BBC5DD11 
{
public:
	// System.Int32 Photon.Pun.PunLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PunLogLevel_t32F30888D76A17E85CDDA79DBD838574BBC5DD11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// POpusCodec.Enums.SamplingRate
struct SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51 
{
public:
	// System.Int32 POpusCodec.Enums.SamplingRate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct SerializationProtocol_t0C0A29B5F0DDB261C86E7ABC58E50B4388A8B52B 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t0C0A29B5F0DDB261C86E7ABC58E50B4388A8B52B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ServerConnection
struct ServerConnection_t85511B4B2D222BF3E597E032A33940A848958DB2 
{
public:
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_t85511B4B2D222BF3E597E032A33940A848958DB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.TargetFrameworks
struct TargetFrameworks_t592010E4B1A63EFA572B176E0FD4AFFF7EFE9CF2 
{
public:
	// System.Int32 ExitGames.Client.Photon.TargetFrameworks::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetFrameworks_t592010E4B1A63EFA572B176E0FD4AFFF7EFE9CF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ViewSynchronization
struct ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD 
{
public:
	// System.Int32 Photon.Pun.ViewSynchronization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_AlwaysUseVirtual_3;

public:
	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F, ___U3CvirtualMousePositionU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CvirtualMousePositionU3Ek__BackingField_0() const { return ___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return &___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualAxes_1() { return static_cast<int32_t>(offsetof(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F, ___m_VirtualAxes_1)); }
	inline Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * get_m_VirtualAxes_1() const { return ___m_VirtualAxes_1; }
	inline Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 ** get_address_of_m_VirtualAxes_1() { return &___m_VirtualAxes_1; }
	inline void set_m_VirtualAxes_1(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * value)
	{
		___m_VirtualAxes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualAxes_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_2() { return static_cast<int32_t>(offsetof(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F, ___m_VirtualButtons_2)); }
	inline Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * get_m_VirtualButtons_2() const { return ___m_VirtualButtons_2; }
	inline Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C ** get_address_of_m_VirtualButtons_2() { return &___m_VirtualButtons_2; }
	inline void set_m_VirtualButtons_2(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * value)
	{
		___m_VirtualButtons_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualButtons_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_3() { return static_cast<int32_t>(offsetof(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F, ___m_AlwaysUseVirtual_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_AlwaysUseVirtual_3() const { return ___m_AlwaysUseVirtual_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_AlwaysUseVirtual_3() { return &___m_AlwaysUseVirtual_3; }
	inline void set_m_AlwaysUseVirtual_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_AlwaysUseVirtual_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlwaysUseVirtual_3), (void*)value);
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/SpawnSequence
struct SpawnSequence_t7B0ED53F2219EACCE8EDC1AD5372A50445179C8E 
{
public:
	// System.Int32 ExitGames.Demos.DemoPunVoice.CharacterInstantiation/SpawnSequence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpawnSequence_t7B0ED53F2219EACCE8EDC1AD5372A50445179C8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
struct ActiveInputMethod_t81B5C5485AC5B373F518F7F5C7220422429C49E1 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActiveInputMethod_t81B5C5485AC5B373F518F7F5C7220422429C49E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB  : public UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF
{
public:

public:
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
struct AxisOption_t0F3EE8C872F69ECED3C618D7401F4FD791C6E0A2 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_t0F3EE8C872F69ECED3C618D7401F4FD791C6E0A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.OpusCodec/FrameDuration
struct FrameDuration_tD560D6F059401A66EE1FF773851E931BC1E0CE4D 
{
public:
	// System.Int32 Photon.Voice.OpusCodec/FrameDuration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameDuration_tD560D6F059401A66EE1FF773851E931BC1E0CE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonView/ObservableSearch
struct ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47 
{
public:
	// System.Int32 Photon.Pun.PhotonView/ObservableSearch::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder/InputSourceType
struct InputSourceType_tE4976CF7634D1A2EE44CE97F43BC598CE063E5E4 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder/InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_tE4976CF7634D1A2EE44CE97F43BC598CE063E5E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder/MicType
struct MicType_t25290DF0A5AF1BBC22A27D10C65C62AC81B71DD9 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder/MicType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MicType_t25290DF0A5AF1BBC22A27D10C65C62AC81B71DD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder/SampleTypeConv
struct SampleTypeConv_tA67BEB60358D5817001656554FB3432E3DC49BC9 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder/SampleTypeConv::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SampleTypeConv_tA67BEB60358D5817001656554FB3432E3DC49BC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RectTransform/Axis
struct Axis_t8881AF0DB9EDF3F36FE049AA194D0206695EBF83 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t8881AF0DB9EDF3F36FE049AA194D0206695EBF83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct AxisOption_tD35772FCA78862E0CF09E332EA4FDD33DA99FB80 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_tD35772FCA78862E0CF09E332EA4FDD33DA99FB80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct ControlStyle_t1C92A41DAAEB62BC19BB5AB279DE45C553E4A8E3 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlStyle_t1C92A41DAAEB62BC19BB5AB279DE45C553E4A8E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UIVirtualButton/BoolEvent
struct BoolEvent_tD84A3E3A4245DFD9FA5D608A5ADA77DBDFB6BD56  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// UIVirtualButton/Event
struct Event_tB8168EB885996D80674A82913E2B33B4915A9E23  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UIVirtualJoystick/Event
struct Event_t5D63277B4BC67CE95DE0316A422A69420D3A368D  : public UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C
{
public:

public:
};


// UIVirtualTouchZone/Event
struct Event_t1E1104A6087ED46DBF720AC59C7A8E63B974639D  : public UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C
{
public:

public:
};


// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E 
{
public:
	// Photon.Voice.IOS.AudioSessionCategory Photon.Voice.IOS.AudioSessionParameters::Category
	int32_t ___Category_0;
	// Photon.Voice.IOS.AudioSessionMode Photon.Voice.IOS.AudioSessionParameters::Mode
	int32_t ___Mode_1;
	// Photon.Voice.IOS.AudioSessionCategoryOption[] Photon.Voice.IOS.AudioSessionParameters::CategoryOptions
	AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F* ___CategoryOptions_2;

public:
	inline static int32_t get_offset_of_Category_0() { return static_cast<int32_t>(offsetof(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E, ___Category_0)); }
	inline int32_t get_Category_0() const { return ___Category_0; }
	inline int32_t* get_address_of_Category_0() { return &___Category_0; }
	inline void set_Category_0(int32_t value)
	{
		___Category_0 = value;
	}

	inline static int32_t get_offset_of_Mode_1() { return static_cast<int32_t>(offsetof(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E, ___Mode_1)); }
	inline int32_t get_Mode_1() const { return ___Mode_1; }
	inline int32_t* get_address_of_Mode_1() { return &___Mode_1; }
	inline void set_Mode_1(int32_t value)
	{
		___Mode_1 = value;
	}

	inline static int32_t get_offset_of_CategoryOptions_2() { return static_cast<int32_t>(offsetof(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E, ___CategoryOptions_2)); }
	inline AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F* get_CategoryOptions_2() const { return ___CategoryOptions_2; }
	inline AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F** get_address_of_CategoryOptions_2() { return &___CategoryOptions_2; }
	inline void set_CategoryOptions_2(AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F* value)
	{
		___CategoryOptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CategoryOptions_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E_marshaled_pinvoke
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};
// Native definition for COM marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E_marshaled_com
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// Photon.Pun.PhotonNetwork
struct PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC  : public RuntimeObject
{
public:

public:
};

struct PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields
{
public:
	// System.String Photon.Pun.PhotonNetwork::gameVersion
	String_t* ___gameVersion_1;
	// Photon.Realtime.LoadBalancingClient Photon.Pun.PhotonNetwork::NetworkingClient
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___NetworkingClient_2;
	// System.Int32 Photon.Pun.PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_3;
	// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::photonServerSettings
	ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * ___photonServerSettings_5;
	// Photon.Pun.ConnectMethod Photon.Pun.PhotonNetwork::ConnectMethod
	int32_t ___ConnectMethod_7;
	// Photon.Pun.PunLogLevel Photon.Pun.PhotonNetwork::LogLevel
	int32_t ___LogLevel_8;
	// System.Boolean Photon.Pun.PhotonNetwork::EnableCloseConnection
	bool ___EnableCloseConnection_9;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForVectorSynchronization
	float ___PrecisionForVectorSynchronization_10;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForQuaternionSynchronization
	float ___PrecisionForQuaternionSynchronization_11;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForFloatSynchronization
	float ___PrecisionForFloatSynchronization_12;
	// System.Boolean Photon.Pun.PhotonNetwork::offlineMode
	bool ___offlineMode_13;
	// Photon.Realtime.Room Photon.Pun.PhotonNetwork::offlineModeRoom
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___offlineModeRoom_14;
	// System.Boolean Photon.Pun.PhotonNetwork::automaticallySyncScene
	bool ___automaticallySyncScene_15;
	// System.Int32 Photon.Pun.PhotonNetwork::sendFrequency
	int32_t ___sendFrequency_16;
	// System.Int32 Photon.Pun.PhotonNetwork::serializationFrequency
	int32_t ___serializationFrequency_17;
	// System.Boolean Photon.Pun.PhotonNetwork::isMessageQueueRunning
	bool ___isMessageQueueRunning_18;
	// System.Double Photon.Pun.PhotonNetwork::frametime
	double ___frametime_19;
	// System.Int32 Photon.Pun.PhotonNetwork::frame
	int32_t ___frame_20;
	// System.Diagnostics.Stopwatch Photon.Pun.PhotonNetwork::StartupStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___StartupStopwatch_21;
	// System.Single Photon.Pun.PhotonNetwork::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_22;
	// System.Boolean Photon.Pun.PhotonNetwork::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_24;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_25;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Pun.PhotonNetwork::PrefabsWithoutMagicCallback
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___PrefabsWithoutMagicCallback_26;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::SendInstantiateEvHashtable
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___SendInstantiateEvHashtable_27;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendInstantiateRaiseEventOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendInstantiateRaiseEventOptions_28;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::allowedReceivingGroups
	HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * ___allowedReceivingGroups_29;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::blockedSendingGroups
	HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * ___blockedSendingGroups_30;
	// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::reusablePVHashset
	HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 * ___reusablePVHashset_31;
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::photonViewList
	NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49 * ___photonViewList_32;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipRequestEv
	Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * ___OnOwnershipRequestEv_33;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferedEv
	Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * ___OnOwnershipTransferedEv_34;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferFailedEv
	Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * ___OnOwnershipTransferFailedEv_35;
	// System.Byte Photon.Pun.PhotonNetwork::currentLevelPrefix
	uint8_t ___currentLevelPrefix_36;
	// System.Boolean Photon.Pun.PhotonNetwork::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_37;
	// Photon.Pun.IPunPrefabPool Photon.Pun.PhotonNetwork::prefabPool
	RuntimeObject* ___prefabPool_40;
	// System.Boolean Photon.Pun.PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_41;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> Photon.Pun.PhotonNetwork::monoRPCMethodsCache
	Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * ___monoRPCMethodsCache_42;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Photon.Pun.PhotonNetwork::rpcShortcuts
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___rpcShortcuts_43;
	// System.Boolean Photon.Pun.PhotonNetwork::RunRpcCoroutines
	bool ___RunRpcCoroutines_44;
	// UnityEngine.AsyncOperation Photon.Pun.PhotonNetwork::_AsyncLevelLoadingOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ____AsyncLevelLoadingOperation_45;
	// System.Single Photon.Pun.PhotonNetwork::_levelLoadingProgress
	float ____levelLoadingProgress_46;
	// System.Type Photon.Pun.PhotonNetwork::typePunRPC
	Type_t * ___typePunRPC_47;
	// System.Type Photon.Pun.PhotonNetwork::typePhotonMessageInfo
	Type_t * ___typePhotonMessageInfo_48;
	// System.Object Photon.Pun.PhotonNetwork::keyByteZero
	RuntimeObject * ___keyByteZero_49;
	// System.Object Photon.Pun.PhotonNetwork::keyByteOne
	RuntimeObject * ___keyByteOne_50;
	// System.Object Photon.Pun.PhotonNetwork::keyByteTwo
	RuntimeObject * ___keyByteTwo_51;
	// System.Object Photon.Pun.PhotonNetwork::keyByteThree
	RuntimeObject * ___keyByteThree_52;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFour
	RuntimeObject * ___keyByteFour_53;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFive
	RuntimeObject * ___keyByteFive_54;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSix
	RuntimeObject * ___keyByteSix_55;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSeven
	RuntimeObject * ___keyByteSeven_56;
	// System.Object Photon.Pun.PhotonNetwork::keyByteEight
	RuntimeObject * ___keyByteEight_57;
	// System.Object[] Photon.Pun.PhotonNetwork::emptyObjectArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyObjectArray_58;
	// System.Type[] Photon.Pun.PhotonNetwork::emptyTypeArray
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___emptyTypeArray_59;
	// System.Collections.Generic.List`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::foundPVs
	List_1_t22AB20B25E776225271DB850CE278C084A9985EF * ___foundPVs_60;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::removeFilter
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___removeFilter_61;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::ServerCleanDestroyEvent
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___ServerCleanDestroyEvent_62;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::ServerCleanOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___ServerCleanOptions_63;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToAllOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendToAllOptions_64;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToOthersOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendToOthersOptions_65;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToSingleOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendToSingleOptions_66;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcFilterByViewId
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___rpcFilterByViewId_67;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::OpCleanRpcBufferOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___OpCleanRpcBufferOptions_68;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcEvent
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___rpcEvent_69;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::RpcOptionsToAll
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___RpcOptionsToAll_70;
	// System.Int32 Photon.Pun.PhotonNetwork::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_71;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamOut
	PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___serializeStreamOut_72;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamIn
	PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___serializeStreamIn_73;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::serializeRaiseEvOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___serializeRaiseEvOptions_74;
	// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch> Photon.Pun.PhotonNetwork::serializeViewBatches
	Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 * ___serializeViewBatches_75;
	// Photon.Realtime.RegionHandler Photon.Pun.PhotonNetwork::_cachedRegionHandler
	RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ____cachedRegionHandler_80;

public:
	inline static int32_t get_offset_of_gameVersion_1() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___gameVersion_1)); }
	inline String_t* get_gameVersion_1() const { return ___gameVersion_1; }
	inline String_t** get_address_of_gameVersion_1() { return &___gameVersion_1; }
	inline void set_gameVersion_1(String_t* value)
	{
		___gameVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkingClient_2() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___NetworkingClient_2)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_NetworkingClient_2() const { return ___NetworkingClient_2; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_NetworkingClient_2() { return &___NetworkingClient_2; }
	inline void set_NetworkingClient_2(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___NetworkingClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkingClient_2), (void*)value);
	}

	inline static int32_t get_offset_of_MAX_VIEW_IDS_3() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___MAX_VIEW_IDS_3)); }
	inline int32_t get_MAX_VIEW_IDS_3() const { return ___MAX_VIEW_IDS_3; }
	inline int32_t* get_address_of_MAX_VIEW_IDS_3() { return &___MAX_VIEW_IDS_3; }
	inline void set_MAX_VIEW_IDS_3(int32_t value)
	{
		___MAX_VIEW_IDS_3 = value;
	}

	inline static int32_t get_offset_of_photonServerSettings_5() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___photonServerSettings_5)); }
	inline ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * get_photonServerSettings_5() const { return ___photonServerSettings_5; }
	inline ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B ** get_address_of_photonServerSettings_5() { return &___photonServerSettings_5; }
	inline void set_photonServerSettings_5(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * value)
	{
		___photonServerSettings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonServerSettings_5), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectMethod_7() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ConnectMethod_7)); }
	inline int32_t get_ConnectMethod_7() const { return ___ConnectMethod_7; }
	inline int32_t* get_address_of_ConnectMethod_7() { return &___ConnectMethod_7; }
	inline void set_ConnectMethod_7(int32_t value)
	{
		___ConnectMethod_7 = value;
	}

	inline static int32_t get_offset_of_LogLevel_8() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___LogLevel_8)); }
	inline int32_t get_LogLevel_8() const { return ___LogLevel_8; }
	inline int32_t* get_address_of_LogLevel_8() { return &___LogLevel_8; }
	inline void set_LogLevel_8(int32_t value)
	{
		___LogLevel_8 = value;
	}

	inline static int32_t get_offset_of_EnableCloseConnection_9() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___EnableCloseConnection_9)); }
	inline bool get_EnableCloseConnection_9() const { return ___EnableCloseConnection_9; }
	inline bool* get_address_of_EnableCloseConnection_9() { return &___EnableCloseConnection_9; }
	inline void set_EnableCloseConnection_9(bool value)
	{
		___EnableCloseConnection_9 = value;
	}

	inline static int32_t get_offset_of_PrecisionForVectorSynchronization_10() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrecisionForVectorSynchronization_10)); }
	inline float get_PrecisionForVectorSynchronization_10() const { return ___PrecisionForVectorSynchronization_10; }
	inline float* get_address_of_PrecisionForVectorSynchronization_10() { return &___PrecisionForVectorSynchronization_10; }
	inline void set_PrecisionForVectorSynchronization_10(float value)
	{
		___PrecisionForVectorSynchronization_10 = value;
	}

	inline static int32_t get_offset_of_PrecisionForQuaternionSynchronization_11() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrecisionForQuaternionSynchronization_11)); }
	inline float get_PrecisionForQuaternionSynchronization_11() const { return ___PrecisionForQuaternionSynchronization_11; }
	inline float* get_address_of_PrecisionForQuaternionSynchronization_11() { return &___PrecisionForQuaternionSynchronization_11; }
	inline void set_PrecisionForQuaternionSynchronization_11(float value)
	{
		___PrecisionForQuaternionSynchronization_11 = value;
	}

	inline static int32_t get_offset_of_PrecisionForFloatSynchronization_12() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrecisionForFloatSynchronization_12)); }
	inline float get_PrecisionForFloatSynchronization_12() const { return ___PrecisionForFloatSynchronization_12; }
	inline float* get_address_of_PrecisionForFloatSynchronization_12() { return &___PrecisionForFloatSynchronization_12; }
	inline void set_PrecisionForFloatSynchronization_12(float value)
	{
		___PrecisionForFloatSynchronization_12 = value;
	}

	inline static int32_t get_offset_of_offlineMode_13() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___offlineMode_13)); }
	inline bool get_offlineMode_13() const { return ___offlineMode_13; }
	inline bool* get_address_of_offlineMode_13() { return &___offlineMode_13; }
	inline void set_offlineMode_13(bool value)
	{
		___offlineMode_13 = value;
	}

	inline static int32_t get_offset_of_offlineModeRoom_14() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___offlineModeRoom_14)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_offlineModeRoom_14() const { return ___offlineModeRoom_14; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_offlineModeRoom_14() { return &___offlineModeRoom_14; }
	inline void set_offlineModeRoom_14(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___offlineModeRoom_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offlineModeRoom_14), (void*)value);
	}

	inline static int32_t get_offset_of_automaticallySyncScene_15() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___automaticallySyncScene_15)); }
	inline bool get_automaticallySyncScene_15() const { return ___automaticallySyncScene_15; }
	inline bool* get_address_of_automaticallySyncScene_15() { return &___automaticallySyncScene_15; }
	inline void set_automaticallySyncScene_15(bool value)
	{
		___automaticallySyncScene_15 = value;
	}

	inline static int32_t get_offset_of_sendFrequency_16() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___sendFrequency_16)); }
	inline int32_t get_sendFrequency_16() const { return ___sendFrequency_16; }
	inline int32_t* get_address_of_sendFrequency_16() { return &___sendFrequency_16; }
	inline void set_sendFrequency_16(int32_t value)
	{
		___sendFrequency_16 = value;
	}

	inline static int32_t get_offset_of_serializationFrequency_17() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializationFrequency_17)); }
	inline int32_t get_serializationFrequency_17() const { return ___serializationFrequency_17; }
	inline int32_t* get_address_of_serializationFrequency_17() { return &___serializationFrequency_17; }
	inline void set_serializationFrequency_17(int32_t value)
	{
		___serializationFrequency_17 = value;
	}

	inline static int32_t get_offset_of_isMessageQueueRunning_18() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___isMessageQueueRunning_18)); }
	inline bool get_isMessageQueueRunning_18() const { return ___isMessageQueueRunning_18; }
	inline bool* get_address_of_isMessageQueueRunning_18() { return &___isMessageQueueRunning_18; }
	inline void set_isMessageQueueRunning_18(bool value)
	{
		___isMessageQueueRunning_18 = value;
	}

	inline static int32_t get_offset_of_frametime_19() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___frametime_19)); }
	inline double get_frametime_19() const { return ___frametime_19; }
	inline double* get_address_of_frametime_19() { return &___frametime_19; }
	inline void set_frametime_19(double value)
	{
		___frametime_19 = value;
	}

	inline static int32_t get_offset_of_frame_20() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___frame_20)); }
	inline int32_t get_frame_20() const { return ___frame_20; }
	inline int32_t* get_address_of_frame_20() { return &___frame_20; }
	inline void set_frame_20(int32_t value)
	{
		___frame_20 = value;
	}

	inline static int32_t get_offset_of_StartupStopwatch_21() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___StartupStopwatch_21)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_StartupStopwatch_21() const { return ___StartupStopwatch_21; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_StartupStopwatch_21() { return &___StartupStopwatch_21; }
	inline void set_StartupStopwatch_21(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___StartupStopwatch_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartupStopwatch_21), (void*)value);
	}

	inline static int32_t get_offset_of_MinimalTimeScaleToDispatchInFixedUpdate_22() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___MinimalTimeScaleToDispatchInFixedUpdate_22)); }
	inline float get_MinimalTimeScaleToDispatchInFixedUpdate_22() const { return ___MinimalTimeScaleToDispatchInFixedUpdate_22; }
	inline float* get_address_of_MinimalTimeScaleToDispatchInFixedUpdate_22() { return &___MinimalTimeScaleToDispatchInFixedUpdate_22; }
	inline void set_MinimalTimeScaleToDispatchInFixedUpdate_22(float value)
	{
		___MinimalTimeScaleToDispatchInFixedUpdate_22 = value;
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_23() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_23() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_23; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_23(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubId_24() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___lastUsedViewSubId_24)); }
	inline int32_t get_lastUsedViewSubId_24() const { return ___lastUsedViewSubId_24; }
	inline int32_t* get_address_of_lastUsedViewSubId_24() { return &___lastUsedViewSubId_24; }
	inline void set_lastUsedViewSubId_24(int32_t value)
	{
		___lastUsedViewSubId_24 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubIdStatic_25() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___lastUsedViewSubIdStatic_25)); }
	inline int32_t get_lastUsedViewSubIdStatic_25() const { return ___lastUsedViewSubIdStatic_25; }
	inline int32_t* get_address_of_lastUsedViewSubIdStatic_25() { return &___lastUsedViewSubIdStatic_25; }
	inline void set_lastUsedViewSubIdStatic_25(int32_t value)
	{
		___lastUsedViewSubIdStatic_25 = value;
	}

	inline static int32_t get_offset_of_PrefabsWithoutMagicCallback_26() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrefabsWithoutMagicCallback_26)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_PrefabsWithoutMagicCallback_26() const { return ___PrefabsWithoutMagicCallback_26; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_PrefabsWithoutMagicCallback_26() { return &___PrefabsWithoutMagicCallback_26; }
	inline void set_PrefabsWithoutMagicCallback_26(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___PrefabsWithoutMagicCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabsWithoutMagicCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_SendInstantiateEvHashtable_27() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendInstantiateEvHashtable_27)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_SendInstantiateEvHashtable_27() const { return ___SendInstantiateEvHashtable_27; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_SendInstantiateEvHashtable_27() { return &___SendInstantiateEvHashtable_27; }
	inline void set_SendInstantiateEvHashtable_27(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___SendInstantiateEvHashtable_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendInstantiateEvHashtable_27), (void*)value);
	}

	inline static int32_t get_offset_of_SendInstantiateRaiseEventOptions_28() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendInstantiateRaiseEventOptions_28)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendInstantiateRaiseEventOptions_28() const { return ___SendInstantiateRaiseEventOptions_28; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendInstantiateRaiseEventOptions_28() { return &___SendInstantiateRaiseEventOptions_28; }
	inline void set_SendInstantiateRaiseEventOptions_28(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendInstantiateRaiseEventOptions_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendInstantiateRaiseEventOptions_28), (void*)value);
	}

	inline static int32_t get_offset_of_allowedReceivingGroups_29() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___allowedReceivingGroups_29)); }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * get_allowedReceivingGroups_29() const { return ___allowedReceivingGroups_29; }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C ** get_address_of_allowedReceivingGroups_29() { return &___allowedReceivingGroups_29; }
	inline void set_allowedReceivingGroups_29(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * value)
	{
		___allowedReceivingGroups_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allowedReceivingGroups_29), (void*)value);
	}

	inline static int32_t get_offset_of_blockedSendingGroups_30() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___blockedSendingGroups_30)); }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * get_blockedSendingGroups_30() const { return ___blockedSendingGroups_30; }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C ** get_address_of_blockedSendingGroups_30() { return &___blockedSendingGroups_30; }
	inline void set_blockedSendingGroups_30(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * value)
	{
		___blockedSendingGroups_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockedSendingGroups_30), (void*)value);
	}

	inline static int32_t get_offset_of_reusablePVHashset_31() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___reusablePVHashset_31)); }
	inline HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 * get_reusablePVHashset_31() const { return ___reusablePVHashset_31; }
	inline HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 ** get_address_of_reusablePVHashset_31() { return &___reusablePVHashset_31; }
	inline void set_reusablePVHashset_31(HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 * value)
	{
		___reusablePVHashset_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusablePVHashset_31), (void*)value);
	}

	inline static int32_t get_offset_of_photonViewList_32() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___photonViewList_32)); }
	inline NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49 * get_photonViewList_32() const { return ___photonViewList_32; }
	inline NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49 ** get_address_of_photonViewList_32() { return &___photonViewList_32; }
	inline void set_photonViewList_32(NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49 * value)
	{
		___photonViewList_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonViewList_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipRequestEv_33() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OnOwnershipRequestEv_33)); }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * get_OnOwnershipRequestEv_33() const { return ___OnOwnershipRequestEv_33; }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C ** get_address_of_OnOwnershipRequestEv_33() { return &___OnOwnershipRequestEv_33; }
	inline void set_OnOwnershipRequestEv_33(Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * value)
	{
		___OnOwnershipRequestEv_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipRequestEv_33), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipTransferedEv_34() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OnOwnershipTransferedEv_34)); }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * get_OnOwnershipTransferedEv_34() const { return ___OnOwnershipTransferedEv_34; }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C ** get_address_of_OnOwnershipTransferedEv_34() { return &___OnOwnershipTransferedEv_34; }
	inline void set_OnOwnershipTransferedEv_34(Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * value)
	{
		___OnOwnershipTransferedEv_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipTransferedEv_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipTransferFailedEv_35() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OnOwnershipTransferFailedEv_35)); }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * get_OnOwnershipTransferFailedEv_35() const { return ___OnOwnershipTransferFailedEv_35; }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C ** get_address_of_OnOwnershipTransferFailedEv_35() { return &___OnOwnershipTransferFailedEv_35; }
	inline void set_OnOwnershipTransferFailedEv_35(Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * value)
	{
		___OnOwnershipTransferFailedEv_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipTransferFailedEv_35), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevelPrefix_36() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___currentLevelPrefix_36)); }
	inline uint8_t get_currentLevelPrefix_36() const { return ___currentLevelPrefix_36; }
	inline uint8_t* get_address_of_currentLevelPrefix_36() { return &___currentLevelPrefix_36; }
	inline void set_currentLevelPrefix_36(uint8_t value)
	{
		___currentLevelPrefix_36 = value;
	}

	inline static int32_t get_offset_of_loadingLevelAndPausedNetwork_37() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___loadingLevelAndPausedNetwork_37)); }
	inline bool get_loadingLevelAndPausedNetwork_37() const { return ___loadingLevelAndPausedNetwork_37; }
	inline bool* get_address_of_loadingLevelAndPausedNetwork_37() { return &___loadingLevelAndPausedNetwork_37; }
	inline void set_loadingLevelAndPausedNetwork_37(bool value)
	{
		___loadingLevelAndPausedNetwork_37 = value;
	}

	inline static int32_t get_offset_of_prefabPool_40() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___prefabPool_40)); }
	inline RuntimeObject* get_prefabPool_40() const { return ___prefabPool_40; }
	inline RuntimeObject** get_address_of_prefabPool_40() { return &___prefabPool_40; }
	inline void set_prefabPool_40(RuntimeObject* value)
	{
		___prefabPool_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabPool_40), (void*)value);
	}

	inline static int32_t get_offset_of_UseRpcMonoBehaviourCache_41() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___UseRpcMonoBehaviourCache_41)); }
	inline bool get_UseRpcMonoBehaviourCache_41() const { return ___UseRpcMonoBehaviourCache_41; }
	inline bool* get_address_of_UseRpcMonoBehaviourCache_41() { return &___UseRpcMonoBehaviourCache_41; }
	inline void set_UseRpcMonoBehaviourCache_41(bool value)
	{
		___UseRpcMonoBehaviourCache_41 = value;
	}

	inline static int32_t get_offset_of_monoRPCMethodsCache_42() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___monoRPCMethodsCache_42)); }
	inline Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * get_monoRPCMethodsCache_42() const { return ___monoRPCMethodsCache_42; }
	inline Dictionary_2_t510FB791361517D9490A57D6259732545477D57C ** get_address_of_monoRPCMethodsCache_42() { return &___monoRPCMethodsCache_42; }
	inline void set_monoRPCMethodsCache_42(Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * value)
	{
		___monoRPCMethodsCache_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monoRPCMethodsCache_42), (void*)value);
	}

	inline static int32_t get_offset_of_rpcShortcuts_43() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___rpcShortcuts_43)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_rpcShortcuts_43() const { return ___rpcShortcuts_43; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_rpcShortcuts_43() { return &___rpcShortcuts_43; }
	inline void set_rpcShortcuts_43(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___rpcShortcuts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcShortcuts_43), (void*)value);
	}

	inline static int32_t get_offset_of_RunRpcCoroutines_44() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___RunRpcCoroutines_44)); }
	inline bool get_RunRpcCoroutines_44() const { return ___RunRpcCoroutines_44; }
	inline bool* get_address_of_RunRpcCoroutines_44() { return &___RunRpcCoroutines_44; }
	inline void set_RunRpcCoroutines_44(bool value)
	{
		___RunRpcCoroutines_44 = value;
	}

	inline static int32_t get_offset_of__AsyncLevelLoadingOperation_45() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ____AsyncLevelLoadingOperation_45)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get__AsyncLevelLoadingOperation_45() const { return ____AsyncLevelLoadingOperation_45; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of__AsyncLevelLoadingOperation_45() { return &____AsyncLevelLoadingOperation_45; }
	inline void set__AsyncLevelLoadingOperation_45(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		____AsyncLevelLoadingOperation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AsyncLevelLoadingOperation_45), (void*)value);
	}

	inline static int32_t get_offset_of__levelLoadingProgress_46() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ____levelLoadingProgress_46)); }
	inline float get__levelLoadingProgress_46() const { return ____levelLoadingProgress_46; }
	inline float* get_address_of__levelLoadingProgress_46() { return &____levelLoadingProgress_46; }
	inline void set__levelLoadingProgress_46(float value)
	{
		____levelLoadingProgress_46 = value;
	}

	inline static int32_t get_offset_of_typePunRPC_47() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___typePunRPC_47)); }
	inline Type_t * get_typePunRPC_47() const { return ___typePunRPC_47; }
	inline Type_t ** get_address_of_typePunRPC_47() { return &___typePunRPC_47; }
	inline void set_typePunRPC_47(Type_t * value)
	{
		___typePunRPC_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePunRPC_47), (void*)value);
	}

	inline static int32_t get_offset_of_typePhotonMessageInfo_48() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___typePhotonMessageInfo_48)); }
	inline Type_t * get_typePhotonMessageInfo_48() const { return ___typePhotonMessageInfo_48; }
	inline Type_t ** get_address_of_typePhotonMessageInfo_48() { return &___typePhotonMessageInfo_48; }
	inline void set_typePhotonMessageInfo_48(Type_t * value)
	{
		___typePhotonMessageInfo_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePhotonMessageInfo_48), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteZero_49() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteZero_49)); }
	inline RuntimeObject * get_keyByteZero_49() const { return ___keyByteZero_49; }
	inline RuntimeObject ** get_address_of_keyByteZero_49() { return &___keyByteZero_49; }
	inline void set_keyByteZero_49(RuntimeObject * value)
	{
		___keyByteZero_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteZero_49), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteOne_50() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteOne_50)); }
	inline RuntimeObject * get_keyByteOne_50() const { return ___keyByteOne_50; }
	inline RuntimeObject ** get_address_of_keyByteOne_50() { return &___keyByteOne_50; }
	inline void set_keyByteOne_50(RuntimeObject * value)
	{
		___keyByteOne_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteOne_50), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteTwo_51() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteTwo_51)); }
	inline RuntimeObject * get_keyByteTwo_51() const { return ___keyByteTwo_51; }
	inline RuntimeObject ** get_address_of_keyByteTwo_51() { return &___keyByteTwo_51; }
	inline void set_keyByteTwo_51(RuntimeObject * value)
	{
		___keyByteTwo_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteTwo_51), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteThree_52() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteThree_52)); }
	inline RuntimeObject * get_keyByteThree_52() const { return ___keyByteThree_52; }
	inline RuntimeObject ** get_address_of_keyByteThree_52() { return &___keyByteThree_52; }
	inline void set_keyByteThree_52(RuntimeObject * value)
	{
		___keyByteThree_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteThree_52), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFour_53() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteFour_53)); }
	inline RuntimeObject * get_keyByteFour_53() const { return ___keyByteFour_53; }
	inline RuntimeObject ** get_address_of_keyByteFour_53() { return &___keyByteFour_53; }
	inline void set_keyByteFour_53(RuntimeObject * value)
	{
		___keyByteFour_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFour_53), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFive_54() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteFive_54)); }
	inline RuntimeObject * get_keyByteFive_54() const { return ___keyByteFive_54; }
	inline RuntimeObject ** get_address_of_keyByteFive_54() { return &___keyByteFive_54; }
	inline void set_keyByteFive_54(RuntimeObject * value)
	{
		___keyByteFive_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFive_54), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteSix_55() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteSix_55)); }
	inline RuntimeObject * get_keyByteSix_55() const { return ___keyByteSix_55; }
	inline RuntimeObject ** get_address_of_keyByteSix_55() { return &___keyByteSix_55; }
	inline void set_keyByteSix_55(RuntimeObject * value)
	{
		___keyByteSix_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteSix_55), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteSeven_56() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteSeven_56)); }
	inline RuntimeObject * get_keyByteSeven_56() const { return ___keyByteSeven_56; }
	inline RuntimeObject ** get_address_of_keyByteSeven_56() { return &___keyByteSeven_56; }
	inline void set_keyByteSeven_56(RuntimeObject * value)
	{
		___keyByteSeven_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteSeven_56), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteEight_57() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteEight_57)); }
	inline RuntimeObject * get_keyByteEight_57() const { return ___keyByteEight_57; }
	inline RuntimeObject ** get_address_of_keyByteEight_57() { return &___keyByteEight_57; }
	inline void set_keyByteEight_57(RuntimeObject * value)
	{
		___keyByteEight_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteEight_57), (void*)value);
	}

	inline static int32_t get_offset_of_emptyObjectArray_58() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___emptyObjectArray_58)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyObjectArray_58() const { return ___emptyObjectArray_58; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyObjectArray_58() { return &___emptyObjectArray_58; }
	inline void set_emptyObjectArray_58(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyObjectArray_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyObjectArray_58), (void*)value);
	}

	inline static int32_t get_offset_of_emptyTypeArray_59() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___emptyTypeArray_59)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_emptyTypeArray_59() const { return ___emptyTypeArray_59; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_emptyTypeArray_59() { return &___emptyTypeArray_59; }
	inline void set_emptyTypeArray_59(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___emptyTypeArray_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyTypeArray_59), (void*)value);
	}

	inline static int32_t get_offset_of_foundPVs_60() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___foundPVs_60)); }
	inline List_1_t22AB20B25E776225271DB850CE278C084A9985EF * get_foundPVs_60() const { return ___foundPVs_60; }
	inline List_1_t22AB20B25E776225271DB850CE278C084A9985EF ** get_address_of_foundPVs_60() { return &___foundPVs_60; }
	inline void set_foundPVs_60(List_1_t22AB20B25E776225271DB850CE278C084A9985EF * value)
	{
		___foundPVs_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foundPVs_60), (void*)value);
	}

	inline static int32_t get_offset_of_removeFilter_61() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___removeFilter_61)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_removeFilter_61() const { return ___removeFilter_61; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_removeFilter_61() { return &___removeFilter_61; }
	inline void set_removeFilter_61(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___removeFilter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeFilter_61), (void*)value);
	}

	inline static int32_t get_offset_of_ServerCleanDestroyEvent_62() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ServerCleanDestroyEvent_62)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_ServerCleanDestroyEvent_62() const { return ___ServerCleanDestroyEvent_62; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_ServerCleanDestroyEvent_62() { return &___ServerCleanDestroyEvent_62; }
	inline void set_ServerCleanDestroyEvent_62(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___ServerCleanDestroyEvent_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerCleanDestroyEvent_62), (void*)value);
	}

	inline static int32_t get_offset_of_ServerCleanOptions_63() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ServerCleanOptions_63)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_ServerCleanOptions_63() const { return ___ServerCleanOptions_63; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_ServerCleanOptions_63() { return &___ServerCleanOptions_63; }
	inline void set_ServerCleanOptions_63(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___ServerCleanOptions_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerCleanOptions_63), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAllOptions_64() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendToAllOptions_64)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendToAllOptions_64() const { return ___SendToAllOptions_64; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendToAllOptions_64() { return &___SendToAllOptions_64; }
	inline void set_SendToAllOptions_64(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendToAllOptions_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAllOptions_64), (void*)value);
	}

	inline static int32_t get_offset_of_SendToOthersOptions_65() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendToOthersOptions_65)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendToOthersOptions_65() const { return ___SendToOthersOptions_65; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendToOthersOptions_65() { return &___SendToOthersOptions_65; }
	inline void set_SendToOthersOptions_65(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendToOthersOptions_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToOthersOptions_65), (void*)value);
	}

	inline static int32_t get_offset_of_SendToSingleOptions_66() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendToSingleOptions_66)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendToSingleOptions_66() const { return ___SendToSingleOptions_66; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendToSingleOptions_66() { return &___SendToSingleOptions_66; }
	inline void set_SendToSingleOptions_66(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendToSingleOptions_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToSingleOptions_66), (void*)value);
	}

	inline static int32_t get_offset_of_rpcFilterByViewId_67() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___rpcFilterByViewId_67)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_rpcFilterByViewId_67() const { return ___rpcFilterByViewId_67; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_rpcFilterByViewId_67() { return &___rpcFilterByViewId_67; }
	inline void set_rpcFilterByViewId_67(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___rpcFilterByViewId_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcFilterByViewId_67), (void*)value);
	}

	inline static int32_t get_offset_of_OpCleanRpcBufferOptions_68() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OpCleanRpcBufferOptions_68)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_OpCleanRpcBufferOptions_68() const { return ___OpCleanRpcBufferOptions_68; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_OpCleanRpcBufferOptions_68() { return &___OpCleanRpcBufferOptions_68; }
	inline void set_OpCleanRpcBufferOptions_68(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___OpCleanRpcBufferOptions_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpCleanRpcBufferOptions_68), (void*)value);
	}

	inline static int32_t get_offset_of_rpcEvent_69() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___rpcEvent_69)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_rpcEvent_69() const { return ___rpcEvent_69; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_rpcEvent_69() { return &___rpcEvent_69; }
	inline void set_rpcEvent_69(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___rpcEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcEvent_69), (void*)value);
	}

	inline static int32_t get_offset_of_RpcOptionsToAll_70() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___RpcOptionsToAll_70)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_RpcOptionsToAll_70() const { return ___RpcOptionsToAll_70; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_RpcOptionsToAll_70() { return &___RpcOptionsToAll_70; }
	inline void set_RpcOptionsToAll_70(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___RpcOptionsToAll_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcOptionsToAll_70), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectsInOneUpdate_71() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ObjectsInOneUpdate_71)); }
	inline int32_t get_ObjectsInOneUpdate_71() const { return ___ObjectsInOneUpdate_71; }
	inline int32_t* get_address_of_ObjectsInOneUpdate_71() { return &___ObjectsInOneUpdate_71; }
	inline void set_ObjectsInOneUpdate_71(int32_t value)
	{
		___ObjectsInOneUpdate_71 = value;
	}

	inline static int32_t get_offset_of_serializeStreamOut_72() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeStreamOut_72)); }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * get_serializeStreamOut_72() const { return ___serializeStreamOut_72; }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA ** get_address_of_serializeStreamOut_72() { return &___serializeStreamOut_72; }
	inline void set_serializeStreamOut_72(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * value)
	{
		___serializeStreamOut_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeStreamOut_72), (void*)value);
	}

	inline static int32_t get_offset_of_serializeStreamIn_73() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeStreamIn_73)); }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * get_serializeStreamIn_73() const { return ___serializeStreamIn_73; }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA ** get_address_of_serializeStreamIn_73() { return &___serializeStreamIn_73; }
	inline void set_serializeStreamIn_73(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * value)
	{
		___serializeStreamIn_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeStreamIn_73), (void*)value);
	}

	inline static int32_t get_offset_of_serializeRaiseEvOptions_74() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeRaiseEvOptions_74)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_serializeRaiseEvOptions_74() const { return ___serializeRaiseEvOptions_74; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_serializeRaiseEvOptions_74() { return &___serializeRaiseEvOptions_74; }
	inline void set_serializeRaiseEvOptions_74(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___serializeRaiseEvOptions_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeRaiseEvOptions_74), (void*)value);
	}

	inline static int32_t get_offset_of_serializeViewBatches_75() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeViewBatches_75)); }
	inline Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 * get_serializeViewBatches_75() const { return ___serializeViewBatches_75; }
	inline Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 ** get_address_of_serializeViewBatches_75() { return &___serializeViewBatches_75; }
	inline void set_serializeViewBatches_75(Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 * value)
	{
		___serializeViewBatches_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeViewBatches_75), (void*)value);
	}

	inline static int32_t get_offset_of__cachedRegionHandler_80() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ____cachedRegionHandler_80)); }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * get__cachedRegionHandler_80() const { return ____cachedRegionHandler_80; }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 ** get_address_of__cachedRegionHandler_80() { return &____cachedRegionHandler_80; }
	inline void set__cachedRegionHandler_80(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * value)
	{
		____cachedRegionHandler_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedRegionHandler_80), (void*)value);
	}
};


// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_16;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * ___SocketImplementationConfig_18;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_19;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_20;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_21;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3 * ___OnDisconnectMessage_22;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitResends
	int32_t ___SequenceDeltaLimitResends_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitSends
	int32_t ___SequenceDeltaLimitSends_28;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_29;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_30;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_31;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_37;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_38;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_39;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_42;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_44;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___RandomizedSequenceNumbers_45;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_46;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * ___U3CTrafficStatsIncomingU3Ek__BackingField_47;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_48;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_49;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___trafficStatsStopwatch_50;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_51;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989 * ___peerBase_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_54;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_55;
	// System.Type ExitGames.Client.Photon.PhotonPeer::payloadEncryptorType
	Type_t * ___payloadEncryptorType_56;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PayloadEncryptionSecret_57;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_58;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_59;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_60;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_CommandLogSize_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___CommandLogSize_4)); }
	inline int32_t get_CommandLogSize_4() const { return ___CommandLogSize_4; }
	inline int32_t* get_address_of_CommandLogSize_4() { return &___CommandLogSize_4; }
	inline void set_CommandLogSize_4(int32_t value)
	{
		___CommandLogSize_4 = value;
	}

	inline static int32_t get_offset_of_TargetFramework_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___TargetFramework_8)); }
	inline int32_t get_TargetFramework_8() const { return ___TargetFramework_8; }
	inline int32_t* get_address_of_TargetFramework_8() { return &___TargetFramework_8; }
	inline void set_TargetFramework_8(int32_t value)
	{
		___TargetFramework_8 = value;
	}

	inline static int32_t get_offset_of_RemoveAppIdFromWebSocketPath_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___RemoveAppIdFromWebSocketPath_10)); }
	inline bool get_RemoveAppIdFromWebSocketPath_10() const { return ___RemoveAppIdFromWebSocketPath_10; }
	inline bool* get_address_of_RemoveAppIdFromWebSocketPath_10() { return &___RemoveAppIdFromWebSocketPath_10; }
	inline void set_RemoveAppIdFromWebSocketPath_10(bool value)
	{
		___RemoveAppIdFromWebSocketPath_10 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___ClientSdkId_11)); }
	inline uint8_t get_ClientSdkId_11() const { return ___ClientSdkId_11; }
	inline uint8_t* get_address_of_ClientSdkId_11() { return &___ClientSdkId_11; }
	inline void set_ClientSdkId_11(uint8_t value)
	{
		___ClientSdkId_11 = value;
	}

	inline static int32_t get_offset_of_UseInitV3_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___UseInitV3_16)); }
	inline bool get_UseInitV3_16() const { return ___UseInitV3_16; }
	inline bool* get_address_of_UseInitV3_16() { return &___UseInitV3_16; }
	inline void set_UseInitV3_16(bool value)
	{
		___UseInitV3_16 = value;
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CSerializationProtocolTypeU3Ek__BackingField_17)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_17() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_17() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_17; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_17(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SocketImplementationConfig_18)); }
	inline Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * get_SocketImplementationConfig_18() const { return ___SocketImplementationConfig_18; }
	inline Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F ** get_address_of_SocketImplementationConfig_18() { return &___SocketImplementationConfig_18; }
	inline void set_SocketImplementationConfig_18(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * value)
	{
		___SocketImplementationConfig_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CSocketImplementationU3Ek__BackingField_19)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_19() const { return ___U3CSocketImplementationU3Ek__BackingField_19; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_19() { return &___U3CSocketImplementationU3Ek__BackingField_19; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_19(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___DebugOut_20)); }
	inline uint8_t get_DebugOut_20() const { return ___DebugOut_20; }
	inline uint8_t* get_address_of_DebugOut_20() { return &___DebugOut_20; }
	inline void set_DebugOut_20(uint8_t value)
	{
		___DebugOut_20 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CListenerU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_21() const { return ___U3CListenerU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_21() { return &___U3CListenerU3Ek__BackingField_21; }
	inline void set_U3CListenerU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectMessage_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___OnDisconnectMessage_22)); }
	inline Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3 * get_OnDisconnectMessage_22() const { return ___OnDisconnectMessage_22; }
	inline Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3 ** get_address_of_OnDisconnectMessage_22() { return &___OnDisconnectMessage_22; }
	inline void set_OnDisconnectMessage_22(Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3 * value)
	{
		___OnDisconnectMessage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectMessage_22), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___reuseEventInstance_23)); }
	inline bool get_reuseEventInstance_23() const { return ___reuseEventInstance_23; }
	inline bool* get_address_of_reuseEventInstance_23() { return &___reuseEventInstance_23; }
	inline void set_reuseEventInstance_23(bool value)
	{
		___reuseEventInstance_23 = value;
	}

	inline static int32_t get_offset_of_useByteArraySlicePoolForEvents_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___useByteArraySlicePoolForEvents_24)); }
	inline bool get_useByteArraySlicePoolForEvents_24() const { return ___useByteArraySlicePoolForEvents_24; }
	inline bool* get_address_of_useByteArraySlicePoolForEvents_24() { return &___useByteArraySlicePoolForEvents_24; }
	inline void set_useByteArraySlicePoolForEvents_24(bool value)
	{
		___useByteArraySlicePoolForEvents_24 = value;
	}

	inline static int32_t get_offset_of_wrapIncomingStructs_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___wrapIncomingStructs_25)); }
	inline bool get_wrapIncomingStructs_25() const { return ___wrapIncomingStructs_25; }
	inline bool* get_address_of_wrapIncomingStructs_25() { return &___wrapIncomingStructs_25; }
	inline void set_wrapIncomingStructs_25(bool value)
	{
		___wrapIncomingStructs_25 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SendInCreationOrder_26)); }
	inline bool get_SendInCreationOrder_26() const { return ___SendInCreationOrder_26; }
	inline bool* get_address_of_SendInCreationOrder_26() { return &___SendInCreationOrder_26; }
	inline void set_SendInCreationOrder_26(bool value)
	{
		___SendInCreationOrder_26 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitResends_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SequenceDeltaLimitResends_27)); }
	inline int32_t get_SequenceDeltaLimitResends_27() const { return ___SequenceDeltaLimitResends_27; }
	inline int32_t* get_address_of_SequenceDeltaLimitResends_27() { return &___SequenceDeltaLimitResends_27; }
	inline void set_SequenceDeltaLimitResends_27(int32_t value)
	{
		___SequenceDeltaLimitResends_27 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitSends_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SequenceDeltaLimitSends_28)); }
	inline int32_t get_SequenceDeltaLimitSends_28() const { return ___SequenceDeltaLimitSends_28; }
	inline int32_t* get_address_of_SequenceDeltaLimitSends_28() { return &___SequenceDeltaLimitSends_28; }
	inline void set_SequenceDeltaLimitSends_28(int32_t value)
	{
		___SequenceDeltaLimitSends_28 = value;
	}

	inline static int32_t get_offset_of_TrafficRecorder_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___TrafficRecorder_29)); }
	inline RuntimeObject* get_TrafficRecorder_29() const { return ___TrafficRecorder_29; }
	inline RuntimeObject** get_address_of_TrafficRecorder_29() { return &___TrafficRecorder_29; }
	inline void set_TrafficRecorder_29(RuntimeObject* value)
	{
		___TrafficRecorder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrafficRecorder_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CEnableServerTracingU3Ek__BackingField_30)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_30() const { return ___U3CEnableServerTracingU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_30() { return &___U3CEnableServerTracingU3Ek__BackingField_30; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_30(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___quickResendAttempts_31)); }
	inline uint8_t get_quickResendAttempts_31() const { return ___quickResendAttempts_31; }
	inline uint8_t* get_address_of_quickResendAttempts_31() { return &___quickResendAttempts_31; }
	inline void set_quickResendAttempts_31(uint8_t value)
	{
		___quickResendAttempts_31 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___ChannelCount_32)); }
	inline uint8_t get_ChannelCount_32() const { return ___ChannelCount_32; }
	inline uint8_t* get_address_of_ChannelCount_32() { return &___ChannelCount_32; }
	inline void set_ChannelCount_32(uint8_t value)
	{
		___ChannelCount_32 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___EnableEncryptedFlag_33)); }
	inline bool get_EnableEncryptedFlag_33() const { return ___EnableEncryptedFlag_33; }
	inline bool* get_address_of_EnableEncryptedFlag_33() { return &___EnableEncryptedFlag_33; }
	inline void set_EnableEncryptedFlag_33(bool value)
	{
		___EnableEncryptedFlag_33 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___crcEnabled_34)); }
	inline bool get_crcEnabled_34() const { return ___crcEnabled_34; }
	inline bool* get_address_of_crcEnabled_34() { return &___crcEnabled_34; }
	inline void set_crcEnabled_34(bool value)
	{
		___crcEnabled_34 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SentCountAllowance_35)); }
	inline int32_t get_SentCountAllowance_35() const { return ___SentCountAllowance_35; }
	inline int32_t* get_address_of_SentCountAllowance_35() { return &___SentCountAllowance_35; }
	inline void set_SentCountAllowance_35(int32_t value)
	{
		___SentCountAllowance_35 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___InitialResendTimeMax_36)); }
	inline int32_t get_InitialResendTimeMax_36() const { return ___InitialResendTimeMax_36; }
	inline int32_t* get_address_of_InitialResendTimeMax_36() { return &___InitialResendTimeMax_36; }
	inline void set_InitialResendTimeMax_36(int32_t value)
	{
		___InitialResendTimeMax_36 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___TimePingInterval_37)); }
	inline int32_t get_TimePingInterval_37() const { return ___TimePingInterval_37; }
	inline int32_t* get_address_of_TimePingInterval_37() { return &___TimePingInterval_37; }
	inline void set_TimePingInterval_37(int32_t value)
	{
		___TimePingInterval_37 = value;
	}

	inline static int32_t get_offset_of_disconnectTimeout_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___disconnectTimeout_38)); }
	inline int32_t get_disconnectTimeout_38() const { return ___disconnectTimeout_38; }
	inline int32_t* get_address_of_disconnectTimeout_38() { return &___disconnectTimeout_38; }
	inline void set_disconnectTimeout_38(int32_t value)
	{
		___disconnectTimeout_38 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CTransportProtocolU3Ek__BackingField_39)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_39() const { return ___U3CTransportProtocolU3Ek__BackingField_39; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_39() { return &___U3CTransportProtocolU3Ek__BackingField_39; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_39(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_mtu_41() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___mtu_41)); }
	inline int32_t get_mtu_41() const { return ___mtu_41; }
	inline int32_t* get_address_of_mtu_41() { return &___mtu_41; }
	inline void set_mtu_41(int32_t value)
	{
		___mtu_41 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CIsSendingOnlyAcksU3Ek__BackingField_42)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_42() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_42; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_42() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_42; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_42(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_44() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___RandomizeSequenceNumbers_44)); }
	inline bool get_RandomizeSequenceNumbers_44() const { return ___RandomizeSequenceNumbers_44; }
	inline bool* get_address_of_RandomizeSequenceNumbers_44() { return &___RandomizeSequenceNumbers_44; }
	inline void set_RandomizeSequenceNumbers_44(bool value)
	{
		___RandomizeSequenceNumbers_44 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_45() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___RandomizedSequenceNumbers_45)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_RandomizedSequenceNumbers_45() const { return ___RandomizedSequenceNumbers_45; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_RandomizedSequenceNumbers_45() { return &___RandomizedSequenceNumbers_45; }
	inline void set_RandomizedSequenceNumbers_45(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___RandomizedSequenceNumbers_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_45), (void*)value);
	}

	inline static int32_t get_offset_of_GcmDatagramEncryption_46() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___GcmDatagramEncryption_46)); }
	inline bool get_GcmDatagramEncryption_46() const { return ___GcmDatagramEncryption_46; }
	inline bool* get_address_of_GcmDatagramEncryption_46() { return &___GcmDatagramEncryption_46; }
	inline void set_GcmDatagramEncryption_46(bool value)
	{
		___GcmDatagramEncryption_46 = value;
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CTrafficStatsIncomingU3Ek__BackingField_47)); }
	inline TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * get_U3CTrafficStatsIncomingU3Ek__BackingField_47() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_47; }
	inline TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_47() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_47; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_47(TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CTrafficStatsOutgoingU3Ek__BackingField_48)); }
	inline TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_48() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_48; }
	inline TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_48() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_48; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_48(TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CTrafficStatsGameLevelU3Ek__BackingField_49)); }
	inline TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_49() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_49; }
	inline TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_49() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_49; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_49(TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_50() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___trafficStatsStopwatch_50)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_trafficStatsStopwatch_50() const { return ___trafficStatsStopwatch_50; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_trafficStatsStopwatch_50() { return &___trafficStatsStopwatch_50; }
	inline void set_trafficStatsStopwatch_50(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___trafficStatsStopwatch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_50), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_51() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___trafficStatsEnabled_51)); }
	inline bool get_trafficStatsEnabled_51() const { return ___trafficStatsEnabled_51; }
	inline bool* get_address_of_trafficStatsEnabled_51() { return &___trafficStatsEnabled_51; }
	inline void set_trafficStatsEnabled_51(bool value)
	{
		___trafficStatsEnabled_51 = value;
	}

	inline static int32_t get_offset_of_peerBase_52() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___peerBase_52)); }
	inline PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989 * get_peerBase_52() const { return ___peerBase_52; }
	inline PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989 ** get_address_of_peerBase_52() { return &___peerBase_52; }
	inline void set_peerBase_52(PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989 * value)
	{
		___peerBase_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_52), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_53() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SendOutgoingLockObject_53)); }
	inline RuntimeObject * get_SendOutgoingLockObject_53() const { return ___SendOutgoingLockObject_53; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_53() { return &___SendOutgoingLockObject_53; }
	inline void set_SendOutgoingLockObject_53(RuntimeObject * value)
	{
		___SendOutgoingLockObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_54() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___DispatchLockObject_54)); }
	inline RuntimeObject * get_DispatchLockObject_54() const { return ___DispatchLockObject_54; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_54() { return &___DispatchLockObject_54; }
	inline void set_DispatchLockObject_54(RuntimeObject * value)
	{
		___DispatchLockObject_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_54), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_55() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___EnqueueLock_55)); }
	inline RuntimeObject * get_EnqueueLock_55() const { return ___EnqueueLock_55; }
	inline RuntimeObject ** get_address_of_EnqueueLock_55() { return &___EnqueueLock_55; }
	inline void set_EnqueueLock_55(RuntimeObject * value)
	{
		___EnqueueLock_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_55), (void*)value);
	}

	inline static int32_t get_offset_of_payloadEncryptorType_56() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___payloadEncryptorType_56)); }
	inline Type_t * get_payloadEncryptorType_56() const { return ___payloadEncryptorType_56; }
	inline Type_t ** get_address_of_payloadEncryptorType_56() { return &___payloadEncryptorType_56; }
	inline void set_payloadEncryptorType_56(Type_t * value)
	{
		___payloadEncryptorType_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payloadEncryptorType_56), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_57() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___PayloadEncryptionSecret_57)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PayloadEncryptionSecret_57() const { return ___PayloadEncryptionSecret_57; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PayloadEncryptionSecret_57() { return &___PayloadEncryptionSecret_57; }
	inline void set_PayloadEncryptionSecret_57(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PayloadEncryptionSecret_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_57), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_58() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___encryptorType_58)); }
	inline Type_t * get_encryptorType_58() const { return ___encryptorType_58; }
	inline Type_t ** get_address_of_encryptorType_58() { return &___encryptorType_58; }
	inline void set_encryptorType_58(Type_t * value)
	{
		___encryptorType_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_58), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_59() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___Encryptor_59)); }
	inline RuntimeObject* get_Encryptor_59() const { return ___Encryptor_59; }
	inline RuntimeObject** get_address_of_Encryptor_59() { return &___Encryptor_59; }
	inline void set_Encryptor_59(RuntimeObject* value)
	{
		___Encryptor_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDiscardedU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CCountDiscardedU3Ek__BackingField_60)); }
	inline int32_t get_U3CCountDiscardedU3Ek__BackingField_60() const { return ___U3CCountDiscardedU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CCountDiscardedU3Ek__BackingField_60() { return &___U3CCountDiscardedU3Ek__BackingField_60; }
	inline void set_U3CCountDiscardedU3Ek__BackingField_60(int32_t value)
	{
		___U3CCountDiscardedU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CDeltaUnreliableNumberU3Ek__BackingField_61)); }
	inline int32_t get_U3CDeltaUnreliableNumberU3Ek__BackingField_61() const { return ___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return &___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline void set_U3CDeltaUnreliableNumberU3Ek__BackingField_61(int32_t value)
	{
		___U3CDeltaUnreliableNumberU3Ek__BackingField_61 = value;
	}
};

struct PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeSocketLibAvailable
	bool ___NativeSocketLibAvailable_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativePayloadEncryptionLibAvailable
	bool ___NativePayloadEncryptionLibAvailable_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeDatagramEncryptionLibAvailable
	bool ___NativeDatagramEncryptionLibAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_43;

public:
	inline static int32_t get_offset_of_NoNativeCallbacks_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___NoNativeCallbacks_9)); }
	inline bool get_NoNativeCallbacks_9() const { return ___NoNativeCallbacks_9; }
	inline bool* get_address_of_NoNativeCallbacks_9() { return &___NoNativeCallbacks_9; }
	inline void set_NoNativeCallbacks_9(bool value)
	{
		___NoNativeCallbacks_9 = value;
	}

	inline static int32_t get_offset_of_clientVersion_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___clientVersion_12)); }
	inline String_t* get_clientVersion_12() const { return ___clientVersion_12; }
	inline String_t** get_address_of_clientVersion_12() { return &___clientVersion_12; }
	inline void set_clientVersion_12(String_t* value)
	{
		___clientVersion_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_12), (void*)value);
	}

	inline static int32_t get_offset_of_NativeSocketLibAvailable_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___NativeSocketLibAvailable_13)); }
	inline bool get_NativeSocketLibAvailable_13() const { return ___NativeSocketLibAvailable_13; }
	inline bool* get_address_of_NativeSocketLibAvailable_13() { return &___NativeSocketLibAvailable_13; }
	inline void set_NativeSocketLibAvailable_13(bool value)
	{
		___NativeSocketLibAvailable_13 = value;
	}

	inline static int32_t get_offset_of_NativePayloadEncryptionLibAvailable_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___NativePayloadEncryptionLibAvailable_14)); }
	inline bool get_NativePayloadEncryptionLibAvailable_14() const { return ___NativePayloadEncryptionLibAvailable_14; }
	inline bool* get_address_of_NativePayloadEncryptionLibAvailable_14() { return &___NativePayloadEncryptionLibAvailable_14; }
	inline void set_NativePayloadEncryptionLibAvailable_14(bool value)
	{
		___NativePayloadEncryptionLibAvailable_14 = value;
	}

	inline static int32_t get_offset_of_NativeDatagramEncryptionLibAvailable_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___NativeDatagramEncryptionLibAvailable_15)); }
	inline bool get_NativeDatagramEncryptionLibAvailable_15() const { return ___NativeDatagramEncryptionLibAvailable_15; }
	inline bool* get_address_of_NativeDatagramEncryptionLibAvailable_15() { return &___NativeDatagramEncryptionLibAvailable_15; }
	inline void set_NativeDatagramEncryptionLibAvailable_15(bool value)
	{
		___NativeDatagramEncryptionLibAvailable_15 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___OutgoingStreamBufferSize_40)); }
	inline int32_t get_OutgoingStreamBufferSize_40() const { return ___OutgoingStreamBufferSize_40; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_40() { return &___OutgoingStreamBufferSize_40; }
	inline void set_OutgoingStreamBufferSize_40(int32_t value)
	{
		___OutgoingStreamBufferSize_40 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_43() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___AsyncKeyExchange_43)); }
	inline bool get_AsyncKeyExchange_43() const { return ___AsyncKeyExchange_43; }
	inline bool* get_address_of_AsyncKeyExchange_43() { return &___AsyncKeyExchange_43; }
	inline void set_AsyncKeyExchange_43(bool value)
	{
		___AsyncKeyExchange_43 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Double>
struct Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A  : public RuntimeObject
{
public:
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD  ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject * ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t61231B053F1E40EB760E7E161322235AC46FD570 * ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25 * ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CLoadBalancingPeerU3Ek__BackingField_0)); }
	inline LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * get_U3CLoadBalancingPeerU3Ek__BackingField_0() const { return ___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 ** get_address_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return &___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline void set_U3CLoadBalancingPeerU3Ek__BackingField_0(LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * value)
	{
		___U3CLoadBalancingPeerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingPeerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CClientTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CClientTypeU3Ek__BackingField_3() const { return ___U3CClientTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CClientTypeU3Ek__BackingField_3() { return &___U3CClientTypeU3Ek__BackingField_3; }
	inline void set_U3CClientTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CClientTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAuthValuesU3Ek__BackingField_4)); }
	inline AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * get_U3CAuthValuesU3Ek__BackingField_4() const { return ___U3CAuthValuesU3Ek__BackingField_4; }
	inline AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A ** get_address_of_U3CAuthValuesU3Ek__BackingField_4() { return &___U3CAuthValuesU3Ek__BackingField_4; }
	inline void set_U3CAuthValuesU3Ek__BackingField_4(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * value)
	{
		___U3CAuthValuesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___AuthMode_5)); }
	inline int32_t get_AuthMode_5() const { return ___AuthMode_5; }
	inline int32_t* get_address_of_AuthMode_5() { return &___AuthMode_5; }
	inline void set_AuthMode_5(int32_t value)
	{
		___AuthMode_5 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EncryptionMode_6)); }
	inline int32_t get_EncryptionMode_6() const { return ___EncryptionMode_6; }
	inline int32_t* get_address_of_EncryptionMode_6() { return &___EncryptionMode_6; }
	inline void set_EncryptionMode_6(int32_t value)
	{
		___EncryptionMode_6 = value;
	}

	inline static int32_t get_offset_of_U3CExpectedProtocolU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CExpectedProtocolU3Ek__BackingField_7)); }
	inline Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD  get_U3CExpectedProtocolU3Ek__BackingField_7() const { return ___U3CExpectedProtocolU3Ek__BackingField_7; }
	inline Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD * get_address_of_U3CExpectedProtocolU3Ek__BackingField_7() { return &___U3CExpectedProtocolU3Ek__BackingField_7; }
	inline void set_U3CExpectedProtocolU3Ek__BackingField_7(Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD  value)
	{
		___U3CExpectedProtocolU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_tokenCache_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___tokenCache_8)); }
	inline RuntimeObject * get_tokenCache_8() const { return ___tokenCache_8; }
	inline RuntimeObject ** get_address_of_tokenCache_8() { return &___tokenCache_8; }
	inline void set_tokenCache_8(RuntimeObject * value)
	{
		___tokenCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CIsUsingNameServerU3Ek__BackingField_9)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_9() const { return ___U3CIsUsingNameServerU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_9() { return &___U3CIsUsingNameServerU3Ek__BackingField_9; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_9(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerHost_10)); }
	inline String_t* get_NameServerHost_10() const { return ___NameServerHost_10; }
	inline String_t** get_address_of_NameServerHost_10() { return &___NameServerHost_10; }
	inline void set_NameServerHost_10(String_t* value)
	{
		___NameServerHost_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_12(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_ServerPortOverrides_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ServerPortOverrides_13)); }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  get_ServerPortOverrides_13() const { return ___ServerPortOverrides_13; }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 * get_address_of_ServerPortOverrides_13() { return &___ServerPortOverrides_13; }
	inline void set_ServerPortOverrides_13(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  value)
	{
		___ServerPortOverrides_13 = value;
	}

	inline static int32_t get_offset_of_U3CEnableProtocolFallbackU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CEnableProtocolFallbackU3Ek__BackingField_14)); }
	inline bool get_U3CEnableProtocolFallbackU3Ek__BackingField_14() const { return ___U3CEnableProtocolFallbackU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CEnableProtocolFallbackU3Ek__BackingField_14() { return &___U3CEnableProtocolFallbackU3Ek__BackingField_14; }
	inline void set_U3CEnableProtocolFallbackU3Ek__BackingField_14(bool value)
	{
		___U3CEnableProtocolFallbackU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CMasterServerAddressU3Ek__BackingField_15)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_15() const { return ___U3CMasterServerAddressU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_15() { return &___U3CMasterServerAddressU3Ek__BackingField_15; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_15(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CGameServerAddressU3Ek__BackingField_16)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_16() const { return ___U3CGameServerAddressU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_16() { return &___U3CGameServerAddressU3Ek__BackingField_16; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_16(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CServerU3Ek__BackingField_17)); }
	inline int32_t get_U3CServerU3Ek__BackingField_17() const { return ___U3CServerU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_17() { return &___U3CServerU3Ek__BackingField_17; }
	inline void set_U3CServerU3Ek__BackingField_17(int32_t value)
	{
		___U3CServerU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_ProxyServerAddress_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ProxyServerAddress_18)); }
	inline String_t* get_ProxyServerAddress_18() const { return ___ProxyServerAddress_18; }
	inline String_t** get_address_of_ProxyServerAddress_18() { return &___ProxyServerAddress_18; }
	inline void set_ProxyServerAddress_18(String_t* value)
	{
		___ProxyServerAddress_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServerAddress_18), (void*)value);
	}

	inline static int32_t get_offset_of_state_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___state_19)); }
	inline int32_t get_state_19() const { return ___state_19; }
	inline int32_t* get_address_of_state_19() { return &___state_19; }
	inline void set_state_19(int32_t value)
	{
		___state_19 = value;
	}

	inline static int32_t get_offset_of_StateChanged_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___StateChanged_20)); }
	inline Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * get_StateChanged_20() const { return ___StateChanged_20; }
	inline Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 ** get_address_of_StateChanged_20() { return &___StateChanged_20; }
	inline void set_StateChanged_20(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * value)
	{
		___StateChanged_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_20), (void*)value);
	}

	inline static int32_t get_offset_of_EventReceived_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EventReceived_21)); }
	inline Action_1_t61231B053F1E40EB760E7E161322235AC46FD570 * get_EventReceived_21() const { return ___EventReceived_21; }
	inline Action_1_t61231B053F1E40EB760E7E161322235AC46FD570 ** get_address_of_EventReceived_21() { return &___EventReceived_21; }
	inline void set_EventReceived_21(Action_1_t61231B053F1E40EB760E7E161322235AC46FD570 * value)
	{
		___EventReceived_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_21), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___OpResponseReceived_22)); }
	inline Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25 * get_OpResponseReceived_22() const { return ___OpResponseReceived_22; }
	inline Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25 ** get_address_of_OpResponseReceived_22() { return &___OpResponseReceived_22; }
	inline void set_OpResponseReceived_22(Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25 * value)
	{
		___OpResponseReceived_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpResponseReceived_22), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionCallbackTargets_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ConnectionCallbackTargets_23)); }
	inline ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * get_ConnectionCallbackTargets_23() const { return ___ConnectionCallbackTargets_23; }
	inline ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 ** get_address_of_ConnectionCallbackTargets_23() { return &___ConnectionCallbackTargets_23; }
	inline void set_ConnectionCallbackTargets_23(ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * value)
	{
		___ConnectionCallbackTargets_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionCallbackTargets_23), (void*)value);
	}

	inline static int32_t get_offset_of_MatchMakingCallbackTargets_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___MatchMakingCallbackTargets_24)); }
	inline MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * get_MatchMakingCallbackTargets_24() const { return ___MatchMakingCallbackTargets_24; }
	inline MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 ** get_address_of_MatchMakingCallbackTargets_24() { return &___MatchMakingCallbackTargets_24; }
	inline void set_MatchMakingCallbackTargets_24(MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * value)
	{
		___MatchMakingCallbackTargets_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchMakingCallbackTargets_24), (void*)value);
	}

	inline static int32_t get_offset_of_InRoomCallbackTargets_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___InRoomCallbackTargets_25)); }
	inline InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * get_InRoomCallbackTargets_25() const { return ___InRoomCallbackTargets_25; }
	inline InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 ** get_address_of_InRoomCallbackTargets_25() { return &___InRoomCallbackTargets_25; }
	inline void set_InRoomCallbackTargets_25(InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * value)
	{
		___InRoomCallbackTargets_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InRoomCallbackTargets_25), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyCallbackTargets_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___LobbyCallbackTargets_26)); }
	inline LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * get_LobbyCallbackTargets_26() const { return ___LobbyCallbackTargets_26; }
	inline LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 ** get_address_of_LobbyCallbackTargets_26() { return &___LobbyCallbackTargets_26; }
	inline void set_LobbyCallbackTargets_26(LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * value)
	{
		___LobbyCallbackTargets_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyCallbackTargets_26), (void*)value);
	}

	inline static int32_t get_offset_of_WebRpcCallbackTargets_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___WebRpcCallbackTargets_27)); }
	inline WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * get_WebRpcCallbackTargets_27() const { return ___WebRpcCallbackTargets_27; }
	inline WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 ** get_address_of_WebRpcCallbackTargets_27() { return &___WebRpcCallbackTargets_27; }
	inline void set_WebRpcCallbackTargets_27(WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * value)
	{
		___WebRpcCallbackTargets_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WebRpcCallbackTargets_27), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorInfoCallbackTargets_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ErrorInfoCallbackTargets_28)); }
	inline ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * get_ErrorInfoCallbackTargets_28() const { return ___ErrorInfoCallbackTargets_28; }
	inline ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 ** get_address_of_ErrorInfoCallbackTargets_28() { return &___ErrorInfoCallbackTargets_28; }
	inline void set_ErrorInfoCallbackTargets_28(ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * value)
	{
		___ErrorInfoCallbackTargets_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorInfoCallbackTargets_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CDisconnectedCauseU3Ek__BackingField_29)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_29() const { return ___U3CDisconnectedCauseU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_29() { return &___U3CDisconnectedCauseU3Ek__BackingField_29; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_29(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentLobbyU3Ek__BackingField_30)); }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * get_U3CCurrentLobbyU3Ek__BackingField_30() const { return ___U3CCurrentLobbyU3Ek__BackingField_30; }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_30() { return &___U3CCurrentLobbyU3Ek__BackingField_30; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_30(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentLobbyU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EnableLobbyStatistics_31)); }
	inline bool get_EnableLobbyStatistics_31() const { return ___EnableLobbyStatistics_31; }
	inline bool* get_address_of_EnableLobbyStatistics_31() { return &___EnableLobbyStatistics_31; }
	inline void set_EnableLobbyStatistics_31(bool value)
	{
		___EnableLobbyStatistics_31 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___lobbyStatistics_32)); }
	inline List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * get_lobbyStatistics_32() const { return ___lobbyStatistics_32; }
	inline List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 ** get_address_of_lobbyStatistics_32() { return &___lobbyStatistics_32; }
	inline void set_lobbyStatistics_32(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * value)
	{
		___lobbyStatistics_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyStatistics_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CLocalPlayerU3Ek__BackingField_33)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CLocalPlayerU3Ek__BackingField_33() const { return ___U3CLocalPlayerU3Ek__BackingField_33; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_33() { return &___U3CLocalPlayerU3Ek__BackingField_33; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_33(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentRoomU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentRoomU3Ek__BackingField_34)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CCurrentRoomU3Ek__BackingField_34() const { return ___U3CCurrentRoomU3Ek__BackingField_34; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CCurrentRoomU3Ek__BackingField_34() { return &___U3CCurrentRoomU3Ek__BackingField_34; }
	inline void set_U3CCurrentRoomU3Ek__BackingField_34(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CCurrentRoomU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentRoomU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CPlayersOnMasterCountU3Ek__BackingField_35)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_35() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_35() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_35; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_35(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CPlayersInRoomsCountU3Ek__BackingField_36)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_36() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_36() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_36; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_36(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CRoomsCountU3Ek__BackingField_37)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_37() const { return ___U3CRoomsCountU3Ek__BackingField_37; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_37() { return &___U3CRoomsCountU3Ek__BackingField_37; }
	inline void set_U3CRoomsCountU3Ek__BackingField_37(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_38() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___lastJoinType_38)); }
	inline int32_t get_lastJoinType_38() const { return ___lastJoinType_38; }
	inline int32_t* get_address_of_lastJoinType_38() { return &___lastJoinType_38; }
	inline void set_lastJoinType_38(int32_t value)
	{
		___lastJoinType_38 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___enterRoomParamsCache_39)); }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * get_enterRoomParamsCache_39() const { return ___enterRoomParamsCache_39; }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E ** get_address_of_enterRoomParamsCache_39() { return &___enterRoomParamsCache_39; }
	inline void set_enterRoomParamsCache_39(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * value)
	{
		___enterRoomParamsCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_failedRoomEntryOperation_40() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___failedRoomEntryOperation_40)); }
	inline OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * get_failedRoomEntryOperation_40() const { return ___failedRoomEntryOperation_40; }
	inline OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD ** get_address_of_failedRoomEntryOperation_40() { return &___failedRoomEntryOperation_40; }
	inline void set_failedRoomEntryOperation_40(OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * value)
	{
		___failedRoomEntryOperation_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failedRoomEntryOperation_40), (void*)value);
	}

	inline static int32_t get_offset_of_friendListRequested_42() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___friendListRequested_42)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_friendListRequested_42() const { return ___friendListRequested_42; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_friendListRequested_42() { return &___friendListRequested_42; }
	inline void set_friendListRequested_42(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___friendListRequested_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCloudRegionU3Ek__BackingField_43)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_43() const { return ___U3CCloudRegionU3Ek__BackingField_43; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_43() { return &___U3CCloudRegionU3Ek__BackingField_43; }
	inline void set_U3CCloudRegionU3Ek__BackingField_43(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudRegionU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentClusterU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentClusterU3Ek__BackingField_44)); }
	inline String_t* get_U3CCurrentClusterU3Ek__BackingField_44() const { return ___U3CCurrentClusterU3Ek__BackingField_44; }
	inline String_t** get_address_of_U3CCurrentClusterU3Ek__BackingField_44() { return &___U3CCurrentClusterU3Ek__BackingField_44; }
	inline void set_U3CCurrentClusterU3Ek__BackingField_44(String_t* value)
	{
		___U3CCurrentClusterU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentClusterU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_RegionHandler_45() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___RegionHandler_45)); }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * get_RegionHandler_45() const { return ___RegionHandler_45; }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 ** get_address_of_RegionHandler_45() { return &___RegionHandler_45; }
	inline void set_RegionHandler_45(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * value)
	{
		___RegionHandler_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegionHandler_45), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionSummaryFromStorage_46() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___bestRegionSummaryFromStorage_46)); }
	inline String_t* get_bestRegionSummaryFromStorage_46() const { return ___bestRegionSummaryFromStorage_46; }
	inline String_t** get_address_of_bestRegionSummaryFromStorage_46() { return &___bestRegionSummaryFromStorage_46; }
	inline void set_bestRegionSummaryFromStorage_46(String_t* value)
	{
		___bestRegionSummaryFromStorage_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionSummaryFromStorage_46), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryToCache_47() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___SummaryToCache_47)); }
	inline String_t* get_SummaryToCache_47() const { return ___SummaryToCache_47; }
	inline String_t** get_address_of_SummaryToCache_47() { return &___SummaryToCache_47; }
	inline void set_SummaryToCache_47(String_t* value)
	{
		___SummaryToCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryToCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBestRegion_48() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___connectToBestRegion_48)); }
	inline bool get_connectToBestRegion_48() const { return ___connectToBestRegion_48; }
	inline bool* get_address_of_connectToBestRegion_48() { return &___connectToBestRegion_48; }
	inline void set_connectToBestRegion_48(bool value)
	{
		___connectToBestRegion_48 = value;
	}

	inline static int32_t get_offset_of_callbackTargetChanges_49() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___callbackTargetChanges_49)); }
	inline Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * get_callbackTargetChanges_49() const { return ___callbackTargetChanges_49; }
	inline Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 ** get_address_of_callbackTargetChanges_49() { return &___callbackTargetChanges_49; }
	inline void set_callbackTargetChanges_49(Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * value)
	{
		___callbackTargetChanges_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargetChanges_49), (void*)value);
	}

	inline static int32_t get_offset_of_callbackTargets_50() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___callbackTargets_50)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get_callbackTargets_50() const { return ___callbackTargets_50; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of_callbackTargets_50() { return &___callbackTargets_50; }
	inline void set_callbackTargets_50(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		___callbackTargets_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargets_50), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerPortInAppSettings_51() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerPortInAppSettings_51)); }
	inline int32_t get_NameServerPortInAppSettings_51() const { return ___NameServerPortInAppSettings_51; }
	inline int32_t* get_address_of_NameServerPortInAppSettings_51() { return &___NameServerPortInAppSettings_51; }
	inline void set_NameServerPortInAppSettings_51(int32_t value)
	{
		___NameServerPortInAppSettings_51 = value;
	}
};

struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * ___ProtocolToNameServerPort_11;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields, ___ProtocolToNameServerPort_11)); }
	inline Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * get_ProtocolToNameServerPort_11() const { return ___ProtocolToNameServerPort_11; }
	inline Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 ** get_address_of_ProtocolToNameServerPort_11() { return &___ProtocolToNameServerPort_11; }
	inline void set_ProtocolToNameServerPort_11(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * value)
	{
		___ProtocolToNameServerPort_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_11), (void*)value);
	}
};


// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4  : public PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28
{
public:
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0 * ___paramDictionaryPool_62;

public:
	inline static int32_t get_offset_of_paramDictionaryPool_62() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4, ___paramDictionaryPool_62)); }
	inline Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0 * get_paramDictionaryPool_62() const { return ___paramDictionaryPool_62; }
	inline Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0 ** get_address_of_paramDictionaryPool_62() { return &___paramDictionaryPool_62; }
	inline void set_paramDictionaryPool_62(Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0 * value)
	{
		___paramDictionaryPool_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDictionaryPool_62), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle
struct OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged
struct OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated
struct OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62  : public MulticastDelegate_t
{
public:

public:
};


// NetworkManager/PropertiesChanged
struct PropertiesChanged_t509772872821925E4E8CB6ACCDF06297559E1295  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle
struct OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460  : public LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A
{
public:
	// Photon.Voice.VoiceClient Photon.Voice.LoadBalancingTransport::voiceClient
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient_53;
	// Photon.Voice.PhotonTransportProtocol Photon.Voice.LoadBalancingTransport::protocol
	PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E * ___protocol_54;

public:
	inline static int32_t get_offset_of_voiceClient_53() { return static_cast<int32_t>(offsetof(LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460, ___voiceClient_53)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_voiceClient_53() const { return ___voiceClient_53; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_voiceClient_53() { return &___voiceClient_53; }
	inline void set_voiceClient_53(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___voiceClient_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_53), (void*)value);
	}

	inline static int32_t get_offset_of_protocol_54() { return static_cast<int32_t>(offsetof(LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460, ___protocol_54)); }
	inline PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E * get_protocol_54() const { return ___protocol_54; }
	inline PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E ** get_address_of_protocol_54() { return &___protocol_54; }
	inline void set_protocol_54(PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E * value)
	{
		___protocol_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocol_54), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// AvatarHeadBehaviour
struct AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AvatarHeadBehaviour::bodyAvatar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bodyAvatar_4;
	// Photon.Pun.PhotonView AvatarHeadBehaviour::photonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_5;
	// UnityEngine.AudioSource AvatarHeadBehaviour::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_6;
	// System.Single AvatarHeadBehaviour::updateStep
	float ___updateStep_7;
	// System.Int32 AvatarHeadBehaviour::sampleDataLength
	int32_t ___sampleDataLength_8;
	// System.Single AvatarHeadBehaviour::currentUpdateTime
	float ___currentUpdateTime_9;
	// System.Single[] AvatarHeadBehaviour::clipSampleData
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___clipSampleData_10;

public:
	inline static int32_t get_offset_of_bodyAvatar_4() { return static_cast<int32_t>(offsetof(AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7, ___bodyAvatar_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bodyAvatar_4() const { return ___bodyAvatar_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bodyAvatar_4() { return &___bodyAvatar_4; }
	inline void set_bodyAvatar_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bodyAvatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyAvatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_photonView_5() { return static_cast<int32_t>(offsetof(AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7, ___photonView_5)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_photonView_5() const { return ___photonView_5; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_photonView_5() { return &___photonView_5; }
	inline void set_photonView_5(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___photonView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonView_5), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7, ___audioSource_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_updateStep_7() { return static_cast<int32_t>(offsetof(AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7, ___updateStep_7)); }
	inline float get_updateStep_7() const { return ___updateStep_7; }
	inline float* get_address_of_updateStep_7() { return &___updateStep_7; }
	inline void set_updateStep_7(float value)
	{
		___updateStep_7 = value;
	}

	inline static int32_t get_offset_of_sampleDataLength_8() { return static_cast<int32_t>(offsetof(AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7, ___sampleDataLength_8)); }
	inline int32_t get_sampleDataLength_8() const { return ___sampleDataLength_8; }
	inline int32_t* get_address_of_sampleDataLength_8() { return &___sampleDataLength_8; }
	inline void set_sampleDataLength_8(int32_t value)
	{
		___sampleDataLength_8 = value;
	}

	inline static int32_t get_offset_of_currentUpdateTime_9() { return static_cast<int32_t>(offsetof(AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7, ___currentUpdateTime_9)); }
	inline float get_currentUpdateTime_9() const { return ___currentUpdateTime_9; }
	inline float* get_address_of_currentUpdateTime_9() { return &___currentUpdateTime_9; }
	inline void set_currentUpdateTime_9(float value)
	{
		___currentUpdateTime_9 = value;
	}

	inline static int32_t get_offset_of_clipSampleData_10() { return static_cast<int32_t>(offsetof(AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7, ___clipSampleData_10)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_clipSampleData_10() const { return ___clipSampleData_10; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_clipSampleData_10() { return &___clipSampleData_10; }
	inline void set_clipSampleData_10(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___clipSampleData_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipSampleData_10), (void*)value);
	}
};


// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___U3CClientU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.ConnectionHandler::DisconnectAfterKeepAlive
	bool ___DisconnectAfterKeepAlive_5;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_7;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_8;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_11;
	// System.Diagnostics.Stopwatch Photon.Realtime.ConnectionHandler::backgroundStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___backgroundStopwatch_12;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CClientU3Ek__BackingField_4)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_U3CClientU3Ek__BackingField_4() const { return ___U3CClientU3Ek__BackingField_4; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_U3CClientU3Ek__BackingField_4() { return &___U3CClientU3Ek__BackingField_4; }
	inline void set_U3CClientU3Ek__BackingField_4(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___U3CClientU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAfterKeepAlive_5() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___DisconnectAfterKeepAlive_5)); }
	inline bool get_DisconnectAfterKeepAlive_5() const { return ___DisconnectAfterKeepAlive_5; }
	inline bool* get_address_of_DisconnectAfterKeepAlive_5() { return &___DisconnectAfterKeepAlive_5; }
	inline void set_DisconnectAfterKeepAlive_5(bool value)
	{
		___DisconnectAfterKeepAlive_5 = value;
	}

	inline static int32_t get_offset_of_KeepAliveInBackground_6() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___KeepAliveInBackground_6)); }
	inline int32_t get_KeepAliveInBackground_6() const { return ___KeepAliveInBackground_6; }
	inline int32_t* get_address_of_KeepAliveInBackground_6() { return &___KeepAliveInBackground_6; }
	inline void set_KeepAliveInBackground_6(int32_t value)
	{
		___KeepAliveInBackground_6 = value;
	}

	inline static int32_t get_offset_of_U3CCountSendAcksOnlyU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CCountSendAcksOnlyU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountSendAcksOnlyU3Ek__BackingField_7() const { return ___U3CCountSendAcksOnlyU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountSendAcksOnlyU3Ek__BackingField_7() { return &___U3CCountSendAcksOnlyU3Ek__BackingField_7; }
	inline void set_U3CCountSendAcksOnlyU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountSendAcksOnlyU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_ApplyDontDestroyOnLoad_8() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___ApplyDontDestroyOnLoad_8)); }
	inline bool get_ApplyDontDestroyOnLoad_8() const { return ___ApplyDontDestroyOnLoad_8; }
	inline bool* get_address_of_ApplyDontDestroyOnLoad_8() { return &___ApplyDontDestroyOnLoad_8; }
	inline void set_ApplyDontDestroyOnLoad_8(bool value)
	{
		___ApplyDontDestroyOnLoad_8 = value;
	}

	inline static int32_t get_offset_of_fallbackThreadId_10() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___fallbackThreadId_10)); }
	inline uint8_t get_fallbackThreadId_10() const { return ___fallbackThreadId_10; }
	inline uint8_t* get_address_of_fallbackThreadId_10() { return &___fallbackThreadId_10; }
	inline void set_fallbackThreadId_10(uint8_t value)
	{
		___fallbackThreadId_10 = value;
	}

	inline static int32_t get_offset_of_didSendAcks_11() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___didSendAcks_11)); }
	inline bool get_didSendAcks_11() const { return ___didSendAcks_11; }
	inline bool* get_address_of_didSendAcks_11() { return &___didSendAcks_11; }
	inline void set_didSendAcks_11(bool value)
	{
		___didSendAcks_11 = value;
	}

	inline static int32_t get_offset_of_backgroundStopwatch_12() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___backgroundStopwatch_12)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_backgroundStopwatch_12() const { return ___backgroundStopwatch_12; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_backgroundStopwatch_12() { return &___backgroundStopwatch_12; }
	inline void set_backgroundStopwatch_12(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___backgroundStopwatch_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundStopwatch_12), (void*)value);
	}
};

struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields
{
public:
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_9;

public:
	inline static int32_t get_offset_of_AppQuits_9() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields, ___AppQuits_9)); }
	inline bool get_AppQuits_9() const { return ___AppQuits_9; }
	inline bool* get_address_of_AppQuits_9() { return &___AppQuits_9; }
	inline void set_AppQuits_9(bool value)
	{
		___AppQuits_9 = value;
	}
};


// Joystick
struct Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input_14;

public:
	inline static int32_t get_offset_of_handleRange_4() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___handleRange_4)); }
	inline float get_handleRange_4() const { return ___handleRange_4; }
	inline float* get_address_of_handleRange_4() { return &___handleRange_4; }
	inline void set_handleRange_4(float value)
	{
		___handleRange_4 = value;
	}

	inline static int32_t get_offset_of_deadZone_5() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___deadZone_5)); }
	inline float get_deadZone_5() const { return ___deadZone_5; }
	inline float* get_address_of_deadZone_5() { return &___deadZone_5; }
	inline void set_deadZone_5(float value)
	{
		___deadZone_5 = value;
	}

	inline static int32_t get_offset_of_axisOptions_6() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___axisOptions_6)); }
	inline int32_t get_axisOptions_6() const { return ___axisOptions_6; }
	inline int32_t* get_address_of_axisOptions_6() { return &___axisOptions_6; }
	inline void set_axisOptions_6(int32_t value)
	{
		___axisOptions_6 = value;
	}

	inline static int32_t get_offset_of_snapX_7() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___snapX_7)); }
	inline bool get_snapX_7() const { return ___snapX_7; }
	inline bool* get_address_of_snapX_7() { return &___snapX_7; }
	inline void set_snapX_7(bool value)
	{
		___snapX_7 = value;
	}

	inline static int32_t get_offset_of_snapY_8() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___snapY_8)); }
	inline bool get_snapY_8() const { return ___snapY_8; }
	inline bool* get_address_of_snapY_8() { return &___snapY_8; }
	inline void set_snapY_8(bool value)
	{
		___snapY_8 = value;
	}

	inline static int32_t get_offset_of_background_9() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___background_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_background_9() const { return ___background_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_background_9() { return &___background_9; }
	inline void set_background_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___background_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_9), (void*)value);
	}

	inline static int32_t get_offset_of_handle_10() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___handle_10)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_handle_10() const { return ___handle_10; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_handle_10() { return &___handle_10; }
	inline void set_handle_10(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___handle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_10), (void*)value);
	}

	inline static int32_t get_offset_of_baseRect_11() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___baseRect_11)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_baseRect_11() const { return ___baseRect_11; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_baseRect_11() { return &___baseRect_11; }
	inline void set_baseRect_11(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___baseRect_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseRect_11), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_12() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___canvas_12)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas_12() const { return ___canvas_12; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas_12() { return &___canvas_12; }
	inline void set_canvas_12(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_12), (void*)value);
	}

	inline static int32_t get_offset_of_cam_13() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___cam_13)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_13() const { return ___cam_13; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_13() { return &___cam_13; }
	inline void set_cam_13(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_13), (void*)value);
	}

	inline static int32_t get_offset_of_input_14() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___input_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_input_14() const { return ___input_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_input_14() { return &___input_14; }
	inline void set_input_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___input_14 = value;
	}
};


// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * ___OnControllerChangeCallbacks_31;

public:
	inline static int32_t get_offset_of_Group_4() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Group_4)); }
	inline uint8_t get_Group_4() const { return ___Group_4; }
	inline uint8_t* get_address_of_Group_4() { return &___Group_4; }
	inline void set_Group_4(uint8_t value)
	{
		___Group_4 = value;
	}

	inline static int32_t get_offset_of_prefixField_5() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___prefixField_5)); }
	inline int32_t get_prefixField_5() const { return ___prefixField_5; }
	inline int32_t* get_address_of_prefixField_5() { return &___prefixField_5; }
	inline void set_prefixField_5(int32_t value)
	{
		___prefixField_5 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_6() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___instantiationDataField_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_instantiationDataField_6() const { return ___instantiationDataField_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_instantiationDataField_6() { return &___instantiationDataField_6; }
	inline void set_instantiationDataField_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___instantiationDataField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiationDataField_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_7() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataSent_7)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_lastOnSerializeDataSent_7() const { return ___lastOnSerializeDataSent_7; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_lastOnSerializeDataSent_7() { return &___lastOnSerializeDataSent_7; }
	inline void set_lastOnSerializeDataSent_7(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___lastOnSerializeDataSent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataSent_7), (void*)value);
	}

	inline static int32_t get_offset_of_syncValues_8() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___syncValues_8)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_syncValues_8() const { return ___syncValues_8; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_syncValues_8() { return &___syncValues_8; }
	inline void set_syncValues_8(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___syncValues_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncValues_8), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_9() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataReceived_9)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_lastOnSerializeDataReceived_9() const { return ___lastOnSerializeDataReceived_9; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_lastOnSerializeDataReceived_9() { return &___lastOnSerializeDataReceived_9; }
	inline void set_lastOnSerializeDataReceived_9(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___lastOnSerializeDataReceived_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataReceived_9), (void*)value);
	}

	inline static int32_t get_offset_of_Synchronization_10() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Synchronization_10)); }
	inline int32_t get_Synchronization_10() const { return ___Synchronization_10; }
	inline int32_t* get_address_of_Synchronization_10() { return &___Synchronization_10; }
	inline void set_Synchronization_10(int32_t value)
	{
		___Synchronization_10 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_11() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___mixedModeIsReliable_11)); }
	inline bool get_mixedModeIsReliable_11() const { return ___mixedModeIsReliable_11; }
	inline bool* get_address_of_mixedModeIsReliable_11() { return &___mixedModeIsReliable_11; }
	inline void set_mixedModeIsReliable_11(bool value)
	{
		___mixedModeIsReliable_11 = value;
	}

	inline static int32_t get_offset_of_OwnershipTransfer_12() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OwnershipTransfer_12)); }
	inline int32_t get_OwnershipTransfer_12() const { return ___OwnershipTransfer_12; }
	inline int32_t* get_address_of_OwnershipTransfer_12() { return &___OwnershipTransfer_12; }
	inline void set_OwnershipTransfer_12(int32_t value)
	{
		___OwnershipTransfer_12 = value;
	}

	inline static int32_t get_offset_of_observableSearch_13() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___observableSearch_13)); }
	inline int32_t get_observableSearch_13() const { return ___observableSearch_13; }
	inline int32_t* get_address_of_observableSearch_13() { return &___observableSearch_13; }
	inline void set_observableSearch_13(int32_t value)
	{
		___observableSearch_13 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_14() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ObservedComponents_14)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_ObservedComponents_14() const { return ___ObservedComponents_14; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_ObservedComponents_14() { return &___ObservedComponents_14; }
	inline void set_ObservedComponents_14(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___ObservedComponents_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObservedComponents_14), (void*)value);
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_15() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___RpcMonoBehaviours_15)); }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* get_RpcMonoBehaviours_15() const { return ___RpcMonoBehaviours_15; }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D** get_address_of_RpcMonoBehaviours_15() { return &___RpcMonoBehaviours_15; }
	inline void set_RpcMonoBehaviours_15(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* value)
	{
		___RpcMonoBehaviours_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcMonoBehaviours_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsMineU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CIsMineU3Ek__BackingField_16)); }
	inline bool get_U3CIsMineU3Ek__BackingField_16() const { return ___U3CIsMineU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsMineU3Ek__BackingField_16() { return &___U3CIsMineU3Ek__BackingField_16; }
	inline void set_U3CIsMineU3Ek__BackingField_16(bool value)
	{
		___U3CIsMineU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CControllerU3Ek__BackingField_17)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CControllerU3Ek__BackingField_17() const { return ___U3CControllerU3Ek__BackingField_17; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CControllerU3Ek__BackingField_17() { return &___U3CControllerU3Ek__BackingField_17; }
	inline void set_U3CControllerU3Ek__BackingField_17(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CControllerU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatorActorNrU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CCreatorActorNrU3Ek__BackingField_18)); }
	inline int32_t get_U3CCreatorActorNrU3Ek__BackingField_18() const { return ___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CCreatorActorNrU3Ek__BackingField_18() { return &___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline void set_U3CCreatorActorNrU3Ek__BackingField_18(int32_t value)
	{
		___U3CCreatorActorNrU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CAmOwnerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CAmOwnerU3Ek__BackingField_19)); }
	inline bool get_U3CAmOwnerU3Ek__BackingField_19() const { return ___U3CAmOwnerU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CAmOwnerU3Ek__BackingField_19() { return &___U3CAmOwnerU3Ek__BackingField_19; }
	inline void set_U3CAmOwnerU3Ek__BackingField_19(bool value)
	{
		___U3CAmOwnerU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3COwnerU3Ek__BackingField_20)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3COwnerU3Ek__BackingField_20() const { return ___U3COwnerU3Ek__BackingField_20; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3COwnerU3Ek__BackingField_20() { return &___U3COwnerU3Ek__BackingField_20; }
	inline void set_U3COwnerU3Ek__BackingField_20(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3COwnerU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COwnerU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_ownerActorNr_21() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ownerActorNr_21)); }
	inline int32_t get_ownerActorNr_21() const { return ___ownerActorNr_21; }
	inline int32_t* get_address_of_ownerActorNr_21() { return &___ownerActorNr_21; }
	inline void set_ownerActorNr_21(int32_t value)
	{
		___ownerActorNr_21 = value;
	}

	inline static int32_t get_offset_of_controllerActorNr_22() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___controllerActorNr_22)); }
	inline int32_t get_controllerActorNr_22() const { return ___controllerActorNr_22; }
	inline int32_t* get_address_of_controllerActorNr_22() { return &___controllerActorNr_22; }
	inline void set_controllerActorNr_22(int32_t value)
	{
		___controllerActorNr_22 = value;
	}

	inline static int32_t get_offset_of_sceneViewId_23() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___sceneViewId_23)); }
	inline int32_t get_sceneViewId_23() const { return ___sceneViewId_23; }
	inline int32_t* get_address_of_sceneViewId_23() { return &___sceneViewId_23; }
	inline void set_sceneViewId_23(int32_t value)
	{
		___sceneViewId_23 = value;
	}

	inline static int32_t get_offset_of_viewIdField_24() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___viewIdField_24)); }
	inline int32_t get_viewIdField_24() const { return ___viewIdField_24; }
	inline int32_t* get_address_of_viewIdField_24() { return &___viewIdField_24; }
	inline void set_viewIdField_24(int32_t value)
	{
		___viewIdField_24 = value;
	}

	inline static int32_t get_offset_of_InstantiationId_25() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___InstantiationId_25)); }
	inline int32_t get_InstantiationId_25() const { return ___InstantiationId_25; }
	inline int32_t* get_address_of_InstantiationId_25() { return &___InstantiationId_25; }
	inline void set_InstantiationId_25(int32_t value)
	{
		___InstantiationId_25 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_26() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___isRuntimeInstantiated_26)); }
	inline bool get_isRuntimeInstantiated_26() const { return ___isRuntimeInstantiated_26; }
	inline bool* get_address_of_isRuntimeInstantiated_26() { return &___isRuntimeInstantiated_26; }
	inline void set_isRuntimeInstantiated_26(bool value)
	{
		___isRuntimeInstantiated_26 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_27() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___removedFromLocalViewList_27)); }
	inline bool get_removedFromLocalViewList_27() const { return ___removedFromLocalViewList_27; }
	inline bool* get_address_of_removedFromLocalViewList_27() { return &___removedFromLocalViewList_27; }
	inline void set_removedFromLocalViewList_27(bool value)
	{
		___removedFromLocalViewList_27 = value;
	}

	inline static int32_t get_offset_of_CallbackChangeQueue_28() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___CallbackChangeQueue_28)); }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * get_CallbackChangeQueue_28() const { return ___CallbackChangeQueue_28; }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA ** get_address_of_CallbackChangeQueue_28() { return &___CallbackChangeQueue_28; }
	inline void set_CallbackChangeQueue_28(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * value)
	{
		___CallbackChangeQueue_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackChangeQueue_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnPreNetDestroyCallbacks_29() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnPreNetDestroyCallbacks_29)); }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * get_OnPreNetDestroyCallbacks_29() const { return ___OnPreNetDestroyCallbacks_29; }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** get_address_of_OnPreNetDestroyCallbacks_29() { return &___OnPreNetDestroyCallbacks_29; }
	inline void set_OnPreNetDestroyCallbacks_29(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * value)
	{
		___OnPreNetDestroyCallbacks_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreNetDestroyCallbacks_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnerChangeCallbacks_30() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnOwnerChangeCallbacks_30)); }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * get_OnOwnerChangeCallbacks_30() const { return ___OnOwnerChangeCallbacks_30; }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** get_address_of_OnOwnerChangeCallbacks_30() { return &___OnOwnerChangeCallbacks_30; }
	inline void set_OnOwnerChangeCallbacks_30(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * value)
	{
		___OnOwnerChangeCallbacks_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnerChangeCallbacks_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnControllerChangeCallbacks_31() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnControllerChangeCallbacks_31)); }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * get_OnControllerChangeCallbacks_31() const { return ___OnControllerChangeCallbacks_31; }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** get_address_of_OnControllerChangeCallbacks_31() { return &___OnControllerChangeCallbacks_31; }
	inline void set_OnControllerChangeCallbacks_31(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * value)
	{
		___OnControllerChangeCallbacks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerChangeCallbacks_31), (void*)value);
	}
};


// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::move
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___move_4;
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::look
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___look_5;
	// System.Boolean StarterAssets.StarterAssetsInputs::jump
	bool ___jump_6;
	// System.Boolean StarterAssets.StarterAssetsInputs::sprint
	bool ___sprint_7;
	// System.Boolean StarterAssets.StarterAssetsInputs::analogMovement
	bool ___analogMovement_8;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorLocked
	bool ___cursorLocked_9;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorInputForLook
	bool ___cursorInputForLook_10;

public:
	inline static int32_t get_offset_of_move_4() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___move_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_move_4() const { return ___move_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_move_4() { return &___move_4; }
	inline void set_move_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___move_4 = value;
	}

	inline static int32_t get_offset_of_look_5() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___look_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_look_5() const { return ___look_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_look_5() { return &___look_5; }
	inline void set_look_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___look_5 = value;
	}

	inline static int32_t get_offset_of_jump_6() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___jump_6)); }
	inline bool get_jump_6() const { return ___jump_6; }
	inline bool* get_address_of_jump_6() { return &___jump_6; }
	inline void set_jump_6(bool value)
	{
		___jump_6 = value;
	}

	inline static int32_t get_offset_of_sprint_7() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___sprint_7)); }
	inline bool get_sprint_7() const { return ___sprint_7; }
	inline bool* get_address_of_sprint_7() { return &___sprint_7; }
	inline void set_sprint_7(bool value)
	{
		___sprint_7 = value;
	}

	inline static int32_t get_offset_of_analogMovement_8() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___analogMovement_8)); }
	inline bool get_analogMovement_8() const { return ___analogMovement_8; }
	inline bool* get_address_of_analogMovement_8() { return &___analogMovement_8; }
	inline void set_analogMovement_8(bool value)
	{
		___analogMovement_8 = value;
	}

	inline static int32_t get_offset_of_cursorLocked_9() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___cursorLocked_9)); }
	inline bool get_cursorLocked_9() const { return ___cursorLocked_9; }
	inline bool* get_address_of_cursorLocked_9() { return &___cursorLocked_9; }
	inline void set_cursorLocked_9(bool value)
	{
		___cursorLocked_9 = value;
	}

	inline static int32_t get_offset_of_cursorInputForLook_10() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___cursorInputForLook_10)); }
	inline bool get_cursorInputForLook_10() const { return ___cursorInputForLook_10; }
	inline bool* get_address_of_cursorInputForLook_10() { return &___cursorInputForLook_10; }
	inline void set_cursorInputForLook_10(bool value)
	{
		___cursorInputForLook_10 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// StarterAssets.StarterAssetsInputs StarterAssets.UICanvasControllerInput::starterAssetsInputs
	StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * ___starterAssetsInputs_4;

public:
	inline static int32_t get_offset_of_starterAssetsInputs_4() { return static_cast<int32_t>(offsetof(UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1, ___starterAssetsInputs_4)); }
	inline StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * get_starterAssetsInputs_4() const { return ___starterAssetsInputs_4; }
	inline StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC ** get_address_of_starterAssetsInputs_4() { return &___starterAssetsInputs_4; }
	inline void set_starterAssetsInputs_4(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * value)
	{
		___starterAssetsInputs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___starterAssetsInputs_4), (void*)value);
	}
};


// UIVirtualButton
struct UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UIVirtualButton/BoolEvent UIVirtualButton::buttonStateOutputEvent
	BoolEvent_tD84A3E3A4245DFD9FA5D608A5ADA77DBDFB6BD56 * ___buttonStateOutputEvent_4;
	// UIVirtualButton/Event UIVirtualButton::buttonClickOutputEvent
	Event_tB8168EB885996D80674A82913E2B33B4915A9E23 * ___buttonClickOutputEvent_5;

public:
	inline static int32_t get_offset_of_buttonStateOutputEvent_4() { return static_cast<int32_t>(offsetof(UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE, ___buttonStateOutputEvent_4)); }
	inline BoolEvent_tD84A3E3A4245DFD9FA5D608A5ADA77DBDFB6BD56 * get_buttonStateOutputEvent_4() const { return ___buttonStateOutputEvent_4; }
	inline BoolEvent_tD84A3E3A4245DFD9FA5D608A5ADA77DBDFB6BD56 ** get_address_of_buttonStateOutputEvent_4() { return &___buttonStateOutputEvent_4; }
	inline void set_buttonStateOutputEvent_4(BoolEvent_tD84A3E3A4245DFD9FA5D608A5ADA77DBDFB6BD56 * value)
	{
		___buttonStateOutputEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonStateOutputEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonClickOutputEvent_5() { return static_cast<int32_t>(offsetof(UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE, ___buttonClickOutputEvent_5)); }
	inline Event_tB8168EB885996D80674A82913E2B33B4915A9E23 * get_buttonClickOutputEvent_5() const { return ___buttonClickOutputEvent_5; }
	inline Event_tB8168EB885996D80674A82913E2B33B4915A9E23 ** get_address_of_buttonClickOutputEvent_5() { return &___buttonClickOutputEvent_5; }
	inline void set_buttonClickOutputEvent_5(Event_tB8168EB885996D80674A82913E2B33B4915A9E23 * value)
	{
		___buttonClickOutputEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonClickOutputEvent_5), (void*)value);
	}
};


// UIVirtualJoystick
struct UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform UIVirtualJoystick::containerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualJoystick::handleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___handleRect_5;
	// System.Single UIVirtualJoystick::joystickRange
	float ___joystickRange_6;
	// System.Single UIVirtualJoystick::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualJoystick::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualJoystick::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UIVirtualJoystick/Event UIVirtualJoystick::joystickOutputEvent
	Event_t5D63277B4BC67CE95DE0316A422A69420D3A368D * ___joystickOutputEvent_10;

public:
	inline static int32_t get_offset_of_containerRect_4() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___containerRect_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_containerRect_4() const { return ___containerRect_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_containerRect_4() { return &___containerRect_4; }
	inline void set_containerRect_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___containerRect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___containerRect_4), (void*)value);
	}

	inline static int32_t get_offset_of_handleRect_5() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___handleRect_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_handleRect_5() const { return ___handleRect_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_handleRect_5() { return &___handleRect_5; }
	inline void set_handleRect_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___handleRect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleRect_5), (void*)value);
	}

	inline static int32_t get_offset_of_joystickRange_6() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___joystickRange_6)); }
	inline float get_joystickRange_6() const { return ___joystickRange_6; }
	inline float* get_address_of_joystickRange_6() { return &___joystickRange_6; }
	inline void set_joystickRange_6(float value)
	{
		___joystickRange_6 = value;
	}

	inline static int32_t get_offset_of_magnitudeMultiplier_7() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___magnitudeMultiplier_7)); }
	inline float get_magnitudeMultiplier_7() const { return ___magnitudeMultiplier_7; }
	inline float* get_address_of_magnitudeMultiplier_7() { return &___magnitudeMultiplier_7; }
	inline void set_magnitudeMultiplier_7(float value)
	{
		___magnitudeMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_invertXOutputValue_8() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___invertXOutputValue_8)); }
	inline bool get_invertXOutputValue_8() const { return ___invertXOutputValue_8; }
	inline bool* get_address_of_invertXOutputValue_8() { return &___invertXOutputValue_8; }
	inline void set_invertXOutputValue_8(bool value)
	{
		___invertXOutputValue_8 = value;
	}

	inline static int32_t get_offset_of_invertYOutputValue_9() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___invertYOutputValue_9)); }
	inline bool get_invertYOutputValue_9() const { return ___invertYOutputValue_9; }
	inline bool* get_address_of_invertYOutputValue_9() { return &___invertYOutputValue_9; }
	inline void set_invertYOutputValue_9(bool value)
	{
		___invertYOutputValue_9 = value;
	}

	inline static int32_t get_offset_of_joystickOutputEvent_10() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___joystickOutputEvent_10)); }
	inline Event_t5D63277B4BC67CE95DE0316A422A69420D3A368D * get_joystickOutputEvent_10() const { return ___joystickOutputEvent_10; }
	inline Event_t5D63277B4BC67CE95DE0316A422A69420D3A368D ** get_address_of_joystickOutputEvent_10() { return &___joystickOutputEvent_10; }
	inline void set_joystickOutputEvent_10(Event_t5D63277B4BC67CE95DE0316A422A69420D3A368D * value)
	{
		___joystickOutputEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joystickOutputEvent_10), (void*)value);
	}
};


// UIVirtualTouchZone
struct UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform UIVirtualTouchZone::containerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualTouchZone::handleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___handleRect_5;
	// System.Boolean UIVirtualTouchZone::clampToMagnitude
	bool ___clampToMagnitude_6;
	// System.Single UIVirtualTouchZone::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualTouchZone::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualTouchZone::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UnityEngine.Vector2 UIVirtualTouchZone::pointerDownPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerDownPosition_10;
	// UnityEngine.Vector2 UIVirtualTouchZone::currentPointerPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentPointerPosition_11;
	// UIVirtualTouchZone/Event UIVirtualTouchZone::touchZoneOutputEvent
	Event_t1E1104A6087ED46DBF720AC59C7A8E63B974639D * ___touchZoneOutputEvent_12;

public:
	inline static int32_t get_offset_of_containerRect_4() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___containerRect_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_containerRect_4() const { return ___containerRect_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_containerRect_4() { return &___containerRect_4; }
	inline void set_containerRect_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___containerRect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___containerRect_4), (void*)value);
	}

	inline static int32_t get_offset_of_handleRect_5() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___handleRect_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_handleRect_5() const { return ___handleRect_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_handleRect_5() { return &___handleRect_5; }
	inline void set_handleRect_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___handleRect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleRect_5), (void*)value);
	}

	inline static int32_t get_offset_of_clampToMagnitude_6() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___clampToMagnitude_6)); }
	inline bool get_clampToMagnitude_6() const { return ___clampToMagnitude_6; }
	inline bool* get_address_of_clampToMagnitude_6() { return &___clampToMagnitude_6; }
	inline void set_clampToMagnitude_6(bool value)
	{
		___clampToMagnitude_6 = value;
	}

	inline static int32_t get_offset_of_magnitudeMultiplier_7() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___magnitudeMultiplier_7)); }
	inline float get_magnitudeMultiplier_7() const { return ___magnitudeMultiplier_7; }
	inline float* get_address_of_magnitudeMultiplier_7() { return &___magnitudeMultiplier_7; }
	inline void set_magnitudeMultiplier_7(float value)
	{
		___magnitudeMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_invertXOutputValue_8() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___invertXOutputValue_8)); }
	inline bool get_invertXOutputValue_8() const { return ___invertXOutputValue_8; }
	inline bool* get_address_of_invertXOutputValue_8() { return &___invertXOutputValue_8; }
	inline void set_invertXOutputValue_8(bool value)
	{
		___invertXOutputValue_8 = value;
	}

	inline static int32_t get_offset_of_invertYOutputValue_9() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___invertYOutputValue_9)); }
	inline bool get_invertYOutputValue_9() const { return ___invertYOutputValue_9; }
	inline bool* get_address_of_invertYOutputValue_9() { return &___invertYOutputValue_9; }
	inline void set_invertYOutputValue_9(bool value)
	{
		___invertYOutputValue_9 = value;
	}

	inline static int32_t get_offset_of_pointerDownPosition_10() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___pointerDownPosition_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pointerDownPosition_10() const { return ___pointerDownPosition_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pointerDownPosition_10() { return &___pointerDownPosition_10; }
	inline void set_pointerDownPosition_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pointerDownPosition_10 = value;
	}

	inline static int32_t get_offset_of_currentPointerPosition_11() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___currentPointerPosition_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currentPointerPosition_11() const { return ___currentPointerPosition_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currentPointerPosition_11() { return &___currentPointerPosition_11; }
	inline void set_currentPointerPosition_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currentPointerPosition_11 = value;
	}

	inline static int32_t get_offset_of_touchZoneOutputEvent_12() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___touchZoneOutputEvent_12)); }
	inline Event_t1E1104A6087ED46DBF720AC59C7A8E63B974639D * get_touchZoneOutputEvent_12() const { return ___touchZoneOutputEvent_12; }
	inline Event_t1E1104A6087ED46DBF720AC59C7A8E63B974639D ** get_address_of_touchZoneOutputEvent_12() { return &___touchZoneOutputEvent_12; }
	inline void set_touchZoneOutputEvent_12(Event_t1E1104A6087ED46DBF720AC59C7A8E63B974639D * value)
	{
		___touchZoneOutputEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchZoneOutputEvent_12), (void*)value);
	}
};


// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponent::logger
	VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * ___logger_4;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceComponent::logLevel
	uint8_t ___logLevel_5;
	// System.Boolean Photon.Voice.Unity.VoiceComponent::ignoreGlobalLogLevel
	bool ___ignoreGlobalLogLevel_6;

public:
	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C, ___logger_4)); }
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * get_logger_4() const { return ___logger_4; }
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F ** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_5() { return static_cast<int32_t>(offsetof(VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C, ___logLevel_5)); }
	inline uint8_t get_logLevel_5() const { return ___logLevel_5; }
	inline uint8_t* get_address_of_logLevel_5() { return &___logLevel_5; }
	inline void set_logLevel_5(uint8_t value)
	{
		___logLevel_5 = value;
	}

	inline static int32_t get_offset_of_ignoreGlobalLogLevel_6() { return static_cast<int32_t>(offsetof(VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C, ___ignoreGlobalLogLevel_6)); }
	inline bool get_ignoreGlobalLogLevel_6() const { return ___ignoreGlobalLogLevel_6; }
	inline bool* get_address_of_ignoreGlobalLogLevel_6() { return &___ignoreGlobalLogLevel_6; }
	inline void set_ignoreGlobalLogLevel_6(bool value)
	{
		___ignoreGlobalLogLevel_6 = value;
	}
};

struct VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C_StaticFields
{
public:
	// System.String Photon.Voice.Unity.VoiceComponent::currentPlatform
	String_t* ___currentPlatform_7;

public:
	inline static int32_t get_offset_of_currentPlatform_7() { return static_cast<int32_t>(offsetof(VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C_StaticFields, ___currentPlatform_7)); }
	inline String_t* get_currentPlatform_7() const { return ___currentPlatform_7; }
	inline String_t** get_address_of_currentPlatform_7() { return &___currentPlatform_7; }
	inline void set_currentPlatform_7(String_t* value)
	{
		___currentPlatform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlatform_7), (void*)value);
	}
};


// ExitGames.Demos.DemoPunVoice.VoiceDemoUI
struct VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punState
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___punState_4;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceState
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___voiceState_5;
	// Photon.Voice.PUN.PhotonVoiceNetwork ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punVoiceNetwork
	PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * ___punVoiceNetwork_6;
	// UnityEngine.Canvas ExitGames.Demos.DemoPunVoice.VoiceDemoUI::canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas_7;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punSwitch
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___punSwitch_8;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punSwitchText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___punSwitchText_9;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceSwitch
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___voiceSwitch_10;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceSwitchText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___voiceSwitchText_11;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.VoiceDemoUI::calibrateButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___calibrateButton_12;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::calibrateText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___calibrateText_13;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceDebugText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___voiceDebugText_14;
	// Photon.Voice.Unity.Recorder ExitGames.Demos.DemoPunVoice.VoiceDemoUI::recorder
	Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___recorder_15;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.VoiceDemoUI::inGameSettings
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___inGameSettings_16;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.VoiceDemoUI::globalSettings
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalSettings_17;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::devicesInfoText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___devicesInfoText_18;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.VoiceDemoUI::debugGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___debugGO_19;
	// System.Boolean ExitGames.Demos.DemoPunVoice.VoiceDemoUI::debugMode
	bool ___debugMode_20;
	// System.Single ExitGames.Demos.DemoPunVoice.VoiceDemoUI::volumeBeforeMute
	float ___volumeBeforeMute_21;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Demos.DemoPunVoice.VoiceDemoUI::previousDebugLevel
	uint8_t ___previousDebugLevel_22;
	// System.Int32 ExitGames.Demos.DemoPunVoice.VoiceDemoUI::calibrationMilliSeconds
	int32_t ___calibrationMilliSeconds_24;

public:
	inline static int32_t get_offset_of_punState_4() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___punState_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_punState_4() const { return ___punState_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_punState_4() { return &___punState_4; }
	inline void set_punState_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___punState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___punState_4), (void*)value);
	}

	inline static int32_t get_offset_of_voiceState_5() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___voiceState_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_voiceState_5() const { return ___voiceState_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_voiceState_5() { return &___voiceState_5; }
	inline void set_voiceState_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___voiceState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceState_5), (void*)value);
	}

	inline static int32_t get_offset_of_punVoiceNetwork_6() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___punVoiceNetwork_6)); }
	inline PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * get_punVoiceNetwork_6() const { return ___punVoiceNetwork_6; }
	inline PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 ** get_address_of_punVoiceNetwork_6() { return &___punVoiceNetwork_6; }
	inline void set_punVoiceNetwork_6(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * value)
	{
		___punVoiceNetwork_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___punVoiceNetwork_6), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_7() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___canvas_7)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas_7() const { return ___canvas_7; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas_7() { return &___canvas_7; }
	inline void set_canvas_7(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_7), (void*)value);
	}

	inline static int32_t get_offset_of_punSwitch_8() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___punSwitch_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_punSwitch_8() const { return ___punSwitch_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_punSwitch_8() { return &___punSwitch_8; }
	inline void set_punSwitch_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___punSwitch_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___punSwitch_8), (void*)value);
	}

	inline static int32_t get_offset_of_punSwitchText_9() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___punSwitchText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_punSwitchText_9() const { return ___punSwitchText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_punSwitchText_9() { return &___punSwitchText_9; }
	inline void set_punSwitchText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___punSwitchText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___punSwitchText_9), (void*)value);
	}

	inline static int32_t get_offset_of_voiceSwitch_10() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___voiceSwitch_10)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_voiceSwitch_10() const { return ___voiceSwitch_10; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_voiceSwitch_10() { return &___voiceSwitch_10; }
	inline void set_voiceSwitch_10(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___voiceSwitch_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceSwitch_10), (void*)value);
	}

	inline static int32_t get_offset_of_voiceSwitchText_11() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___voiceSwitchText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_voiceSwitchText_11() const { return ___voiceSwitchText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_voiceSwitchText_11() { return &___voiceSwitchText_11; }
	inline void set_voiceSwitchText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___voiceSwitchText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceSwitchText_11), (void*)value);
	}

	inline static int32_t get_offset_of_calibrateButton_12() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___calibrateButton_12)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_calibrateButton_12() const { return ___calibrateButton_12; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_calibrateButton_12() { return &___calibrateButton_12; }
	inline void set_calibrateButton_12(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___calibrateButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrateButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_calibrateText_13() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___calibrateText_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_calibrateText_13() const { return ___calibrateText_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_calibrateText_13() { return &___calibrateText_13; }
	inline void set_calibrateText_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___calibrateText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrateText_13), (void*)value);
	}

	inline static int32_t get_offset_of_voiceDebugText_14() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___voiceDebugText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_voiceDebugText_14() const { return ___voiceDebugText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_voiceDebugText_14() { return &___voiceDebugText_14; }
	inline void set_voiceDebugText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___voiceDebugText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDebugText_14), (void*)value);
	}

	inline static int32_t get_offset_of_recorder_15() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___recorder_15)); }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * get_recorder_15() const { return ___recorder_15; }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** get_address_of_recorder_15() { return &___recorder_15; }
	inline void set_recorder_15(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		___recorder_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_15), (void*)value);
	}

	inline static int32_t get_offset_of_inGameSettings_16() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___inGameSettings_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_inGameSettings_16() const { return ___inGameSettings_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_inGameSettings_16() { return &___inGameSettings_16; }
	inline void set_inGameSettings_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___inGameSettings_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameSettings_16), (void*)value);
	}

	inline static int32_t get_offset_of_globalSettings_17() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___globalSettings_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalSettings_17() const { return ___globalSettings_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalSettings_17() { return &___globalSettings_17; }
	inline void set_globalSettings_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalSettings_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalSettings_17), (void*)value);
	}

	inline static int32_t get_offset_of_devicesInfoText_18() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___devicesInfoText_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_devicesInfoText_18() const { return ___devicesInfoText_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_devicesInfoText_18() { return &___devicesInfoText_18; }
	inline void set_devicesInfoText_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___devicesInfoText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___devicesInfoText_18), (void*)value);
	}

	inline static int32_t get_offset_of_debugGO_19() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___debugGO_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_debugGO_19() const { return ___debugGO_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_debugGO_19() { return &___debugGO_19; }
	inline void set_debugGO_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___debugGO_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugGO_19), (void*)value);
	}

	inline static int32_t get_offset_of_debugMode_20() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___debugMode_20)); }
	inline bool get_debugMode_20() const { return ___debugMode_20; }
	inline bool* get_address_of_debugMode_20() { return &___debugMode_20; }
	inline void set_debugMode_20(bool value)
	{
		___debugMode_20 = value;
	}

	inline static int32_t get_offset_of_volumeBeforeMute_21() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___volumeBeforeMute_21)); }
	inline float get_volumeBeforeMute_21() const { return ___volumeBeforeMute_21; }
	inline float* get_address_of_volumeBeforeMute_21() { return &___volumeBeforeMute_21; }
	inline void set_volumeBeforeMute_21(float value)
	{
		___volumeBeforeMute_21 = value;
	}

	inline static int32_t get_offset_of_previousDebugLevel_22() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___previousDebugLevel_22)); }
	inline uint8_t get_previousDebugLevel_22() const { return ___previousDebugLevel_22; }
	inline uint8_t* get_address_of_previousDebugLevel_22() { return &___previousDebugLevel_22; }
	inline void set_previousDebugLevel_22(uint8_t value)
	{
		___previousDebugLevel_22 = value;
	}

	inline static int32_t get_offset_of_calibrationMilliSeconds_24() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81, ___calibrationMilliSeconds_24)); }
	inline int32_t get_calibrationMilliSeconds_24() const { return ___calibrationMilliSeconds_24; }
	inline int32_t* get_address_of_calibrationMilliSeconds_24() { return &___calibrationMilliSeconds_24; }
	inline void set_calibrationMilliSeconds_24(int32_t value)
	{
		___calibrationMilliSeconds_24 = value;
	}
};

struct VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_StaticFields
{
public:
	// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle ExitGames.Demos.DemoPunVoice.VoiceDemoUI::DebugToggled
	OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * ___DebugToggled_23;

public:
	inline static int32_t get_offset_of_DebugToggled_23() { return static_cast<int32_t>(offsetof(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_StaticFields, ___DebugToggled_23)); }
	inline OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * get_DebugToggled_23() const { return ___DebugToggled_23; }
	inline OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 ** get_address_of_DebugToggled_23() { return &___DebugToggled_23; }
	inline void set_DebugToggled_23(OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * value)
	{
		___DebugToggled_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugToggled_23), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Photon.Voice.PUN.PhotonVoiceView
struct PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722  : public VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C
{
public:
	// Photon.Pun.PhotonView Photon.Voice.PUN.PhotonVoiceView::photonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_8;
	// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::recorderInUse
	Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___recorderInUse_9;
	// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::speakerInUse
	Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * ___speakerInUse_10;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::onEnableCalledOnce
	bool ___onEnableCalledOnce_11;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::AutoCreateRecorderIfNotFound
	bool ___AutoCreateRecorderIfNotFound_12;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::UsePrimaryRecorder
	bool ___UsePrimaryRecorder_13;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupDebugSpeaker
	bool ___SetupDebugSpeaker_14;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::<IsSpeaker>k__BackingField
	bool ___U3CIsSpeakerU3Ek__BackingField_15;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::<IsRecorder>k__BackingField
	bool ___U3CIsRecorderU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_photonView_8() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___photonView_8)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_photonView_8() const { return ___photonView_8; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_photonView_8() { return &___photonView_8; }
	inline void set_photonView_8(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___photonView_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonView_8), (void*)value);
	}

	inline static int32_t get_offset_of_recorderInUse_9() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___recorderInUse_9)); }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * get_recorderInUse_9() const { return ___recorderInUse_9; }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** get_address_of_recorderInUse_9() { return &___recorderInUse_9; }
	inline void set_recorderInUse_9(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		___recorderInUse_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorderInUse_9), (void*)value);
	}

	inline static int32_t get_offset_of_speakerInUse_10() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___speakerInUse_10)); }
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * get_speakerInUse_10() const { return ___speakerInUse_10; }
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA ** get_address_of_speakerInUse_10() { return &___speakerInUse_10; }
	inline void set_speakerInUse_10(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * value)
	{
		___speakerInUse_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speakerInUse_10), (void*)value);
	}

	inline static int32_t get_offset_of_onEnableCalledOnce_11() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___onEnableCalledOnce_11)); }
	inline bool get_onEnableCalledOnce_11() const { return ___onEnableCalledOnce_11; }
	inline bool* get_address_of_onEnableCalledOnce_11() { return &___onEnableCalledOnce_11; }
	inline void set_onEnableCalledOnce_11(bool value)
	{
		___onEnableCalledOnce_11 = value;
	}

	inline static int32_t get_offset_of_AutoCreateRecorderIfNotFound_12() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___AutoCreateRecorderIfNotFound_12)); }
	inline bool get_AutoCreateRecorderIfNotFound_12() const { return ___AutoCreateRecorderIfNotFound_12; }
	inline bool* get_address_of_AutoCreateRecorderIfNotFound_12() { return &___AutoCreateRecorderIfNotFound_12; }
	inline void set_AutoCreateRecorderIfNotFound_12(bool value)
	{
		___AutoCreateRecorderIfNotFound_12 = value;
	}

	inline static int32_t get_offset_of_UsePrimaryRecorder_13() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___UsePrimaryRecorder_13)); }
	inline bool get_UsePrimaryRecorder_13() const { return ___UsePrimaryRecorder_13; }
	inline bool* get_address_of_UsePrimaryRecorder_13() { return &___UsePrimaryRecorder_13; }
	inline void set_UsePrimaryRecorder_13(bool value)
	{
		___UsePrimaryRecorder_13 = value;
	}

	inline static int32_t get_offset_of_SetupDebugSpeaker_14() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___SetupDebugSpeaker_14)); }
	inline bool get_SetupDebugSpeaker_14() const { return ___SetupDebugSpeaker_14; }
	inline bool* get_address_of_SetupDebugSpeaker_14() { return &___SetupDebugSpeaker_14; }
	inline void set_SetupDebugSpeaker_14(bool value)
	{
		___SetupDebugSpeaker_14 = value;
	}

	inline static int32_t get_offset_of_U3CIsSpeakerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___U3CIsSpeakerU3Ek__BackingField_15)); }
	inline bool get_U3CIsSpeakerU3Ek__BackingField_15() const { return ___U3CIsSpeakerU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIsSpeakerU3Ek__BackingField_15() { return &___U3CIsSpeakerU3Ek__BackingField_15; }
	inline void set_U3CIsSpeakerU3Ek__BackingField_15(bool value)
	{
		___U3CIsSpeakerU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CIsRecorderU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___U3CIsRecorderU3Ek__BackingField_16)); }
	inline bool get_U3CIsRecorderU3Ek__BackingField_16() const { return ___U3CIsRecorderU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsRecorderU3Ek__BackingField_16() { return &___U3CIsRecorderU3Ek__BackingField_16; }
	inline void set_U3CIsRecorderU3Ek__BackingField_16(bool value)
	{
		___U3CIsRecorderU3Ek__BackingField_16 = value;
	}
};


// Photon.Voice.Unity.Recorder
struct Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5  : public VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C
{
public:
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_11;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_12;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_13;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject * ___userData_14;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___voice_15;
	// System.String Photon.Voice.Unity.Recorder::unityMicrophoneDevice
	String_t* ___unityMicrophoneDevice_16;
	// System.Int32 Photon.Voice.Unity.Recorder::photonMicrophoneDeviceId
	int32_t ___photonMicrophoneDeviceId_17;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_18;
	// Photon.Voice.VoiceClient Photon.Voice.Unity.Recorder::client
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___client_19;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.Recorder::voiceConnection
	VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * ___voiceConnection_20;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_21;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_22;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_23;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_24;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_25;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_26;
	// Photon.Voice.OpusCodec/FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_27;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_28;
	// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_29;
	// Photon.Voice.Unity.Recorder/MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_30;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip_31;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_32;
	// System.Boolean Photon.Voice.Unity.Recorder::isRecording
	bool ___isRecording_33;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * ___inputFactory_34;
	// Photon.Voice.IAudioInChangeNotifier Photon.Voice.Unity.Recorder::photonMicChangeNotifier
	RuntimeObject* ___photonMicChangeNotifier_36;
	// System.Boolean Photon.Voice.Unity.Recorder::reactOnSystemChanges
	bool ___reactOnSystemChanges_37;
	// System.Boolean Photon.Voice.Unity.Recorder::subscribedToSystemChangesPhoton
	bool ___subscribedToSystemChangesPhoton_38;
	// System.Boolean Photon.Voice.Unity.Recorder::subscribedToSystemChangesUnity
	bool ___subscribedToSystemChangesUnity_39;
	// System.Boolean Photon.Voice.Unity.Recorder::autoStart
	bool ___autoStart_40;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.Unity.Recorder::audioSessionParameters
	AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  ___audioSessionParameters_41;
	// System.Boolean Photon.Voice.Unity.Recorder::useCustomAudioSessionParameters
	bool ___useCustomAudioSessionParameters_42;
	// System.Int32 Photon.Voice.Unity.Recorder::audioSessionPresetIndex
	int32_t ___audioSessionPresetIndex_43;
	// System.Boolean Photon.Voice.Unity.Recorder::recordOnlyWhenEnabled
	bool ___recordOnlyWhenEnabled_44;
	// System.Boolean Photon.Voice.Unity.Recorder::skipDeviceChangeChecks
	bool ___skipDeviceChangeChecks_45;
	// System.Boolean Photon.Voice.Unity.Recorder::wasRecordingBeforePause
	bool ___wasRecordingBeforePause_46;
	// System.Boolean Photon.Voice.Unity.Recorder::isPausedOrInBackground
	bool ___isPausedOrInBackground_47;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_48;
	// System.Boolean Photon.Voice.Unity.Recorder::useOnAudioFilterRead
	bool ___useOnAudioFilterRead_49;
	// System.Boolean Photon.Voice.Unity.Recorder::trySamplingRateMatch
	bool ___trySamplingRateMatch_50;
	// System.Boolean Photon.Voice.Unity.Recorder::useMicrophoneTypeFallback
	bool ___useMicrophoneTypeFallback_51;
	// System.Boolean Photon.Voice.Unity.Recorder::recordOnlyWhenJoined
	bool ___recordOnlyWhenJoined_52;
	// System.Boolean Photon.Voice.Unity.Recorder::recordingStoppedExplicitly
	bool ___recordingStoppedExplicitly_53;
	// Photon.Voice.IDeviceEnumerator Photon.Voice.Unity.Recorder::photonMicrophonesEnumerator
	RuntimeObject* ___photonMicrophonesEnumerator_54;
	// Photon.Voice.Unity.AudioInEnumerator Photon.Voice.Unity.Recorder::unityMicrophonesEnumerator
	AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197 * ___unityMicrophonesEnumerator_55;
	// System.Object Photon.Voice.Unity.Recorder::microphoneDeviceChangeDetectedLock
	RuntimeObject * ___microphoneDeviceChangeDetectedLock_56;
	// System.Boolean Photon.Voice.Unity.Recorder::microphoneDeviceChangeDetected
	bool ___microphoneDeviceChangeDetected_57;
	// System.Boolean Photon.Voice.Unity.Recorder::<RequiresRestart>k__BackingField
	bool ___U3CRequiresRestartU3Ek__BackingField_58;
	// Photon.Voice.Unity.Recorder/SampleTypeConv Photon.Voice.Unity.Recorder::<TypeConvert>k__BackingField
	int32_t ___U3CTypeConvertU3Ek__BackingField_59;

public:
	inline static int32_t get_offset_of_voiceDetection_11() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceDetection_11)); }
	inline bool get_voiceDetection_11() const { return ___voiceDetection_11; }
	inline bool* get_address_of_voiceDetection_11() { return &___voiceDetection_11; }
	inline void set_voiceDetection_11(bool value)
	{
		___voiceDetection_11 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionThreshold_12() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceDetectionThreshold_12)); }
	inline float get_voiceDetectionThreshold_12() const { return ___voiceDetectionThreshold_12; }
	inline float* get_address_of_voiceDetectionThreshold_12() { return &___voiceDetectionThreshold_12; }
	inline void set_voiceDetectionThreshold_12(float value)
	{
		___voiceDetectionThreshold_12 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionDelayMs_13() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceDetectionDelayMs_13)); }
	inline int32_t get_voiceDetectionDelayMs_13() const { return ___voiceDetectionDelayMs_13; }
	inline int32_t* get_address_of_voiceDetectionDelayMs_13() { return &___voiceDetectionDelayMs_13; }
	inline void set_voiceDetectionDelayMs_13(int32_t value)
	{
		___voiceDetectionDelayMs_13 = value;
	}

	inline static int32_t get_offset_of_userData_14() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___userData_14)); }
	inline RuntimeObject * get_userData_14() const { return ___userData_14; }
	inline RuntimeObject ** get_address_of_userData_14() { return &___userData_14; }
	inline void set_userData_14(RuntimeObject * value)
	{
		___userData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_14), (void*)value);
	}

	inline static int32_t get_offset_of_voice_15() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voice_15)); }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * get_voice_15() const { return ___voice_15; }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 ** get_address_of_voice_15() { return &___voice_15; }
	inline void set_voice_15(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * value)
	{
		___voice_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voice_15), (void*)value);
	}

	inline static int32_t get_offset_of_unityMicrophoneDevice_16() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___unityMicrophoneDevice_16)); }
	inline String_t* get_unityMicrophoneDevice_16() const { return ___unityMicrophoneDevice_16; }
	inline String_t** get_address_of_unityMicrophoneDevice_16() { return &___unityMicrophoneDevice_16; }
	inline void set_unityMicrophoneDevice_16(String_t* value)
	{
		___unityMicrophoneDevice_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityMicrophoneDevice_16), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicrophoneDeviceId_17() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___photonMicrophoneDeviceId_17)); }
	inline int32_t get_photonMicrophoneDeviceId_17() const { return ___photonMicrophoneDeviceId_17; }
	inline int32_t* get_address_of_photonMicrophoneDeviceId_17() { return &___photonMicrophoneDeviceId_17; }
	inline void set_photonMicrophoneDeviceId_17(int32_t value)
	{
		___photonMicrophoneDeviceId_17 = value;
	}

	inline static int32_t get_offset_of_inputSource_18() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___inputSource_18)); }
	inline RuntimeObject* get_inputSource_18() const { return ___inputSource_18; }
	inline RuntimeObject** get_address_of_inputSource_18() { return &___inputSource_18; }
	inline void set_inputSource_18(RuntimeObject* value)
	{
		___inputSource_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_18), (void*)value);
	}

	inline static int32_t get_offset_of_client_19() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___client_19)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_client_19() const { return ___client_19; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_client_19() { return &___client_19; }
	inline void set_client_19(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___client_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_19), (void*)value);
	}

	inline static int32_t get_offset_of_voiceConnection_20() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceConnection_20)); }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * get_voiceConnection_20() const { return ___voiceConnection_20; }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 ** get_address_of_voiceConnection_20() { return &___voiceConnection_20; }
	inline void set_voiceConnection_20(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * value)
	{
		___voiceConnection_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceConnection_20), (void*)value);
	}

	inline static int32_t get_offset_of_interestGroup_21() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___interestGroup_21)); }
	inline uint8_t get_interestGroup_21() const { return ___interestGroup_21; }
	inline uint8_t* get_address_of_interestGroup_21() { return &___interestGroup_21; }
	inline void set_interestGroup_21(uint8_t value)
	{
		___interestGroup_21 = value;
	}

	inline static int32_t get_offset_of_debugEchoMode_22() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___debugEchoMode_22)); }
	inline bool get_debugEchoMode_22() const { return ___debugEchoMode_22; }
	inline bool* get_address_of_debugEchoMode_22() { return &___debugEchoMode_22; }
	inline void set_debugEchoMode_22(bool value)
	{
		___debugEchoMode_22 = value;
	}

	inline static int32_t get_offset_of_reliableMode_23() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___reliableMode_23)); }
	inline bool get_reliableMode_23() const { return ___reliableMode_23; }
	inline bool* get_address_of_reliableMode_23() { return &___reliableMode_23; }
	inline void set_reliableMode_23(bool value)
	{
		___reliableMode_23 = value;
	}

	inline static int32_t get_offset_of_encrypt_24() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___encrypt_24)); }
	inline bool get_encrypt_24() const { return ___encrypt_24; }
	inline bool* get_address_of_encrypt_24() { return &___encrypt_24; }
	inline void set_encrypt_24(bool value)
	{
		___encrypt_24 = value;
	}

	inline static int32_t get_offset_of_transmitEnabled_25() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___transmitEnabled_25)); }
	inline bool get_transmitEnabled_25() const { return ___transmitEnabled_25; }
	inline bool* get_address_of_transmitEnabled_25() { return &___transmitEnabled_25; }
	inline void set_transmitEnabled_25(bool value)
	{
		___transmitEnabled_25 = value;
	}

	inline static int32_t get_offset_of_samplingRate_26() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___samplingRate_26)); }
	inline int32_t get_samplingRate_26() const { return ___samplingRate_26; }
	inline int32_t* get_address_of_samplingRate_26() { return &___samplingRate_26; }
	inline void set_samplingRate_26(int32_t value)
	{
		___samplingRate_26 = value;
	}

	inline static int32_t get_offset_of_frameDuration_27() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___frameDuration_27)); }
	inline int32_t get_frameDuration_27() const { return ___frameDuration_27; }
	inline int32_t* get_address_of_frameDuration_27() { return &___frameDuration_27; }
	inline void set_frameDuration_27(int32_t value)
	{
		___frameDuration_27 = value;
	}

	inline static int32_t get_offset_of_bitrate_28() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___bitrate_28)); }
	inline int32_t get_bitrate_28() const { return ___bitrate_28; }
	inline int32_t* get_address_of_bitrate_28() { return &___bitrate_28; }
	inline void set_bitrate_28(int32_t value)
	{
		___bitrate_28 = value;
	}

	inline static int32_t get_offset_of_sourceType_29() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___sourceType_29)); }
	inline int32_t get_sourceType_29() const { return ___sourceType_29; }
	inline int32_t* get_address_of_sourceType_29() { return &___sourceType_29; }
	inline void set_sourceType_29(int32_t value)
	{
		___sourceType_29 = value;
	}

	inline static int32_t get_offset_of_microphoneType_30() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___microphoneType_30)); }
	inline int32_t get_microphoneType_30() const { return ___microphoneType_30; }
	inline int32_t* get_address_of_microphoneType_30() { return &___microphoneType_30; }
	inline void set_microphoneType_30(int32_t value)
	{
		___microphoneType_30 = value;
	}

	inline static int32_t get_offset_of_audioClip_31() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___audioClip_31)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_audioClip_31() const { return ___audioClip_31; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_audioClip_31() { return &___audioClip_31; }
	inline void set_audioClip_31(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___audioClip_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClip_31), (void*)value);
	}

	inline static int32_t get_offset_of_loopAudioClip_32() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___loopAudioClip_32)); }
	inline bool get_loopAudioClip_32() const { return ___loopAudioClip_32; }
	inline bool* get_address_of_loopAudioClip_32() { return &___loopAudioClip_32; }
	inline void set_loopAudioClip_32(bool value)
	{
		___loopAudioClip_32 = value;
	}

	inline static int32_t get_offset_of_isRecording_33() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___isRecording_33)); }
	inline bool get_isRecording_33() const { return ___isRecording_33; }
	inline bool* get_address_of_isRecording_33() { return &___isRecording_33; }
	inline void set_isRecording_33(bool value)
	{
		___isRecording_33 = value;
	}

	inline static int32_t get_offset_of_inputFactory_34() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___inputFactory_34)); }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * get_inputFactory_34() const { return ___inputFactory_34; }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 ** get_address_of_inputFactory_34() { return &___inputFactory_34; }
	inline void set_inputFactory_34(Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * value)
	{
		___inputFactory_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputFactory_34), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicChangeNotifier_36() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___photonMicChangeNotifier_36)); }
	inline RuntimeObject* get_photonMicChangeNotifier_36() const { return ___photonMicChangeNotifier_36; }
	inline RuntimeObject** get_address_of_photonMicChangeNotifier_36() { return &___photonMicChangeNotifier_36; }
	inline void set_photonMicChangeNotifier_36(RuntimeObject* value)
	{
		___photonMicChangeNotifier_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicChangeNotifier_36), (void*)value);
	}

	inline static int32_t get_offset_of_reactOnSystemChanges_37() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___reactOnSystemChanges_37)); }
	inline bool get_reactOnSystemChanges_37() const { return ___reactOnSystemChanges_37; }
	inline bool* get_address_of_reactOnSystemChanges_37() { return &___reactOnSystemChanges_37; }
	inline void set_reactOnSystemChanges_37(bool value)
	{
		___reactOnSystemChanges_37 = value;
	}

	inline static int32_t get_offset_of_subscribedToSystemChangesPhoton_38() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___subscribedToSystemChangesPhoton_38)); }
	inline bool get_subscribedToSystemChangesPhoton_38() const { return ___subscribedToSystemChangesPhoton_38; }
	inline bool* get_address_of_subscribedToSystemChangesPhoton_38() { return &___subscribedToSystemChangesPhoton_38; }
	inline void set_subscribedToSystemChangesPhoton_38(bool value)
	{
		___subscribedToSystemChangesPhoton_38 = value;
	}

	inline static int32_t get_offset_of_subscribedToSystemChangesUnity_39() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___subscribedToSystemChangesUnity_39)); }
	inline bool get_subscribedToSystemChangesUnity_39() const { return ___subscribedToSystemChangesUnity_39; }
	inline bool* get_address_of_subscribedToSystemChangesUnity_39() { return &___subscribedToSystemChangesUnity_39; }
	inline void set_subscribedToSystemChangesUnity_39(bool value)
	{
		___subscribedToSystemChangesUnity_39 = value;
	}

	inline static int32_t get_offset_of_autoStart_40() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___autoStart_40)); }
	inline bool get_autoStart_40() const { return ___autoStart_40; }
	inline bool* get_address_of_autoStart_40() { return &___autoStart_40; }
	inline void set_autoStart_40(bool value)
	{
		___autoStart_40 = value;
	}

	inline static int32_t get_offset_of_audioSessionParameters_41() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___audioSessionParameters_41)); }
	inline AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  get_audioSessionParameters_41() const { return ___audioSessionParameters_41; }
	inline AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * get_address_of_audioSessionParameters_41() { return &___audioSessionParameters_41; }
	inline void set_audioSessionParameters_41(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  value)
	{
		___audioSessionParameters_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___audioSessionParameters_41))->___CategoryOptions_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_useCustomAudioSessionParameters_42() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___useCustomAudioSessionParameters_42)); }
	inline bool get_useCustomAudioSessionParameters_42() const { return ___useCustomAudioSessionParameters_42; }
	inline bool* get_address_of_useCustomAudioSessionParameters_42() { return &___useCustomAudioSessionParameters_42; }
	inline void set_useCustomAudioSessionParameters_42(bool value)
	{
		___useCustomAudioSessionParameters_42 = value;
	}

	inline static int32_t get_offset_of_audioSessionPresetIndex_43() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___audioSessionPresetIndex_43)); }
	inline int32_t get_audioSessionPresetIndex_43() const { return ___audioSessionPresetIndex_43; }
	inline int32_t* get_address_of_audioSessionPresetIndex_43() { return &___audioSessionPresetIndex_43; }
	inline void set_audioSessionPresetIndex_43(int32_t value)
	{
		___audioSessionPresetIndex_43 = value;
	}

	inline static int32_t get_offset_of_recordOnlyWhenEnabled_44() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___recordOnlyWhenEnabled_44)); }
	inline bool get_recordOnlyWhenEnabled_44() const { return ___recordOnlyWhenEnabled_44; }
	inline bool* get_address_of_recordOnlyWhenEnabled_44() { return &___recordOnlyWhenEnabled_44; }
	inline void set_recordOnlyWhenEnabled_44(bool value)
	{
		___recordOnlyWhenEnabled_44 = value;
	}

	inline static int32_t get_offset_of_skipDeviceChangeChecks_45() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___skipDeviceChangeChecks_45)); }
	inline bool get_skipDeviceChangeChecks_45() const { return ___skipDeviceChangeChecks_45; }
	inline bool* get_address_of_skipDeviceChangeChecks_45() { return &___skipDeviceChangeChecks_45; }
	inline void set_skipDeviceChangeChecks_45(bool value)
	{
		___skipDeviceChangeChecks_45 = value;
	}

	inline static int32_t get_offset_of_wasRecordingBeforePause_46() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___wasRecordingBeforePause_46)); }
	inline bool get_wasRecordingBeforePause_46() const { return ___wasRecordingBeforePause_46; }
	inline bool* get_address_of_wasRecordingBeforePause_46() { return &___wasRecordingBeforePause_46; }
	inline void set_wasRecordingBeforePause_46(bool value)
	{
		___wasRecordingBeforePause_46 = value;
	}

	inline static int32_t get_offset_of_isPausedOrInBackground_47() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___isPausedOrInBackground_47)); }
	inline bool get_isPausedOrInBackground_47() const { return ___isPausedOrInBackground_47; }
	inline bool* get_address_of_isPausedOrInBackground_47() { return &___isPausedOrInBackground_47; }
	inline void set_isPausedOrInBackground_47(bool value)
	{
		___isPausedOrInBackground_47 = value;
	}

	inline static int32_t get_offset_of_stopRecordingWhenPaused_48() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___stopRecordingWhenPaused_48)); }
	inline bool get_stopRecordingWhenPaused_48() const { return ___stopRecordingWhenPaused_48; }
	inline bool* get_address_of_stopRecordingWhenPaused_48() { return &___stopRecordingWhenPaused_48; }
	inline void set_stopRecordingWhenPaused_48(bool value)
	{
		___stopRecordingWhenPaused_48 = value;
	}

	inline static int32_t get_offset_of_useOnAudioFilterRead_49() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___useOnAudioFilterRead_49)); }
	inline bool get_useOnAudioFilterRead_49() const { return ___useOnAudioFilterRead_49; }
	inline bool* get_address_of_useOnAudioFilterRead_49() { return &___useOnAudioFilterRead_49; }
	inline void set_useOnAudioFilterRead_49(bool value)
	{
		___useOnAudioFilterRead_49 = value;
	}

	inline static int32_t get_offset_of_trySamplingRateMatch_50() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___trySamplingRateMatch_50)); }
	inline bool get_trySamplingRateMatch_50() const { return ___trySamplingRateMatch_50; }
	inline bool* get_address_of_trySamplingRateMatch_50() { return &___trySamplingRateMatch_50; }
	inline void set_trySamplingRateMatch_50(bool value)
	{
		___trySamplingRateMatch_50 = value;
	}

	inline static int32_t get_offset_of_useMicrophoneTypeFallback_51() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___useMicrophoneTypeFallback_51)); }
	inline bool get_useMicrophoneTypeFallback_51() const { return ___useMicrophoneTypeFallback_51; }
	inline bool* get_address_of_useMicrophoneTypeFallback_51() { return &___useMicrophoneTypeFallback_51; }
	inline void set_useMicrophoneTypeFallback_51(bool value)
	{
		___useMicrophoneTypeFallback_51 = value;
	}

	inline static int32_t get_offset_of_recordOnlyWhenJoined_52() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___recordOnlyWhenJoined_52)); }
	inline bool get_recordOnlyWhenJoined_52() const { return ___recordOnlyWhenJoined_52; }
	inline bool* get_address_of_recordOnlyWhenJoined_52() { return &___recordOnlyWhenJoined_52; }
	inline void set_recordOnlyWhenJoined_52(bool value)
	{
		___recordOnlyWhenJoined_52 = value;
	}

	inline static int32_t get_offset_of_recordingStoppedExplicitly_53() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___recordingStoppedExplicitly_53)); }
	inline bool get_recordingStoppedExplicitly_53() const { return ___recordingStoppedExplicitly_53; }
	inline bool* get_address_of_recordingStoppedExplicitly_53() { return &___recordingStoppedExplicitly_53; }
	inline void set_recordingStoppedExplicitly_53(bool value)
	{
		___recordingStoppedExplicitly_53 = value;
	}

	inline static int32_t get_offset_of_photonMicrophonesEnumerator_54() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___photonMicrophonesEnumerator_54)); }
	inline RuntimeObject* get_photonMicrophonesEnumerator_54() const { return ___photonMicrophonesEnumerator_54; }
	inline RuntimeObject** get_address_of_photonMicrophonesEnumerator_54() { return &___photonMicrophonesEnumerator_54; }
	inline void set_photonMicrophonesEnumerator_54(RuntimeObject* value)
	{
		___photonMicrophonesEnumerator_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicrophonesEnumerator_54), (void*)value);
	}

	inline static int32_t get_offset_of_unityMicrophonesEnumerator_55() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___unityMicrophonesEnumerator_55)); }
	inline AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197 * get_unityMicrophonesEnumerator_55() const { return ___unityMicrophonesEnumerator_55; }
	inline AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197 ** get_address_of_unityMicrophonesEnumerator_55() { return &___unityMicrophonesEnumerator_55; }
	inline void set_unityMicrophonesEnumerator_55(AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197 * value)
	{
		___unityMicrophonesEnumerator_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityMicrophonesEnumerator_55), (void*)value);
	}

	inline static int32_t get_offset_of_microphoneDeviceChangeDetectedLock_56() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___microphoneDeviceChangeDetectedLock_56)); }
	inline RuntimeObject * get_microphoneDeviceChangeDetectedLock_56() const { return ___microphoneDeviceChangeDetectedLock_56; }
	inline RuntimeObject ** get_address_of_microphoneDeviceChangeDetectedLock_56() { return &___microphoneDeviceChangeDetectedLock_56; }
	inline void set_microphoneDeviceChangeDetectedLock_56(RuntimeObject * value)
	{
		___microphoneDeviceChangeDetectedLock_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___microphoneDeviceChangeDetectedLock_56), (void*)value);
	}

	inline static int32_t get_offset_of_microphoneDeviceChangeDetected_57() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___microphoneDeviceChangeDetected_57)); }
	inline bool get_microphoneDeviceChangeDetected_57() const { return ___microphoneDeviceChangeDetected_57; }
	inline bool* get_address_of_microphoneDeviceChangeDetected_57() { return &___microphoneDeviceChangeDetected_57; }
	inline void set_microphoneDeviceChangeDetected_57(bool value)
	{
		___microphoneDeviceChangeDetected_57 = value;
	}

	inline static int32_t get_offset_of_U3CRequiresRestartU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___U3CRequiresRestartU3Ek__BackingField_58)); }
	inline bool get_U3CRequiresRestartU3Ek__BackingField_58() const { return ___U3CRequiresRestartU3Ek__BackingField_58; }
	inline bool* get_address_of_U3CRequiresRestartU3Ek__BackingField_58() { return &___U3CRequiresRestartU3Ek__BackingField_58; }
	inline void set_U3CRequiresRestartU3Ek__BackingField_58(bool value)
	{
		___U3CRequiresRestartU3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CTypeConvertU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___U3CTypeConvertU3Ek__BackingField_59)); }
	inline int32_t get_U3CTypeConvertU3Ek__BackingField_59() const { return ___U3CTypeConvertU3Ek__BackingField_59; }
	inline int32_t* get_address_of_U3CTypeConvertU3Ek__BackingField_59() { return &___U3CTypeConvertU3Ek__BackingField_59; }
	inline void set_U3CTypeConvertU3Ek__BackingField_59(int32_t value)
	{
		___U3CTypeConvertU3Ek__BackingField_59 = value;
	}
};

struct Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_StaticFields
{
public:
	// System.Array Photon.Voice.Unity.Recorder::samplingRateValues
	RuntimeArray * ___samplingRateValues_10;
	// Photon.Voice.IDeviceEnumerator Photon.Voice.Unity.Recorder::photonMicrophoneEnumerator
	RuntimeObject* ___photonMicrophoneEnumerator_35;

public:
	inline static int32_t get_offset_of_samplingRateValues_10() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_StaticFields, ___samplingRateValues_10)); }
	inline RuntimeArray * get_samplingRateValues_10() const { return ___samplingRateValues_10; }
	inline RuntimeArray ** get_address_of_samplingRateValues_10() { return &___samplingRateValues_10; }
	inline void set_samplingRateValues_10(RuntimeArray * value)
	{
		___samplingRateValues_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplingRateValues_10), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicrophoneEnumerator_35() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_StaticFields, ___photonMicrophoneEnumerator_35)); }
	inline RuntimeObject* get_photonMicrophoneEnumerator_35() const { return ___photonMicrophoneEnumerator_35; }
	inline RuntimeObject** get_address_of_photonMicrophoneEnumerator_35() { return &___photonMicrophoneEnumerator_35; }
	inline void set_photonMicrophoneEnumerator_35(RuntimeObject* value)
	{
		___photonMicrophoneEnumerator_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicrophoneEnumerator_35), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// VariableJoystick
struct VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B  : public Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873
{
public:
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___fixedPosition_17;

public:
	inline static int32_t get_offset_of_moveThreshold_15() { return static_cast<int32_t>(offsetof(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B, ___moveThreshold_15)); }
	inline float get_moveThreshold_15() const { return ___moveThreshold_15; }
	inline float* get_address_of_moveThreshold_15() { return &___moveThreshold_15; }
	inline void set_moveThreshold_15(float value)
	{
		___moveThreshold_15 = value;
	}

	inline static int32_t get_offset_of_joystickType_16() { return static_cast<int32_t>(offsetof(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B, ___joystickType_16)); }
	inline int32_t get_joystickType_16() const { return ___joystickType_16; }
	inline int32_t* get_address_of_joystickType_16() { return &___joystickType_16; }
	inline void set_joystickType_16(int32_t value)
	{
		___joystickType_16 = value;
	}

	inline static int32_t get_offset_of_fixedPosition_17() { return static_cast<int32_t>(offsetof(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B, ___fixedPosition_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_fixedPosition_17() const { return ___fixedPosition_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_fixedPosition_17() { return &___fixedPosition_17; }
	inline void set_fixedPosition_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___fixedPosition_17 = value;
	}
};


// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704  : public ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE
{
public:
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceConnection::logger
	VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * ___logger_13;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::logLevel
	uint8_t ___logLevel_14;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * ___client_16;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::enableSupportLogger
	bool ___enableSupportLogger_17;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * ___supportLoggerComponent_18;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::updateInterval
	int32_t ___updateInterval_19;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextSendTickCount
	int32_t ___nextSendTickCount_20;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_21;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_22;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_23;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_24;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_25;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___speakerPrefab_26;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::cleanedUp
	bool ___cleanedUp_27;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * ___cachedRemoteVoices_28;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___primaryRecorder_29;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::primaryRecorderInitialized
	bool ___primaryRecorderInitialized_30;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::globalRecordersLogLevel
	uint8_t ___globalRecordersLogLevel_31;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::globalSpeakersLogLevel
	uint8_t ___globalSpeakersLogLevel_32;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::globalPlaybackDelay
	int32_t ___globalPlaybackDelay_33;
	// Photon.Voice.Unity.PlaybackDelaySettings Photon.Voice.Unity.VoiceConnection::globalPlaybackDelaySettings
	PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3  ___globalPlaybackDelaySettings_34;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::linkedSpeakers
	List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * ___linkedSpeakers_35;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder> Photon.Voice.Unity.VoiceConnection::initializedRecorders
	List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 * ___initializedRecorders_36;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * ___Settings_37;
	// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerFactory
	Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D * ___SpeakerFactory_38;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * ___SpeakerLinked_39;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 * ___RemoteVoiceAdded_40;
	// System.Single Photon.Voice.Unity.VoiceConnection::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_41;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::AutoCreateSpeakerIfNotFound
	bool ___AutoCreateSpeakerIfNotFound_42;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::MaxDatagrams
	int32_t ___MaxDatagrams_43;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::SendAsap
	bool ___SendAsap_44;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_45;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_46;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_47;

public:
	inline static int32_t get_offset_of_logger_13() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___logger_13)); }
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * get_logger_13() const { return ___logger_13; }
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F ** get_address_of_logger_13() { return &___logger_13; }
	inline void set_logger_13(VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * value)
	{
		___logger_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_13), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_14() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___logLevel_14)); }
	inline uint8_t get_logLevel_14() const { return ___logLevel_14; }
	inline uint8_t* get_address_of_logLevel_14() { return &___logLevel_14; }
	inline void set_logLevel_14(uint8_t value)
	{
		___logLevel_14 = value;
	}

	inline static int32_t get_offset_of_client_16() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___client_16)); }
	inline LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * get_client_16() const { return ___client_16; }
	inline LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 ** get_address_of_client_16() { return &___client_16; }
	inline void set_client_16(LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * value)
	{
		___client_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_16), (void*)value);
	}

	inline static int32_t get_offset_of_enableSupportLogger_17() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___enableSupportLogger_17)); }
	inline bool get_enableSupportLogger_17() const { return ___enableSupportLogger_17; }
	inline bool* get_address_of_enableSupportLogger_17() { return &___enableSupportLogger_17; }
	inline void set_enableSupportLogger_17(bool value)
	{
		___enableSupportLogger_17 = value;
	}

	inline static int32_t get_offset_of_supportLoggerComponent_18() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___supportLoggerComponent_18)); }
	inline SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * get_supportLoggerComponent_18() const { return ___supportLoggerComponent_18; }
	inline SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 ** get_address_of_supportLoggerComponent_18() { return &___supportLoggerComponent_18; }
	inline void set_supportLoggerComponent_18(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * value)
	{
		___supportLoggerComponent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportLoggerComponent_18), (void*)value);
	}

	inline static int32_t get_offset_of_updateInterval_19() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___updateInterval_19)); }
	inline int32_t get_updateInterval_19() const { return ___updateInterval_19; }
	inline int32_t* get_address_of_updateInterval_19() { return &___updateInterval_19; }
	inline void set_updateInterval_19(int32_t value)
	{
		___updateInterval_19 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCount_20() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___nextSendTickCount_20)); }
	inline int32_t get_nextSendTickCount_20() const { return ___nextSendTickCount_20; }
	inline int32_t* get_address_of_nextSendTickCount_20() { return &___nextSendTickCount_20; }
	inline void set_nextSendTickCount_20(int32_t value)
	{
		___nextSendTickCount_20 = value;
	}

	inline static int32_t get_offset_of_statsResetInterval_21() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___statsResetInterval_21)); }
	inline int32_t get_statsResetInterval_21() const { return ___statsResetInterval_21; }
	inline int32_t* get_address_of_statsResetInterval_21() { return &___statsResetInterval_21; }
	inline void set_statsResetInterval_21(int32_t value)
	{
		___statsResetInterval_21 = value;
	}

	inline static int32_t get_offset_of_nextStatsTickCount_22() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___nextStatsTickCount_22)); }
	inline int32_t get_nextStatsTickCount_22() const { return ___nextStatsTickCount_22; }
	inline int32_t* get_address_of_nextStatsTickCount_22() { return &___nextStatsTickCount_22; }
	inline void set_nextStatsTickCount_22(int32_t value)
	{
		___nextStatsTickCount_22 = value;
	}

	inline static int32_t get_offset_of_statsReferenceTime_23() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___statsReferenceTime_23)); }
	inline float get_statsReferenceTime_23() const { return ___statsReferenceTime_23; }
	inline float* get_address_of_statsReferenceTime_23() { return &___statsReferenceTime_23; }
	inline void set_statsReferenceTime_23(float value)
	{
		___statsReferenceTime_23 = value;
	}

	inline static int32_t get_offset_of_referenceFramesLost_24() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___referenceFramesLost_24)); }
	inline int32_t get_referenceFramesLost_24() const { return ___referenceFramesLost_24; }
	inline int32_t* get_address_of_referenceFramesLost_24() { return &___referenceFramesLost_24; }
	inline void set_referenceFramesLost_24(int32_t value)
	{
		___referenceFramesLost_24 = value;
	}

	inline static int32_t get_offset_of_referenceFramesReceived_25() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___referenceFramesReceived_25)); }
	inline int32_t get_referenceFramesReceived_25() const { return ___referenceFramesReceived_25; }
	inline int32_t* get_address_of_referenceFramesReceived_25() { return &___referenceFramesReceived_25; }
	inline void set_referenceFramesReceived_25(int32_t value)
	{
		___referenceFramesReceived_25 = value;
	}

	inline static int32_t get_offset_of_speakerPrefab_26() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___speakerPrefab_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_speakerPrefab_26() const { return ___speakerPrefab_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_speakerPrefab_26() { return &___speakerPrefab_26; }
	inline void set_speakerPrefab_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___speakerPrefab_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speakerPrefab_26), (void*)value);
	}

	inline static int32_t get_offset_of_cleanedUp_27() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___cleanedUp_27)); }
	inline bool get_cleanedUp_27() const { return ___cleanedUp_27; }
	inline bool* get_address_of_cleanedUp_27() { return &___cleanedUp_27; }
	inline void set_cleanedUp_27(bool value)
	{
		___cleanedUp_27 = value;
	}

	inline static int32_t get_offset_of_cachedRemoteVoices_28() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___cachedRemoteVoices_28)); }
	inline List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * get_cachedRemoteVoices_28() const { return ___cachedRemoteVoices_28; }
	inline List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE ** get_address_of_cachedRemoteVoices_28() { return &___cachedRemoteVoices_28; }
	inline void set_cachedRemoteVoices_28(List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * value)
	{
		___cachedRemoteVoices_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedRemoteVoices_28), (void*)value);
	}

	inline static int32_t get_offset_of_primaryRecorder_29() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___primaryRecorder_29)); }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * get_primaryRecorder_29() const { return ___primaryRecorder_29; }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** get_address_of_primaryRecorder_29() { return &___primaryRecorder_29; }
	inline void set_primaryRecorder_29(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		___primaryRecorder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryRecorder_29), (void*)value);
	}

	inline static int32_t get_offset_of_primaryRecorderInitialized_30() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___primaryRecorderInitialized_30)); }
	inline bool get_primaryRecorderInitialized_30() const { return ___primaryRecorderInitialized_30; }
	inline bool* get_address_of_primaryRecorderInitialized_30() { return &___primaryRecorderInitialized_30; }
	inline void set_primaryRecorderInitialized_30(bool value)
	{
		___primaryRecorderInitialized_30 = value;
	}

	inline static int32_t get_offset_of_globalRecordersLogLevel_31() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___globalRecordersLogLevel_31)); }
	inline uint8_t get_globalRecordersLogLevel_31() const { return ___globalRecordersLogLevel_31; }
	inline uint8_t* get_address_of_globalRecordersLogLevel_31() { return &___globalRecordersLogLevel_31; }
	inline void set_globalRecordersLogLevel_31(uint8_t value)
	{
		___globalRecordersLogLevel_31 = value;
	}

	inline static int32_t get_offset_of_globalSpeakersLogLevel_32() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___globalSpeakersLogLevel_32)); }
	inline uint8_t get_globalSpeakersLogLevel_32() const { return ___globalSpeakersLogLevel_32; }
	inline uint8_t* get_address_of_globalSpeakersLogLevel_32() { return &___globalSpeakersLogLevel_32; }
	inline void set_globalSpeakersLogLevel_32(uint8_t value)
	{
		___globalSpeakersLogLevel_32 = value;
	}

	inline static int32_t get_offset_of_globalPlaybackDelay_33() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___globalPlaybackDelay_33)); }
	inline int32_t get_globalPlaybackDelay_33() const { return ___globalPlaybackDelay_33; }
	inline int32_t* get_address_of_globalPlaybackDelay_33() { return &___globalPlaybackDelay_33; }
	inline void set_globalPlaybackDelay_33(int32_t value)
	{
		___globalPlaybackDelay_33 = value;
	}

	inline static int32_t get_offset_of_globalPlaybackDelaySettings_34() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___globalPlaybackDelaySettings_34)); }
	inline PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3  get_globalPlaybackDelaySettings_34() const { return ___globalPlaybackDelaySettings_34; }
	inline PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3 * get_address_of_globalPlaybackDelaySettings_34() { return &___globalPlaybackDelaySettings_34; }
	inline void set_globalPlaybackDelaySettings_34(PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3  value)
	{
		___globalPlaybackDelaySettings_34 = value;
	}

	inline static int32_t get_offset_of_linkedSpeakers_35() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___linkedSpeakers_35)); }
	inline List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * get_linkedSpeakers_35() const { return ___linkedSpeakers_35; }
	inline List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F ** get_address_of_linkedSpeakers_35() { return &___linkedSpeakers_35; }
	inline void set_linkedSpeakers_35(List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * value)
	{
		___linkedSpeakers_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkedSpeakers_35), (void*)value);
	}

	inline static int32_t get_offset_of_initializedRecorders_36() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___initializedRecorders_36)); }
	inline List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 * get_initializedRecorders_36() const { return ___initializedRecorders_36; }
	inline List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 ** get_address_of_initializedRecorders_36() { return &___initializedRecorders_36; }
	inline void set_initializedRecorders_36(List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 * value)
	{
		___initializedRecorders_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializedRecorders_36), (void*)value);
	}

	inline static int32_t get_offset_of_Settings_37() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___Settings_37)); }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * get_Settings_37() const { return ___Settings_37; }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 ** get_address_of_Settings_37() { return &___Settings_37; }
	inline void set_Settings_37(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * value)
	{
		___Settings_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_37), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerFactory_38() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___SpeakerFactory_38)); }
	inline Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D * get_SpeakerFactory_38() const { return ___SpeakerFactory_38; }
	inline Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D ** get_address_of_SpeakerFactory_38() { return &___SpeakerFactory_38; }
	inline void set_SpeakerFactory_38(Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D * value)
	{
		___SpeakerFactory_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerFactory_38), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerLinked_39() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___SpeakerLinked_39)); }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * get_SpeakerLinked_39() const { return ___SpeakerLinked_39; }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 ** get_address_of_SpeakerLinked_39() { return &___SpeakerLinked_39; }
	inline void set_SpeakerLinked_39(Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * value)
	{
		___SpeakerLinked_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerLinked_39), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteVoiceAdded_40() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___RemoteVoiceAdded_40)); }
	inline Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 * get_RemoteVoiceAdded_40() const { return ___RemoteVoiceAdded_40; }
	inline Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 ** get_address_of_RemoteVoiceAdded_40() { return &___RemoteVoiceAdded_40; }
	inline void set_RemoteVoiceAdded_40(Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 * value)
	{
		___RemoteVoiceAdded_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteVoiceAdded_40), (void*)value);
	}

	inline static int32_t get_offset_of_MinimalTimeScaleToDispatchInFixedUpdate_41() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___MinimalTimeScaleToDispatchInFixedUpdate_41)); }
	inline float get_MinimalTimeScaleToDispatchInFixedUpdate_41() const { return ___MinimalTimeScaleToDispatchInFixedUpdate_41; }
	inline float* get_address_of_MinimalTimeScaleToDispatchInFixedUpdate_41() { return &___MinimalTimeScaleToDispatchInFixedUpdate_41; }
	inline void set_MinimalTimeScaleToDispatchInFixedUpdate_41(float value)
	{
		___MinimalTimeScaleToDispatchInFixedUpdate_41 = value;
	}

	inline static int32_t get_offset_of_AutoCreateSpeakerIfNotFound_42() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___AutoCreateSpeakerIfNotFound_42)); }
	inline bool get_AutoCreateSpeakerIfNotFound_42() const { return ___AutoCreateSpeakerIfNotFound_42; }
	inline bool* get_address_of_AutoCreateSpeakerIfNotFound_42() { return &___AutoCreateSpeakerIfNotFound_42; }
	inline void set_AutoCreateSpeakerIfNotFound_42(bool value)
	{
		___AutoCreateSpeakerIfNotFound_42 = value;
	}

	inline static int32_t get_offset_of_MaxDatagrams_43() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___MaxDatagrams_43)); }
	inline int32_t get_MaxDatagrams_43() const { return ___MaxDatagrams_43; }
	inline int32_t* get_address_of_MaxDatagrams_43() { return &___MaxDatagrams_43; }
	inline void set_MaxDatagrams_43(int32_t value)
	{
		___MaxDatagrams_43 = value;
	}

	inline static int32_t get_offset_of_SendAsap_44() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___SendAsap_44)); }
	inline bool get_SendAsap_44() const { return ___SendAsap_44; }
	inline bool* get_address_of_SendAsap_44() { return &___SendAsap_44; }
	inline void set_SendAsap_44(bool value)
	{
		___SendAsap_44 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedPerSecondU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___U3CFramesReceivedPerSecondU3Ek__BackingField_45)); }
	inline float get_U3CFramesReceivedPerSecondU3Ek__BackingField_45() const { return ___U3CFramesReceivedPerSecondU3Ek__BackingField_45; }
	inline float* get_address_of_U3CFramesReceivedPerSecondU3Ek__BackingField_45() { return &___U3CFramesReceivedPerSecondU3Ek__BackingField_45; }
	inline void set_U3CFramesReceivedPerSecondU3Ek__BackingField_45(float value)
	{
		___U3CFramesReceivedPerSecondU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPerSecondU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___U3CFramesLostPerSecondU3Ek__BackingField_46)); }
	inline float get_U3CFramesLostPerSecondU3Ek__BackingField_46() const { return ___U3CFramesLostPerSecondU3Ek__BackingField_46; }
	inline float* get_address_of_U3CFramesLostPerSecondU3Ek__BackingField_46() { return &___U3CFramesLostPerSecondU3Ek__BackingField_46; }
	inline void set_U3CFramesLostPerSecondU3Ek__BackingField_46(float value)
	{
		___U3CFramesLostPerSecondU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPercentU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___U3CFramesLostPercentU3Ek__BackingField_47)); }
	inline float get_U3CFramesLostPercentU3Ek__BackingField_47() const { return ___U3CFramesLostPercentU3Ek__BackingField_47; }
	inline float* get_address_of_U3CFramesLostPercentU3Ek__BackingField_47() { return &___U3CFramesLostPercentU3Ek__BackingField_47; }
	inline void set_U3CFramesLostPercentU3Ek__BackingField_47(float value)
	{
		___U3CFramesLostPercentU3Ek__BackingField_47 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_35;

public:
	inline static int32_t get_offset_of_s_NoOptionData_35() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_35)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_35() const { return ___s_NoOptionData_35; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_35() { return &___s_NoOptionData_35; }
	inline void set_s_NoOptionData_35(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_35), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// Photon.Voice.PUN.PhotonVoiceNetwork
struct PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74  : public VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704
{
public:
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::AutoConnectAndJoin
	bool ___AutoConnectAndJoin_49;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::AutoLeaveAndDisconnect
	bool ___AutoLeaveAndDisconnect_50;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::WorkInOfflineMode
	bool ___WorkInOfflineMode_51;
	// Photon.Realtime.EnterRoomParams Photon.Voice.PUN.PhotonVoiceNetwork::voiceRoomParams
	EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * ___voiceRoomParams_52;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::clientCalledConnectAndJoin
	bool ___clientCalledConnectAndJoin_53;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::clientCalledDisconnect
	bool ___clientCalledDisconnect_54;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::clientCalledConnectOnly
	bool ___clientCalledConnectOnly_55;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::internalDisconnect
	bool ___internalDisconnect_56;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::internalConnect
	bool ___internalConnect_57;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::usePunAppSettings
	bool ___usePunAppSettings_61;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::usePunAuthValues
	bool ___usePunAuthValues_62;

public:
	inline static int32_t get_offset_of_AutoConnectAndJoin_49() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___AutoConnectAndJoin_49)); }
	inline bool get_AutoConnectAndJoin_49() const { return ___AutoConnectAndJoin_49; }
	inline bool* get_address_of_AutoConnectAndJoin_49() { return &___AutoConnectAndJoin_49; }
	inline void set_AutoConnectAndJoin_49(bool value)
	{
		___AutoConnectAndJoin_49 = value;
	}

	inline static int32_t get_offset_of_AutoLeaveAndDisconnect_50() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___AutoLeaveAndDisconnect_50)); }
	inline bool get_AutoLeaveAndDisconnect_50() const { return ___AutoLeaveAndDisconnect_50; }
	inline bool* get_address_of_AutoLeaveAndDisconnect_50() { return &___AutoLeaveAndDisconnect_50; }
	inline void set_AutoLeaveAndDisconnect_50(bool value)
	{
		___AutoLeaveAndDisconnect_50 = value;
	}

	inline static int32_t get_offset_of_WorkInOfflineMode_51() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___WorkInOfflineMode_51)); }
	inline bool get_WorkInOfflineMode_51() const { return ___WorkInOfflineMode_51; }
	inline bool* get_address_of_WorkInOfflineMode_51() { return &___WorkInOfflineMode_51; }
	inline void set_WorkInOfflineMode_51(bool value)
	{
		___WorkInOfflineMode_51 = value;
	}

	inline static int32_t get_offset_of_voiceRoomParams_52() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___voiceRoomParams_52)); }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * get_voiceRoomParams_52() const { return ___voiceRoomParams_52; }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E ** get_address_of_voiceRoomParams_52() { return &___voiceRoomParams_52; }
	inline void set_voiceRoomParams_52(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * value)
	{
		___voiceRoomParams_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceRoomParams_52), (void*)value);
	}

	inline static int32_t get_offset_of_clientCalledConnectAndJoin_53() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___clientCalledConnectAndJoin_53)); }
	inline bool get_clientCalledConnectAndJoin_53() const { return ___clientCalledConnectAndJoin_53; }
	inline bool* get_address_of_clientCalledConnectAndJoin_53() { return &___clientCalledConnectAndJoin_53; }
	inline void set_clientCalledConnectAndJoin_53(bool value)
	{
		___clientCalledConnectAndJoin_53 = value;
	}

	inline static int32_t get_offset_of_clientCalledDisconnect_54() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___clientCalledDisconnect_54)); }
	inline bool get_clientCalledDisconnect_54() const { return ___clientCalledDisconnect_54; }
	inline bool* get_address_of_clientCalledDisconnect_54() { return &___clientCalledDisconnect_54; }
	inline void set_clientCalledDisconnect_54(bool value)
	{
		___clientCalledDisconnect_54 = value;
	}

	inline static int32_t get_offset_of_clientCalledConnectOnly_55() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___clientCalledConnectOnly_55)); }
	inline bool get_clientCalledConnectOnly_55() const { return ___clientCalledConnectOnly_55; }
	inline bool* get_address_of_clientCalledConnectOnly_55() { return &___clientCalledConnectOnly_55; }
	inline void set_clientCalledConnectOnly_55(bool value)
	{
		___clientCalledConnectOnly_55 = value;
	}

	inline static int32_t get_offset_of_internalDisconnect_56() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___internalDisconnect_56)); }
	inline bool get_internalDisconnect_56() const { return ___internalDisconnect_56; }
	inline bool* get_address_of_internalDisconnect_56() { return &___internalDisconnect_56; }
	inline void set_internalDisconnect_56(bool value)
	{
		___internalDisconnect_56 = value;
	}

	inline static int32_t get_offset_of_internalConnect_57() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___internalConnect_57)); }
	inline bool get_internalConnect_57() const { return ___internalConnect_57; }
	inline bool* get_address_of_internalConnect_57() { return &___internalConnect_57; }
	inline void set_internalConnect_57(bool value)
	{
		___internalConnect_57 = value;
	}

	inline static int32_t get_offset_of_usePunAppSettings_61() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___usePunAppSettings_61)); }
	inline bool get_usePunAppSettings_61() const { return ___usePunAppSettings_61; }
	inline bool* get_address_of_usePunAppSettings_61() { return &___usePunAppSettings_61; }
	inline void set_usePunAppSettings_61(bool value)
	{
		___usePunAppSettings_61 = value;
	}

	inline static int32_t get_offset_of_usePunAuthValues_62() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74, ___usePunAuthValues_62)); }
	inline bool get_usePunAuthValues_62() const { return ___usePunAuthValues_62; }
	inline bool* get_address_of_usePunAuthValues_62() { return &___usePunAuthValues_62; }
	inline void set_usePunAuthValues_62(bool value)
	{
		___usePunAuthValues_62 = value;
	}
};

struct PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74_StaticFields
{
public:
	// System.Object Photon.Voice.PUN.PhotonVoiceNetwork::instanceLock
	RuntimeObject * ___instanceLock_58;
	// Photon.Voice.PUN.PhotonVoiceNetwork Photon.Voice.PUN.PhotonVoiceNetwork::instance
	PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * ___instance_59;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::instantiated
	bool ___instantiated_60;

public:
	inline static int32_t get_offset_of_instanceLock_58() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74_StaticFields, ___instanceLock_58)); }
	inline RuntimeObject * get_instanceLock_58() const { return ___instanceLock_58; }
	inline RuntimeObject ** get_address_of_instanceLock_58() { return &___instanceLock_58; }
	inline void set_instanceLock_58(RuntimeObject * value)
	{
		___instanceLock_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceLock_58), (void*)value);
	}

	inline static int32_t get_offset_of_instance_59() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74_StaticFields, ___instance_59)); }
	inline PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * get_instance_59() const { return ___instance_59; }
	inline PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 ** get_address_of_instance_59() { return &___instance_59; }
	inline void set_instance_59(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * value)
	{
		___instance_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_59), (void*)value);
	}

	inline static int32_t get_offset_of_instantiated_60() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74_StaticFields, ___instantiated_60)); }
	inline bool get_instantiated_60() const { return ___instantiated_60; }
	inline bool* get_address_of_instantiated_60() { return &___instantiated_60; }
	inline void set_instantiated_60(bool value)
	{
		___instantiated_60 = value;
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * m_Items[1];

public:
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE2D0D933C072AD75AFEBE18BDEBB5B82D3D1BC27_gshared (Action_2_tD3D7B4C276C5182ACF0A4B175305DF0854686FC4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>::.ctor(System.Func`1<System.Double>,System.Double,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_gshared (ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 * __this, Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * ___clockSec0, double ___frequency1, int32_t ___samplingRate2, int32_t ___channels3, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method);

// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m17B8532D1DB7D870295DE9E82CBC17735F8984F8_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newMoveDirection0, const RuntimeMethod* method);
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m3B98228935C1AD2E76356732A798A3EFD8CA4186_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newLookDirection0, const RuntimeMethod* method);
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mEEC05639651E0D3AD679B923D34C3B58F52EC722_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, bool ___newJumpState0, const RuntimeMethod* method);
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_m4A4EB5B45A168786D74E233577623FC38D74E4F3_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, bool ___newSprintState0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m4D03DEE754B7C8716A55432137E088D08626C8A8 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, bool ___buttonState0, const RuntimeMethod* method);
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m52515C61D5E82F76620D03994ED97A1F34CBA6F5 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
inline void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m0ACFFD29C51B77207E694FD86F4A84338B030207 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method);
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_m4AB1A15DA5C6DB622E55C21E6E7ED263FED7DB77 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ApplySizeDelta_m62A3D273C1B2063E387278930C27828AAAA3D706 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ClampValuesToMagnitude_m8B710D2ABFEAB67917267BE7B2E253A5C572907D (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ApplyInversionFilter_mD507E46BD99810E9B18F0AD4BDD843FACF70536B (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mD4C7421AB87B90625945F3B8B1F58F611492E64A (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(!0)
inline void UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_ClampMagnitude_m4FFD90D646E17E41F799FC78FF652A2D75AD5074 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_m51B67357EC3DF48051879F1DA61B76F4A4BBD9F7 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m46D4991D16E65721ED9A06C538841C45A728151D (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___targetObject0, bool ___newState1, const RuntimeMethod* method);
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m4D0B42E5C70893DFB5408E623076C9F5B7FE3A7A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_GetDeltaBetweenPositions_mA12C35395F0319B30B47A5791759AB8FE240186A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPosition1, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_ClampValuesToMagnitude_m2B1CBB4A20BE4004AD520E5EC427C664E9315EFC (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_ApplyInversionFilter_m8FEABDE5FD0BF979E96732DCF3123203E6B755E3 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m1ECAF819A22591A0241D790EFC936ECB3985CE68 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m5B003E6987A1518CEB604D6B1796A58DE5D04E4A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RectTransform::get_anchoredPosition3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RectTransform_get_anchoredPosition3D_mA9E9CCB2E97E4DCE93CF7194856F831E48F678A2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_mD232BFB736C35B6F3367E1D63BBA6FAE098DA761 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, int32_t ___axis0, float ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Toggle::SetIsOnWithoutNotify(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_SetIsOnWithoutNotify_mD07469424A970A7894F38F2AE3A84CC465AE7952 (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::SetTextWithoutNotify(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_SetTextWithoutNotify_mD200F65D8CBD6B825CCF437FBB30BACD97365893 (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72 (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_gshared)(__this, ___call0, method);
}
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * InputField_get_onValueChanged_mAF7D77CCBED34CF4A46A9E4EA77405D790C58449_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * InputField_get_onEndEdit_m0C979736255DF520629D269CCDD6452EF4F52EB5_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2 (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared)(__this, ___call0, method);
}
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, const RuntimeMethod*))UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared)(__this, ___call0, method);
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, int32_t ___joystickType0, const RuntimeMethod* method);
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method);
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77 (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1)
inline void Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918 (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, String_t* ___key0, VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, String_t*, VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m531F00E4DD93A41FB0244FB71343FC9FB07DC4DF_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1)
inline void Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * __this, String_t* ___key0, VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *, String_t*, VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m614D75F3386EB15F081A2F5D548B5743589BE939_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(!0)
inline bool Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(!0)
inline bool Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0)
inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454 (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
inline void Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069 (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
inline void Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86 (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle_Invoke_m441C48528BBCA159F08298CD43CE4C5EFFB54333 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, bool ___debugMode0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// Photon.Voice.PUN.PhotonVoiceNetwork Photon.Voice.PUN.PhotonVoiceNetwork::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * PhotonVoiceNetwork_get_Instance_m5AEBB7F9D6C8EBD54066D34F73F836DC4EE74C50 (const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged__ctor_mA59D0B679F18AB486880E7C054DA3E807456588A (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::add_CameraChanged(ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_add_CameraChanged_m45F5A6F0879B20B0A3061C132E5970300A1BA873 (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle__ctor_m7909BC3D6DAC950DD95529FEF4D930C328358BBF (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::add_ToggleValueChanged(ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_add_ToggleValueChanged_mC291E38AF2E9024712900741A9B62698437CE3AD (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated__ctor_m9CFC16725506B0EB456824BBE5A69A3A183DDB31 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::add_CharacterInstantiated(ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_add_CharacterInstantiated_mB6903B3B34350A8DEC6FBFA84DED1F602522BE5C (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125 (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE2D0D933C072AD75AFEBE18BDEBB5B82D3D1BC27_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::add_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_add_StateChanged_mC09135830AD84BE629CA0E21EDB34CC26E03B985 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::remove_CameraChanged(ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_remove_CameraChanged_m14F17DE87B9E6FFCF2A3CD7522ED2672471BB5F6 (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::remove_ToggleValueChanged(ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_remove_ToggleValueChanged_m08EBC194602620C5D37A838CA5089B9A0B7F8A2F (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::remove_CharacterInstantiated(ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_remove_CharacterInstantiated_m393AA3818741639001EB0D77A706764AA634F757 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::remove_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_remove_StateChanged_mA3768479C991BF95AE892144D299ABBD1E233DE3 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Photon.Voice.PUN.PhotonVoiceView>()
inline PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * GameObject_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m896E38D46B0FAA75134367CE2E3E8C9BB4C3D11A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsRecorder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsRecorder_m5FBE3C99A3E5D7CA731F9106E5D511B108BB66A9_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method);
// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::get_RecorderInUse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.AudioListener::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344 (const RuntimeMethod* method);
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507 (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_VoiceDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_VoiceDetection_m7D38C6673F7E7F8003C8F4C46F6AE700C07BBE70 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Demos.DemoPunVoice.VoiceDemoUI::get_DebugMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDemoUI_get_DebugMode_m24BFF808B505456EDC071DF0DC28C714593AE09D_inline (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_TransmitEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_m8FACE0F380E6057DD99D43C1218C0DA5E39A9F87_inline (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_DebugEchoMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_DebugEchoMode_m279F55AE211E7C8D6F713853B4544B8D459D8E7F (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE (float ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_TransmitEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_TransmitEnabled_m2B0EDFB9B03B5ACC9696C386D52A504CA3AE502E (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_VoiceDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_VoiceDetection_m626DC6051F6D6CD9425B4026509D126779196C18 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_DebugEchoMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_DebugEchoMode_mB67281658E5EE43DF8567E5F04CE74EB387E547E (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::set_DebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_set_DebugMode_m98A418EA0D7AE6339248CE001440AD460984877A (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m799BE7D7EFD04E73CA30D6495DF4082CA7DBCAD0 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m27A52DC80581051397D5F6D3DF4B62AFD8D31402 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Toggle>()
inline ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* GameObject_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m164F8D3FD5DD2890F7E16B2E182DE5C67AA74473 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::InitToggles(UnityEngine.UI.Toggle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_InitToggles_m5A34795787B3950C32A42CBEC3F0916F7B9EFE1D (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* ___toggles0, const RuntimeMethod* method);
// System.String[] Photon.Voice.Unity.UnityMicrophone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* UnityMicrophone_get_devices_m4594B0F2D4AD7CE10981C9C97E0B78589ED60558 (const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Pun.PhotonNetwork::get_NetworkClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_NetworkClientState_mF9661E8C084AC0AE409BD8043B309CDB1145753B (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_Disconnect_m1AE13FDE0189DA4E1307975170ADFD5C8CBAF8AA (const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::ConnectUsingSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_ConnectUsingSettings_m8E6DA5DA6FA94A6006E8F84D3C7B1BB848C2D1E8 (const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Voice.Unity.VoiceConnection::get_ClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_Disconnect_m7DD9B908D46B3A8B66AECE44E9F2DEB1950DB380 (PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::ConnectAndJoinRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceNetwork_ConnectAndJoinRoom_mA2D8FFE285E0E45BB069891BB930F939BACB6D07 (PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_VoiceDetectorCalibrating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_VoiceDetectorCalibrating_m14C5FE986E06B0D060C060C0AA0A4142D46A2EDB (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::VoiceDetectorCalibrate(System.Int32,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_VoiceDetectorCalibrate_m87A7B4D26E26A85D430CC42A39726E6A5A2A5C8F (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, int32_t ___durationMs0, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___detectionEndedCallback1, const RuntimeMethod* method);
// Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.Unity.Recorder::get_LevelMeter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Recorder_get_LevelMeter_m3E6FEA516FB3F0521A089639FF20B8FC37AC3D80 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::UpdateUiBasedOnVoiceState(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_UpdateUiBasedOnVoiceState_m59107C6DA655112ED3C7E8DEA0F1A636C89E8243 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, int32_t ___voiceClientState0, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_InRoom_mBCA643500C56F559E410CECDA590F25BEB8B08CE (const RuntimeMethod* method);
// Photon.Realtime.Player Photon.Pun.PhotonView::get_Owner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.Player::get_NickName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Player_get_NickName_mCDE13B308E32D797A42DCECCCCD30B23EFADD36A_inline (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m486C4129232F0F15151DA882C1C9F1DFDFE5D047 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m50F9D1236BD4CFA9C3136E0D9321DF9604D5C021 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m6EFB512B492D6FD6475DE35B931F27CE5B107741 (String_t* ___name0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA13F1CA6D82A861B235CF9E57EB61D204E4AD2FC (U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>::.ctor(System.Func`1<System.Double>,System.Double,System.Int32,System.Int32)
inline void ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A (ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 * __this, Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * ___clockSec0, double ___frequency1, int32_t ___samplingRate2, int32_t ___channels3, const RuntimeMethod* method)
{
	((  void (*) (ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 *, Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 *, double, int32_t, int32_t, const RuntimeMethod*))ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_gshared)(__this, ___clockSec0, ___frequency1, ___samplingRate2, ___channels3, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7 (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, const RuntimeMethod*))UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7 (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C *, const RuntimeMethod*))UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StarterAssets.UICanvasControllerInput::VirtualMoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualMoveInput_m3DCA73AB02D0D9D4AF69809D2EA9A388A9DD2D20 (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___virtualMoveDirection0, const RuntimeMethod* method)
{
	{
		// starterAssetsInputs.MoveInput(virtualMoveDirection);
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get_starterAssetsInputs_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___virtualMoveDirection0;
		NullCheck(L_0);
		StarterAssetsInputs_MoveInput_m17B8532D1DB7D870295DE9E82CBC17735F8984F8_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualLookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualLookInput_mDCD0EF95A5FD1C0351C6EF330F0E21A2BC5B3BD7 (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___virtualLookDirection0, const RuntimeMethod* method)
{
	{
		// starterAssetsInputs.LookInput(virtualLookDirection);
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get_starterAssetsInputs_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___virtualLookDirection0;
		NullCheck(L_0);
		StarterAssetsInputs_LookInput_m3B98228935C1AD2E76356732A798A3EFD8CA4186_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualJumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualJumpInput_m4BF9A688729DE9CAB0368373B4508833CBAF158A (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, bool ___virtualJumpState0, const RuntimeMethod* method)
{
	{
		// starterAssetsInputs.JumpInput(virtualJumpState);
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get_starterAssetsInputs_4();
		bool L_1 = ___virtualJumpState0;
		NullCheck(L_0);
		StarterAssetsInputs_JumpInput_mEEC05639651E0D3AD679B923D34C3B58F52EC722_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualSprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualSprintInput_mC1DD56717CE777F772956FF98DA099A0C0BFD9B3 (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, bool ___virtualSprintState0, const RuntimeMethod* method)
{
	{
		// starterAssetsInputs.SprintInput(virtualSprintState);
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get_starterAssetsInputs_4();
		bool L_1 = ___virtualSprintState0;
		NullCheck(L_0);
		StarterAssetsInputs_SprintInput_m4A4EB5B45A168786D74E233577623FC38D74E4F3_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput__ctor_mBBEE562E79321A1939A2B006E6654FA85259EDEB (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, const RuntimeMethod* method)
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
// System.Void UIVirtualButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerDown_m9B8BBCAB64E2E6799E23311EAB29104788AF5607 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OutputButtonStateValue(true);
		UIVirtualButton_OutputButtonStateValue_m4D03DEE754B7C8716A55432137E088D08626C8A8(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerUp_m8928883C1D8EEB4E6BD673089D61C61C15FD6E26 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OutputButtonStateValue(false);
		UIVirtualButton_OutputButtonStateValue_m4D03DEE754B7C8716A55432137E088D08626C8A8(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerClick_m8C77F496BC858EC51F8BDA3759219187DB267A3F (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OutputButtonClickEvent();
		UIVirtualButton_OutputButtonClickEvent_m52515C61D5E82F76620D03994ED97A1F34CBA6F5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m4D03DEE754B7C8716A55432137E088D08626C8A8 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, bool ___buttonState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonStateOutputEvent.Invoke(buttonState);
		BoolEvent_tD84A3E3A4245DFD9FA5D608A5ADA77DBDFB6BD56 * L_0 = __this->get_buttonStateOutputEvent_4();
		bool L_1 = ___buttonState0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m52515C61D5E82F76620D03994ED97A1F34CBA6F5 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, const RuntimeMethod* method)
{
	{
		// buttonClickOutputEvent.Invoke();
		Event_tB8168EB885996D80674A82913E2B33B4915A9E23 * L_0 = __this->get_buttonClickOutputEvent_5();
		NullCheck(L_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton__ctor_mC6B209AB41BF45B6C0B9B30278CDD72DA776983A (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, const RuntimeMethod* method)
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
// System.Void UIVirtualJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_Start_m67CF1EE6291EACAF0C3A1B0DB535BD525EA479F4 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, const RuntimeMethod* method)
{
	{
		// SetupHandle();
		UIVirtualJoystick_SetupHandle_m0ACFFD29C51B77207E694FD86F4A84338B030207(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m0ACFFD29C51B77207E694FD86F4A84338B030207 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94(__this, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerDown_mEC473003FA53CFFFBD478CD5E1A3BA3509AE1E12 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OnDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		UIVirtualJoystick_OnDrag_m4AB1A15DA5C6DB622E55C21E6E7ED263FED7DB77(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_m4AB1A15DA5C6DB622E55C21E6E7ED263FED7DB77 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out Vector2 position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_containerRect_4();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_0, L_2, L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		// position = ApplySizeDelta(position);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = UIVirtualJoystick_ApplySizeDelta_m62A3D273C1B2063E387278930C27828AAAA3D706(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Vector2 clampedPosition = ClampValuesToMagnitude(position);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = UIVirtualJoystick_ClampValuesToMagnitude_m8B710D2ABFEAB67917267BE7B2E253A5C572907D(__this, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// Vector2 outputPosition = ApplyInversionFilter(position);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = UIVirtualJoystick_ApplyInversionFilter_mD507E46BD99810E9B18F0AD4BDD843FACF70536B(__this, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_2;
		float L_13 = __this->get_magnitudeMultiplier_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_12, L_13, /*hidden argument*/NULL);
		UIVirtualJoystick_OutputPointerEventValue_mD4C7421AB87B90625945F3B8B1F58F611492E64A(__this, L_14, /*hidden argument*/NULL);
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0063;
		}
	}
	{
		// UpdateHandleRectPosition(clampedPosition * joystickRange);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_1;
		float L_18 = __this->get_joystickRange_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_17, L_18, /*hidden argument*/NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94(__this, L_19, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerUp_m0FAFE18C832E0C2A30ACA560276C017A59863614 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OutputPointerEventValue(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualJoystick_OutputPointerEventValue_mD4C7421AB87B90625945F3B8B1F58F611492E64A(__this, L_0, /*hidden argument*/NULL);
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mD4C7421AB87B90625945F3B8B1F58F611492E64A (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joystickOutputEvent.Invoke(pointerPosition);
		Event_t5D63277B4BC67CE95DE0316A422A69420D3A368D * L_0 = __this->get_joystickOutputEvent_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___pointerPosition0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method)
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_handleRect_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___newPosition0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ApplySizeDelta_m62A3D273C1B2063E387278930C27828AAAA3D706 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float x = (position.x/containerRect.sizeDelta.x) * 2.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position0;
		float L_1 = L_0.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = __this->get_containerRect_4();
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		// float y = (position.y/containerRect.sizeDelta.y) * 2.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___position0;
		float L_6 = L_5.get_y_1();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_containerRect_4();
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_1();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_6/(float)L_9)), (float)(2.5f)));
		// return new Vector2(x, y);
		float L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), ((float)il2cpp_codegen_multiply((float)((float)((float)L_1/(float)L_4)), (float)(2.5f))), L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ClampValuesToMagnitude_m8B710D2ABFEAB67917267BE7B2E253A5C572907D (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_ClampMagnitude_m4FFD90D646E17E41F799FC78FF652A2D75AD5074(L_0, (1.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ApplyInversionFilter_mD507E46BD99810E9B18F0AD4BDD843FACF70536B (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->get_invertXOutputValue_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___position0;
		float L_2 = L_1.get_x_0();
		float L_3;
		L_3 = UIVirtualJoystick_InvertValue_m51B67357EC3DF48051879F1DA61B76F4A4BBD9F7(__this, L_2, /*hidden argument*/NULL);
		(&___position0)->set_x_0(L_3);
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->get_invertYOutputValue_9();
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___position0;
		float L_6 = L_5.get_y_1();
		float L_7;
		L_7 = UIVirtualJoystick_InvertValue_m51B67357EC3DF48051879F1DA61B76F4A4BBD9F7(__this, L_6, /*hidden argument*/NULL);
		(&___position0)->set_y_1(L_7);
	}

IL_0036:
	{
		// return position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_m51B67357EC3DF48051879F1DA61B76F4A4BBD9F7 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick__ctor_m3EFA0B88827F62A24F2BFE15B2A782256CFB05F1 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, const RuntimeMethod* method)
{
	{
		// public float joystickRange = 50f;
		__this->set_joystickRange_6((50.0f));
		// public float magnitudeMultiplier = 1f;
		__this->set_magnitudeMultiplier_7((1.0f));
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
// System.Void UIVirtualTouchZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_Start_mA98396B89C28AC97493CB9A80630F0459C7C9350 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, const RuntimeMethod* method)
{
	{
		// SetupHandle();
		UIVirtualTouchZone_SetupHandle_m46D4991D16E65721ED9A06C538841C45A728151D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m46D4991D16E65721ED9A06C538841C45A728151D (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = __this->get_handleRect_5();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699(__this, L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerDown_mCFB81700E80EAD8CB2402BC894448E8CFF7434E4 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out pointerDownPosition);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_containerRect_4();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_pointerDownPosition_10();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_0, L_2, L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_5, /*hidden argument*/NULL);
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = __this->get_handleRect_5();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699(__this, L_10, (bool)1, /*hidden argument*/NULL);
		// UpdateHandleRectPosition(pointerDownPosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = __this->get_pointerDownPosition_10();
		UIVirtualTouchZone_UpdateHandleRectPosition_m4D0B42E5C70893DFB5408E623076C9F5B7FE3A7A(__this, L_11, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnDrag_mAA2371D1A929E0EB173141433B05D2E496433B37 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out currentPointerPosition);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_containerRect_4();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_currentPointerPosition_11();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_0, L_2, L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_5, /*hidden argument*/NULL);
		// Vector2 positionDelta = GetDeltaBetweenPositions(pointerDownPosition, currentPointerPosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_pointerDownPosition_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = __this->get_currentPointerPosition_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = UIVirtualTouchZone_GetDeltaBetweenPositions_mA12C35395F0319B30B47A5791759AB8FE240186A(__this, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// Vector2 clampedPosition = ClampValuesToMagnitude(positionDelta);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = UIVirtualTouchZone_ClampValuesToMagnitude_m2B1CBB4A20BE4004AD520E5EC427C664E9315EFC(__this, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// Vector2 outputPosition = ApplyInversionFilter(clampedPosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = UIVirtualTouchZone_ApplyInversionFilter_m8FEABDE5FD0BF979E96732DCF3123203E6B755E3(__this, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_2;
		float L_15 = __this->get_magnitudeMultiplier_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_14, L_15, /*hidden argument*/NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m1ECAF819A22591A0241D790EFC936ECB3985CE68(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerUp_mE65CFD342E3EFCCD3C0ED8596C845E9020042B05 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointerDownPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_pointerDownPosition_10(L_0);
		// currentPointerPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_11(L_1);
		// OutputPointerEventValue(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m1ECAF819A22591A0241D790EFC936ECB3985CE68(__this, L_2, /*hidden argument*/NULL);
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = __this->get_handleRect_5();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699(__this, L_6, (bool)0, /*hidden argument*/NULL);
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualTouchZone_UpdateHandleRectPosition_m4D0B42E5C70893DFB5408E623076C9F5B7FE3A7A(__this, L_7, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m1ECAF819A22591A0241D790EFC936ECB3985CE68 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchZoneOutputEvent.Invoke(pointerPosition);
		Event_t1E1104A6087ED46DBF720AC59C7A8E63B974639D * L_0 = __this->get_touchZoneOutputEvent_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___pointerPosition0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m4D0B42E5C70893DFB5408E623076C9F5B7FE3A7A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method)
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_handleRect_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___newPosition0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___targetObject0, bool ___newState1, const RuntimeMethod* method)
{
	{
		// targetObject.SetActive(newState);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___targetObject0;
		bool L_1 = ___newState1;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_GetDeltaBetweenPositions_mA12C35395F0319B30B47A5791759AB8FE240186A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPosition1, const RuntimeMethod* method)
{
	{
		// return secondPosition - firstPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___secondPosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___firstPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_ClampValuesToMagnitude_m2B1CBB4A20BE4004AD520E5EC427C664E9315EFC (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_ClampMagnitude_m4FFD90D646E17E41F799FC78FF652A2D75AD5074(L_0, (1.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_ApplyInversionFilter_m8FEABDE5FD0BF979E96732DCF3123203E6B755E3 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->get_invertXOutputValue_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___position0;
		float L_2 = L_1.get_x_0();
		float L_3;
		L_3 = UIVirtualTouchZone_InvertValue_m5B003E6987A1518CEB604D6B1796A58DE5D04E4A(__this, L_2, /*hidden argument*/NULL);
		(&___position0)->set_x_0(L_3);
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->get_invertYOutputValue_9();
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___position0;
		float L_6 = L_5.get_y_1();
		float L_7;
		L_7 = UIVirtualTouchZone_InvertValue_m5B003E6987A1518CEB604D6B1796A58DE5D04E4A(__this, L_6, /*hidden argument*/NULL);
		(&___position0)->set_y_1(L_7);
	}

IL_0036:
	{
		// return position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m5B003E6987A1518CEB604D6B1796A58DE5D04E4A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualTouchZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone__ctor_m74665B8EF96FBD3D7C35B545E662FEE10C11A2A8 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, const RuntimeMethod* method)
{
	{
		// public float magnitudeMultiplier = 1f;
		__this->set_magnitudeMultiplier_7((1.0f));
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
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetPosX(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetPosX_m3B2C2F049FC8FD68843167524556A88A7800EF80 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___x1, const RuntimeMethod* method)
{
	{
		// rectTransform.anchoredPosition3D = new Vector3(x, rectTransform.anchoredPosition3D.y, rectTransform.anchoredPosition3D.z);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		float L_1 = ___x1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = ___rectTransform0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = RectTransform_get_anchoredPosition3D_mA9E9CCB2E97E4DCE93CF7194856F831E48F678A2(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = ___rectTransform0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = RectTransform_get_anchoredPosition3D_mA9E9CCB2E97E4DCE93CF7194856F831E48F678A2(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_1, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition3D_mD232BFB736C35B6F3367E1D63BBA6FAE098DA761(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetHeight(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetHeight_mB6F3F60845DEC8993B4DCE2D456B0F1F711020C8 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___h1, const RuntimeMethod* method)
{
	{
		// rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, h);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		float L_1 = ___h1;
		NullCheck(L_0);
		RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B(L_0, 1, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetValue(UnityEngine.UI.Toggle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetValue_m47C70B5FADC68C6E053D8A35A9ED2926EA8FEA9F (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle0, bool ___isOn1, const RuntimeMethod* method)
{
	{
		// toggle.SetIsOnWithoutNotify(isOn);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = ___toggle0;
		bool L_1 = ___isOn1;
		NullCheck(L_0);
		Toggle_SetIsOnWithoutNotify_mD07469424A970A7894F38F2AE3A84CC465AE7952(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetValue(UnityEngine.UI.Slider,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetValue_m1FE035BB67A63CA3089093E2B028046B18228EC6 (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider0, float ___v1, const RuntimeMethod* method)
{
	{
		// slider.SetValueWithoutNotify(v);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = ___slider0;
		float L_1 = ___v1;
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(48 /* System.Void UnityEngine.UI.Slider::SetValueWithoutNotify(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetValue(UnityEngine.UI.InputField,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetValue_m9344AB6CD877FAD639998154B0C3E839AA2783F3 (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___inputField0, String_t* ___v1, const RuntimeMethod* method)
{
	{
		// inputField.SetTextWithoutNotify(v);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = ___inputField0;
		String_t* L_1 = ___v1;
		NullCheck(L_0);
		InputField_SetTextWithoutNotify_mD200F65D8CBD6B825CCF437FBB30BACD97365893(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::DestroyChildren(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_DestroyChildren_m318F96D6605FB48622FF1B3F52C8660445E97069 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	{
		// if (!ReferenceEquals(null, transform) && transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// for (int i = transform.childCount - 1; i >= 0; --i)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___transform0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		goto IL_0042;
	}

IL_0016:
	{
		// Transform child = transform.GetChild(i);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___transform0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// if (child && child.gameObject)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003e;
		}
	}
	{
		// Object.Destroy(child.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_14, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// for (int i = transform.childCount - 1; i >= 0; --i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = transform.childCount - 1; i >= 0; --i)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// transform.DetachChildren();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = ___transform0;
		NullCheck(L_17);
		Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2(L_17, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::Hide(UnityEngine.CanvasGroup,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_Hide_mFDBB1F2F80D102C513A59949AE537F43B311640E (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___canvasGroup0, bool ___blockRaycasts1, bool ___interactable2, const RuntimeMethod* method)
{
	{
		// canvasGroup.alpha = 0f;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = ___canvasGroup0;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_0, (0.0f), /*hidden argument*/NULL);
		// canvasGroup.blocksRaycasts = blockRaycasts;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_1 = ___canvasGroup0;
		bool L_2 = ___blockRaycasts1;
		NullCheck(L_1);
		CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A(L_1, L_2, /*hidden argument*/NULL);
		// canvasGroup.interactable = interactable;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_3 = ___canvasGroup0;
		bool L_4 = ___interactable2;
		NullCheck(L_3);
		CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::Show(UnityEngine.CanvasGroup,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_Show_m8264A4364EAED1F4EBAC155650B7FAF6E409DFDD (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___canvasGroup0, bool ___blockRaycasts1, bool ___interactable2, const RuntimeMethod* method)
{
	{
		// canvasGroup.alpha = 1f;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = ___canvasGroup0;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_0, (1.0f), /*hidden argument*/NULL);
		// canvasGroup.blocksRaycasts = blockRaycasts;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_1 = ___canvasGroup0;
		bool L_2 = ___blockRaycasts1;
		NullCheck(L_1);
		CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A(L_1, L_2, /*hidden argument*/NULL);
		// canvasGroup.interactable = interactable;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_3 = ___canvasGroup0;
		bool L_4 = ___interactable2;
		NullCheck(L_3);
		CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.UiExtensions::IsHidden(UnityEngine.CanvasGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UiExtensions_IsHidden_mD9EF1C4F5CE714962312D61ADF176624EC651E59 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___canvasGroup0, const RuntimeMethod* method)
{
	{
		// return canvasGroup.alpha <= 0f;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = ___canvasGroup0;
		NullCheck(L_0);
		float L_1;
		L_1 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((!(((float)L_1) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Photon.Voice.Unity.Demos.UiExtensions::IsShown(UnityEngine.CanvasGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UiExtensions_IsShown_m17B008C2522CBC772E77026245981098B1A88931 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___canvasGroup0, const RuntimeMethod* method)
{
	{
		// return canvasGroup.alpha > 0f;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = ___canvasGroup0;
		NullCheck(L_0);
		float L_1;
		L_1 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_0, /*hidden argument*/NULL);
		return (bool)((((float)L_1) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetSingleOnClickCallback(UnityEngine.UI.Button,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetSingleOnClickCallback_mE6B27089F34E435F56C46A61E74967EBE2FC0575 (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___action1, const RuntimeMethod* method)
{
	{
		// button.onClick.RemoveAllListeners();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = ___button0;
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_1, /*hidden argument*/NULL);
		// button.onClick.AddListener(action);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = ___button0;
		NullCheck(L_2);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_3;
		L_3 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_2, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_4 = ___action1;
		NullCheck(L_3);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetSingleOnValueChangedCallback(UnityEngine.UI.Toggle,UnityEngine.Events.UnityAction`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetSingleOnValueChangedCallback_mDABC4D5CDAE7A3A2D3C6DC50F51F6E15DE8C8B6F (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle0, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle.onValueChanged.RemoveAllListeners();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = ___toggle0;
		NullCheck(L_0);
		ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * L_1 = L_0->get_onValueChanged_23();
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_1, /*hidden argument*/NULL);
		// toggle.onValueChanged.AddListener(action);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_2 = ___toggle0;
		NullCheck(L_2);
		ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * L_3 = L_2->get_onValueChanged_23();
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_4 = ___action1;
		NullCheck(L_3);
		UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72(L_3, L_4, /*hidden argument*/UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetSingleOnValueChangedCallback(UnityEngine.UI.InputField,UnityEngine.Events.UnityAction`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetSingleOnValueChangedCallback_m9D390C0A65FA2643A513CC86946C5542027CD93F (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___inputField0, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputField.onValueChanged.RemoveAllListeners();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * L_1;
		L_1 = InputField_get_onValueChanged_mAF7D77CCBED34CF4A46A9E4EA77405D790C58449_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_1, /*hidden argument*/NULL);
		// inputField.onValueChanged.AddListener(action);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = ___inputField0;
		NullCheck(L_2);
		OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * L_3;
		L_3 = InputField_get_onValueChanged_mAF7D77CCBED34CF4A46A9E4EA77405D790C58449_inline(L_2, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_4 = ___action1;
		NullCheck(L_3);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_3, L_4, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetSingleOnEndEditCallback(UnityEngine.UI.InputField,UnityEngine.Events.UnityAction`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetSingleOnEndEditCallback_m241E27273BFD0FB81808221400A3C494C39F79EA (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___inputField0, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputField.onEndEdit.RemoveAllListeners();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * L_1;
		L_1 = InputField_get_onEndEdit_m0C979736255DF520629D269CCDD6452EF4F52EB5_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_1, /*hidden argument*/NULL);
		// inputField.onEndEdit.AddListener(action);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = ___inputField0;
		NullCheck(L_2);
		SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * L_3;
		L_3 = InputField_get_onEndEdit_m0C979736255DF520629D269CCDD6452EF4F52EB5_inline(L_2, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_4 = ___action1;
		NullCheck(L_3);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_3, L_4, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetSingleOnValueChangedCallback(UnityEngine.UI.Dropdown,UnityEngine.Events.UnityAction`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetSingleOnValueChangedCallback_mB52B71AEB814C4EC1B616AF6ABC4614912ECB99A (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___inputField0, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputField.onValueChanged.RemoveAllListeners();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_0 = ___inputField0;
		NullCheck(L_0);
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_1;
		L_1 = Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_1, /*hidden argument*/NULL);
		// inputField.onValueChanged.AddListener(action);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_2 = ___inputField0;
		NullCheck(L_2);
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_3;
		L_3 = Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline(L_2, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_4 = ___action1;
		NullCheck(L_3);
		UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2(L_3, L_4, /*hidden argument*/UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetSingleOnValueChangedCallback(UnityEngine.UI.Slider,UnityEngine.Events.UnityAction`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetSingleOnValueChangedCallback_m0D33752838F17333917F3BEB25D32FF19EEE5271 (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider0, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider.onValueChanged.RemoveAllListeners();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = ___slider0;
		NullCheck(L_0);
		SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * L_1;
		L_1 = Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_1, /*hidden argument*/NULL);
		// slider.onValueChanged.AddListener(action);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = ___slider0;
		NullCheck(L_2);
		SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * L_3;
		L_3 = Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline(L_2, /*hidden argument*/NULL);
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_4 = ___action1;
		NullCheck(L_3);
		UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C(L_3, L_4, /*hidden argument*/UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var);
		// }
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m417DCAF09D8B811441FED64D4AE2854B00217EFA (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->get_moveThreshold_15();
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_mBF85E683260C0609A921EE7A1AD636E34B8FF5A0 (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_moveThreshold_15(L_1);
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, int32_t ___joystickType0, const RuntimeMethod* method)
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___joystickType0;
		__this->set_joystickType_16(L_0);
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___joystickType0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_fixedPosition_17();
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_2, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m6BDC051D277BBFA7C373186E2825DE5429219169 (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275(__this, /*hidden argument*/NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_1);
		// SetMode(joystickType);
		int32_t L_2 = __this->get_joystickType_16();
		VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m1C27A5FF5BB7149FB39CC27B69DCBF3FB4F45ADB (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_1, L_4, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = ___eventData0;
		Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_mFD7BF52D93B0B573E9227D5E971778EC003A1AC2 (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_m868BD21C589C135310923B8C794AD5BA316C2D3A (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->get_joystickType_16();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->get_moveThreshold_15();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->get_moveThreshold_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___radius2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = L_9;
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_10, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___magnitude0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = ___normalised1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___radius2;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = ___cam3;
		Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7(__this, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m1E03B9859AAB8461C7A42706AE4E31606969C25F (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->set_moveThreshold_15((1.0f));
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_0);
		Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_m01EC1FD139D4DC78B03BD91601E694BB0FD99FCD (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m504FCFBACFAF025BD335F73B9E6365D0877F21FC (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualButtons.ContainsKey(name);
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m4D5DAB8CD547D5200513D860FDA6DC3930150BAC (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1921D3070489B1532E810684C2992B44215A052);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(axis.name))
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = __this->get_m_VirtualAxes_1();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_1 = ___axis0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual axis named " + axis.name + " registered.");
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_4 = ___axis0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE1921D3070489B1532E810684C2992B44215A052, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// m_VirtualAxes.Add(axis.name, axis);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_7 = __this->get_m_VirtualAxes_1();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_8 = ___axis0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(L_8, /*hidden argument*/NULL);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_10 = ___axis0;
		NullCheck(L_7);
		Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918_RuntimeMethod_var);
		// if (!axis.matchWithInputManager)
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_11 = ___axis0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualAxis_get_matchWithInputManager_m531F00E4DD93A41FB0244FB71343FC9FB07DC4DF_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(axis.name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_14 = ___axis0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_13, L_15, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m7AEF52824F354DA313380E110D03D2800F1A9B21 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(button.name))
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = __this->get_m_VirtualButtons_2();
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_1 = ___button0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual button named " + button.name + " registered.");
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_4 = ___button0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// m_VirtualButtons.Add(button.name, button);
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_7 = __this->get_m_VirtualButtons_2();
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_8 = ___button0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(L_8, /*hidden argument*/NULL);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_10 = ___button0;
		NullCheck(L_7);
		Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F_RuntimeMethod_var);
		// if (!button.matchWithInputManager)
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_11 = ___button0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualButton_get_matchWithInputManager_m614D75F3386EB15F081A2F5D548B5743589BE939_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(button.name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_14 = ___button0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_13, L_15, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_mDC436E4797B5E7091462A67AC29559F8DE1FD688 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualAxes.Remove(name);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mFD11E0016A1865D5A0C3E05ED7DC6C3F15DAF2EB (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualButtons.Remove(name);
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_3 = __this->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * VirtualInput_VirtualAxisReference_mB9BFA6AD246B52D158CE8309581FE468DF756914 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name) ? m_VirtualAxes[name] : null;
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *)NULL;
	}

IL_0010:
	{
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_5;
		L_5 = Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_mDEE15F467D72B1B64C99473FFB2E7C3D65175B70 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(f, virtualMousePosition.y, virtualMousePosition.z);
		float L_0 = ___f0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m4A9FB6CF5DBD17EABABABFC241BBCBD2720B3EA9 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, f, virtualMousePosition.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		float L_2 = ___f0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m5EF12D8C9F3A8F7FCC443E682DA1F456AAD5B1DD (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, virtualMousePosition.y, f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		float L_4 = ___f0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m39FA60B6A3FB2A793B3825E6EE488A0262224DCB (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, CrossPlatformInputManager.VirtualAxis> m_VirtualAxes =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualAxis>();
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *)il2cpp_codegen_object_new(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069(L_0, /*hidden argument*/Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069_RuntimeMethod_var);
		__this->set_m_VirtualAxes_1(L_0);
		// protected Dictionary<string, CrossPlatformInputManager.VirtualButton> m_VirtualButtons =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualButton>();
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_1 = (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *)il2cpp_codegen_object_new(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86(L_1, /*hidden argument*/Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86_RuntimeMethod_var);
		__this->set_m_VirtualButtons_2(L_1);
		// protected List<string> m_AlwaysUseVirtual = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_m_AlwaysUseVirtual_3(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean ExitGames.Demos.DemoPunVoice.VoiceDemoUI::get_DebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDemoUI_get_DebugMode_m24BFF808B505456EDC071DF0DC28C714593AE09D (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	{
		// return this.debugMode;
		bool L_0 = __this->get_debugMode_20();
		return L_0;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::set_DebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_set_DebugMode_m98A418EA0D7AE6339248CE001440AD460984877A (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.debugMode = value;
		bool L_0 = ___value0;
		__this->set_debugMode_20(L_0);
		// this.debugGO.SetActive(this.debugMode);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_debugGO_19();
		bool L_2 = __this->get_debugMode_20();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, L_2, /*hidden argument*/NULL);
		// this.voiceDebugText.text = String.Empty;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_voiceDebugText_14();
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// if (this.debugMode)
		bool L_5 = __this->get_debugMode_20();
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		// this.previousDebugLevel = this.punVoiceNetwork.Client.LoadBalancingPeer.DebugOut;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_6 = __this->get_punVoiceNetwork_6();
		NullCheck(L_6);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_7;
		L_7 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_8;
		L_8 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		uint8_t L_9 = ((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_8)->get_DebugOut_20();
		__this->set_previousDebugLevel_22(L_9);
		// this.punVoiceNetwork.Client.LoadBalancingPeer.DebugOut = DebugLevel.ALL;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_10 = __this->get_punVoiceNetwork_6();
		NullCheck(L_10);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_11;
		L_11 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_12;
		L_12 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_12)->set_DebugOut_20(5);
		// }
		goto IL_007e;
	}

IL_0063:
	{
		// this.punVoiceNetwork.Client.LoadBalancingPeer.DebugOut = this.previousDebugLevel;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_13 = __this->get_punVoiceNetwork_6();
		NullCheck(L_13);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_14;
		L_14 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_15;
		L_15 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_14, /*hidden argument*/NULL);
		uint8_t L_16 = __this->get_previousDebugLevel_22();
		NullCheck(L_15);
		((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_15)->set_DebugOut_20(L_16);
	}

IL_007e:
	{
		// if (DebugToggled != null)
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_17 = ((VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var))->get_DebugToggled_23();
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// DebugToggled(this.debugMode);
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_18 = ((VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var))->get_DebugToggled_23();
		bool L_19 = __this->get_debugMode_20();
		NullCheck(L_18);
		OnDebugToggle_Invoke_m441C48528BBCA159F08298CD43CE4C5EFFB54333(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::add_DebugToggled(ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_add_DebugToggled_m626D7643E01E55A437DE5C5BFFADD1DB5E647099 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * V_0 = NULL;
	OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * V_1 = NULL;
	OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * V_2 = NULL;
	{
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_0 = ((VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var))->get_DebugToggled_23();
		V_0 = L_0;
	}

IL_0006:
	{
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_1 = V_0;
		V_1 = L_1;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_2 = V_1;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 *)CastclassSealed((RuntimeObject*)L_4, OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6_il2cpp_TypeInfo_var));
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_5 = V_2;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_6 = V_1;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 *>((OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 **)(((VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var))->get_address_of_DebugToggled_23()), L_5, L_6);
		V_0 = L_7;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_8 = V_0;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 *)L_8) == ((RuntimeObject*)(OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::remove_DebugToggled(ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_remove_DebugToggled_mCFA8202FC43795A78E2628DEA058F04E167C8A07 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * V_0 = NULL;
	OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * V_1 = NULL;
	OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * V_2 = NULL;
	{
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_0 = ((VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var))->get_DebugToggled_23();
		V_0 = L_0;
	}

IL_0006:
	{
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_1 = V_0;
		V_1 = L_1;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_2 = V_1;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 *)CastclassSealed((RuntimeObject*)L_4, OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6_il2cpp_TypeInfo_var));
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_5 = V_2;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_6 = V_1;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 *>((OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 **)(((VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81_il2cpp_TypeInfo_var))->get_address_of_DebugToggled_23()), L_5, L_6);
		V_0 = L_7;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_8 = V_0;
		OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 *)L_8) == ((RuntimeObject*)(OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_Awake_m1EE37A30C41CA41018310890A67D26B66FDEC78B (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.punVoiceNetwork = PhotonVoiceNetwork.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_0;
		L_0 = PhotonVoiceNetwork_get_Instance_m5AEBB7F9D6C8EBD54066D34F73F836DC4EE74C50(/*hidden argument*/NULL);
		__this->set_punVoiceNetwork_6(L_0);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_OnEnable_m086A118CD33DBC19E1B03C3F03DF231260A499A6 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_BetterToggle_ToggleValueChanged_m1CB8111F5EB65BBCCDE2630D14CCFFF5FA102497_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_mA2E1C247ADEBC1140EA16E74016E35A19DD959BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_OnCameraChanged_m9805D3289474A100D896E3232105FF168856B5FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_PunClientStateChanged_mCDD0A99208FEBF6B721A4E1BD68244925E24BE1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_VoiceClientStateChanged_mA738E7B437A2788F9EDB0F016472F735A1879D4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangePOV.CameraChanged += this.OnCameraChanged;
		OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * L_0 = (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A *)il2cpp_codegen_object_new(OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A_il2cpp_TypeInfo_var);
		OnCameraChanged__ctor_mA59D0B679F18AB486880E7C054DA3E807456588A(L_0, __this, (intptr_t)((intptr_t)VoiceDemoUI_OnCameraChanged_m9805D3289474A100D896E3232105FF168856B5FA_RuntimeMethod_var), /*hidden argument*/NULL);
		ChangePOV_add_CameraChanged_m45F5A6F0879B20B0A3061C132E5970300A1BA873(L_0, /*hidden argument*/NULL);
		// BetterToggle.ToggleValueChanged += this.BetterToggle_ToggleValueChanged;
		OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * L_1 = (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B *)il2cpp_codegen_object_new(OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B_il2cpp_TypeInfo_var);
		OnToggle__ctor_m7909BC3D6DAC950DD95529FEF4D930C328358BBF(L_1, __this, (intptr_t)((intptr_t)VoiceDemoUI_BetterToggle_ToggleValueChanged_m1CB8111F5EB65BBCCDE2630D14CCFFF5FA102497_RuntimeMethod_var), /*hidden argument*/NULL);
		BetterToggle_add_ToggleValueChanged_mC291E38AF2E9024712900741A9B62698437CE3AD(L_1, /*hidden argument*/NULL);
		// CharacterInstantiation.CharacterInstantiated += this.CharacterInstantiation_CharacterInstantiated;
		OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * L_2 = (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 *)il2cpp_codegen_object_new(OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62_il2cpp_TypeInfo_var);
		OnCharacterInstantiated__ctor_m9CFC16725506B0EB456824BBE5A69A3A183DDB31(L_2, __this, (intptr_t)((intptr_t)VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_mA2E1C247ADEBC1140EA16E74016E35A19DD959BB_RuntimeMethod_var), /*hidden argument*/NULL);
		CharacterInstantiation_add_CharacterInstantiated_mB6903B3B34350A8DEC6FBFA84DED1F602522BE5C(L_2, /*hidden argument*/NULL);
		// this.punVoiceNetwork.Client.StateChanged += this.VoiceClientStateChanged;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_3 = __this->get_punVoiceNetwork_6();
		NullCheck(L_3);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_4;
		L_4 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_3, /*hidden argument*/NULL);
		Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * L_5 = (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 *)il2cpp_codegen_object_new(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125(L_5, __this, (intptr_t)((intptr_t)VoiceDemoUI_VoiceClientStateChanged_mA738E7B437A2788F9EDB0F016472F735A1879D4A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		NullCheck(L_4);
		LoadBalancingClient_add_StateChanged_mC09135830AD84BE629CA0E21EDB34CC26E03B985(L_4, L_5, /*hidden argument*/NULL);
		// PhotonNetwork.NetworkingClient.StateChanged += this.PunClientStateChanged;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_6 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * L_7 = (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 *)il2cpp_codegen_object_new(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125(L_7, __this, (intptr_t)((intptr_t)VoiceDemoUI_PunClientStateChanged_mCDD0A99208FEBF6B721A4E1BD68244925E24BE1D_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		NullCheck(L_6);
		LoadBalancingClient_add_StateChanged_mC09135830AD84BE629CA0E21EDB34CC26E03B985(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_OnDisable_m3C931087EB980DDFA2E3C3021531A4770B01E430 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_BetterToggle_ToggleValueChanged_m1CB8111F5EB65BBCCDE2630D14CCFFF5FA102497_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_mA2E1C247ADEBC1140EA16E74016E35A19DD959BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_OnCameraChanged_m9805D3289474A100D896E3232105FF168856B5FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_PunClientStateChanged_mCDD0A99208FEBF6B721A4E1BD68244925E24BE1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_VoiceClientStateChanged_mA738E7B437A2788F9EDB0F016472F735A1879D4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangePOV.CameraChanged -= this.OnCameraChanged;
		OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * L_0 = (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A *)il2cpp_codegen_object_new(OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A_il2cpp_TypeInfo_var);
		OnCameraChanged__ctor_mA59D0B679F18AB486880E7C054DA3E807456588A(L_0, __this, (intptr_t)((intptr_t)VoiceDemoUI_OnCameraChanged_m9805D3289474A100D896E3232105FF168856B5FA_RuntimeMethod_var), /*hidden argument*/NULL);
		ChangePOV_remove_CameraChanged_m14F17DE87B9E6FFCF2A3CD7522ED2672471BB5F6(L_0, /*hidden argument*/NULL);
		// BetterToggle.ToggleValueChanged -= this.BetterToggle_ToggleValueChanged;
		OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * L_1 = (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B *)il2cpp_codegen_object_new(OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B_il2cpp_TypeInfo_var);
		OnToggle__ctor_m7909BC3D6DAC950DD95529FEF4D930C328358BBF(L_1, __this, (intptr_t)((intptr_t)VoiceDemoUI_BetterToggle_ToggleValueChanged_m1CB8111F5EB65BBCCDE2630D14CCFFF5FA102497_RuntimeMethod_var), /*hidden argument*/NULL);
		BetterToggle_remove_ToggleValueChanged_m08EBC194602620C5D37A838CA5089B9A0B7F8A2F(L_1, /*hidden argument*/NULL);
		// CharacterInstantiation.CharacterInstantiated -= this.CharacterInstantiation_CharacterInstantiated;
		OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * L_2 = (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 *)il2cpp_codegen_object_new(OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62_il2cpp_TypeInfo_var);
		OnCharacterInstantiated__ctor_m9CFC16725506B0EB456824BBE5A69A3A183DDB31(L_2, __this, (intptr_t)((intptr_t)VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_mA2E1C247ADEBC1140EA16E74016E35A19DD959BB_RuntimeMethod_var), /*hidden argument*/NULL);
		CharacterInstantiation_remove_CharacterInstantiated_m393AA3818741639001EB0D77A706764AA634F757(L_2, /*hidden argument*/NULL);
		// this.punVoiceNetwork.Client.StateChanged -= this.VoiceClientStateChanged;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_3 = __this->get_punVoiceNetwork_6();
		NullCheck(L_3);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_4;
		L_4 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_3, /*hidden argument*/NULL);
		Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * L_5 = (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 *)il2cpp_codegen_object_new(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125(L_5, __this, (intptr_t)((intptr_t)VoiceDemoUI_VoiceClientStateChanged_mA738E7B437A2788F9EDB0F016472F735A1879D4A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		NullCheck(L_4);
		LoadBalancingClient_remove_StateChanged_mA3768479C991BF95AE892144D299ABBD1E233DE3(L_4, L_5, /*hidden argument*/NULL);
		// PhotonNetwork.NetworkingClient.StateChanged -= this.PunClientStateChanged;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_6 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * L_7 = (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 *)il2cpp_codegen_object_new(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125(L_7, __this, (intptr_t)((intptr_t)VoiceDemoUI_PunClientStateChanged_mCDD0A99208FEBF6B721A4E1BD68244925E24BE1D_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		NullCheck(L_6);
		LoadBalancingClient_remove_StateChanged_mA3768479C991BF95AE892144D299ABBD1E233DE3(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::CharacterInstantiation_CharacterInstantiated(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_mA2E1C247ADEBC1140EA16E74016E35A19DD959BB (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m896E38D46B0FAA75134367CE2E3E8C9BB4C3D11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * V_0 = NULL;
	{
		// if (this.recorder) // probably using a global recorder
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// PhotonVoiceView photonVoiceView = character.GetComponent<PhotonVoiceView>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___character0;
		NullCheck(L_2);
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_3;
		L_3 = GameObject_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m896E38D46B0FAA75134367CE2E3E8C9BB4C3D11A(L_2, /*hidden argument*/GameObject_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m896E38D46B0FAA75134367CE2E3E8C9BB4C3D11A_RuntimeMethod_var);
		V_0 = L_3;
		// if (photonVoiceView.IsRecorder)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = PhotonVoiceView_get_IsRecorder_m5FBE3C99A3E5D7CA731F9106E5D511B108BB66A9_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// this.recorder = photonVoiceView.RecorderInUse;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_6 = V_0;
		NullCheck(L_6);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_7;
		L_7 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_6, /*hidden argument*/NULL);
		__this->set_recorder_15(L_7);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::InitToggles(UnityEngine.UI.Toggle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_InitToggles_m5A34795787B3950C32A42CBEC3F0916F7B9EFE1D (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* ___toggles0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * G_B33_0 = NULL;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * G_B32_0 = NULL;
	int32_t G_B34_0 = 0;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * G_B34_1 = NULL;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * G_B38_0 = NULL;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * G_B37_0 = NULL;
	int32_t G_B39_0 = 0;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * G_B39_1 = NULL;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * G_B42_0 = NULL;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * G_B41_0 = NULL;
	int32_t G_B43_0 = 0;
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * G_B43_1 = NULL;
	{
		// if (toggles == null) { return; }
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_0 = ___toggles0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// if (toggles == null) { return; }
		return;
	}

IL_0004:
	{
		// for (int i = 0; i < toggles.Length; i++)
		V_0 = 0;
		goto IL_01cc;
	}

IL_000b:
	{
		// Toggle toggle = toggles[i];
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_1 = ___toggles0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// switch (toggle.name)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		if (!L_7)
		{
			goto IL_01c8;
		}
	}
	{
		String_t* L_8 = V_2;
		uint32_t L_9;
		L_9 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		uint32_t L_10 = V_3;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)836321993)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)251438200))))
		{
			goto IL_00fb;
		}
	}
	{
		uint32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)307911202))))
		{
			goto IL_00a7;
		}
	}
	{
		uint32_t L_13 = V_3;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)836321993))))
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_01c8;
	}

IL_004b:
	{
		uint32_t L_14 = V_3;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-1485144615)))))
		{
			goto IL_0068;
		}
	}
	{
		uint32_t L_15 = V_3;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1063296884))))
		{
			goto IL_007d;
		}
	}
	{
		uint32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1485144615))))
		{
			goto IL_00d1;
		}
	}
	{
		goto IL_01c8;
	}

IL_0068:
	{
		uint32_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1297925255))))
		{
			goto IL_00e6;
		}
	}
	{
		uint32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-543143072))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_01c8;
	}

IL_007d:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_01c8;
	}

IL_0092:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_012a;
		}
	}
	{
		goto IL_01c8;
	}

IL_00a7:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, _stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_014e;
		}
	}
	{
		goto IL_01c8;
	}

IL_00bc:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, _stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_015c;
		}
	}
	{
		goto IL_01c8;
	}

IL_00d1:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_27, _stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0180;
		}
	}
	{
		goto IL_01c8;
	}

IL_00e6:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_29, _stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01c8;
	}

IL_00fb:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_01b7;
		}
	}
	{
		goto IL_01c8;
	}

IL_0110:
	{
		// toggle.isOn = AudioListener.volume <= 0.001f;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_33 = V_1;
		float L_34;
		L_34 = AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344(/*hidden argument*/NULL);
		NullCheck(L_33);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_33, (bool)((((int32_t)((!(((float)L_34) <= ((float)(0.00100000005f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// break;
		goto IL_01c8;
	}

IL_012a:
	{
		// toggle.isOn = this.recorder != null && this.recorder.VoiceDetection;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_35 = V_1;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_36 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_36, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B32_0 = L_35;
		if (!L_37)
		{
			G_B33_0 = L_35;
			goto IL_0146;
		}
	}
	{
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_38 = __this->get_recorder_15();
		NullCheck(L_38);
		bool L_39;
		L_39 = Recorder_get_VoiceDetection_m7D38C6673F7E7F8003C8F4C46F6AE700C07BBE70(L_38, /*hidden argument*/NULL);
		G_B34_0 = ((int32_t)(L_39));
		G_B34_1 = G_B32_0;
		goto IL_0147;
	}

IL_0146:
	{
		G_B34_0 = 0;
		G_B34_1 = G_B33_0;
	}

IL_0147:
	{
		NullCheck(G_B34_1);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(G_B34_1, (bool)G_B34_0, /*hidden argument*/NULL);
		// break;
		goto IL_01c8;
	}

IL_014e:
	{
		// toggle.isOn = this.DebugMode;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_40 = V_1;
		bool L_41;
		L_41 = VoiceDemoUI_get_DebugMode_m24BFF808B505456EDC071DF0DC28C714593AE09D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_40, L_41, /*hidden argument*/NULL);
		// break;
		goto IL_01c8;
	}

IL_015c:
	{
		// toggle.isOn = this.recorder != null && this.recorder.TransmitEnabled;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_42 = V_1;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_43 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_43, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B37_0 = L_42;
		if (!L_44)
		{
			G_B38_0 = L_42;
			goto IL_0178;
		}
	}
	{
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_45 = __this->get_recorder_15();
		NullCheck(L_45);
		bool L_46;
		L_46 = Recorder_get_TransmitEnabled_m8FACE0F380E6057DD99D43C1218C0DA5E39A9F87_inline(L_45, /*hidden argument*/NULL);
		G_B39_0 = ((int32_t)(L_46));
		G_B39_1 = G_B37_0;
		goto IL_0179;
	}

IL_0178:
	{
		G_B39_0 = 0;
		G_B39_1 = G_B38_0;
	}

IL_0179:
	{
		NullCheck(G_B39_1);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(G_B39_1, (bool)G_B39_0, /*hidden argument*/NULL);
		// break;
		goto IL_01c8;
	}

IL_0180:
	{
		// toggle.isOn = this.recorder != null && this.recorder.DebugEchoMode;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_47 = V_1;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_48 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_48, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B41_0 = L_47;
		if (!L_49)
		{
			G_B42_0 = L_47;
			goto IL_019c;
		}
	}
	{
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_50 = __this->get_recorder_15();
		NullCheck(L_50);
		bool L_51;
		L_51 = Recorder_get_DebugEchoMode_m279F55AE211E7C8D6F713853B4544B8D459D8E7F(L_50, /*hidden argument*/NULL);
		G_B43_0 = ((int32_t)(L_51));
		G_B43_1 = G_B41_0;
		goto IL_019d;
	}

IL_019c:
	{
		G_B43_0 = 0;
		G_B43_1 = G_B42_0;
	}

IL_019d:
	{
		NullCheck(G_B43_1);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(G_B43_1, (bool)G_B43_0, /*hidden argument*/NULL);
		// break;
		goto IL_01c8;
	}

IL_01a4:
	{
		// toggle.isOn = this.punVoiceNetwork.AutoConnectAndJoin;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_52 = V_1;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_53 = __this->get_punVoiceNetwork_6();
		NullCheck(L_53);
		bool L_54 = L_53->get_AutoConnectAndJoin_49();
		NullCheck(L_52);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_52, L_54, /*hidden argument*/NULL);
		// break;
		goto IL_01c8;
	}

IL_01b7:
	{
		// toggle.isOn = this.punVoiceNetwork.AutoLeaveAndDisconnect;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_55 = V_1;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_56 = __this->get_punVoiceNetwork_6();
		NullCheck(L_56);
		bool L_57 = L_56->get_AutoLeaveAndDisconnect_50();
		NullCheck(L_55);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_55, L_57, /*hidden argument*/NULL);
	}

IL_01c8:
	{
		// for (int i = 0; i < toggles.Length; i++)
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_01cc:
	{
		// for (int i = 0; i < toggles.Length; i++)
		int32_t L_59 = V_0;
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_60 = ___toggles0;
		NullCheck(L_60);
		if ((((int32_t)L_59) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::BetterToggle_ToggleValueChanged(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_BetterToggle_ToggleValueChanged_m1CB8111F5EB65BBCCDE2630D14CCFFF5FA102497 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// switch (toggle.name)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = ___toggle0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_019b;
		}
	}
	{
		String_t* L_3 = V_0;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		uint32_t L_5 = V_1;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)836321993)))))
		{
			goto IL_0038;
		}
	}
	{
		uint32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)251438200))))
		{
			goto IL_00c5;
		}
	}
	{
		uint32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)307911202))))
		{
			goto IL_00a3;
		}
	}
	{
		uint32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)836321993))))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}

IL_0038:
	{
		uint32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-1485144615)))))
		{
			goto IL_0051;
		}
	}
	{
		uint32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1063296884))))
		{
			goto IL_0062;
		}
	}
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1485144615))))
		{
			goto IL_0092;
		}
	}
	{
		return;
	}

IL_0051:
	{
		uint32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1297925255))))
		{
			goto IL_00b4;
		}
	}
	{
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-543143072))))
		{
			goto IL_0081;
		}
	}
	{
		return;
	}

IL_0062:
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00d6;
		}
	}
	{
		return;
	}

IL_0070:
	{
		String_t* L_16 = V_0;
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_010b;
		}
	}
	{
		return;
	}

IL_0081:
	{
		String_t* L_18 = V_0;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_012d;
		}
	}
	{
		return;
	}

IL_0092:
	{
		String_t* L_20 = V_0;
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_014c;
		}
	}
	{
		return;
	}

IL_00a3:
	{
		String_t* L_22 = V_0;
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_016b;
		}
	}
	{
		return;
	}

IL_00b4:
	{
		String_t* L_24 = V_0;
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0178;
		}
	}
	{
		return;
	}

IL_00c5:
	{
		String_t* L_26 = V_0;
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_018a;
		}
	}
	{
		return;
	}

IL_00d6:
	{
		// if (toggle.isOn)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_28 = ___toggle0;
		NullCheck(L_28);
		bool L_29;
		L_29 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00f4;
		}
	}
	{
		// this.volumeBeforeMute = AudioListener.volume;
		float L_30;
		L_30 = AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344(/*hidden argument*/NULL);
		__this->set_volumeBeforeMute_21(L_30);
		// AudioListener.volume = 0f;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_00f4:
	{
		// AudioListener.volume = this.volumeBeforeMute;
		float L_31 = __this->get_volumeBeforeMute_21();
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE(L_31, /*hidden argument*/NULL);
		// this.volumeBeforeMute = 0f;
		__this->set_volumeBeforeMute_21((0.0f));
		// break;
		return;
	}

IL_010b:
	{
		// if (this.recorder)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_32 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_019b;
		}
	}
	{
		// this.recorder.TransmitEnabled = toggle.isOn;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_34 = __this->get_recorder_15();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_35 = ___toggle0;
		NullCheck(L_35);
		bool L_36;
		L_36 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Recorder_set_TransmitEnabled_m2B0EDFB9B03B5ACC9696C386D52A504CA3AE502E(L_34, L_36, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_012d:
	{
		// if (this.recorder)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_37 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_019b;
		}
	}
	{
		// this.recorder.VoiceDetection = toggle.isOn;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_39 = __this->get_recorder_15();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_40 = ___toggle0;
		NullCheck(L_40);
		bool L_41;
		L_41 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		Recorder_set_VoiceDetection_m626DC6051F6D6CD9425B4026509D126779196C18(L_39, L_41, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_014c:
	{
		// if (this.recorder)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_42 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_019b;
		}
	}
	{
		// this.recorder.DebugEchoMode = toggle.isOn;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_44 = __this->get_recorder_15();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_45 = ___toggle0;
		NullCheck(L_45);
		bool L_46;
		L_46 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		Recorder_set_DebugEchoMode_mB67281658E5EE43DF8567E5F04CE74EB387E547E(L_44, L_46, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_016b:
	{
		// this.DebugMode = toggle.isOn;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_47 = ___toggle0;
		NullCheck(L_47);
		bool L_48;
		L_48 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_47, /*hidden argument*/NULL);
		VoiceDemoUI_set_DebugMode_m98A418EA0D7AE6339248CE001440AD460984877A(__this, L_48, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0178:
	{
		// this.punVoiceNetwork.AutoConnectAndJoin = toggle.isOn;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_49 = __this->get_punVoiceNetwork_6();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_50 = ___toggle0;
		NullCheck(L_50);
		bool L_51;
		L_51 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		L_49->set_AutoConnectAndJoin_49(L_51);
		// break;
		return;
	}

IL_018a:
	{
		// this.punVoiceNetwork.AutoLeaveAndDisconnect = toggle.isOn;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_52 = __this->get_punVoiceNetwork_6();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_53 = ___toggle0;
		NullCheck(L_53);
		bool L_54;
		L_54 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		L_52->set_AutoLeaveAndDisconnect_50(L_54);
	}

IL_019b:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::OnCameraChanged(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_OnCameraChanged_m9805D3289474A100D896E3232105FF168856B5FA (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___newCamera0, const RuntimeMethod* method)
{
	{
		// this.canvas.worldCamera = newCamera;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get_canvas_7();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = ___newCamera0;
		NullCheck(L_0);
		Canvas_set_worldCamera_m799BE7D7EFD04E73CA30D6495DF4082CA7DBCAD0(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_Start_m91E96C535F955C61945E344EA1B339A7171E7390 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m27A52DC80581051397D5F6D3DF4B62AFD8D31402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m164F8D3FD5DD2890F7E16B2E182DE5C67AA74473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_CalibrateButtonOnClick_m3B5F95DAAB7994D8BC2808BE3974F19883EF5688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_PunSwitchOnClick_mBCBF94B2A6F8FFBDFC3B3A1C93511EFE54D9B807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_VoiceSwitchOnClick_mAB712A4E30FED61E21B187D6A2F8ED7D193FDDC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F47CFD9E93EAB89DE69418C07595D68E3B365E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89DD5BD5FB932912D679499612DA2FB3B7E9DCB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E887A1AB7D5B8FCF53494172257215FB0D3892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF94361AE62C8E8418A75AE9F66772AC8DE7EB3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// this.canvas = this.GetComponentInChildren<Canvas>();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0;
		L_0 = Component_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m27A52DC80581051397D5F6D3DF4B62AFD8D31402(__this, /*hidden argument*/Component_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m27A52DC80581051397D5F6D3DF4B62AFD8D31402_RuntimeMethod_var);
		__this->set_canvas_7(L_0);
		// if (this.punSwitch != null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_punSwitch_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// this.punSwitchText = this.punSwitch.GetComponentInChildren<Text>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_punSwitch_8();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_3, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		__this->set_punSwitchText_9(L_4);
		// this.punSwitch.onClick.AddListener(this.PunSwitchOnClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = __this->get_punSwitch_8();
		NullCheck(L_5);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_6;
		L_6 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_5, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_7, __this, (intptr_t)((intptr_t)VoiceDemoUI_PunSwitchOnClick_mBCBF94B2A6F8FFBDFC3B3A1C93511EFE54D9B807_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// if (this.voiceSwitch != null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_voiceSwitch_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0082;
		}
	}
	{
		// this.voiceSwitchText = this.voiceSwitch.GetComponentInChildren<Text>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_voiceSwitch_10();
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11;
		L_11 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_10, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		__this->set_voiceSwitchText_11(L_11);
		// this.voiceSwitch.onClick.AddListener(this.VoiceSwitchOnClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = __this->get_voiceSwitch_10();
		NullCheck(L_12);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_13;
		L_13 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_12, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_14 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_14, __this, (intptr_t)((intptr_t)VoiceDemoUI_VoiceSwitchOnClick_mAB712A4E30FED61E21B187D6A2F8ED7D193FDDC6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// if (this.calibrateButton != null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15 = __this->get_calibrateButton_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bd;
		}
	}
	{
		// this.calibrateButton.onClick.AddListener(this.CalibrateButtonOnClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_17 = __this->get_calibrateButton_12();
		NullCheck(L_17);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_18;
		L_18 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_17, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_19 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_19, __this, (intptr_t)((intptr_t)VoiceDemoUI_CalibrateButtonOnClick_m3B5F95DAAB7994D8BC2808BE3974F19883EF5688_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_18, L_19, /*hidden argument*/NULL);
		// this.calibrateText = this.calibrateButton.GetComponentInChildren<Text>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_20 = __this->get_calibrateButton_12();
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21;
		L_21 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_20, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		__this->set_calibrateText_13(L_21);
	}

IL_00bd:
	{
		// if (this.punState != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = __this->get_punState_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		// this.debugGO = this.punState.transform.parent.gameObject;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = __this->get_punState_4();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_26, /*hidden argument*/NULL);
		__this->set_debugGO_19(L_27);
	}

IL_00e6:
	{
		// this.volumeBeforeMute = AudioListener.volume;
		float L_28;
		L_28 = AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344(/*hidden argument*/NULL);
		__this->set_volumeBeforeMute_21(L_28);
		// this.previousDebugLevel = this.punVoiceNetwork.Client.LoadBalancingPeer.DebugOut;
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_29 = __this->get_punVoiceNetwork_6();
		NullCheck(L_29);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_30;
		L_30 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_31;
		L_31 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		uint8_t L_32 = ((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_31)->get_DebugOut_20();
		__this->set_previousDebugLevel_22(L_32);
		// if (this.globalSettings != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_globalSettings_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0137;
		}
	}
	{
		// this.globalSettings.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_globalSettings_17();
		NullCheck(L_35);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_35, (bool)1, /*hidden argument*/NULL);
		// this.InitToggles(this.globalSettings.GetComponentsInChildren<Toggle>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_globalSettings_17();
		NullCheck(L_36);
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_37;
		L_37 = GameObject_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m164F8D3FD5DD2890F7E16B2E182DE5C67AA74473(L_36, /*hidden argument*/GameObject_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m164F8D3FD5DD2890F7E16B2E182DE5C67AA74473_RuntimeMethod_var);
		VoiceDemoUI_InitToggles_m5A34795787B3950C32A42CBEC3F0916F7B9EFE1D(__this, L_37, /*hidden argument*/NULL);
	}

IL_0137:
	{
		// if (this.devicesInfoText != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = __this->get_devicesInfoText_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_020b;
		}
	}
	{
		// if (UnityMicrophone.devices == null || UnityMicrophone.devices.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40;
		L_40 = UnityMicrophone_get_devices_m4594B0F2D4AD7CE10981C9C97E0B78589ED60558(/*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0157;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41;
		L_41 = UnityMicrophone_get_devices_m4594B0F2D4AD7CE10981C9C97E0B78589ED60558(/*hidden argument*/NULL);
		NullCheck(L_41);
		if ((((RuntimeArray*)L_41)->max_length))
		{
			goto IL_0184;
		}
	}

IL_0157:
	{
		// this.devicesInfoText.enabled = true;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_42 = __this->get_devicesInfoText_18();
		NullCheck(L_42);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_42, (bool)1, /*hidden argument*/NULL);
		// this.devicesInfoText.color = Color.red;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_43 = __this->get_devicesInfoText_18();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44;
		L_44 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_43, L_44);
		// this.devicesInfoText.text = "No microphone device detected!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = __this->get_devicesInfoText_18();
		NullCheck(L_45);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, _stringLiteralDF94361AE62C8E8418A75AE9F66772AC8DE7EB3E);
		// }
		return;
	}

IL_0184:
	{
		// else if (UnityMicrophone.devices.Length == 1)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46;
		L_46 = UnityMicrophone_get_devices_m4594B0F2D4AD7CE10981C9C97E0B78589ED60558(/*hidden argument*/NULL);
		NullCheck(L_46);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_01ab;
		}
	}
	{
		// this.devicesInfoText.text = string.Format("Mic.: {0}", UnityMicrophone.devices[0]);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_47 = __this->get_devicesInfoText_18();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48;
		L_48 = UnityMicrophone_get_devices_m4594B0F2D4AD7CE10981C9C97E0B78589ED60558(/*hidden argument*/NULL);
		NullCheck(L_48);
		int32_t L_49 = 0;
		String_t* L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		String_t* L_51;
		L_51 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral89DD5BD5FB932912D679499612DA2FB3B7E9DCB6, L_50, /*hidden argument*/NULL);
		NullCheck(L_47);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, L_51);
		// }
		return;
	}

IL_01ab:
	{
		// this.devicesInfoText.text = string.Format("Multi.Mic.Devices:\n0. {0} (active)\n", UnityMicrophone.devices[0]);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_52 = __this->get_devicesInfoText_18();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53;
		L_53 = UnityMicrophone_get_devices_m4594B0F2D4AD7CE10981C9C97E0B78589ED60558(/*hidden argument*/NULL);
		NullCheck(L_53);
		int32_t L_54 = 0;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		String_t* L_56;
		L_56 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral7F47CFD9E93EAB89DE69418C07595D68E3B365E4, L_55, /*hidden argument*/NULL);
		NullCheck(L_52);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_52, L_56);
		// for (int i = 1; i < UnityMicrophone.devices.Length; i++)
		V_0 = 1;
		goto IL_0201;
	}

IL_01cb:
	{
		// this.devicesInfoText.text = string.Concat(this.devicesInfoText.text, string.Format("{0}. {1}\n", i, UnityMicrophone.devices[i]));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_57 = __this->get_devicesInfoText_18();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_58 = __this->get_devicesInfoText_18();
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_58);
		int32_t L_60 = V_0;
		int32_t L_61 = L_60;
		RuntimeObject * L_62 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_61);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63;
		L_63 = UnityMicrophone_get_devices_m4594B0F2D4AD7CE10981C9C97E0B78589ED60558(/*hidden argument*/NULL);
		int32_t L_64 = V_0;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		String_t* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		String_t* L_67;
		L_67 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralB1E887A1AB7D5B8FCF53494172257215FB0D3892, L_62, L_66, /*hidden argument*/NULL);
		String_t* L_68;
		L_68 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_59, L_67, /*hidden argument*/NULL);
		NullCheck(L_57);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_68);
		// for (int i = 1; i < UnityMicrophone.devices.Length; i++)
		int32_t L_69 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_0201:
	{
		// for (int i = 1; i < UnityMicrophone.devices.Length; i++)
		int32_t L_70 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71;
		L_71 = UnityMicrophone_get_devices_m4594B0F2D4AD7CE10981C9C97E0B78589ED60558(/*hidden argument*/NULL);
		NullCheck(L_71);
		if ((((int32_t)L_70) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))))))
		{
			goto IL_01cb;
		}
	}

IL_020b:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::PunSwitchOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_PunSwitchOnClick_mBCBF94B2A6F8FFBDFC3B3A1C93511EFE54D9B807 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PhotonNetwork.NetworkClientState == Photon.Realtime.ClientState.Joined)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PhotonNetwork_get_NetworkClientState_mF9661E8C084AC0AE409BD8043B309CDB1145753B(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_000f;
		}
	}
	{
		// PhotonNetwork.Disconnect();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_Disconnect_m1AE13FDE0189DA4E1307975170ADFD5C8CBAF8AA(/*hidden argument*/NULL);
		// }
		return;
	}

IL_000f:
	{
		// else if (PhotonNetwork.NetworkClientState == Photon.Realtime.ClientState.Disconnected ||
		//     PhotonNetwork.NetworkClientState == Photon.Realtime.ClientState.PeerCreated)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = PhotonNetwork_get_NetworkClientState_mF9661E8C084AC0AE409BD8043B309CDB1145753B(/*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)14))))
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = PhotonNetwork_get_NetworkClientState_mF9661E8C084AC0AE409BD8043B309CDB1145753B(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}

IL_001f:
	{
		// PhotonNetwork.ConnectUsingSettings();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = PhotonNetwork_ConnectUsingSettings_m8E6DA5DA6FA94A6006E8F84D3C7B1BB848C2D1E8(/*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::VoiceSwitchOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_VoiceSwitchOnClick_mAB712A4E30FED61E21B187D6A2F8ED7D193FDDC6 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	{
		// if (this.punVoiceNetwork.ClientState == Photon.Realtime.ClientState.Joined)
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_0 = __this->get_punVoiceNetwork_6();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_001b;
		}
	}
	{
		// this.punVoiceNetwork.Disconnect();
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_2 = __this->get_punVoiceNetwork_6();
		NullCheck(L_2);
		PhotonVoiceNetwork_Disconnect_m7DD9B908D46B3A8B66AECE44E9F2DEB1950DB380(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// else if (this.punVoiceNetwork.ClientState == Photon.Realtime.ClientState.PeerCreated
		//          || this.punVoiceNetwork.ClientState == Photon.Realtime.ClientState.Disconnected)
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_3 = __this->get_punVoiceNetwork_6();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_5 = __this->get_punVoiceNetwork_6();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0043;
		}
	}

IL_0037:
	{
		// this.punVoiceNetwork.ConnectAndJoinRoom();
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_7 = __this->get_punVoiceNetwork_6();
		NullCheck(L_7);
		bool L_8;
		L_8 = PhotonVoiceNetwork_ConnectAndJoinRoom_mA2D8FFE285E0E45BB069891BB930F939BACB6D07(L_7, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::CalibrateButtonOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_CalibrateButtonOnClick_m3B5F95DAAB7994D8BC2808BE3974F19883EF5688 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.recorder && !this.recorder.VoiceDetectorCalibrating)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_2 = __this->get_recorder_15();
		NullCheck(L_2);
		bool L_3;
		L_3 = Recorder_get_VoiceDetectorCalibrating_m14C5FE986E06B0D060C060C0AA0A4142D46A2EDB(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		// this.recorder.VoiceDetectorCalibrate(this.calibrationMilliSeconds);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_4 = __this->get_recorder_15();
		int32_t L_5 = __this->get_calibrationMilliSeconds_24();
		NullCheck(L_4);
		Recorder_VoiceDetectorCalibrate_m87A7B4D26E26A85D430CC42A39726E6A5A2A5C8F(L_4, L_5, (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)NULL, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_Update_m4EB7715486A8120883D1DEB105388D3ECD80CDD3 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral928D3973E1B0159DFBC5ABBB4358EC8A0EA8591A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.recorder != null && this.recorder.LevelMeter != null)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_2 = __this->get_recorder_15();
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Recorder_get_LevelMeter_m3E6FEA516FB3F0521A089639FF20B8FC37AC3D80(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		// this.voiceDebugText.text = string.Format("Amp: avg. {0:0.000000}, peak {1:0.000000}", this.recorder.LevelMeter.CurrentAvgAmp, this.recorder.LevelMeter.CurrentPeakAmp);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_voiceDebugText_14();
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_5 = __this->get_recorder_15();
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Recorder_get_LevelMeter_m3E6FEA516FB3F0521A089639FF20B8FC37AC3D80(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Photon.Voice.AudioUtil/ILevelMeter::get_CurrentAvgAmp() */, ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var, L_6);
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_8);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_10 = __this->get_recorder_15();
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Recorder_get_LevelMeter_m3E6FEA516FB3F0521A089639FF20B8FC37AC3D80(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Photon.Voice.AudioUtil/ILevelMeter::get_CurrentPeakAmp() */, ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var, L_11);
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral928D3973E1B0159DFBC5ABBB4358EC8A0EA8591A, L_9, L_14, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_15);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::PunClientStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_PunClientStateChanged_mCDD0A99208FEBF6B721A4E1BD68244925E24BE1D (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, int32_t ___fromState0, int32_t ___toState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033579EC8D0117A4537FD03D9BB53510D041EB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BC891A569A5D584FE65FFCAA41791C3F92BD535);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D774639089939D1DDB49955E154CC603511C5EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B959945E7E363C37693514A63BC4CF6D74EAB5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.punState.text = string.Format("PUN: {0}", toState);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_punState_4();
		int32_t L_1 = ___toState1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5D774639089939D1DDB49955E154CC603511C5EB, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		int32_t L_5 = ___toState1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___toState1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)9))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = ___toState1;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0064;
		}
	}

IL_0028:
	{
		// this.punSwitch.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_punSwitch_8();
		NullCheck(L_8);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_8, (bool)1, /*hidden argument*/NULL);
		// this.punSwitchText.text = "PUN Connect";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_punSwitchText_9();
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral033579EC8D0117A4537FD03D9BB53510D041EB23);
		// break;
		goto IL_0080;
	}

IL_0046:
	{
		// this.punSwitch.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_punSwitch_8();
		NullCheck(L_10);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_10, (bool)1, /*hidden argument*/NULL);
		// this.punSwitchText.text = "PUN Disconnect";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_punSwitchText_9();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral4BC891A569A5D584FE65FFCAA41791C3F92BD535);
		// break;
		goto IL_0080;
	}

IL_0064:
	{
		// this.punSwitch.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = __this->get_punSwitch_8();
		NullCheck(L_12);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_12, (bool)0, /*hidden argument*/NULL);
		// this.punSwitchText.text = "PUN busy";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_punSwitchText_9();
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteralB1B959945E7E363C37693514A63BC4CF6D74EAB5);
	}

IL_0080:
	{
		// this.UpdateUiBasedOnVoiceState(this.punVoiceNetwork.ClientState);
		PhotonVoiceNetwork_t0A6BE091DA642DFFBF1BD6F8D8003D79425B8E74 * L_14 = __this->get_punVoiceNetwork_6();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E(L_14, /*hidden argument*/NULL);
		VoiceDemoUI_UpdateUiBasedOnVoiceState_m59107C6DA655112ED3C7E8DEA0F1A636C89E8243(__this, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::VoiceClientStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_VoiceClientStateChanged_mA738E7B437A2788F9EDB0F016472F735A1879D4A (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, int32_t ___fromState0, int32_t ___toState1, const RuntimeMethod* method)
{
	{
		// this.UpdateUiBasedOnVoiceState(toState);
		int32_t L_0 = ___toState1;
		VoiceDemoUI_UpdateUiBasedOnVoiceState_m59107C6DA655112ED3C7E8DEA0F1A636C89E8243(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::UpdateUiBasedOnVoiceState(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_UpdateUiBasedOnVoiceState_m59107C6DA655112ED3C7E8DEA0F1A636C89E8243 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, int32_t ___voiceClientState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m164F8D3FD5DD2890F7E16B2E182DE5C67AA74473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral047B3F3A5713C4B341DAC643DC51392B3E671766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral126C27EBBA7FB9D77EB1A44E51BF06EBA9C3FC63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18AF92CE6D406341CFFA209C15FD6F4392F16457);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E5AB6E37311930D6035C8D2CB8DFF55F56024E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61A855DC0F7460245BD0DC4ADF10AA9246C5D820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A10E765B103F3A508B5EAE688B10607DD41ADA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA259DF8AC99BEC96AC7B9F0DBEFA73EEE956D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5834ACEC33AD574D2A7A320AEAB1D2F09D962F8);
		s_Il2CppMethodInitialized = true;
	}
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B7_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B8_1 = NULL;
	{
		// this.voiceState.text = string.Format("PhotonVoice: {0}", voiceClientState);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_voiceState_5();
		int32_t L_1 = ___voiceClientState0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral9A10E765B103F3A508B5EAE688B10607DD41ADA5, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		int32_t L_5 = ___voiceClientState0;
		if (!L_5)
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_6 = ___voiceClientState0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)9))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___voiceClientState0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)14))))
		{
			goto IL_00eb;
		}
	}
	{
		goto IL_0185;
	}

IL_0033:
	{
		// this.voiceSwitch.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_voiceSwitch_10();
		NullCheck(L_8);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_8, (bool)1, /*hidden argument*/NULL);
		// this.inGameSettings.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_inGameSettings_16();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// this.voiceSwitchText.text = "Voice Disconnect";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_voiceSwitchText_11();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral61A855DC0F7460245BD0DC4ADF10AA9246C5D820);
		// this.InitToggles(this.inGameSettings.GetComponentsInChildren<Toggle>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_inGameSettings_16();
		NullCheck(L_11);
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_12;
		L_12 = GameObject_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m164F8D3FD5DD2890F7E16B2E182DE5C67AA74473(L_11, /*hidden argument*/GameObject_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m164F8D3FD5DD2890F7E16B2E182DE5C67AA74473_RuntimeMethod_var);
		VoiceDemoUI_InitToggles_m5A34795787B3950C32A42CBEC3F0916F7B9EFE1D(__this, L_12, /*hidden argument*/NULL);
		// if (this.recorder != null)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_13 = __this->get_recorder_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		// this.calibrateButton.interactable = !this.recorder.VoiceDetectorCalibrating;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15 = __this->get_calibrateButton_12();
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_16 = __this->get_recorder_15();
		NullCheck(L_16);
		bool L_17;
		L_17 = Recorder_get_VoiceDetectorCalibrating_m14C5FE986E06B0D060C060C0AA0A4142D46A2EDB(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_15, (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// this.calibrateText.text = this.recorder.VoiceDetectorCalibrating ? "Calibrating" : string.Format("Calibrate ({0}s)", this.calibrationMilliSeconds / 1000);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_calibrateText_13();
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_19 = __this->get_recorder_15();
		NullCheck(L_19);
		bool L_20;
		L_20 = Recorder_get_VoiceDetectorCalibrating_m14C5FE986E06B0D060C060C0AA0A4142D46A2EDB(L_19, /*hidden argument*/NULL);
		G_B6_0 = L_18;
		if (L_20)
		{
			G_B7_0 = L_18;
			goto IL_00c3;
		}
	}
	{
		int32_t L_21 = __this->get_calibrationMilliSeconds_24();
		int32_t L_22 = ((int32_t)((int32_t)L_21/(int32_t)((int32_t)1000)));
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral047B3F3A5713C4B341DAC643DC51392B3E671766, L_23, /*hidden argument*/NULL);
		G_B8_0 = L_24;
		G_B8_1 = G_B6_0;
		goto IL_00c8;
	}

IL_00c3:
	{
		G_B8_0 = _stringLiteralD5834ACEC33AD574D2A7A320AEAB1D2F09D962F8;
		G_B8_1 = G_B7_0;
	}

IL_00c8:
	{
		NullCheck(G_B8_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B8_1, G_B8_0);
		// }
		return;
	}

IL_00ce:
	{
		// this.calibrateButton.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_25 = __this->get_calibrateButton_12();
		NullCheck(L_25);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_25, (bool)0, /*hidden argument*/NULL);
		// this.calibrateText.text = "Unavailable";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = __this->get_calibrateText_13();
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteralADA259DF8AC99BEC96AC7B9F0DBEFA73EEE956D8);
		// break;
		return;
	}

IL_00eb:
	{
		// if (PhotonNetwork.InRoom)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = PhotonNetwork_get_InRoom_mBCA643500C56F559E410CECDA590F25BEB8B08CE(/*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0120;
		}
	}
	{
		// this.voiceSwitch.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_28 = __this->get_voiceSwitch_10();
		NullCheck(L_28);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_28, (bool)1, /*hidden argument*/NULL);
		// this.voiceSwitchText.text = "Voice Connect";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = __this->get_voiceSwitchText_11();
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteral18AF92CE6D406341CFFA209C15FD6F4392F16457);
		// this.voiceDebugText.text = String.Empty;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_30 = __this->get_voiceDebugText_14();
		String_t* L_31 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_30);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_31);
		// }
		goto IL_014c;
	}

IL_0120:
	{
		// this.voiceSwitch.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_32 = __this->get_voiceSwitch_10();
		NullCheck(L_32);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_32, (bool)0, /*hidden argument*/NULL);
		// this.voiceSwitchText.text = "Voice N/A";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33 = __this->get_voiceSwitchText_11();
		NullCheck(L_33);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, _stringLiteral2E5AB6E37311930D6035C8D2CB8DFF55F56024E3);
		// this.voiceDebugText.text = String.Empty;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_34 = __this->get_voiceDebugText_14();
		String_t* L_35 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_35);
	}

IL_014c:
	{
		// this.calibrateButton.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_36 = __this->get_calibrateButton_12();
		NullCheck(L_36);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_36, (bool)0, /*hidden argument*/NULL);
		// this.voiceSwitchText.text = "Voice Connect";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = __this->get_voiceSwitchText_11();
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, _stringLiteral18AF92CE6D406341CFFA209C15FD6F4392F16457);
		// this.calibrateText.text = "Unavailable";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = __this->get_calibrateText_13();
		NullCheck(L_38);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteralADA259DF8AC99BEC96AC7B9F0DBEFA73EEE956D8);
		// this.inGameSettings.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_inGameSettings_16();
		NullCheck(L_39);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_39, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0185:
	{
		// this.voiceSwitch.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_40 = __this->get_voiceSwitch_10();
		NullCheck(L_40);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_40, (bool)0, /*hidden argument*/NULL);
		// this.voiceSwitchText.text = "Voice busy";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_41 = __this->get_voiceSwitchText_11();
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, _stringLiteral126C27EBBA7FB9D77EB1A44E51BF06EBA9C3FC63);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI__ctor_m10D3A41DEFF99183281B6298FC84F5B8507C2C64 (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	{
		// private int calibrationMilliSeconds = 2000;
		__this->set_calibrationMilliSeconds_24(((int32_t)2000));
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
// System.Void AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetAudioSpeakerU3Ed__9__ctor_mF4D169500D34C85E77E5837766442D198C2D171B (U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetAudioSpeakerU3Ed__9_System_IDisposable_Dispose_mDF546A5277AC3EAF1B222BA1DF80792BE4FD91A1 (U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTryGetAudioSpeakerU3Ed__9_MoveNext_mCB62A81B879F2881E50960B3CA3A2F21E3ABDC9F (U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB12AA9BFE40B6294F5B5BA7CB247F6D69E5F04D7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0075;
	}

IL_0020:
	{
		// var go = GameObject.Find("RemoteVoices/" + photonView.Owner.NickName);
		AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7 * L_4 = V_1;
		NullCheck(L_4);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_5 = L_4->get_photonView_5();
		NullCheck(L_5);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_6;
		L_6 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Player_get_NickName_mCDE13B308E32D797A42DCECCCCD30B23EFADD36A_inline(L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB12AA9BFE40B6294F5B5BA7CB247F6D69E5F04D7, L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// if (go != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// audioSource = go.GetComponent<AudioSource>();
		AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7 * L_12 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_2;
		NullCheck(L_13);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14;
		L_14 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_13, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->set_audioSource_6(L_14);
	}

IL_0055:
	{
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0075:
	{
		// while(audioSource == null)
		AvatarHeadBehaviour_t47AAACA587B9DE90F9A505BF9544B698E7B97FB7 * L_16 = V_1;
		NullCheck(L_16);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_17 = L_16->get_audioSource_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTryGetAudioSpeakerU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m463B12204BE5C85ADB1706151D873C858389BB13 (U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetAudioSpeakerU3Ed__9_System_Collections_IEnumerator_Reset_mDE769910C028C729E75F3B4EDE55C32EE5BB7989 (U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTryGetAudioSpeakerU3Ed__9_System_Collections_IEnumerator_Reset_mDE769910C028C729E75F3B4EDE55C32EE5BB7989_RuntimeMethod_var)));
	}
}
// System.Object AvatarHeadBehaviour/<TryGetAudioSpeaker>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTryGetAudioSpeakerU3Ed__9_System_Collections_IEnumerator_get_Current_mCB98A63AB42FCDA8EBA9A0D7BE8AAE5D0B85FE15 (U3CTryGetAudioSpeakerU3Ed__9_tA0709B6B9D9E2A032B5FF6C86AAE9E5D92F7BAC5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle__ctor_m7909BC3D6DAC950DD95529FEF4D930C328358BBF (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::Invoke(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle_Invoke_m6B54DC66A79F9307887FC2249966E1D1FB83DCC6 (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * __this, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___toggle0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___toggle0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___toggle0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___toggle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___toggle0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___toggle0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___toggle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * >::Invoke(targetMethod, targetThis, ___toggle0);
					else
						GenericVirtActionInvoker1< Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * >::Invoke(targetMethod, targetThis, ___toggle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___toggle0);
					else
						VirtActionInvoker1< Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___toggle0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___toggle0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___toggle0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::BeginInvoke(UnityEngine.UI.Toggle,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnToggle_BeginInvoke_mF574F1031F0083F1670BA262B1EE5B1C3B5E646E (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * __this, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___toggle0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle_EndInvoke_mFE0E2BEDA06ECEFD9BBB286CE209E394D44BE234 (OnToggle_tF30CD3893AFA193766CA2DD9BAC3FBA660F4946B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged__ctor_mA59D0B679F18AB486880E7C054DA3E807456588A (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::Invoke(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged_Invoke_m98105403A008E6D02E41850769DCDF920B29936D (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___newCamera0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___newCamera0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___newCamera0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___newCamera0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___newCamera0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___newCamera0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___newCamera0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___newCamera0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(targetMethod, targetThis, ___newCamera0);
					else
						GenericVirtActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(targetMethod, targetThis, ___newCamera0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___newCamera0);
					else
						VirtActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___newCamera0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___newCamera0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___newCamera0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCameraChanged_BeginInvoke_mFB43CC081B00526E2A5FBDF5024B501B98813C21 (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___newCamera0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___newCamera0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged_EndInvoke_m17382849996A7F73CF6E7C42BE714B92CF387F54 (OnCameraChanged_t78E29683586C19AC724CF916AA4CADD6A4CAAA5A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated__ctor_m9CFC16725506B0EB456824BBE5A69A3A183DDB31 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated_Invoke_m7C6F10334DABFBE4672960B13B92292E30D8FE07 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___character0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___character0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___character0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___character0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___character0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___character0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___character0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___character0);
					else
						GenericVirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___character0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___character0);
					else
						VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___character0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___character0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___character0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCharacterInstantiated_BeginInvoke_m4520B3BB2E89C25D865654C84623C6BDDCE3DA42 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___character0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated_EndInvoke_m9DC94021A06541AF31D32793768614FC13E4F4B6 (OnCharacterInstantiated_t457B34987CDB9A4F6C7B4C9D5071F67986ADCB62 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m531F00E4DD93A41FB0244FB71343FC9FB07DC4DF (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_m486C4129232F0F15151DA882C1C9F1DFDFE5D047(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m486C4129232F0F15151DA882C1C9F1DFDFE5D047 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// public VirtualAxis(string name, bool matchToInputSettings)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2_inline(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_mCC5EF7DB8EC863AC7030AC9AB92F46A723BB7748 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualAxis(name);
		String_t* L_0;
		L_0 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mAC358FAC6484FAA00EB187E0583ECD4576794C44 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_mDCDC78FB43C16D8F65B9BE8799F0053DBB64007E (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
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
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m614D75F3386EB15F081A2F5D548B5743589BE939 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m71595BAF216317FBF79F564F306D3A87F430EDE4 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m50F9D1236BD4CFA9C3136E0D9321DF9604D5C021(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m50F9D1236BD4CFA9C3136E0D9321DF9604D5C021 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// private int m_LastPressedFrame = -5;
		__this->set_m_LastPressedFrame_2(((int32_t)-5));
		// private int m_ReleasedFrame = -5;
		__this->set_m_ReleasedFrame_3(((int32_t)-5));
		// public VirtualButton(string name, bool matchToInputSettings)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA_inline(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mAAC725DA03D80EC7275B0F0B82528E3C21670ADE (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Pressed)
		bool L_0 = __this->get_m_Pressed_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Pressed = true;
		__this->set_m_Pressed_4((bool)1);
		// m_LastPressedFrame = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_m_LastPressedFrame_2(L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_mD4D0FD8E203575FE98152A62BF6B16071E383F5C (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// m_Pressed = false;
		__this->set_m_Pressed_4((bool)0);
		// m_ReleasedFrame = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_m_ReleasedFrame_3(L_0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Remove_m040109DCD13EF3704399353ED4BC4AAB35539DF6 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualButton(name);
		String_t* L_0;
		L_0 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m6EFB512B492D6FD6475DE35B931F27CE5B107741(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mD1EBB3A0B0A88B5CC0589120B42106447F9ED065 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->get_m_Pressed_4();
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m6C10A64F6C990B87627E8DDE6C1FFCFEBCD8FDB7 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// return m_LastPressedFrame - Time.frameCount == -1;
		int32_t L_0 = __this->get_m_LastPressedFrame_2();
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_mE7D1541E27B10531F1542C55781ED62EED0DC37F (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// return (m_ReleasedFrame == Time.frameCount - 1);
		int32_t L_0 = __this->get_m_ReleasedFrame_3();
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))))? 1 : 0);
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
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m71333B46D90B2EF56A8EEFE38757A585E6E2F7D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * L_0 = (U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 *)il2cpp_codegen_object_new(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA13F1CA6D82A861B235CF9E57EB61D204E4AD2FC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA13F1CA6D82A861B235CF9E57EB61D204E4AD2FC (U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.IAudioDesc Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::<ToggleAudioToneFactory>b__68_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToggleAudioToneFactoryU3Eb__68_0_mFC671112967FB248A43A4FF32EFFCA68E69BD4D1 (U3CU3Ec_t7A003A12E465C8C0A9AA7AEE4A87B0941F755D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.voiceConnection.PrimaryRecorder.InputFactory = () => new AudioUtil.ToneAudioReader<float>();
		ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 * L_0 = (ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85 *)il2cpp_codegen_object_new(ToneAudioReader_1_t6B299AB688CD94D570764198105D46FAD0492C85_il2cpp_TypeInfo_var);
		ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A(L_0, (Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 *)NULL, (440.0), ((int32_t)48000), 2, /*hidden argument*/ToneAudioReader_1__ctor_mB39A7D43D4C949D0A85027B5FB80BBB4539FF02A_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NetworkManager/PropertiesChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertiesChanged__ctor_m46C77A09FA611E64A285EDF1FF85267D116912F7 (PropertiesChanged_t509772872821925E4E8CB6ACCDF06297559E1295 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NetworkManager/PropertiesChanged::Invoke(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertiesChanged_Invoke_m536157912D6844137F0EEB2837636C6EC6A9FD4B (PropertiesChanged_t509772872821925E4E8CB6ACCDF06297559E1295 * __this, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___propertiesThatChanged0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___propertiesThatChanged0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___propertiesThatChanged0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___propertiesThatChanged0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___propertiesThatChanged0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___propertiesThatChanged0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___propertiesThatChanged0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___propertiesThatChanged0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * >::Invoke(targetMethod, targetThis, ___propertiesThatChanged0);
					else
						GenericVirtActionInvoker1< Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * >::Invoke(targetMethod, targetThis, ___propertiesThatChanged0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___propertiesThatChanged0);
					else
						VirtActionInvoker1< Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___propertiesThatChanged0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___propertiesThatChanged0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___propertiesThatChanged0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NetworkManager/PropertiesChanged::BeginInvoke(ExitGames.Client.Photon.Hashtable,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertiesChanged_BeginInvoke_mC557EDB7239B4331BE28A0BF7D9E1F29E050B834 (PropertiesChanged_t509772872821925E4E8CB6ACCDF06297559E1295 * __this, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___propertiesThatChanged0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___propertiesThatChanged0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NetworkManager/PropertiesChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertiesChanged_EndInvoke_mBFEAF4B04780882F5D18A2D301DC6428CCAAD16A (PropertiesChanged_t509772872821925E4E8CB6ACCDF06297559E1295 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mBAD5262A353BC071C61B8DB462A3D4D5AB5C7C4E (Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualButton/BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_m4D8C9EEAB13A21F9D68284FB7359E58E0EAD03E5 (BoolEvent_tD84A3E3A4245DFD9FA5D608A5ADA77DBDFB6BD56 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7(__this, /*hidden argument*/UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
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
// System.Void UIVirtualButton/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m8A0990FCB8628C5987E39013E0316961170DF9AC (Event_tB8168EB885996D80674A82913E2B33B4915A9E23 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
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
// System.Void UIVirtualJoystick/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m55DEBAA169467EF82E82EA7541576F59539139B7 (Event_t5D63277B4BC67CE95DE0316A422A69420D3A368D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7(__this, /*hidden argument*/UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var);
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
// System.Void UIVirtualTouchZone/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mE60A25521698C4C733D32C1D85667315E23BEE77 (Event_t1E1104A6087ED46DBF720AC59C7A8E63B974639D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7(__this, /*hidden argument*/UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, bool ___debugMode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___debugMode0));

}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle__ctor_m22F5C2DD0D1FA082384960207ADA4EC840022430 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle_Invoke_m441C48528BBCA159F08298CD43CE4C5EFFB54333 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, bool ___debugMode0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___debugMode0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___debugMode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___debugMode0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___debugMode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___debugMode0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___debugMode0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___debugMode0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDebugToggle_BeginInvoke_mBA7E12E271CCE8195B50FA7E5B9688C3BDCFFC64 (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, bool ___debugMode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___debugMode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle_EndInvoke_mBB499C9740BE1A26FA9D7DF02821830D3B51B16D (OnDebugToggle_tC6BC78AA0EB97C5A56E0781FDCFB58E367B56CE6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m17B8532D1DB7D870295DE9E82CBC17735F8984F8_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newMoveDirection0, const RuntimeMethod* method)
{
	{
		// move = newMoveDirection;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newMoveDirection0;
		__this->set_move_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m3B98228935C1AD2E76356732A798A3EFD8CA4186_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newLookDirection0, const RuntimeMethod* method)
{
	{
		// look = newLookDirection;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newLookDirection0;
		__this->set_look_5(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mEEC05639651E0D3AD679B923D34C3B58F52EC722_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, bool ___newJumpState0, const RuntimeMethod* method)
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->set_jump_6(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_m4A4EB5B45A168786D74E233577623FC38D74E4F3_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, bool ___newSprintState0, const RuntimeMethod* method)
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->set_sprint_7(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * InputField_get_onValueChanged_mAF7D77CCBED34CF4A46A9E4EA77405D790C58449_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// public OnChangeEvent onValueChanged { get { return m_OnValueChanged; } set { SetPropertyUtility.SetClass(ref m_OnValueChanged, value); } }
		OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * L_0 = __this->get_m_OnValueChanged_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * InputField_get_onEndEdit_m0C979736255DF520629D269CCDD6452EF4F52EB5_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// public SubmitEvent onEndEdit { get { return m_OnEndEdit; } set { SetPropertyUtility.SetClass(ref m_OnEndEdit, value); } }
		SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * L_0 = __this->get_m_OnEndEdit_32();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method)
{
	{
		// public DropdownEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_0 = __this->get_m_OnValueChanged_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method)
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * L_0 = __this->get_m_OnValueChanged_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m531F00E4DD93A41FB0244FB71343FC9FB07DC4DF_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m614D75F3386EB15F081A2F5D548B5743589BE939_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_0 = __this->get_U3CLoadBalancingPeerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsRecorder_m5FBE3C99A3E5D7CA731F9106E5D511B108BB66A9_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecorder { get; private set; }
		bool L_0 = __this->get_U3CIsRecorderU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	{
		// return this.recorderInUse;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = __this->get_recorderInUse_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDemoUI_get_DebugMode_m24BFF808B505456EDC071DF0DC28C714593AE09D_inline (VoiceDemoUI_tF23CCF33227249FC9C8A555AA8BFDEE51F122C81 * __this, const RuntimeMethod* method)
{
	{
		// return this.debugMode;
		bool L_0 = __this->get_debugMode_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_m8FACE0F380E6057DD99D43C1218C0DA5E39A9F87_inline (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.transmitEnabled; }
		bool L_0 = __this->get_transmitEnabled_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public Player Owner { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = __this->get_U3COwnerU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Player_get_NickName_mCDE13B308E32D797A42DCECCCCD30B23EFADD36A_inline (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, const RuntimeMethod* method)
{
	{
		// return this.nickName;
		String_t* L_0 = __this->get_nickName_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
