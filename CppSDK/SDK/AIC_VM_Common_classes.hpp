﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_VM_Common

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SAiConditions_structs.hpp"
#include "AIC_AICommon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_VM_Common.AIC_VM_Common_C
// 0x0248 (0x09D0 - 0x0788)
class AAIC_VM_Common_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_VM_Common_C;                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         检测现身;                                          // 0x0790(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         生命时长;                                          // 0x0848(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84C[0x4];                                      // 0x084C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           生命终止定时器;                                    // 0x0850(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSAiConditions                         取消生命定时器;                                    // 0x0858(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         不被子弹命中;                                      // 0x0910(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_BaseVision_C*                       As_BP_Base_Vision;                                 // 0x09C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_VM_Common(int32 EntryPoint);
	void 免疫子弹(bool bContent);
	void 取消定时(bool bContent);
	void 添加生命结束();
	void 添加生命周期(bool bContent);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_VM_Common_C">();
	}
	static class AAIC_VM_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_VM_Common_C>();
	}
};
static_assert(alignof(AAIC_VM_Common_C) == 0x000008, "Wrong alignment on AAIC_VM_Common_C");
static_assert(sizeof(AAIC_VM_Common_C) == 0x0009D0, "Wrong size on AAIC_VM_Common_C");
static_assert(offsetof(AAIC_VM_Common_C, UberGraphFrame_AIC_VM_Common_C) == 0x000788, "Member 'AAIC_VM_Common_C::UberGraphFrame_AIC_VM_Common_C' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, 检测现身) == 0x000790, "Member 'AAIC_VM_Common_C::检测现身' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, 生命时长) == 0x000848, "Member 'AAIC_VM_Common_C::生命时长' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, 生命终止定时器) == 0x000850, "Member 'AAIC_VM_Common_C::生命终止定时器' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, 取消生命定时器) == 0x000858, "Member 'AAIC_VM_Common_C::取消生命定时器' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, 不被子弹命中) == 0x000910, "Member 'AAIC_VM_Common_C::不被子弹命中' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, As_BP_Base_Vision) == 0x0009C8, "Member 'AAIC_VM_Common_C::As_BP_Base_Vision' has a wrong offset!");

}

