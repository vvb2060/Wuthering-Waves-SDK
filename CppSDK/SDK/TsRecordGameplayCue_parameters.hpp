﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsRecordGameplayCue

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TsRecordGameplayCue.TsRecordGameplayCue_C.ExecuteUbergraph_TsRecordGameplayCue
// 0x000C (0x000C - 0x0000)
struct TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue) == 0x000004, "Wrong alignment on TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue");
static_assert(sizeof(TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue) == 0x00000C, "Wrong size on TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue");
static_assert(offsetof(TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue, EntryPoint) == 0x000000, "Member 'TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue, K2Node_Event_EndPlayReason) == 0x000004, "Member 'TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function TsRecordGameplayCue.TsRecordGameplayCue_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct TsRecordGameplayCue_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsRecordGameplayCue_C_ReceiveTick) == 0x000004, "Wrong alignment on TsRecordGameplayCue_C_ReceiveTick");
static_assert(sizeof(TsRecordGameplayCue_C_ReceiveTick) == 0x000004, "Wrong size on TsRecordGameplayCue_C_ReceiveTick");
static_assert(offsetof(TsRecordGameplayCue_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'TsRecordGameplayCue_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function TsRecordGameplayCue.TsRecordGameplayCue_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct TsRecordGameplayCue_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsRecordGameplayCue_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on TsRecordGameplayCue_C_ReceiveEndPlay");
static_assert(sizeof(TsRecordGameplayCue_C_ReceiveEndPlay) == 0x000001, "Wrong size on TsRecordGameplayCue_C_ReceiveEndPlay");
static_assert(offsetof(TsRecordGameplayCue_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'TsRecordGameplayCue_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

