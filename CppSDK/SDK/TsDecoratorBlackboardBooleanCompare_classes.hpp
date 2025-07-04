﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsDecoratorBlackboardBooleanCompare

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsDecoratorBlackboardBooleanCompare.TsDecoratorBlackboardBooleanCompare_C
// 0x0018 (0x00C0 - 0x00A8)
class UTsDecoratorBlackboardBooleanCompare_C final : public UBTDecorator_BlueprintBase
{
public:
	class FString                                 BlackboardKey;                                     // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CompareValue;                                      // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsDecoratorBlackboardBooleanCompare_C">();
	}
	static class UTsDecoratorBlackboardBooleanCompare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsDecoratorBlackboardBooleanCompare_C>();
	}
};
static_assert(alignof(UTsDecoratorBlackboardBooleanCompare_C) == 0x000008, "Wrong alignment on UTsDecoratorBlackboardBooleanCompare_C");
static_assert(sizeof(UTsDecoratorBlackboardBooleanCompare_C) == 0x0000C0, "Wrong size on UTsDecoratorBlackboardBooleanCompare_C");
static_assert(offsetof(UTsDecoratorBlackboardBooleanCompare_C, BlackboardKey) == 0x0000A8, "Member 'UTsDecoratorBlackboardBooleanCompare_C::BlackboardKey' has a wrong offset!");
static_assert(offsetof(UTsDecoratorBlackboardBooleanCompare_C, CompareValue) == 0x0000B8, "Member 'UTsDecoratorBlackboardBooleanCompare_C::CompareValue' has a wrong offset!");

}

