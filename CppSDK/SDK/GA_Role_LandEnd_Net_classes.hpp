﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_LandEnd_Net

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Role_LandEnd_Net.GA_Role_LandEnd_Net_C
// 0x0008 (0x0570 - 0x0568)
class UGA_Role_LandEnd_Net_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Role_LandEnd_Net_C;              // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Role_LandEnd_Net(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompleted_5D118C384AE61F1C80292E8120D6F4B4();
	void OnBlendOut_5D118C384AE61F1C80292E8120D6F4B4();
	void OnInterrupted_5D118C384AE61F1C80292E8120D6F4B4();
	void OnCancelled_5D118C384AE61F1C80292E8120D6F4B4();
	void OnTick_5D118C384AE61F1C80292E8120D6F4B4();
	void OnFinish_60C8757C4F274DFA6A15BFB2BBC51946();
	void Added_CF97F8BF4298CF4D3C76EB9D81A391D8(const struct FGameplayTag& Tag);
	void Added_B7E505E3445443CA4C27F38B7FAAFD98(const struct FGameplayTag& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Role_LandEnd_Net_C">();
	}
	static class UGA_Role_LandEnd_Net_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Role_LandEnd_Net_C>();
	}
};
static_assert(alignof(UGA_Role_LandEnd_Net_C) == 0x000008, "Wrong alignment on UGA_Role_LandEnd_Net_C");
static_assert(sizeof(UGA_Role_LandEnd_Net_C) == 0x000570, "Wrong size on UGA_Role_LandEnd_Net_C");
static_assert(offsetof(UGA_Role_LandEnd_Net_C, UberGraphFrame_GA_Role_LandEnd_Net_C) == 0x000568, "Member 'UGA_Role_LandEnd_Net_C::UberGraphFrame_GA_Role_LandEnd_Net_C' has a wrong offset!");

}

