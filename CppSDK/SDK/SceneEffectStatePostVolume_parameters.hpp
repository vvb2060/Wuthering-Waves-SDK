﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SceneEffectStatePostVolume

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.SetAirWall
// 0x0030 (0x0030 - 0x0000)
struct SceneEffectStatePostVolume_C_SetAirWall final
{
public:
	float                                         value_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               K2Node_MakeStruct_Vector4;                         // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SceneEffectStatePostVolume_C_SetAirWall) == 0x000010, "Wrong alignment on SceneEffectStatePostVolume_C_SetAirWall");
static_assert(sizeof(SceneEffectStatePostVolume_C_SetAirWall) == 0x000030, "Wrong size on SceneEffectStatePostVolume_C_SetAirWall");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetAirWall, value_0) == 0x000000, "Member 'SceneEffectStatePostVolume_C_SetAirWall::value_0' has a wrong offset!");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetAirWall, K2Node_MakeStruct_Vector4) == 0x000010, "Member 'SceneEffectStatePostVolume_C_SetAirWall::K2Node_MakeStruct_Vector4' has a wrong offset!");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetAirWall, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'SceneEffectStatePostVolume_C_SetAirWall::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetAirWall, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'SceneEffectStatePostVolume_C_SetAirWall::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.SetToxicFog
// 0x0030 (0x0030 - 0x0000)
struct SceneEffectStatePostVolume_C_SetToxicFog final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               K2Node_MakeStruct_Vector4;                         // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SceneEffectStatePostVolume_C_SetToxicFog) == 0x000010, "Wrong alignment on SceneEffectStatePostVolume_C_SetToxicFog");
static_assert(sizeof(SceneEffectStatePostVolume_C_SetToxicFog) == 0x000030, "Wrong size on SceneEffectStatePostVolume_C_SetToxicFog");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetToxicFog, Value) == 0x000000, "Member 'SceneEffectStatePostVolume_C_SetToxicFog::Value' has a wrong offset!");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetToxicFog, K2Node_MakeStruct_Vector4) == 0x000010, "Member 'SceneEffectStatePostVolume_C_SetToxicFog::K2Node_MakeStruct_Vector4' has a wrong offset!");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetToxicFog, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'SceneEffectStatePostVolume_C_SetToxicFog::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetToxicFog, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'SceneEffectStatePostVolume_C_SetToxicFog::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.SetEffect
// 0x000C (0x000C - 0x0000)
struct SceneEffectStatePostVolume_C_SetEffect final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SceneEffectStatePostVolume_C_SetEffect) == 0x000004, "Wrong alignment on SceneEffectStatePostVolume_C_SetEffect");
static_assert(sizeof(SceneEffectStatePostVolume_C_SetEffect) == 0x00000C, "Wrong size on SceneEffectStatePostVolume_C_SetEffect");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetEffect, Value) == 0x000000, "Member 'SceneEffectStatePostVolume_C_SetEffect::Value' has a wrong offset!");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetEffect, CallFunc_FClamp_ReturnValue) == 0x000004, "Member 'SceneEffectStatePostVolume_C_SetEffect::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SceneEffectStatePostVolume_C_SetEffect, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000008, "Member 'SceneEffectStatePostVolume_C_SetEffect::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}

