﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_Jinxi

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Common_Jinxi.GA_Common_Jinxi_C
// 0x0008 (0x0570 - 0x0568)
class UGA_Common_Jinxi_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Common_Jinxi_C;                  // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Common_Jinxi(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81E215ACE1();
	void OnBlendOut_5D118C384AE61F1C80292E81E215ACE1();
	void OnInterrupted_5D118C384AE61F1C80292E81E215ACE1();
	void OnCancelled_5D118C384AE61F1C80292E81E215ACE1();
	void OnTick_5D118C384AE61F1C80292E81E215ACE1();
	void Added_21071CB943CD992BF8EFD6A38146E10A(const struct FGameplayTag& Tag);
	void Added_21071CB943CD992BF8EFD6A33E7DC0EB(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E81AF65610D();
	void OnBlendOut_5D118C384AE61F1C80292E81AF65610D();
	void OnInterrupted_5D118C384AE61F1C80292E81AF65610D();
	void OnCancelled_5D118C384AE61F1C80292E81AF65610D();
	void OnTick_5D118C384AE61F1C80292E81AF65610D();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Common_Jinxi_C">();
	}
	static class UGA_Common_Jinxi_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Common_Jinxi_C>();
	}
};
static_assert(alignof(UGA_Common_Jinxi_C) == 0x000008, "Wrong alignment on UGA_Common_Jinxi_C");
static_assert(sizeof(UGA_Common_Jinxi_C) == 0x000570, "Wrong size on UGA_Common_Jinxi_C");
static_assert(offsetof(UGA_Common_Jinxi_C, UberGraphFrame_GA_Common_Jinxi_C) == 0x000568, "Member 'UGA_Common_Jinxi_C::UberGraphFrame_GA_Common_Jinxi_C' has a wrong offset!");

}

