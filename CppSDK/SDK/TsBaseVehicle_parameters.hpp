﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsBaseVehicle

#include "Basic.hpp"

#include "ECharacterDitherType_structs.hpp"


namespace SDK::Params
{

// Function TsBaseVehicle.TsBaseVehicle_C.ExecuteUbergraph_TsBaseVehicle
// 0x0004 (0x0004 - 0x0000)
struct TsBaseVehicle_C_ExecuteUbergraph_TsBaseVehicle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsBaseVehicle_C_ExecuteUbergraph_TsBaseVehicle) == 0x000004, "Wrong alignment on TsBaseVehicle_C_ExecuteUbergraph_TsBaseVehicle");
static_assert(sizeof(TsBaseVehicle_C_ExecuteUbergraph_TsBaseVehicle) == 0x000004, "Wrong size on TsBaseVehicle_C_ExecuteUbergraph_TsBaseVehicle");
static_assert(offsetof(TsBaseVehicle_C_ExecuteUbergraph_TsBaseVehicle, EntryPoint) == 0x000000, "Member 'TsBaseVehicle_C_ExecuteUbergraph_TsBaseVehicle::EntryPoint' has a wrong offset!");

// Function TsBaseVehicle.TsBaseVehicle_C.SetDitherEffect
// 0x0008 (0x0008 - 0x0000)
struct TsBaseVehicle_C_SetDitherEffect final
{
public:
	float                                         dither;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterDitherType                          ditherType;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsBaseVehicle_C_SetDitherEffect) == 0x000004, "Wrong alignment on TsBaseVehicle_C_SetDitherEffect");
static_assert(sizeof(TsBaseVehicle_C_SetDitherEffect) == 0x000008, "Wrong size on TsBaseVehicle_C_SetDitherEffect");
static_assert(offsetof(TsBaseVehicle_C_SetDitherEffect, dither) == 0x000000, "Member 'TsBaseVehicle_C_SetDitherEffect::dither' has a wrong offset!");
static_assert(offsetof(TsBaseVehicle_C_SetDitherEffect, ditherType) == 0x000004, "Member 'TsBaseVehicle_C_SetDitherEffect::ditherType' has a wrong offset!");

// Function TsBaseVehicle.TsBaseVehicle_C.GetEntityId
// 0x0004 (0x0004 - 0x0000)
struct TsBaseVehicle_C_GetEntityId final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsBaseVehicle_C_GetEntityId) == 0x000004, "Wrong alignment on TsBaseVehicle_C_GetEntityId");
static_assert(sizeof(TsBaseVehicle_C_GetEntityId) == 0x000004, "Wrong size on TsBaseVehicle_C_GetEntityId");
static_assert(offsetof(TsBaseVehicle_C_GetEntityId, ReturnValue) == 0x000000, "Member 'TsBaseVehicle_C_GetEntityId::ReturnValue' has a wrong offset!");

}

