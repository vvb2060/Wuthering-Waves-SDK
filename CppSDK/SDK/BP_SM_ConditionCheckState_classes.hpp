﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_ConditionCheckState

#include "Basic.hpp"

#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_ConditionCheckState.BP_SM_ConditionCheckState_C
// 0x0010 (0x0048 - 0x0038)
class UBP_SM_ConditionCheckState_C final : public UASMConditionBase
{
public:
	class FString                                 检查状态;                                          // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_ConditionCheckState_C">();
	}
	static class UBP_SM_ConditionCheckState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_ConditionCheckState_C>();
	}
};
static_assert(alignof(UBP_SM_ConditionCheckState_C) == 0x000008, "Wrong alignment on UBP_SM_ConditionCheckState_C");
static_assert(sizeof(UBP_SM_ConditionCheckState_C) == 0x000048, "Wrong size on UBP_SM_ConditionCheckState_C");
static_assert(offsetof(UBP_SM_ConditionCheckState_C, 检查状态) == 0x000038, "Member 'UBP_SM_ConditionCheckState_C::检查状态' has a wrong offset!");

}

