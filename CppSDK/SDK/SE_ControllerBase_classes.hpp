﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_ControllerBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SE_ControllerBase.SE_ControllerBase_C
// 0x0008 (0x00C8 - 0x00C0)
class USE_ControllerBase_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SE_ControllerBase(int32 EntryPoint);
	void ApplyEnvironmentFactor(float EnvironmentFactor);
	void ApplyAlpha(float alpha);
	void Loop(float time);
	void Start(float time);
	void End(float time);
	void ReceiveTick(float DeltaSeconds);
	void BeforeStart();
	void ApplyVisibility(bool visibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SE_ControllerBase_C">();
	}
	static class USE_ControllerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USE_ControllerBase_C>();
	}
};
static_assert(alignof(USE_ControllerBase_C) == 0x000008, "Wrong alignment on USE_ControllerBase_C");
static_assert(sizeof(USE_ControllerBase_C) == 0x0000C8, "Wrong size on USE_ControllerBase_C");
static_assert(offsetof(USE_ControllerBase_C, UberGraphFrame) == 0x0000C0, "Member 'USE_ControllerBase_C::UberGraphFrame' has a wrong offset!");

}

