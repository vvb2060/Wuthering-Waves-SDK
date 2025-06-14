﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_TaskPatrol

#include "Basic.hpp"

#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_TaskPatrol.BP_SM_TaskPatrol_C
// 0x0008 (0x0038 - 0x0030)
class UBP_SM_TaskPatrol_C final : public UASMTask
{
public:
	int32                                         移动方式;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          调试模式;                                          // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          允许打断;                                          // 0x0035(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_TaskPatrol_C">();
	}
	static class UBP_SM_TaskPatrol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_TaskPatrol_C>();
	}
};
static_assert(alignof(UBP_SM_TaskPatrol_C) == 0x000008, "Wrong alignment on UBP_SM_TaskPatrol_C");
static_assert(sizeof(UBP_SM_TaskPatrol_C) == 0x000038, "Wrong size on UBP_SM_TaskPatrol_C");
static_assert(offsetof(UBP_SM_TaskPatrol_C, 移动方式) == 0x000030, "Member 'UBP_SM_TaskPatrol_C::移动方式' has a wrong offset!");
static_assert(offsetof(UBP_SM_TaskPatrol_C, 调试模式) == 0x000034, "Member 'UBP_SM_TaskPatrol_C::调试模式' has a wrong offset!");
static_assert(offsetof(UBP_SM_TaskPatrol_C, 允许打断) == 0x000035, "Member 'UBP_SM_TaskPatrol_C::允许打断' has a wrong offset!");

}

