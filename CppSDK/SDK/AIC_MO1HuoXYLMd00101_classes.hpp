﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1HuoXYLMd00101

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SAiConditions_structs.hpp"
#include "AIC_AICommon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_MO1HuoXYLMd00101.AIC_MO1HuoXYLMd00101_C
// 0x0458 (0x0BE0 - 0x0788)
class AAIC_MO1HuoXYLMd00101_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_MO1HuoXYLMd00101_C;             // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         触发嘲讽;                                          // 0x0790(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         触发群嘲;                                          // 0x0848(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         合击失败;                                          // 0x0900(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         重置目标;                                          // 0x09B8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         合击限制;                                          // 0x0A70(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         进战;                                              // 0x0B28(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_MO1HuoXYLMd00101(int32 EntryPoint);
	void 进战重置(bool bContent);
	void 限制解除(bool bContent);
	void 合击目标重置(bool bContent);
	void 派对散伙(bool bContent);
	void 群嘲派对(bool bContent);
	void 嘲讽(bool bContent);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_MO1HuoXYLMd00101_C">();
	}
	static class AAIC_MO1HuoXYLMd00101_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_MO1HuoXYLMd00101_C>();
	}
};
static_assert(alignof(AAIC_MO1HuoXYLMd00101_C) == 0x000008, "Wrong alignment on AAIC_MO1HuoXYLMd00101_C");
static_assert(sizeof(AAIC_MO1HuoXYLMd00101_C) == 0x000BE0, "Wrong size on AAIC_MO1HuoXYLMd00101_C");
static_assert(offsetof(AAIC_MO1HuoXYLMd00101_C, UberGraphFrame_AIC_MO1HuoXYLMd00101_C) == 0x000788, "Member 'AAIC_MO1HuoXYLMd00101_C::UberGraphFrame_AIC_MO1HuoXYLMd00101_C' has a wrong offset!");
static_assert(offsetof(AAIC_MO1HuoXYLMd00101_C, 触发嘲讽) == 0x000790, "Member 'AAIC_MO1HuoXYLMd00101_C::触发嘲讽' has a wrong offset!");
static_assert(offsetof(AAIC_MO1HuoXYLMd00101_C, 触发群嘲) == 0x000848, "Member 'AAIC_MO1HuoXYLMd00101_C::触发群嘲' has a wrong offset!");
static_assert(offsetof(AAIC_MO1HuoXYLMd00101_C, 合击失败) == 0x000900, "Member 'AAIC_MO1HuoXYLMd00101_C::合击失败' has a wrong offset!");
static_assert(offsetof(AAIC_MO1HuoXYLMd00101_C, 重置目标) == 0x0009B8, "Member 'AAIC_MO1HuoXYLMd00101_C::重置目标' has a wrong offset!");
static_assert(offsetof(AAIC_MO1HuoXYLMd00101_C, 合击限制) == 0x000A70, "Member 'AAIC_MO1HuoXYLMd00101_C::合击限制' has a wrong offset!");
static_assert(offsetof(AAIC_MO1HuoXYLMd00101_C, 进战) == 0x000B28, "Member 'AAIC_MO1HuoXYLMd00101_C::进战' has a wrong offset!");

}

