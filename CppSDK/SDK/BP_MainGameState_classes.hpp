﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MainGameState

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MainGameState.BP_MainGameState_C
// 0x0008 (0x0330 - 0x0328)
class ABP_MainGameState_C final : public AGameState
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MainGameState_C">();
	}
	static class ABP_MainGameState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MainGameState_C>();
	}
};
static_assert(alignof(ABP_MainGameState_C) == 0x000008, "Wrong alignment on ABP_MainGameState_C");
static_assert(sizeof(ABP_MainGameState_C) == 0x000330, "Wrong size on ABP_MainGameState_C");
static_assert(offsetof(ABP_MainGameState_C, DefaultSceneRoot) == 0x000328, "Member 'ABP_MainGameState_C::DefaultSceneRoot' has a wrong offset!");

}

