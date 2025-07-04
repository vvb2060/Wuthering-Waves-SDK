﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1QunJing2Md00001_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SAiConditions_structs.hpp"
#include "ECharacterState_structs.hpp"
#include "AIC_AICommon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_MO1QunJing2Md00001_New.AIC_MO1QunJing2Md00001_New_C
// 0x03A0 (0x0B28 - 0x0788)
class AAIC_MO1QunJing2Md00001_New_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_MO1QunJing2Md00001_New_C;       // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         Conditions;                                        // 0x0790(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         Conditions_0;                                      // 0x0848(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         醒了;                                              // 0x0900(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         睡着感知;                                          // 0x09B8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         通用感知;                                          // 0x0A70(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_MO1QunJing2Md00001_New(int32 EntryPoint);
	void 自爆(bool bContent);
	void OnStart();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void 状态切换函数(class UObject* 角色, ECharacterState 老状态, ECharacterState 新状态, bool 主控, class UObject** 角色返回, ECharacterState* 老状态返回, ECharacterState* 新状态返回, bool* 主控返回);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_MO1QunJing2Md00001_New_C">();
	}
	static class AAIC_MO1QunJing2Md00001_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_MO1QunJing2Md00001_New_C>();
	}
};
static_assert(alignof(AAIC_MO1QunJing2Md00001_New_C) == 0x000008, "Wrong alignment on AAIC_MO1QunJing2Md00001_New_C");
static_assert(sizeof(AAIC_MO1QunJing2Md00001_New_C) == 0x000B28, "Wrong size on AAIC_MO1QunJing2Md00001_New_C");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, UberGraphFrame_AIC_MO1QunJing2Md00001_New_C) == 0x000788, "Member 'AAIC_MO1QunJing2Md00001_New_C::UberGraphFrame_AIC_MO1QunJing2Md00001_New_C' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, Conditions) == 0x000790, "Member 'AAIC_MO1QunJing2Md00001_New_C::Conditions' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, Conditions_0) == 0x000848, "Member 'AAIC_MO1QunJing2Md00001_New_C::Conditions_0' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, 醒了) == 0x000900, "Member 'AAIC_MO1QunJing2Md00001_New_C::醒了' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, 睡着感知) == 0x0009B8, "Member 'AAIC_MO1QunJing2Md00001_New_C::睡着感知' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, 通用感知) == 0x000A70, "Member 'AAIC_MO1QunJing2Md00001_New_C::通用感知' has a wrong offset!");

}

