﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ani_MissionPnlProcess_Unlock

#include "Basic.hpp"


namespace SDK::Params
{

// Function Ani_MissionPnlProcess_Unlock.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 final
{
public:
	class AUIContainerActor*                      PnlChild;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0) == 0x000008, "Wrong alignment on SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0");
static_assert(sizeof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0) == 0x000008, "Wrong size on SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0");
static_assert(offsetof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0, PnlChild) == 0x000000, "Member 'SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0::PnlChild' has a wrong offset!");

// Function Ani_MissionPnlProcess_Unlock.SequenceDirector_C.PnlChild_Event_0
// 0x0028 (0x0028 - 0x0000)
struct SequenceDirector_C_PnlChild_Event_0 final
{
public:
	class AUIContainerActor*                      PnlChild;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Sequence_NameN;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Event_Name;                                        // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_PnlChild_Event_0) == 0x000008, "Wrong alignment on SequenceDirector_C_PnlChild_Event_0");
static_assert(sizeof(SequenceDirector_C_PnlChild_Event_0) == 0x000028, "Wrong size on SequenceDirector_C_PnlChild_Event_0");
static_assert(offsetof(SequenceDirector_C_PnlChild_Event_0, PnlChild) == 0x000000, "Member 'SequenceDirector_C_PnlChild_Event_0::PnlChild' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_PnlChild_Event_0, Sequence_NameN) == 0x000008, "Member 'SequenceDirector_C_PnlChild_Event_0::Sequence_NameN' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_PnlChild_Event_0, Event_Name) == 0x000018, "Member 'SequenceDirector_C_PnlChild_Event_0::Event_Name' has a wrong offset!");

// Function Ani_MissionPnlProcess_Unlock.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// 0x0030 (0x0030 - 0x0000)
struct SequenceDirector_C_ExecuteUbergraph_SequenceDirector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AUIContainerActor*                      K2Node_CustomEvent_PnlChild;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Sequence_NameN;                 // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Event_Name;                     // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000008, "Wrong alignment on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(sizeof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000030, "Wrong size on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, EntryPoint) == 0x000000, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, K2Node_CustomEvent_PnlChild) == 0x000008, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::K2Node_CustomEvent_PnlChild' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, K2Node_CustomEvent_Sequence_NameN) == 0x000010, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::K2Node_CustomEvent_Sequence_NameN' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, K2Node_CustomEvent_Event_Name) == 0x000020, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::K2Node_CustomEvent_Event_Name' has a wrong offset!");

}

