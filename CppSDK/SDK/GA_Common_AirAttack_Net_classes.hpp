﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_AirAttack_Net

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Common_AirAttack_Net.GA_Common_AirAttack_Net_C
// 0x0010 (0x0578 - 0x0568)
class UGA_Common_AirAttack_Net_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Common_AirAttack_Net_C;          // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          落地攻击;                                          // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Common_AirAttack_Net(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompleted_5D118C384AE61F1C80292E81B7D3E709();
	void OnBlendOut_5D118C384AE61F1C80292E81B7D3E709();
	void OnInterrupted_5D118C384AE61F1C80292E81B7D3E709();
	void OnCancelled_5D118C384AE61F1C80292E81B7D3E709();
	void OnTick_5D118C384AE61F1C80292E81B7D3E709();
	void OnCompleted_5D118C384AE61F1C80292E8147145A67();
	void OnBlendOut_5D118C384AE61F1C80292E8147145A67();
	void OnInterrupted_5D118C384AE61F1C80292E8147145A67();
	void OnCancelled_5D118C384AE61F1C80292E8147145A67();
	void OnTick_5D118C384AE61F1C80292E8147145A67();
	void OnCompleted_5D118C384AE61F1C80292E81F8A8FE89();
	void OnBlendOut_5D118C384AE61F1C80292E81F8A8FE89();
	void OnInterrupted_5D118C384AE61F1C80292E81F8A8FE89();
	void OnCancelled_5D118C384AE61F1C80292E81F8A8FE89();
	void OnTick_5D118C384AE61F1C80292E81F8A8FE89();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Common_AirAttack_Net_C">();
	}
	static class UGA_Common_AirAttack_Net_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Common_AirAttack_Net_C>();
	}
};
static_assert(alignof(UGA_Common_AirAttack_Net_C) == 0x000008, "Wrong alignment on UGA_Common_AirAttack_Net_C");
static_assert(sizeof(UGA_Common_AirAttack_Net_C) == 0x000578, "Wrong size on UGA_Common_AirAttack_Net_C");
static_assert(offsetof(UGA_Common_AirAttack_Net_C, UberGraphFrame_GA_Common_AirAttack_Net_C) == 0x000568, "Member 'UGA_Common_AirAttack_Net_C::UberGraphFrame_GA_Common_AirAttack_Net_C' has a wrong offset!");
static_assert(offsetof(UGA_Common_AirAttack_Net_C, 落地攻击) == 0x000570, "Member 'UGA_Common_AirAttack_Net_C::落地攻击' has a wrong offset!");

}

