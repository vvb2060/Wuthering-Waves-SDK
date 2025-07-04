﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Skill03_Jinxi

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Skill03_Jinxi.GA_Skill03_Jinxi_C
// 0x0010 (0x0578 - 0x0568)
class UGA_Skill03_Jinxi_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Skill03_Jinxi_C;                 // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          是否命中;                                          // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Skill03_Jinxi(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E810CF2066E();
	void OnBlendOut_5D118C384AE61F1C80292E810CF2066E();
	void OnInterrupted_5D118C384AE61F1C80292E810CF2066E();
	void OnCancelled_5D118C384AE61F1C80292E810CF2066E();
	void OnTick_5D118C384AE61F1C80292E810CF2066E();
	void Added_21071CB943CD992BF8EFD6A3765F9196(const struct FGameplayTag& Tag);
	void Added_21071CB943CD992BF8EFD6A335FEAF21(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E818F5E4D5C();
	void OnBlendOut_5D118C384AE61F1C80292E818F5E4D5C();
	void OnInterrupted_5D118C384AE61F1C80292E818F5E4D5C();
	void OnCancelled_5D118C384AE61F1C80292E818F5E4D5C();
	void OnTick_5D118C384AE61F1C80292E818F5E4D5C();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Skill03_Jinxi_C">();
	}
	static class UGA_Skill03_Jinxi_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Skill03_Jinxi_C>();
	}
};
static_assert(alignof(UGA_Skill03_Jinxi_C) == 0x000008, "Wrong alignment on UGA_Skill03_Jinxi_C");
static_assert(sizeof(UGA_Skill03_Jinxi_C) == 0x000578, "Wrong size on UGA_Skill03_Jinxi_C");
static_assert(offsetof(UGA_Skill03_Jinxi_C, UberGraphFrame_GA_Skill03_Jinxi_C) == 0x000568, "Member 'UGA_Skill03_Jinxi_C::UberGraphFrame_GA_Skill03_Jinxi_C' has a wrong offset!");
static_assert(offsetof(UGA_Skill03_Jinxi_C, 是否命中) == 0x000570, "Member 'UGA_Skill03_Jinxi_C::是否命中' has a wrong offset!");

}

