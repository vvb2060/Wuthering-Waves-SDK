﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_BindStateDelaySuicide

#include "Basic.hpp"

#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_BindStateDelaySuicide.BP_SM_BindStateDelaySuicide_C
// 0x0008 (0x0038 - 0x0030)
class UBP_SM_BindStateDelaySuicide_C final : public UASMBindState
{
public:
	int32                                         SuicideDelay;                                      // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DestroyDelay;                                      // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_BindStateDelaySuicide_C">();
	}
	static class UBP_SM_BindStateDelaySuicide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_BindStateDelaySuicide_C>();
	}
};
static_assert(alignof(UBP_SM_BindStateDelaySuicide_C) == 0x000008, "Wrong alignment on UBP_SM_BindStateDelaySuicide_C");
static_assert(sizeof(UBP_SM_BindStateDelaySuicide_C) == 0x000038, "Wrong size on UBP_SM_BindStateDelaySuicide_C");
static_assert(offsetof(UBP_SM_BindStateDelaySuicide_C, SuicideDelay) == 0x000030, "Member 'UBP_SM_BindStateDelaySuicide_C::SuicideDelay' has a wrong offset!");
static_assert(offsetof(UBP_SM_BindStateDelaySuicide_C, DestroyDelay) == 0x000034, "Member 'UBP_SM_BindStateDelaySuicide_C::DestroyDelay' has a wrong offset!");

}

