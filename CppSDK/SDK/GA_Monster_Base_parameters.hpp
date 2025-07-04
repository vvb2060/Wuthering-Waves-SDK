﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Monster_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_Monster_Base.GA_Monster_Base_C.ExecuteUbergraph_GA_Monster_Base
// 0x0020 (0x0020 - 0x0000)
struct GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base) == 0x000008, "Wrong alignment on GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base");
static_assert(sizeof(GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base) == 0x000020, "Wrong size on GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base");
static_assert(offsetof(GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base, EntryPoint) == 0x000000, "Member 'GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base, K2Node_DynamicCast_AsTs_Base_Character) == 0x000010, "Member 'GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_Monster_Base_C_ExecuteUbergraph_GA_Monster_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_Monster_Base.GA_Monster_Base_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Monster_Base_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Monster_Base_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Monster_Base_C_K2_OnEndAbility");
static_assert(sizeof(GA_Monster_Base_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Monster_Base_C_K2_OnEndAbility");
static_assert(offsetof(GA_Monster_Base_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Monster_Base_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

