﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_QTE

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCameraModifier_Settings_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Common_QTE.GA_Common_QTE_C
// 0x0138 (0x06A0 - 0x0568)
class UGA_Common_QTE_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Common_QTE_C;                    // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSCameraModifier_Settings              相机配置;                                          // 0x0570(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     原来的角色;                                        // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_QTE_Camera_C*                       RogueQteCamera;                                    // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         QTE时停子弹;                                       // 0x0698(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         QTE时停子弹2;                                      // 0x069C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Common_QTE(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_E8C2FC224B0A82D0076DE58540825291(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E81AB2AB65B();
	void OnBlendOut_5D118C384AE61F1C80292E81AB2AB65B();
	void OnInterrupted_5D118C384AE61F1C80292E81AB2AB65B();
	void OnCancelled_5D118C384AE61F1C80292E81AB2AB65B();
	void OnTick_5D118C384AE61F1C80292E81AB2AB65B();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Common_QTE_C">();
	}
	static class UGA_Common_QTE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Common_QTE_C>();
	}
};
static_assert(alignof(UGA_Common_QTE_C) == 0x000008, "Wrong alignment on UGA_Common_QTE_C");
static_assert(sizeof(UGA_Common_QTE_C) == 0x0006A0, "Wrong size on UGA_Common_QTE_C");
static_assert(offsetof(UGA_Common_QTE_C, UberGraphFrame_GA_Common_QTE_C) == 0x000568, "Member 'UGA_Common_QTE_C::UberGraphFrame_GA_Common_QTE_C' has a wrong offset!");
static_assert(offsetof(UGA_Common_QTE_C, 相机配置) == 0x000570, "Member 'UGA_Common_QTE_C::相机配置' has a wrong offset!");
static_assert(offsetof(UGA_Common_QTE_C, 原来的角色) == 0x000688, "Member 'UGA_Common_QTE_C::原来的角色' has a wrong offset!");
static_assert(offsetof(UGA_Common_QTE_C, RogueQteCamera) == 0x000690, "Member 'UGA_Common_QTE_C::RogueQteCamera' has a wrong offset!");
static_assert(offsetof(UGA_Common_QTE_C, QTE时停子弹) == 0x000698, "Member 'UGA_Common_QTE_C::QTE时停子弹' has a wrong offset!");
static_assert(offsetof(UGA_Common_QTE_C, QTE时停子弹2) == 0x00069C, "Member 'UGA_Common_QTE_C::QTE时停子弹2' has a wrong offset!");

}

