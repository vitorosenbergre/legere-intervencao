#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// Platformer2D.Character.BoxColliderInfo
struct BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B;
// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE;
// Platformer2D.Character.CapsuleColliderInfo
struct CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0;
// Platformer2D.Character.CharacterMovement2D
struct CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// Platformer2D.Character.ColliderInfoFactory
struct ColliderInfoFactory_t21DD4EB214DA4C1C4AA26A24AE378A9198809D1C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Exception
struct Exception_t;
// Platformer2D.Character.IColliderInfo
struct IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5B1C6C9C39F5EB4EF8E7EB559A87E32684E64981;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C const RuntimeMethod* ColliderInfoFactory_NewColliderInfo_mBFF7980D655D9F717A99A0A624BE5DF96BC9822D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98_m5F9B93FBBCBA53C1873519962DA86330237D55F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_m6CE2DD0DA33E57D242BEB7EC9D9F86BE2D3A6699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

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
struct Il2CppArrayBounds;

// Platformer2D.Character.BoxColliderInfo
struct BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B  : public RuntimeObject
{
	// UnityEngine.BoxCollider2D Platformer2D.Character.BoxColliderInfo::boxCollider
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___boxCollider_0;
};

// Platformer2D.Character.CapsuleColliderInfo
struct CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0  : public RuntimeObject
{
	// UnityEngine.CapsuleCollider2D Platformer2D.Character.CapsuleColliderInfo::capsuleCollider
	CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* ___capsuleCollider_0;
};

// Platformer2D.Character.ColliderInfoFactory
struct ColliderInfoFactory_t21DD4EB214DA4C1C4AA26A24AE378A9198809D1C  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_12;
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

// UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 
{
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideDepth
	bool ___useOutsideDepth_3;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_4;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideNormalAngle
	bool ___useOutsideNormalAngle_5;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_7;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_8;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_9;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_7;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// Platformer2D.Character.CharacterMovement2D
struct CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Platformer2D.Character.CharacterMovement2D::groundMaxSpeed
	float ___groundMaxSpeed_4;
	// System.Single Platformer2D.Character.CharacterMovement2D::groundAcceleration
	float ___groundAcceleration_5;
	// System.Single Platformer2D.Character.CharacterMovement2D::maxJumpHeight
	float ___maxJumpHeight_6;
	// System.Single Platformer2D.Character.CharacterMovement2D::jumpPeakTime
	float ___jumpPeakTime_7;
	// System.Single Platformer2D.Character.CharacterMovement2D::jumpAbortDecceleration
	float ___jumpAbortDecceleration_8;
	// System.Single Platformer2D.Character.CharacterMovement2D::crouchCapsuleHeightPercent
	float ___crouchCapsuleHeightPercent_9;
	// System.Single Platformer2D.Character.CharacterMovement2D::crouchGroundSpeedPercent
	float ___crouchGroundSpeedPercent_10;
	// UnityEngine.LayerMask Platformer2D.Character.CharacterMovement2D::groundedLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundedLayerMask_11;
	// System.Single Platformer2D.Character.CharacterMovement2D::groundedRaycastDistance
	float ___groundedRaycastDistance_12;
	// UnityEngine.Vector2 Platformer2D.Character.CharacterMovement2D::currentVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentVelocity_13;
	// UnityEngine.Rigidbody2D Platformer2D.Character.CharacterMovement2D::rigidbody2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidbody2d_14;
	// UnityEngine.ContactFilter2D Platformer2D.Character.CharacterMovement2D::contactFilter
	ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 ___contactFilter_15;
	// Platformer2D.Character.IColliderInfo Platformer2D.Character.CharacterMovement2D::<ColliderInfo>k__BackingField
	RuntimeObject* ___U3CColliderInfoU3Ek__BackingField_16;
	// System.Boolean Platformer2D.Character.CharacterMovement2D::isGrounded
	bool ___isGrounded_17;
	// System.Boolean Platformer2D.Character.CharacterMovement2D::isCrouching
	bool ___isCrouching_18;
	// System.Boolean Platformer2D.Character.CharacterMovement2D::wantsToUnCrouch
	bool ___wantsToUnCrouch_19;
	// System.Boolean Platformer2D.Character.CharacterMovement2D::wasGroundedLastFrame
	bool ___wasGroundedLastFrame_20;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Platformer2D.Character.CharacterMovement2D PlayerController::playerMovement
	CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* ___playerMovement_4;
	// UnityEngine.SpriteRenderer PlayerController::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_5;
	// PlayerInput PlayerController::playerInput
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___playerInput_6;
	// UnityEngine.Sprite PlayerController::crouchedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___crouchedSprite_7;
	// UnityEngine.Sprite PlayerController::idleSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___idleSprite_8;
};

// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<Platformer2D.Character.CharacterMovement2D>()
inline CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* Component_GetComponent_TisCharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98_m5F9B93FBBCBA53C1873519962DA86330237D55F4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PlayerInput>()
inline PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* Component_GetComponent_TisPlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_m6CE2DD0DA33E57D242BEB7EC9D9F86BE2D3A6699 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 PlayerInput::GetMovementInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlayerInput_GetMovementInput_m6AEF704723A62BB3A3FC71588953719F9E053F9C (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CharacterMovement2D::ProcessMovementInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_ProcessMovementInput_mD0B2FF3D75B48683DA9207C0E33621DA2EE7B14D (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movementInput0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean PlayerInput::IsJumpButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_IsJumpButtonDown_m4F5C81283771129B6F51ABC565EC29751A614774 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CharacterMovement2D::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_Jump_mEB66205E724976EC264C240F776DCF1C267CA52A (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerInput::IsCrouchButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_IsCrouchButtonDown_mB7F429F3BC17C14592D2BF90A425ED42A2A2516F (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CharacterMovement2D::Crouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_Crouch_mBFE3F2F58F97D36A84B1A76037E38C27310AA14E (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Boolean PlayerInput::IsCrouchButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_IsCrouchButtonUp_m8DA64DB69224607E73AF158DE1D58879B978EDB9 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CharacterMovement2D::UnCrouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_UnCrouch_m027BB947D794B251B9800A4FF56EBFFDB85EBC1A (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean Platformer2D.Character.CharacterMovement2D::get_IsCrouching()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharacterMovement2D_get_IsCrouching_m536635C2B8ECDAAD25375CE5BFFA58597D7C0B5E_inline (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Single Platformer2D.Character.CharacterMovement2D::get_Gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterMovement2D_get_Gravity_m4E23C4A1DA9D352439900364A21AA408BAF26253 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Platformer2D.Character.IColliderInfo Platformer2D.Character.ColliderInfoFactory::NewColliderInfo(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColliderInfoFactory_NewColliderInfo_mBFF7980D655D9F717A99A0A624BE5DF96BC9822D (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CharacterMovement2D::set_ColliderInfo(Platformer2D.Character.IColliderInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterMovement2D_set_ColliderInfo_m4101A103A8E1DFC84CDC4E100B331E3305817EFE_inline (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_freezeRotation_mFD0A56A3ED021B714BE05CE0EB22E954ED74E9B9 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics2D::set_queriesStartInColliders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_set_queriesStartInColliders_m71EDD323AF2BA23D40914047B8C272D5480667F4 (bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Platformer2D.Character.CharacterMovement2D::CheckCapsuleCollisionsTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_CheckCapsuleCollisionsTop_m7E63123FD3839E2F35A5A5A76F01FDA400E938D8 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CharacterMovement2D::ApplyGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_ApplyGravity_m5ABCDCDC567DC36F0327A35777CC7036467A3DAE (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CharacterMovement2D::CheckCapsuleCollisionsBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_CheckCapsuleCollisionsBottom_m8B00FFEAC1F6843259B3CD02D83D8174360BA608 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CharacterMovement2D::CheckUnCrouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_CheckUnCrouch_mE8560716C241B8253A31465837B5C2C6B4720C0A (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Boolean Platformer2D.Character.CharacterMovement2D::get_IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_get_IsGrounded_m2F1B9A14FE4358E943E0BFDECEABE11B8FCE50BA (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Boolean Platformer2D.Character.CharacterMovement2D::get_IsJumping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_get_IsJumping_m6A7128304F793E5817E066B3F04E1EAA8A90316D (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Single Platformer2D.Character.CharacterMovement2D::get_MaxGroundSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterMovement2D_get_MaxGroundSpeed_m8FB8E4A301878A5D6C20A53FFEA1F909BCC57B0A (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean Platformer2D.Character.CharacterMovement2D::CanJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_CanJump_m08DD0063948078AAEB79280043A1CCF9D985CDCF (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Single Platformer2D.Character.CharacterMovement2D::get_JumpSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterMovement2D_get_JumpSpeed_mFE072A96A382A67D065B0BFF0E2C4AF9A924AE8B (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// Platformer2D.Character.IColliderInfo Platformer2D.Character.CharacterMovement2D::get_ColliderInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Boolean Platformer2D.Character.CharacterMovement2D::CanCrouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_CanCrouch_m596458F875826C83AAF44A045110D6E6BA1A282D (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CharacterMovement2D::SetCapsuleHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_SetCapsuleHeight_m429B706135124227465052C8C580B96F9D97945B (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, float ___newHeight0, const RuntimeMethod* method) ;
// System.Boolean Platformer2D.Character.CharacterMovement2D::CanUncrouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_CanUncrouch_m44D467259F87C89183EC13412CC6FBA9C796FCD8 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Platformer2D.Character.CharacterMovement2D::GetColliderBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CharacterMovement2D_GetColliderBottom_m8BEA946075976797C971F489D11AA93CE3AD20F2 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m8FB0C8DDC2C39DA046D90357EB6732CE2163AAE4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics2D_Raycast_m65A222170C18F173E06309A784D736E5C6EB32D6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 ___contactFilter2, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___results3, float ___distance4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Platformer2D.Character.CharacterMovement2D::GetColliderTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CharacterMovement2D_GetColliderTop_mB8F2C33AE1017D6A57E6F71BDD1AF4FA43FE6140 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Int32 Platformer2D.Character.CharacterMovement2D::RaycastAgainstGround(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.RaycastHit2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterMovement2D_RaycastAgainstGround_mCCF20F775B030079B6C6878A5619FC7C45DB4AA9 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___raycastOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___raycastDirection1, float ___raycastDistance2, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___hitBuffer3, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.CapsuleColliderInfo::.ctor(UnityEngine.CapsuleCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleColliderInfo__ctor_m81DB2B00B39EEBB5D4D674C1059C66365EA1BB19 (CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0* __this, CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* ___inCapsuleCollider0, const RuntimeMethod* method) ;
// System.Void Platformer2D.Character.BoxColliderInfo::.ctor(UnityEngine.BoxCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxColliderInfo__ctor_m430E7AC50E146A42D5450D8E57DA2FE8EBED2EF7 (BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B* __this, BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___inBoxCollider0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.CapsuleCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CapsuleCollider2D_get_size_m665189C0E2EE06B144D595F92AF8A4F03C23E70C (CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider2D::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider2D_set_size_mF81DEA4CAED765717A0B17DBB71C4E9392E84FCE (CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider2D::set_offset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_offset_m416A5FDD11A7E07322418D1869AEFF9F1295913F (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider2D::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider2D_set_size_mA69E48F639FFB614B5FC083D3FEED3DF78A9FF46 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98_m5F9B93FBBCBA53C1873519962DA86330237D55F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_m6CE2DD0DA33E57D242BEB7EC9D9F86BE2D3A6699_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerMovement = GetComponent<CharacterMovement2D>();
		CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* L_0;
		L_0 = Component_GetComponent_TisCharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98_m5F9B93FBBCBA53C1873519962DA86330237D55F4(__this, Component_GetComponent_TisCharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98_m5F9B93FBBCBA53C1873519962DA86330237D55F4_RuntimeMethod_var);
		__this->___playerMovement_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerMovement_4), (void*)L_0);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_5), (void*)L_1);
		// playerInput = GetComponent<PlayerInput>();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_2;
		L_2 = Component_GetComponent_TisPlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_m6CE2DD0DA33E57D242BEB7EC9D9F86BE2D3A6699(__this, Component_GetComponent_TisPlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_m6CE2DD0DA33E57D242BEB7EC9D9F86BE2D3A6699_RuntimeMethod_var);
		__this->___playerInput_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerInput_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 movementInput = playerInput.GetMovementInput();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___playerInput_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PlayerInput_GetMovementInput_m6AEF704723A62BB3A3FC71588953719F9E053F9C(L_0, NULL);
		V_0 = L_1;
		// playerMovement.ProcessMovementInput(movementInput);
		CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* L_2 = __this->___playerMovement_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		NullCheck(L_2);
		CharacterMovement2D_ProcessMovementInput_mD0B2FF3D75B48683DA9207C0E33621DA2EE7B14D(L_2, L_3, NULL);
		// if(movementInput.x > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		// spriteRenderer.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___spriteRenderer_5;
		NullCheck(L_6);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_6, (bool)0, NULL);
		goto IL_004c;
	}

IL_0033:
	{
		// else if(movementInput.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___x_0;
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// spriteRenderer.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___spriteRenderer_5;
		NullCheck(L_9);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_9, (bool)1, NULL);
	}

IL_004c:
	{
		// if(playerInput.IsJumpButtonDown())
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_10 = __this->___playerInput_6;
		NullCheck(L_10);
		bool L_11;
		L_11 = PlayerInput_IsJumpButtonDown_m4F5C81283771129B6F51ABC565EC29751A614774(L_10, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// playerMovement.Jump();
		CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* L_12 = __this->___playerMovement_4;
		NullCheck(L_12);
		CharacterMovement2D_Jump_mEB66205E724976EC264C240F776DCF1C267CA52A(L_12, NULL);
	}

IL_0064:
	{
		// if(playerInput.IsCrouchButtonDown())
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_13 = __this->___playerInput_6;
		NullCheck(L_13);
		bool L_14;
		L_14 = PlayerInput_IsCrouchButtonDown_mB7F429F3BC17C14592D2BF90A425ED42A2A2516F(L_13, NULL);
		if (!L_14)
		{
			goto IL_008e;
		}
	}
	{
		// playerMovement.Crouch();
		CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* L_15 = __this->___playerMovement_4;
		NullCheck(L_15);
		CharacterMovement2D_Crouch_mBFE3F2F58F97D36A84B1A76037E38C27310AA14E(L_15, NULL);
		// spriteRenderer.sprite = crouchedSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = __this->___spriteRenderer_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = __this->___crouchedSprite_7;
		NullCheck(L_16);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_16, L_17, NULL);
		return;
	}

IL_008e:
	{
		// else if (playerInput.IsCrouchButtonUp())
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_18 = __this->___playerInput_6;
		NullCheck(L_18);
		bool L_19;
		L_19 = PlayerInput_IsCrouchButtonUp_m8DA64DB69224607E73AF158DE1D58879B978EDB9(L_18, NULL);
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		// playerMovement.UnCrouch();
		CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* L_20 = __this->___playerMovement_4;
		NullCheck(L_20);
		CharacterMovement2D_UnCrouch_m027BB947D794B251B9800A4FF56EBFFDB85EBC1A(L_20, NULL);
		// spriteRenderer.sprite = idleSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_21 = __this->___spriteRenderer_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22 = __this->___idleSprite_8;
		NullCheck(L_21);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_21, L_22, NULL);
	}

IL_00b7:
	{
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
// UnityEngine.Vector2 PlayerInput::GetMovementInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlayerInput_GetMovementInput_m6AEF704723A62BB3A3FC71588953719F9E053F9C (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float horizontalInput = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		// return new Vector2(horizontalInput, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), L_0, (0.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean PlayerInput::IsJumpButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_IsJumpButtonDown_m4F5C81283771129B6F51ABC565EC29751A614774 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// return Input.GetKeyDown(KeyCode.Space);
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		return L_0;
	}
}
// System.Boolean PlayerInput::IsCrouchButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_IsCrouchButtonDown_mB7F429F3BC17C14592D2BF90A425ED42A2A2516F (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// return Input.GetKeyDown(KeyCode.S);
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)115), NULL);
		return L_0;
	}
}
// System.Boolean PlayerInput::IsCrouchButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_IsCrouchButtonUp_m8DA64DB69224607E73AF158DE1D58879B978EDB9 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// return Input.GetKeyUp(KeyCode.S);
		bool L_0;
		L_0 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)115), NULL);
		return L_0;
	}
}
// System.Void PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m24FD924FB39A9A023CDEA8F6916EEC47B471B3A8 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
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
// Platformer2D.Character.IColliderInfo Platformer2D.Character.CharacterMovement2D::get_ColliderInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public IColliderInfo ColliderInfo { get; private set; }
		RuntimeObject* L_0 = __this->___U3CColliderInfoU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::set_ColliderInfo(Platformer2D.Character.IColliderInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_set_ColliderInfo_m4101A103A8E1DFC84CDC4E100B331E3305817EFE (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IColliderInfo ColliderInfo { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CColliderInfoU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColliderInfoU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// System.Boolean Platformer2D.Character.CharacterMovement2D::get_IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_get_IsGrounded_m2F1B9A14FE4358E943E0BFDECEABE11B8FCE50BA (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGrounded { get { return isGrounded == wasGroundedLastFrame && isGrounded; } }
		bool L_0 = __this->___isGrounded_17;
		bool L_1 = __this->___wasGroundedLastFrame_20;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = __this->___isGrounded_17;
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean Platformer2D.Character.CharacterMovement2D::get_IsCrouching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_get_IsCrouching_m536635C2B8ECDAAD25375CE5BFFA58597D7C0B5E (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCrouching { get { return isCrouching; } }
		bool L_0 = __this->___isCrouching_18;
		return L_0;
	}
}
// System.Boolean Platformer2D.Character.CharacterMovement2D::get_IsJumping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_get_IsJumping_m6A7128304F793E5817E066B3F04E1EAA8A90316D (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsJumping { get { return currentVelocity.y > 0; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___currentVelocity_13);
		float L_1 = L_0->___y_1;
		return (bool)((((float)L_1) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Single Platformer2D.Character.CharacterMovement2D::get_MaxGroundSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterMovement2D_get_MaxGroundSpeed_m8FB8E4A301878A5D6C20A53FFEA1F909BCC57B0A (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	{
		// get { return groundMaxSpeed * (IsCrouching ? crouchGroundSpeedPercent : 1.0f); }
		float L_0 = __this->___groundMaxSpeed_4;
		bool L_1;
		L_1 = CharacterMovement2D_get_IsCrouching_m536635C2B8ECDAAD25375CE5BFFA58597D7C0B5E_inline(__this, NULL);
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0015:
	{
		float L_2 = __this->___crouchGroundSpeedPercent_10;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		return ((float)il2cpp_codegen_multiply(G_B3_1, G_B3_0));
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::set_MaxGroundSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_set_MaxGroundSpeed_m42FCD706FE358C7E82633DDD4A569084851FC4C7 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { groundMaxSpeed = value; }
		float L_0 = ___value0;
		__this->___groundMaxSpeed_4 = L_0;
		// set { groundMaxSpeed = value; }
		return;
	}
}
// System.Single Platformer2D.Character.CharacterMovement2D::get_GroundRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterMovement2D_get_GroundRaycastDistance_mD13E6FB1265FE9363C664A28171B05FC102BC624 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public float GroundRaycastDistance { get { return groundedRaycastDistance; } }
		float L_0 = __this->___groundedRaycastDistance_12;
		return L_0;
	}
}
// UnityEngine.Vector2 Platformer2D.Character.CharacterMovement2D::get_CurrentVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CharacterMovement2D_get_CurrentVelocity_m60EC0E78AB7B11DEEDE1BCD11DA3F54A2E9B8D83 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 CurrentVelocity { get { return currentVelocity; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___currentVelocity_13;
		return L_0;
	}
}
// UnityEngine.Rigidbody2D Platformer2D.Character.CharacterMovement2D::get_RigidBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* CharacterMovement2D_get_RigidBody_m2F5FF7E0BB56FCE509AC50E2030B2B0B945340CA (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public Rigidbody2D RigidBody { get { return rigidbody2d; } }
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigidbody2d_14;
		return L_0;
	}
}
// System.Single Platformer2D.Character.CharacterMovement2D::get_Gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterMovement2D_get_Gravity_m4E23C4A1DA9D352439900364A21AA408BAF26253 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// float Gravity { get { return maxJumpHeight * 2 / (jumpPeakTime * jumpPeakTime); } }
		float L_0 = __this->___maxJumpHeight_6;
		float L_1 = __this->___jumpPeakTime_7;
		float L_2 = __this->___jumpPeakTime_7;
		return ((float)(((float)il2cpp_codegen_multiply(L_0, (2.0f)))/((float)il2cpp_codegen_multiply(L_1, L_2))));
	}
}
// System.Single Platformer2D.Character.CharacterMovement2D::get_JumpSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterMovement2D_get_JumpSpeed_mFE072A96A382A67D065B0BFF0E2C4AF9A924AE8B (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public float JumpSpeed { get { return Gravity * jumpPeakTime; } }
		float L_0;
		L_0 = CharacterMovement2D_get_Gravity_m4E23C4A1DA9D352439900364A21AA408BAF26253(__this, NULL);
		float L_1 = __this->___jumpPeakTime_7;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_Awake_mB688B2070B2AF9369A359953EFFBF38935852656 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_0 = NULL;
	{
		// rigidbody2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigidbody2d_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody2d_14), (void*)L_0);
		// Collider2D thisCollider = GetComponent<Collider2D>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		V_0 = L_1;
		// ColliderInfo = ColliderInfoFactory.NewColliderInfo(thisCollider);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = ColliderInfoFactory_NewColliderInfo_mBFF7980D655D9F717A99A0A624BE5DF96BC9822D(L_2, NULL);
		CharacterMovement2D_set_ColliderInfo_m4101A103A8E1DFC84CDC4E100B331E3305817EFE_inline(__this, L_3, NULL);
		// rigidbody2d.gravityScale = 0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rigidbody2d_14;
		NullCheck(L_4);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_4, (0.0f), NULL);
		// rigidbody2d.freezeRotation = true;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___rigidbody2d_14;
		NullCheck(L_5);
		Rigidbody2D_set_freezeRotation_mFD0A56A3ED021B714BE05CE0EB22E954ED74E9B9(L_5, (bool)1, NULL);
		// contactFilter.layerMask = groundedLayerMask;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14* L_6 = (&__this->___contactFilter_15);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_7 = __this->___groundedLayerMask_11;
		L_6->___layerMask_6 = L_7;
		// contactFilter.useLayerMask = true;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14* L_8 = (&__this->___contactFilter_15);
		L_8->___useLayerMask_1 = (bool)1;
		// contactFilter.useTriggers = false;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14* L_9 = (&__this->___contactFilter_15);
		L_9->___useTriggers_0 = (bool)0;
		// Physics2D.queriesStartInColliders = false;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Physics2D_set_queriesStartInColliders_m71EDD323AF2BA23D40914047B8C272D5480667F4((bool)0, NULL);
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::CheckUnCrouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_CheckUnCrouch_mE8560716C241B8253A31465837B5C2C6B4720C0A (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// if (wantsToUnCrouch && CheckCapsuleCollisionsTop() == false)
		bool L_0 = __this->___wantsToUnCrouch_19;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = CharacterMovement2D_CheckCapsuleCollisionsTop_m7E63123FD3839E2F35A5A5A76F01FDA400E938D8(__this, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// UnCrouch();
		CharacterMovement2D_UnCrouch_m027BB947D794B251B9800A4FF56EBFFDB85EBC1A(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_FixedUpdate_mB68D7773C8C79F5980061DC318CEF08B378F8268 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ApplyGravity();
		CharacterMovement2D_ApplyGravity_m5ABCDCDC567DC36F0327A35777CC7036467A3DAE(__this, NULL);
		// Vector2 previousPosition = rigidbody2d.position;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigidbody2d_14;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_0, NULL);
		// Vector2 currentPosition = previousPosition + currentVelocity * Time.fixedDeltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___currentVelocity_13;
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_2, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_1, L_4, NULL);
		V_0 = L_5;
		// rigidbody2d.MovePosition(currentPosition);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rigidbody2d_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		NullCheck(L_6);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_6, L_7, NULL);
		// CheckCapsuleCollisionsBottom();
		CharacterMovement2D_CheckCapsuleCollisionsBottom_m8B00FFEAC1F6843259B3CD02D83D8174360BA608(__this, NULL);
		// CheckUnCrouch();
		CharacterMovement2D_CheckUnCrouch_mE8560716C241B8253A31465837B5C2C6B4720C0A(__this, NULL);
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::ApplyGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_ApplyGravity_m5ABCDCDC567DC36F0327A35777CC7036467A3DAE (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// currentVelocity.y -= Gravity * Time.fixedDeltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___currentVelocity_13);
		float* L_1 = (&L_0->___y_1);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4;
		L_4 = CharacterMovement2D_get_Gravity_m4E23C4A1DA9D352439900364A21AA408BAF26253(__this, NULL);
		float L_5;
		L_5 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// }
		return;
	}
}
// System.Boolean Platformer2D.Character.CharacterMovement2D::CanJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_CanJump_m08DD0063948078AAEB79280043A1CCF9D985CDCF (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// return IsGrounded && !IsJumping && !IsCrouching;
		bool L_0;
		L_0 = CharacterMovement2D_get_IsGrounded_m2F1B9A14FE4358E943E0BFDECEABE11B8FCE50BA(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1;
		L_1 = CharacterMovement2D_get_IsJumping_m6A7128304F793E5817E066B3F04E1EAA8A90316D(__this, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2;
		L_2 = CharacterMovement2D_get_IsCrouching_m536635C2B8ECDAAD25375CE5BFFA58597D7C0B5E_inline(__this, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::ProcessMovementInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_ProcessMovementInput_mD0B2FF3D75B48683DA9207C0E33621DA2EE7B14D (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movementInput0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float desiredHorizontalSpeed = movementInput.x * MaxGroundSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___movementInput0;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = CharacterMovement2D_get_MaxGroundSpeed_m8FB8E4A301878A5D6C20A53FFEA1F909BCC57B0A(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// currentVelocity.x = Mathf.MoveTowards(currentVelocity.x, desiredHorizontalSpeed, groundAcceleration * Time.deltaTime);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___currentVelocity_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___currentVelocity_13);
		float L_5 = L_4->___x_0;
		float L_6 = V_0;
		float L_7 = __this->___groundAcceleration_5;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_9;
		L_9 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_5, L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		L_3->___x_0 = L_9;
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::StopImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_StopImmediately_m21980C514FBA4D6EB71C150E538CFA83444CF057 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// currentVelocity = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currentVelocity_13 = L_0;
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_Jump_mEB66205E724976EC264C240F776DCF1C267CA52A (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// if (CanJump())
		bool L_0;
		L_0 = CharacterMovement2D_CanJump_m08DD0063948078AAEB79280043A1CCF9D985CDCF(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// currentVelocity.y = JumpSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___currentVelocity_13);
		float L_2;
		L_2 = CharacterMovement2D_get_JumpSpeed_mFE072A96A382A67D065B0BFF0E2C4AF9A924AE8B(__this, NULL);
		L_1->___y_1 = L_2;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::UpdateJumpAbort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_UpdateJumpAbort_m5F9A5D4F5805E00407AE1F51A4B689BB0531AD37 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// if (IsJumping)
		bool L_0;
		L_0 = CharacterMovement2D_get_IsJumping_m6A7128304F793E5817E066B3F04E1EAA8A90316D(__this, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// currentVelocity.y -= jumpAbortDecceleration * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___currentVelocity_13);
		float* L_2 = (&L_1->___y_1);
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		float L_5 = __this->___jumpAbortDecceleration_8;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_3) = (float)((float)il2cpp_codegen_subtract(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6))));
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::SetCapsuleHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_SetCapsuleHeight_m429B706135124227465052C8C580B96F9D97945B (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, float ___newHeight0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float capsuleCurrentHeight = ColliderInfo.Size.y;
		RuntimeObject* L_0;
		L_0 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_0);
		float L_2 = L_1.___y_1;
		V_0 = L_2;
		// ColliderInfo.Size = new Vector2(ColliderInfo.Size.x, newHeight);
		RuntimeObject* L_3;
		L_3 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		RuntimeObject* L_4;
		L_4 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_4);
		float L_6 = L_5.___x_0;
		float L_7 = ___newHeight0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(1 /* System.Void Platformer2D.Character.IColliderInfo::set_Size(UnityEngine.Vector2) */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_3, L_8);
		// ColliderInfo.Offset += new Vector2(0.0f, (newHeight - capsuleCurrentHeight)*0.5f);
		RuntimeObject* L_9;
		L_9 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		RuntimeObject* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(2 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Offset() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_10);
		float L_12 = ___newHeight0;
		float L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_13)), (0.5f))), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_14, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(3 /* System.Void Platformer2D.Character.IColliderInfo::set_Offset(UnityEngine.Vector2) */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_10, L_15);
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::Crouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_Crouch_mBFE3F2F58F97D36A84B1A76037E38C27310AA14E (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wantsToUnCrouch = false;
		__this->___wantsToUnCrouch_19 = (bool)0;
		// if (CanCrouch() == false)
		bool L_0;
		L_0 = CharacterMovement2D_CanCrouch_m596458F875826C83AAF44A045110D6E6BA1A282D(__this, NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// isCrouching = true;
		__this->___isCrouching_18 = (bool)1;
		// SetCapsuleHeight(ColliderInfo.Size.y * crouchCapsuleHeightPercent);
		RuntimeObject* L_1;
		L_1 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_1);
		float L_3 = L_2.___y_1;
		float L_4 = __this->___crouchCapsuleHeightPercent_9;
		CharacterMovement2D_SetCapsuleHeight_m429B706135124227465052C8C580B96F9D97945B(__this, ((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::UnCrouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_UnCrouch_m027BB947D794B251B9800A4FF56EBFFDB85EBC1A (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wantsToUnCrouch = true;
		__this->___wantsToUnCrouch_19 = (bool)1;
		// if (CanUncrouch() == false)
		bool L_0;
		L_0 = CharacterMovement2D_CanUncrouch_m44D467259F87C89183EC13412CC6FBA9C796FCD8(__this, NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// wantsToUnCrouch = false;
		__this->___wantsToUnCrouch_19 = (bool)0;
		// isCrouching = false;
		__this->___isCrouching_18 = (bool)0;
		// SetCapsuleHeight(ColliderInfo.Size.y / crouchCapsuleHeightPercent);
		RuntimeObject* L_1;
		L_1 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_1);
		float L_3 = L_2.___y_1;
		float L_4 = __this->___crouchCapsuleHeightPercent_9;
		CharacterMovement2D_SetCapsuleHeight_m429B706135124227465052C8C580B96F9D97945B(__this, ((float)(L_3/L_4)), NULL);
		// }
		return;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::CheckCapsuleCollisionsBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D_CheckCapsuleCollisionsBottom_m8B00FFEAC1F6843259B3CD02D83D8174360BA608 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_1 = NULL;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* G_B7_0 = NULL;
	CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* G_B8_1 = NULL;
	{
		// int raycastCount = 3;
		// Vector2[] raycastPositions = new Vector2[raycastCount];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		// raycastPositions[0] = GetColliderBottom() + Vector2.left * ColliderInfo.Size.x * 0.5f;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = CharacterMovement2D_GetColliderBottom_m8BEA946075976797C971F489D11AA93CE3AD20F2(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		RuntimeObject* L_4;
		L_4 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_4);
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_7, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_2, L_8, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_9);
		// raycastPositions[1] = GetColliderBottom();
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = CharacterMovement2D_GetColliderBottom_m8BEA946075976797C971F489D11AA93CE3AD20F2(__this, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_11);
		// raycastPositions[2] = GetColliderBottom() + Vector2.right * ColliderInfo.Size.x * 0.5f;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = CharacterMovement2D_GetColliderBottom_m8BEA946075976797C971F489D11AA93CE3AD20F2(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		RuntimeObject* L_15;
		L_15 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_15);
		float L_17 = L_16.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_14, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_18, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_13, L_19, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_20);
		// RaycastHit2D[] hitBuffer = new RaycastHit2D[5];
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_21 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var, (uint32_t)5);
		V_1 = L_21;
		// float raycastDistance = ColliderInfo.Size.x * 0.5f + groundedRaycastDistance * 2f;
		RuntimeObject* L_22;
		L_22 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_22);
		float L_24 = L_23.___x_0;
		float L_25 = __this->___groundedRaycastDistance_12;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_24, (0.5f))), ((float)il2cpp_codegen_multiply(L_25, (2.0f)))));
		// Vector2 raycastDirection = Vector2.down;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		V_3 = L_26;
		// wasGroundedLastFrame = isGrounded;
		bool L_27 = __this->___isGrounded_17;
		__this->___wasGroundedLastFrame_20 = L_27;
		// isGrounded = false;
		__this->___isGrounded_17 = (bool)0;
		// int hitCount = 0;
		V_4 = 0;
		// for (int i = 0; i < raycastPositions.Length; i++)
		V_5 = 0;
		goto IL_011c;
	}

IL_00cc:
	{
		// Debug.DrawLine(raycastPositions[i], raycastPositions[i] + raycastDirection * raycastDistance);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_31, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_3;
		float L_38 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_37, L_38, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_36, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m8FB0C8DDC2C39DA046D90357EB6732CE2163AAE4(L_32, L_41, NULL);
		// if (Physics2D.Raycast(raycastPositions[i], raycastDirection, contactFilter, hitBuffer, raycastDistance) > 0)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_42 = V_0;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_3;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 L_47 = __this->___contactFilter_15;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_48 = V_1;
		float L_49 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		int32_t L_50;
		L_50 = Physics2D_Raycast_m65A222170C18F173E06309A784D736E5C6EB32D6(L_45, L_46, L_47, L_48, L_49, NULL);
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_0116;
		}
	}
	{
		// ++hitCount;
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0116:
	{
		// for (int i = 0; i < raycastPositions.Length; i++)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_011c:
	{
		// for (int i = 0; i < raycastPositions.Length; i++)
		int32_t L_53 = V_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_54 = V_0;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00cc;
		}
	}
	{
		// isGrounded = currentVelocity.magnitude > 10.0f ? hitCount == 3 : hitCount > 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (&__this->___currentVelocity_13);
		float L_56;
		L_56 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_55, NULL);
		G_B6_0 = __this;
		if ((((float)L_56) > ((float)(10.0f))))
		{
			G_B7_0 = __this;
			goto IL_013d;
		}
	}
	{
		int32_t L_57 = V_4;
		G_B8_0 = ((((int32_t)L_57) > ((int32_t)0))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_0142;
	}

IL_013d:
	{
		int32_t L_58 = V_4;
		G_B8_0 = ((((int32_t)L_58) == ((int32_t)3))? 1 : 0);
		G_B8_1 = G_B7_0;
	}

IL_0142:
	{
		NullCheck(G_B8_1);
		G_B8_1->___isGrounded_17 = (bool)G_B8_0;
		// if (isGrounded && !IsJumping)
		bool L_59 = __this->___isGrounded_17;
		if (!L_59)
		{
			goto IL_0167;
		}
	}
	{
		bool L_60;
		L_60 = CharacterMovement2D_get_IsJumping_m6A7128304F793E5817E066B3F04E1EAA8A90316D(__this, NULL);
		if (L_60)
		{
			goto IL_0167;
		}
	}
	{
		// currentVelocity.y = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = (&__this->___currentVelocity_13);
		L_61->___y_1 = (0.0f);
	}

IL_0167:
	{
		// }
		return;
	}
}
// System.Boolean Platformer2D.Character.CharacterMovement2D::CheckCapsuleCollisionsTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_CheckCapsuleCollisionsTop_m7E63123FD3839E2F35A5A5A76F01FDA400E938D8 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_1 = NULL;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// int raycastCount = 3;
		// Vector2[] raycastPositions = new Vector2[raycastCount];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		// raycastPositions[0] = GetColliderTop() + Vector2.left * ColliderInfo.Size.x * 0.5f;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = CharacterMovement2D_GetColliderTop_mB8F2C33AE1017D6A57E6F71BDD1AF4FA43FE6140(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		RuntimeObject* L_4;
		L_4 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_4);
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_7, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_2, L_8, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_9);
		// raycastPositions[1] = GetColliderTop();
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = CharacterMovement2D_GetColliderTop_mB8F2C33AE1017D6A57E6F71BDD1AF4FA43FE6140(__this, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_11);
		// raycastPositions[2] = GetColliderTop() + Vector2.right * ColliderInfo.Size.x * 0.5f;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = CharacterMovement2D_GetColliderTop_mB8F2C33AE1017D6A57E6F71BDD1AF4FA43FE6140(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		RuntimeObject* L_15;
		L_15 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_15);
		float L_17 = L_16.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_14, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_18, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_13, L_19, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_20);
		// RaycastHit2D[] hitBuffer = new RaycastHit2D[5];
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_21 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var, (uint32_t)5);
		V_1 = L_21;
		// float raycastDistance = ColliderInfo.Size.x * 0.5f + groundedRaycastDistance * 2f;
		RuntimeObject* L_22;
		L_22 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_22);
		float L_24 = L_23.___x_0;
		float L_25 = __this->___groundedRaycastDistance_12;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_24, (0.5f))), ((float)il2cpp_codegen_multiply(L_25, (2.0f)))));
		// Vector2 raycastDirection = Vector2.up;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		V_3 = L_26;
		// int hitCount = 0;
		V_4 = 0;
		// for (int i = 0; i < raycastPositions.Length; i++)
		V_5 = 0;
		goto IL_0109;
	}

IL_00b9:
	{
		// Debug.DrawLine(raycastPositions[i], raycastPositions[i] + raycastDirection * raycastDistance);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_30, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_3;
		float L_37 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_36, L_37, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_35, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m8FB0C8DDC2C39DA046D90357EB6732CE2163AAE4(L_31, L_40, NULL);
		// if (Physics2D.Raycast(raycastPositions[i], raycastDirection, contactFilter, hitBuffer, raycastDistance) > 0)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = V_0;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_3;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 L_46 = __this->___contactFilter_15;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_47 = V_1;
		float L_48 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		int32_t L_49;
		L_49 = Physics2D_Raycast_m65A222170C18F173E06309A784D736E5C6EB32D6(L_44, L_45, L_46, L_47, L_48, NULL);
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		// ++hitCount;
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0103:
	{
		// for (int i = 0; i < raycastPositions.Length; i++)
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0109:
	{
		// for (int i = 0; i < raycastPositions.Length; i++)
		int32_t L_52 = V_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_53 = V_0;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// return hitCount > 0;
		int32_t L_54 = V_4;
		return (bool)((((int32_t)L_54) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Platformer2D.Character.CharacterMovement2D::CanCrouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_CanCrouch_m596458F875826C83AAF44A045110D6E6BA1A282D (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// return IsCrouching == false;
		bool L_0;
		L_0 = CharacterMovement2D_get_IsCrouching_m536635C2B8ECDAAD25375CE5BFFA58597D7C0B5E_inline(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Platformer2D.Character.CharacterMovement2D::CanUncrouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement2D_CanUncrouch_m44D467259F87C89183EC13412CC6FBA9C796FCD8 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// return IsCrouching && CheckCapsuleCollisionsTop() == false;
		bool L_0;
		L_0 = CharacterMovement2D_get_IsCrouching_m536635C2B8ECDAAD25375CE5BFFA58597D7C0B5E_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = CharacterMovement2D_CheckCapsuleCollisionsTop_m7E63123FD3839E2F35A5A5A76F01FDA400E938D8(__this, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Platformer2D.Character.CharacterMovement2D::RaycastAgainstGround(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.RaycastHit2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterMovement2D_RaycastAgainstGround_mCCF20F775B030079B6C6878A5619FC7C45DB4AA9 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___raycastOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___raycastDirection1, float ___raycastDistance2, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___hitBuffer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.DrawLine(raycastOrigin, raycastOrigin + raycastDirection * raycastDistance);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___raycastOrigin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___raycastOrigin0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___raycastDirection1;
		float L_4 = ___raycastDistance2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_2, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m8FB0C8DDC2C39DA046D90357EB6732CE2163AAE4(L_1, L_7, NULL);
		// return Physics2D.Raycast(raycastOrigin, raycastDirection, contactFilter, hitBuffer, raycastDistance);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___raycastOrigin0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___raycastDirection1;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 L_10 = __this->___contactFilter_15;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_11 = ___hitBuffer3;
		float L_12 = ___raycastDistance2;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Physics2D_Raycast_m65A222170C18F173E06309A784D736E5C6EB32D6(L_8, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// System.Int32 Platformer2D.Character.CharacterMovement2D::RaycastAgainstGround(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterMovement2D_RaycastAgainstGround_m32FA272DCBE1B91461F05A7179C8AE02EE53331D (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___raycastOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___raycastDirection1, float ___raycastDistance2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_0 = NULL;
	{
		// RaycastHit2D[] hitResults = new RaycastHit2D[1];
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		// return RaycastAgainstGround(raycastOrigin, raycastDirection, raycastDistance, hitResults);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___raycastOrigin0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___raycastDirection1;
		float L_3 = ___raycastDistance2;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_4 = V_0;
		int32_t L_5;
		L_5 = CharacterMovement2D_RaycastAgainstGround_mCCF20F775B030079B6C6878A5619FC7C45DB4AA9(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Platformer2D.Character.CharacterMovement2D::GetColliderBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CharacterMovement2D_GetColliderBottom_m8BEA946075976797C971F489D11AA93CE3AD20F2 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return rigidbody2d.position + ColliderInfo.Offset + Vector2.down * (ColliderInfo.Size.y * 0.5f - ColliderInfo.Size.x * 0.5f);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigidbody2d_14;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(2 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Offset() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_1, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		RuntimeObject* L_6;
		L_6 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_6);
		float L_8 = L_7.___y_1;
		RuntimeObject* L_9;
		L_9 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_9);
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_5, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_8, (0.5f))), ((float)il2cpp_codegen_multiply(L_11, (0.5f))))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_12, NULL);
		return L_13;
	}
}
// UnityEngine.Vector2 Platformer2D.Character.CharacterMovement2D::GetColliderTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CharacterMovement2D_GetColliderTop_mB8F2C33AE1017D6A57E6F71BDD1AF4FA43FE6140 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return rigidbody2d.position + ColliderInfo.Offset + Vector2.up * (ColliderInfo.Size.y * 0.5f - ColliderInfo.Size.x * 0.5f);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigidbody2d_14;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(2 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Offset() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_1, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		RuntimeObject* L_6;
		L_6 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_6);
		float L_8 = L_7.___y_1;
		RuntimeObject* L_9;
		L_9 = CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline(__this, NULL);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0 /* UnityEngine.Vector2 Platformer2D.Character.IColliderInfo::get_Size() */, IColliderInfo_tB8BC0118657218D7054B5576C9A9F3AA9C20DB4E_il2cpp_TypeInfo_var, L_9);
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_5, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_8, (0.5f))), ((float)il2cpp_codegen_multiply(L_11, (0.5f))))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_12, NULL);
		return L_13;
	}
}
// System.Void Platformer2D.Character.CharacterMovement2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement2D__ctor_m897747B4C2ECD2543D2323B16E3CD4B650CBC1D5 (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float groundMaxSpeed = 7.0f;
		__this->___groundMaxSpeed_4 = (7.0f);
		// [SerializeField] float groundAcceleration = 100.0f;
		__this->___groundAcceleration_5 = (100.0f);
		// [SerializeField] float maxJumpHeight = 4.0f;
		__this->___maxJumpHeight_6 = (4.0f);
		// [SerializeField] float jumpPeakTime = 0.4f;
		__this->___jumpPeakTime_7 = (0.400000006f);
		// [SerializeField] float jumpAbortDecceleration = 100.0f;
		__this->___jumpAbortDecceleration_8 = (100.0f);
		// [SerializeField] float crouchCapsuleHeightPercent = 0.5f;
		__this->___crouchCapsuleHeightPercent_9 = (0.5f);
		// [SerializeField] float crouchGroundSpeedPercent = 0.3f;
		__this->___crouchGroundSpeedPercent_10 = (0.300000012f);
		// [SerializeField] float groundedRaycastDistance = 0.1f;
		__this->___groundedRaycastDistance_12 = (0.100000001f);
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
// Platformer2D.Character.IColliderInfo Platformer2D.Character.ColliderInfoFactory::NewColliderInfo(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColliderInfoFactory_NewColliderInfo_mBFF7980D655D9F717A99A0A624BE5DF96BC9822D (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// if (collider.GetType() == typeof(CapsuleCollider2D))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// return new CapsuleColliderInfo((CapsuleCollider2D) collider);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___collider0;
		CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0* L_6 = (CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0*)il2cpp_codegen_object_new(CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CapsuleColliderInfo__ctor_m81DB2B00B39EEBB5D4D674C1059C66365EA1BB19(L_6, ((CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE*)CastclassSealed((RuntimeObject*)L_5, CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE_il2cpp_TypeInfo_var)), NULL);
		return L_6;
	}

IL_0023:
	{
		// if (collider.GetType() == typeof(BoxCollider2D))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___collider0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// return new BoxColliderInfo((BoxCollider2D)collider);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_12 = ___collider0;
		BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B* L_13 = (BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B*)il2cpp_codegen_object_new(BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		BoxColliderInfo__ctor_m430E7AC50E146A42D5450D8E57DA2FE8EBED2EF7(L_13, ((BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA*)CastclassSealed((RuntimeObject*)L_12, BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_il2cpp_TypeInfo_var)), NULL);
		return L_13;
	}

IL_0046:
	{
		// throw new System.Exception("No ColliderInfo implementation for type: " + (collider != null ? collider.name : "NULL"));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_14 = ___collider0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B1C6C9C39F5EB4EF8E7EB559A87E32684E64981));
		if (L_15)
		{
			G_B6_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B1C6C9C39F5EB4EF8E7EB559A87E32684E64981));
			goto IL_005b;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B));
		G_B7_1 = G_B5_0;
		goto IL_0061;
	}

IL_005b:
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16 = ___collider0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		G_B7_0 = L_17;
		G_B7_1 = G_B6_0;
	}

IL_0061:
	{
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_1, G_B7_0, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ColliderInfoFactory_NewColliderInfo_mBFF7980D655D9F717A99A0A624BE5DF96BC9822D_RuntimeMethod_var)));
	}
}
// System.Void Platformer2D.Character.ColliderInfoFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderInfoFactory__ctor_m09E153590CC4C6CA1416826EECDB60198F822B04 (ColliderInfoFactory_t21DD4EB214DA4C1C4AA26A24AE378A9198809D1C* __this, const RuntimeMethod* method) 
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
// System.Void Platformer2D.Character.CapsuleColliderInfo::.ctor(UnityEngine.CapsuleCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleColliderInfo__ctor_m81DB2B00B39EEBB5D4D674C1059C66365EA1BB19 (CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0* __this, CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* ___inCapsuleCollider0, const RuntimeMethod* method) 
{
	{
		// public CapsuleColliderInfo(CapsuleCollider2D inCapsuleCollider)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// capsuleCollider = inCapsuleCollider;
		CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* L_0 = ___inCapsuleCollider0;
		__this->___capsuleCollider_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___capsuleCollider_0), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Vector2 Platformer2D.Character.CapsuleColliderInfo::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CapsuleColliderInfo_get_Size_m05AC57572ACA4F2011092FDDEDDF52EFB00911FD (CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0* __this, const RuntimeMethod* method) 
{
	{
		// get => capsuleCollider.size;
		CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* L_0 = __this->___capsuleCollider_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = CapsuleCollider2D_get_size_m665189C0E2EE06B144D595F92AF8A4F03C23E70C(L_0, NULL);
		return L_1;
	}
}
// System.Void Platformer2D.Character.CapsuleColliderInfo::set_Size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleColliderInfo_set_Size_mE256D9EAFB704B008B3EDF2003BA1252CDD25B26 (CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// set => capsuleCollider.size = value;
		CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* L_0 = __this->___capsuleCollider_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value0;
		NullCheck(L_0);
		CapsuleCollider2D_set_size_mF81DEA4CAED765717A0B17DBB71C4E9392E84FCE(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.Vector2 Platformer2D.Character.CapsuleColliderInfo::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CapsuleColliderInfo_get_Offset_m409CFA652C41B98B7C7AA3342410595ADC8A029F (CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0* __this, const RuntimeMethod* method) 
{
	{
		// get => capsuleCollider.offset;
		CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* L_0 = __this->___capsuleCollider_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914(L_0, NULL);
		return L_1;
	}
}
// System.Void Platformer2D.Character.CapsuleColliderInfo::set_Offset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleColliderInfo_set_Offset_m445198B2DF349D136ED6B28B5B37874DB9E217D5 (CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// set => capsuleCollider.offset = value;
		CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* L_0 = __this->___capsuleCollider_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value0;
		NullCheck(L_0);
		Collider2D_set_offset_m416A5FDD11A7E07322418D1869AEFF9F1295913F(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.Collider2D Platformer2D.Character.CapsuleColliderInfo::get_Collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* CapsuleColliderInfo_get_Collider_m7236C40B70E5789243F13260CA4DA2B149A2546D (CapsuleColliderInfo_t41F97CB620376C016AEFCC974E1153FBD22489D0* __this, const RuntimeMethod* method) 
{
	{
		// public Collider2D Collider => capsuleCollider;
		CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* L_0 = __this->___capsuleCollider_0;
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
// System.Void Platformer2D.Character.BoxColliderInfo::.ctor(UnityEngine.BoxCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxColliderInfo__ctor_m430E7AC50E146A42D5450D8E57DA2FE8EBED2EF7 (BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B* __this, BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___inBoxCollider0, const RuntimeMethod* method) 
{
	{
		// public BoxColliderInfo(BoxCollider2D inBoxCollider)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// boxCollider = inBoxCollider;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = ___inBoxCollider0;
		__this->___boxCollider_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boxCollider_0), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Vector2 Platformer2D.Character.BoxColliderInfo::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxColliderInfo_get_Size_m6361EB261A805495AD59638BBAF43384C4A82F06 (BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B* __this, const RuntimeMethod* method) 
{
	{
		// get => boxCollider.size;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___boxCollider_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_0, NULL);
		return L_1;
	}
}
// System.Void Platformer2D.Character.BoxColliderInfo::set_Size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxColliderInfo_set_Size_m71D5276ACBD5D4A17BBF4E429E3A96C0DE1ABEE4 (BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// set => boxCollider.size = value;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___boxCollider_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value0;
		NullCheck(L_0);
		BoxCollider2D_set_size_mA69E48F639FFB614B5FC083D3FEED3DF78A9FF46(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.Vector2 Platformer2D.Character.BoxColliderInfo::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxColliderInfo_get_Offset_m8D9FEC53B3116A8EF5A0C63C00C1DBABD27DB971 (BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B* __this, const RuntimeMethod* method) 
{
	{
		// get => boxCollider.offset;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___boxCollider_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914(L_0, NULL);
		return L_1;
	}
}
// System.Void Platformer2D.Character.BoxColliderInfo::set_Offset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxColliderInfo_set_Offset_m8C83AD3BA89DFE30DDFBEE4C7267B13AC9444A53 (BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// set => boxCollider.offset = value;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___boxCollider_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value0;
		NullCheck(L_0);
		Collider2D_set_offset_m416A5FDD11A7E07322418D1869AEFF9F1295913F(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.Collider2D Platformer2D.Character.BoxColliderInfo::get_Collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* BoxColliderInfo_get_Collider_mD733ECAF77F0D8D8E3FF92D17CCCB99CA8D41EDD (BoxColliderInfo_t28828A2E21E7749B00A98D471275F4BBAEFB407B* __this, const RuntimeMethod* method) 
{
	{
		// public Collider2D Collider => boxCollider;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___boxCollider_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharacterMovement2D_get_IsCrouching_m536635C2B8ECDAAD25375CE5BFFA58597D7C0B5E_inline (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCrouching { get { return isCrouching; } }
		bool L_0 = __this->___isCrouching_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterMovement2D_set_ColliderInfo_m4101A103A8E1DFC84CDC4E100B331E3305817EFE_inline (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IColliderInfo ColliderInfo { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CColliderInfoU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColliderInfoU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CharacterMovement2D_get_ColliderInfo_mE4C2755F61FC50ED7859A6DDC892268391F90498_inline (CharacterMovement2D_t760C5ADED89CEEA48FC90BE53F6D137526E3CC98* __this, const RuntimeMethod* method) 
{
	{
		// public IColliderInfo ColliderInfo { get; private set; }
		RuntimeObject* L_0 = __this->___U3CColliderInfoU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___leftVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		return;
	}
}
