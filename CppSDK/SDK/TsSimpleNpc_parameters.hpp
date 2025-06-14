﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsSimpleNpc

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TsSimpleNpc.TsSimpleNpc_C.ExecuteUbergraph_TsSimpleNpc
// 0x000C (0x000C - 0x0000)
struct TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc) == 0x000004, "Wrong alignment on TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc");
static_assert(sizeof(TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc) == 0x00000C, "Wrong size on TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc");
static_assert(offsetof(TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc, EntryPoint) == 0x000000, "Member 'TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc, K2Node_Event_EndPlayReason) == 0x000004, "Member 'TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function TsSimpleNpc.TsSimpleNpc_C.EditorTick
// 0x0004 (0x0004 - 0x0000)
struct TsSimpleNpc_C_EditorTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsSimpleNpc_C_EditorTick) == 0x000004, "Wrong alignment on TsSimpleNpc_C_EditorTick");
static_assert(sizeof(TsSimpleNpc_C_EditorTick) == 0x000004, "Wrong size on TsSimpleNpc_C_EditorTick");
static_assert(offsetof(TsSimpleNpc_C_EditorTick, DeltaSeconds) == 0x000000, "Member 'TsSimpleNpc_C_EditorTick::DeltaSeconds' has a wrong offset!");

// Function TsSimpleNpc.TsSimpleNpc_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct TsSimpleNpc_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsSimpleNpc_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on TsSimpleNpc_C_ReceiveEndPlay");
static_assert(sizeof(TsSimpleNpc_C_ReceiveEndPlay) == 0x000001, "Wrong size on TsSimpleNpc_C_ReceiveEndPlay");
static_assert(offsetof(TsSimpleNpc_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'TsSimpleNpc_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function TsSimpleNpc.TsSimpleNpc_C.ShowDialog
// 0x0018 (0x0018 - 0x0000)
struct TsSimpleNpc_C_ShowDialog final
{
public:
	class FString                                 text1;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         removeFrame1;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(TsSimpleNpc_C_ShowDialog) == 0x000008, "Wrong alignment on TsSimpleNpc_C_ShowDialog");
static_assert(sizeof(TsSimpleNpc_C_ShowDialog) == 0x000018, "Wrong size on TsSimpleNpc_C_ShowDialog");
static_assert(offsetof(TsSimpleNpc_C_ShowDialog, text1) == 0x000000, "Member 'TsSimpleNpc_C_ShowDialog::text1' has a wrong offset!");
static_assert(offsetof(TsSimpleNpc_C_ShowDialog, removeFrame1) == 0x000010, "Member 'TsSimpleNpc_C_ShowDialog::removeFrame1' has a wrong offset!");

// Function TsSimpleNpc.TsSimpleNpc_C.TryPlayMontage
// 0x0018 (0x0018 - 0x0000)
struct TsSimpleNpc_C_TryPlayMontage final
{
public:
	class FString                                 montagePath;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsSimpleNpc_C_TryPlayMontage) == 0x000008, "Wrong alignment on TsSimpleNpc_C_TryPlayMontage");
static_assert(sizeof(TsSimpleNpc_C_TryPlayMontage) == 0x000018, "Wrong size on TsSimpleNpc_C_TryPlayMontage");
static_assert(offsetof(TsSimpleNpc_C_TryPlayMontage, montagePath) == 0x000000, "Member 'TsSimpleNpc_C_TryPlayMontage::montagePath' has a wrong offset!");
static_assert(offsetof(TsSimpleNpc_C_TryPlayMontage, ReturnValue) == 0x000010, "Member 'TsSimpleNpc_C_TryPlayMontage::ReturnValue' has a wrong offset!");

// Function TsSimpleNpc.TsSimpleNpc_C.HandleLoadedDaConfig
// 0x0010 (0x0010 - 0x0000)
struct TsSimpleNpc_C_HandleLoadedDaConfig final
{
public:
	class UPD_NpcSetupData_C*                     daConfig1;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          isEditor;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};
static_assert(alignof(TsSimpleNpc_C_HandleLoadedDaConfig) == 0x000008, "Wrong alignment on TsSimpleNpc_C_HandleLoadedDaConfig");
static_assert(sizeof(TsSimpleNpc_C_HandleLoadedDaConfig) == 0x000010, "Wrong size on TsSimpleNpc_C_HandleLoadedDaConfig");
static_assert(offsetof(TsSimpleNpc_C_HandleLoadedDaConfig, daConfig1) == 0x000000, "Member 'TsSimpleNpc_C_HandleLoadedDaConfig::daConfig1' has a wrong offset!");
static_assert(offsetof(TsSimpleNpc_C_HandleLoadedDaConfig, isEditor) == 0x000008, "Member 'TsSimpleNpc_C_HandleLoadedDaConfig::isEditor' has a wrong offset!");

// Function TsSimpleNpc.TsSimpleNpc_C.DebugSetNpcDitherValue
// 0x0004 (0x0004 - 0x0000)
struct TsSimpleNpc_C_DebugSetNpcDitherValue final
{
public:
	float                                         value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(TsSimpleNpc_C_DebugSetNpcDitherValue) == 0x000004, "Wrong alignment on TsSimpleNpc_C_DebugSetNpcDitherValue");
static_assert(sizeof(TsSimpleNpc_C_DebugSetNpcDitherValue) == 0x000004, "Wrong size on TsSimpleNpc_C_DebugSetNpcDitherValue");
static_assert(offsetof(TsSimpleNpc_C_DebugSetNpcDitherValue, value) == 0x000000, "Member 'TsSimpleNpc_C_DebugSetNpcDitherValue::value' has a wrong offset!");

}

