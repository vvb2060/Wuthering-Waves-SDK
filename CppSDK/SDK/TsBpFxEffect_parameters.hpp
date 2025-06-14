﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsBpFxEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TsBpFxEffect.TsBpFxEffect_C.AddAutoVectorTrack
// 0x000C (0x000C - 0x0000)
struct TsBpFxEffect_C_AddAutoVectorTrack final
{
public:
	class FName                                   propertyName;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsBpFxEffect_C_AddAutoVectorTrack) == 0x000004, "Wrong alignment on TsBpFxEffect_C_AddAutoVectorTrack");
static_assert(sizeof(TsBpFxEffect_C_AddAutoVectorTrack) == 0x00000C, "Wrong size on TsBpFxEffect_C_AddAutoVectorTrack");
static_assert(offsetof(TsBpFxEffect_C_AddAutoVectorTrack, propertyName) == 0x000000, "Member 'TsBpFxEffect_C_AddAutoVectorTrack::propertyName' has a wrong offset!");

// Function TsBpFxEffect.TsBpFxEffect_C.AddAutoObjectTrack
// 0x000C (0x000C - 0x0000)
struct TsBpFxEffect_C_AddAutoObjectTrack final
{
public:
	class FName                                   propertyName;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsBpFxEffect_C_AddAutoObjectTrack) == 0x000004, "Wrong alignment on TsBpFxEffect_C_AddAutoObjectTrack");
static_assert(sizeof(TsBpFxEffect_C_AddAutoObjectTrack) == 0x00000C, "Wrong size on TsBpFxEffect_C_AddAutoObjectTrack");
static_assert(offsetof(TsBpFxEffect_C_AddAutoObjectTrack, propertyName) == 0x000000, "Member 'TsBpFxEffect_C_AddAutoObjectTrack::propertyName' has a wrong offset!");

// Function TsBpFxEffect.TsBpFxEffect_C.AddAutoFloatTrack
// 0x000C (0x000C - 0x0000)
struct TsBpFxEffect_C_AddAutoFloatTrack final
{
public:
	class FName                                   propertyName;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsBpFxEffect_C_AddAutoFloatTrack) == 0x000004, "Wrong alignment on TsBpFxEffect_C_AddAutoFloatTrack");
static_assert(sizeof(TsBpFxEffect_C_AddAutoFloatTrack) == 0x00000C, "Wrong size on TsBpFxEffect_C_AddAutoFloatTrack");
static_assert(offsetof(TsBpFxEffect_C_AddAutoFloatTrack, propertyName) == 0x000000, "Member 'TsBpFxEffect_C_AddAutoFloatTrack::propertyName' has a wrong offset!");

// Function TsBpFxEffect.TsBpFxEffect_C.OnRecordTick
// 0x0004 (0x0004 - 0x0000)
struct TsBpFxEffect_C_OnRecordTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsBpFxEffect_C_OnRecordTick) == 0x000004, "Wrong alignment on TsBpFxEffect_C_OnRecordTick");
static_assert(sizeof(TsBpFxEffect_C_OnRecordTick) == 0x000004, "Wrong size on TsBpFxEffect_C_OnRecordTick");
static_assert(offsetof(TsBpFxEffect_C_OnRecordTick, DeltaSeconds) == 0x000000, "Member 'TsBpFxEffect_C_OnRecordTick::DeltaSeconds' has a wrong offset!");

// Function TsBpFxEffect.TsBpFxEffect_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct TsBpFxEffect_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsBpFxEffect_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on TsBpFxEffect_C_ReceiveEndPlay");
static_assert(sizeof(TsBpFxEffect_C_ReceiveEndPlay) == 0x000001, "Wrong size on TsBpFxEffect_C_ReceiveEndPlay");
static_assert(offsetof(TsBpFxEffect_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'TsBpFxEffect_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function TsBpFxEffect.TsBpFxEffect_C.ExecuteUbergraph_TsBpFxEffect
// 0x0008 (0x0008 - 0x0000)
struct TsBpFxEffect_C_ExecuteUbergraph_TsBpFxEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsBpFxEffect_C_ExecuteUbergraph_TsBpFxEffect) == 0x000004, "Wrong alignment on TsBpFxEffect_C_ExecuteUbergraph_TsBpFxEffect");
static_assert(sizeof(TsBpFxEffect_C_ExecuteUbergraph_TsBpFxEffect) == 0x000008, "Wrong size on TsBpFxEffect_C_ExecuteUbergraph_TsBpFxEffect");
static_assert(offsetof(TsBpFxEffect_C_ExecuteUbergraph_TsBpFxEffect, EntryPoint) == 0x000000, "Member 'TsBpFxEffect_C_ExecuteUbergraph_TsBpFxEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsBpFxEffect_C_ExecuteUbergraph_TsBpFxEffect, K2Node_Event_EndPlayReason) == 0x000004, "Member 'TsBpFxEffect_C_ExecuteUbergraph_TsBpFxEffect::K2Node_Event_EndPlayReason' has a wrong offset!");

}

