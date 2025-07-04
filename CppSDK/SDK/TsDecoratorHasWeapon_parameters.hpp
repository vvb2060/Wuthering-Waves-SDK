﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsDecoratorHasWeapon

#include "Basic.hpp"


namespace SDK::Params
{

// Function TsDecoratorHasWeapon.TsDecoratorHasWeapon_C.PerformConditionCheckAI
// 0x0018 (0x0018 - 0x0000)
struct TsDecoratorHasWeapon_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsDecoratorHasWeapon_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on TsDecoratorHasWeapon_C_PerformConditionCheckAI");
static_assert(sizeof(TsDecoratorHasWeapon_C_PerformConditionCheckAI) == 0x000018, "Wrong size on TsDecoratorHasWeapon_C_PerformConditionCheckAI");
static_assert(offsetof(TsDecoratorHasWeapon_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'TsDecoratorHasWeapon_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(TsDecoratorHasWeapon_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'TsDecoratorHasWeapon_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(TsDecoratorHasWeapon_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'TsDecoratorHasWeapon_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");

}

