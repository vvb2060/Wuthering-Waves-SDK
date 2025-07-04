﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskSelectSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsTaskAbortImmediatelyBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskSelectSkill.TsTaskSelectSkill_C
// 0x0010 (0x00C8 - 0x00B8)
class UTsTaskSelectSkill_C final : public UTsTaskAbortImmediatelyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TsTaskSelectSkill_C;                // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SkillType;                                         // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugLog;                                          // 0x00C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_TsTaskSelectSkill(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskSelectSkill_C">();
	}
	static class UTsTaskSelectSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskSelectSkill_C>();
	}
};
static_assert(alignof(UTsTaskSelectSkill_C) == 0x000008, "Wrong alignment on UTsTaskSelectSkill_C");
static_assert(sizeof(UTsTaskSelectSkill_C) == 0x0000C8, "Wrong size on UTsTaskSelectSkill_C");
static_assert(offsetof(UTsTaskSelectSkill_C, UberGraphFrame_TsTaskSelectSkill_C) == 0x0000B8, "Member 'UTsTaskSelectSkill_C::UberGraphFrame_TsTaskSelectSkill_C' has a wrong offset!");
static_assert(offsetof(UTsTaskSelectSkill_C, SkillType) == 0x0000C0, "Member 'UTsTaskSelectSkill_C::SkillType' has a wrong offset!");
static_assert(offsetof(UTsTaskSelectSkill_C, DebugLog) == 0x0000C4, "Member 'UTsTaskSelectSkill_C::DebugLog' has a wrong offset!");

}

