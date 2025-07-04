﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskAiMarkItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsTaskAbortImmediatelyBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskAiMarkItem.TsTaskAiMarkItem_C
// 0x0020 (0x00D8 - 0x00B8)
class UTsTaskAiMarkItem_C final : public UTsTaskAbortImmediatelyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TsTaskAiMarkItem_C;                 // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 ItemBlackboardKey;                                 // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          SearchFilterIsMarkByAi;                            // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TsTaskAiMarkItem(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void InitTsVariables();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskAiMarkItem_C">();
	}
	static class UTsTaskAiMarkItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskAiMarkItem_C>();
	}
};
static_assert(alignof(UTsTaskAiMarkItem_C) == 0x000008, "Wrong alignment on UTsTaskAiMarkItem_C");
static_assert(sizeof(UTsTaskAiMarkItem_C) == 0x0000D8, "Wrong size on UTsTaskAiMarkItem_C");
static_assert(offsetof(UTsTaskAiMarkItem_C, UberGraphFrame_TsTaskAiMarkItem_C) == 0x0000B8, "Member 'UTsTaskAiMarkItem_C::UberGraphFrame_TsTaskAiMarkItem_C' has a wrong offset!");
static_assert(offsetof(UTsTaskAiMarkItem_C, ItemBlackboardKey) == 0x0000C0, "Member 'UTsTaskAiMarkItem_C::ItemBlackboardKey' has a wrong offset!");
static_assert(offsetof(UTsTaskAiMarkItem_C, SearchFilterIsMarkByAi) == 0x0000D0, "Member 'UTsTaskAiMarkItem_C::SearchFilterIsMarkByAi' has a wrong offset!");

}

