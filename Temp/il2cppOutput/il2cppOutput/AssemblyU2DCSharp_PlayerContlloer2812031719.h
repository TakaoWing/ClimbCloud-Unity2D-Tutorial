#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerContlloer
struct  PlayerContlloer_t2812031719  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D PlayerContlloer::rigid2D
	Rigidbody2D_t502193897 * ___rigid2D_2;
	// UnityEngine.Animator PlayerContlloer::animator
	Animator_t69676727 * ___animator_3;
	// System.Single PlayerContlloer::jumpForce
	float ___jumpForce_4;
	// System.Single PlayerContlloer::walkForce
	float ___walkForce_5;
	// System.Single PlayerContlloer::maxWalkSpeed
	float ___maxWalkSpeed_6;
	// System.Single PlayerContlloer::threshold
	float ___threshold_7;

public:
	inline static int32_t get_offset_of_rigid2D_2() { return static_cast<int32_t>(offsetof(PlayerContlloer_t2812031719, ___rigid2D_2)); }
	inline Rigidbody2D_t502193897 * get_rigid2D_2() const { return ___rigid2D_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigid2D_2() { return &___rigid2D_2; }
	inline void set_rigid2D_2(Rigidbody2D_t502193897 * value)
	{
		___rigid2D_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigid2D_2, value);
	}

	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(PlayerContlloer_t2812031719, ___animator_3)); }
	inline Animator_t69676727 * get_animator_3() const { return ___animator_3; }
	inline Animator_t69676727 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t69676727 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier(&___animator_3, value);
	}

	inline static int32_t get_offset_of_jumpForce_4() { return static_cast<int32_t>(offsetof(PlayerContlloer_t2812031719, ___jumpForce_4)); }
	inline float get_jumpForce_4() const { return ___jumpForce_4; }
	inline float* get_address_of_jumpForce_4() { return &___jumpForce_4; }
	inline void set_jumpForce_4(float value)
	{
		___jumpForce_4 = value;
	}

	inline static int32_t get_offset_of_walkForce_5() { return static_cast<int32_t>(offsetof(PlayerContlloer_t2812031719, ___walkForce_5)); }
	inline float get_walkForce_5() const { return ___walkForce_5; }
	inline float* get_address_of_walkForce_5() { return &___walkForce_5; }
	inline void set_walkForce_5(float value)
	{
		___walkForce_5 = value;
	}

	inline static int32_t get_offset_of_maxWalkSpeed_6() { return static_cast<int32_t>(offsetof(PlayerContlloer_t2812031719, ___maxWalkSpeed_6)); }
	inline float get_maxWalkSpeed_6() const { return ___maxWalkSpeed_6; }
	inline float* get_address_of_maxWalkSpeed_6() { return &___maxWalkSpeed_6; }
	inline void set_maxWalkSpeed_6(float value)
	{
		___maxWalkSpeed_6 = value;
	}

	inline static int32_t get_offset_of_threshold_7() { return static_cast<int32_t>(offsetof(PlayerContlloer_t2812031719, ___threshold_7)); }
	inline float get_threshold_7() const { return ___threshold_7; }
	inline float* get_address_of_threshold_7() { return &___threshold_7; }
	inline void set_threshold_7(float value)
	{
		___threshold_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
