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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_CameraController3555666667.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_Single2076509932.h"
#include "AssemblyU2DCSharp_ClearDirector3163211679.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "AssemblyU2DCSharp_PlayerContlloer2812031719.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// CameraController
struct CameraController_t3555666667;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Component
struct Component_t3819376471;
// ClearDirector
struct ClearDirector_t3163211679;
// PlayerContlloer
struct PlayerContlloer_t2812031719;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.Object
struct Il2CppObject;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
extern Il2CppCodeGenString* _stringLiteral696029510;
extern const uint32_t CameraController_Start_m2156540118_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3538073363;
extern const uint32_t ClearDirector_Update_m4018399911_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t69676727_m3207772375_MethodInfo_var;
extern const uint32_t PlayerContlloer_Start_m725173868_MetadataUsageId;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1936724506;
extern const uint32_t PlayerContlloer_Update_m1452356499_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral613695225;
extern const uint32_t PlayerContlloer_OnTriggerEnter2D_m3485695988_MetadataUsageId;



// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1756533147 * GameObject_Find_m836511350 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m47917805 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t69676727_m3207772375(__this, method) ((  Animator_t69676727 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m1771960377 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2243707579  Rigidbody2D_get_velocity_m3310151195 (Rigidbody2D_t502193897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m3418492570 (Animator_t69676727 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C"  Vector3_t2243707580  Transform_get_up_m1603627763 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m1351554733 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  Vector2_op_Implicit_m1064335535 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m3200488178 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3849524999 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C"  Vector3_t2243707580  Input_get_acceleration_m2886343410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C"  Vector3_t2243707580  Transform_get_right_m440863970 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m2325460848 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern "C"  void Animator_set_speed_m3511108817 (Animator_t69676727 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m3279944138 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m2156540118 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Start_m2156540118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral696029510, /*hidden argument*/NULL);
		__this->set_player_2(L_0);
		return;
	}
}
// System.Void CameraController::Update()
extern "C"  void CameraController_Update_m2439802515 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		GameObject_t1756533147 * L_0 = __this->get_player_2();
		NullCheck(L_0);
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_x_0();
		float L_7 = (&V_0)->get_y_1();
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t2243707580  L_9 = Transform_get_position_m1104419803(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = (&V_2)->get_z_2();
		Vector3_t2243707580  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m2638739322(&L_11, L_6, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m2469242620(L_3, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ClearDirector::.ctor()
extern "C"  void ClearDirector__ctor_m438095020 (ClearDirector_t3163211679 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ClearDirector::Start()
extern "C"  void ClearDirector_Start_m1191237136 (ClearDirector_t3163211679 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ClearDirector::Update()
extern "C"  void ClearDirector_Update_m4018399911 (ClearDirector_t3163211679 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClearDirector_Update_m4018399911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral3538073363, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void PlayerContlloer::.ctor()
extern "C"  void PlayerContlloer__ctor_m3702302840 (PlayerContlloer_t2812031719 * __this, const MethodInfo* method)
{
	{
		__this->set_jumpForce_4((680.0f));
		__this->set_walkForce_5((30.0f));
		__this->set_maxWalkSpeed_6((2.0f));
		__this->set_threshold_7((0.2f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerContlloer::Start()
extern "C"  void PlayerContlloer_Start_m725173868 (PlayerContlloer_t2812031719 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerContlloer_Start_m725173868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rigid2D_2(L_0);
		Animator_t69676727 * L_1 = Component_GetComponent_TisAnimator_t69676727_m3207772375(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m3207772375_MethodInfo_var);
		__this->set_animator_3(L_1);
		return;
	}
}
// System.Void PlayerContlloer::Update()
extern "C"  void PlayerContlloer_Update_m1452356499 (PlayerContlloer_t2812031719 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerContlloer_Update_m1452356499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector2_t2243707579  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2243707579  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t2243707580  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0072;
		}
	}
	{
		Rigidbody2D_t502193897 * L_2 = __this->get_rigid2D_2();
		NullCheck(L_2);
		Vector2_t2243707579  L_3 = Rigidbody2D_get_velocity_m3310151195(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_5 = fabsf(L_4);
		if ((!(((float)L_5) <= ((float)(0.4f)))))
		{
			goto IL_0072;
		}
	}

IL_003c:
	{
		Animator_t69676727 * L_6 = __this->get_animator_3();
		NullCheck(L_6);
		Animator_SetTrigger_m3418492570(L_6, _stringLiteral1936724506, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_7 = __this->get_rigid2D_2();
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t2243707580  L_9 = Transform_get_up_m1603627763(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_jumpForce_4();
		Vector3_t2243707580  L_11 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Vector2_t2243707579  L_12 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody2D_AddForce_m3200488178(L_7, L_12, /*hidden argument*/NULL);
	}

IL_0072:
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_13 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0085;
		}
	}
	{
		V_1 = 1;
	}

IL_0085:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_14 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		V_1 = (-1);
	}

IL_0096:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_15 = Input_get_acceleration_m2886343410(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = (&V_2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_17 = fabsf(L_16);
		float L_18 = __this->get_threshold_7();
		if ((!(((float)L_17) >= ((float)L_18))))
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_19 = Input_get_acceleration_m2886343410(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = (&V_3)->get_x_0();
		float L_21 = __this->get_threshold_7();
		if ((!(((float)L_20) > ((float)L_21))))
		{
			goto IL_00cd;
		}
	}
	{
		V_1 = 1;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_22 = Input_get_acceleration_m2886343410(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = (&V_4)->get_x_0();
		float L_24 = __this->get_threshold_7();
		if ((!(((float)L_23) < ((float)L_24))))
		{
			goto IL_00e8;
		}
	}
	{
		V_1 = (-1);
	}

IL_00e8:
	{
		Rigidbody2D_t502193897 * L_25 = __this->get_rigid2D_2();
		NullCheck(L_25);
		Vector2_t2243707579  L_26 = Rigidbody2D_get_velocity_m3310151195(L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		float L_27 = (&V_6)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_28 = fabsf(L_27);
		V_5 = L_28;
		float L_29 = V_5;
		float L_30 = __this->get_maxWalkSpeed_6();
		if ((!(((float)L_29) < ((float)L_30))))
		{
			goto IL_013d;
		}
	}
	{
		Rigidbody2D_t502193897 * L_31 = __this->get_rigid2D_2();
		Transform_t3275118058 * L_32 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t2243707580  L_33 = Transform_get_right_m440863970(L_32, /*hidden argument*/NULL);
		int32_t L_34 = V_1;
		Vector3_t2243707580  L_35 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_33, (((float)((float)L_34))), /*hidden argument*/NULL);
		float L_36 = __this->get_walkForce_5();
		Vector3_t2243707580  L_37 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector2_t2243707579  L_38 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		NullCheck(L_31);
		Rigidbody2D_AddForce_m3200488178(L_31, L_38, /*hidden argument*/NULL);
	}

IL_013d:
	{
		int32_t L_39 = V_1;
		if (!L_39)
		{
			goto IL_015f;
		}
	}
	{
		Transform_t3275118058 * L_40 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		int32_t L_41 = V_1;
		Vector3_t2243707580  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Vector3__ctor_m2638739322(&L_42, (((float)((float)L_41))), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_localScale_m2325460848(L_40, L_42, /*hidden argument*/NULL);
	}

IL_015f:
	{
		Rigidbody2D_t502193897 * L_43 = __this->get_rigid2D_2();
		NullCheck(L_43);
		Vector2_t2243707579  L_44 = Rigidbody2D_get_velocity_m3310151195(L_43, /*hidden argument*/NULL);
		V_7 = L_44;
		float L_45 = (&V_7)->get_y_1();
		if ((!(((double)(((double)((double)L_45)))) <= ((double)(0.2)))))
		{
			goto IL_019a;
		}
	}
	{
		Animator_t69676727 * L_46 = __this->get_animator_3();
		float L_47 = V_5;
		NullCheck(L_46);
		Animator_set_speed_m3511108817(L_46, ((float)((float)L_47/(float)(2.0f))), /*hidden argument*/NULL);
		goto IL_01aa;
	}

IL_019a:
	{
		Animator_t69676727 * L_48 = __this->get_animator_3();
		NullCheck(L_48);
		Animator_set_speed_m3511108817(L_48, (1.0f), /*hidden argument*/NULL);
	}

IL_01aa:
	{
		Transform_t3275118058 * L_49 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t2243707580  L_50 = Transform_get_position_m1104419803(L_49, /*hidden argument*/NULL);
		V_8 = L_50;
		float L_51 = (&V_8)->get_y_1();
		if ((!(((float)L_51) < ((float)(-10.0f)))))
		{
			goto IL_01d2;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral3538073363, /*hidden argument*/NULL);
	}

IL_01d2:
	{
		return;
	}
}
// System.Void PlayerContlloer::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerContlloer_OnTriggerEnter2D_m3485695988 (PlayerContlloer_t2812031719 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerContlloer_OnTriggerEnter2D_m3485695988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral613695225, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
