﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Comboo_SuiGuang_Vision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Comboo_SuiGuang_Vision.GA_Comboo_SuiGuang_Vision_C
// 0x0048 (0x05B0 - 0x0568)
class UGA_Comboo_SuiGuang_Vision_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Comboo_SuiGuang_Vision_C;        // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 技能目标;                                          // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     召唤者;                                            // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         召唤者ID;                                          // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_584[0x4];                                      // 0x0584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     声骸对象;                                          // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                变身结束_材质特效;                                 // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                变身结束_粒子特效;                                 // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          是否成功释放;                                      // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          主动结束;                                          // 0x05A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A2[0x2];                                      // 0x05A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         材质Handle;                                        // 0x05A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          已结束;                                            // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Comboo_SuiGuang_Vision(int32 EntryPoint);
	void 角色受击(class ATsBaseCharacter_C* 角色, const struct FSHitInformation& 受击数据);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnFinish_098DFC0D4956AD1672A1D4960F14D046();
	void EventReceived_18B59F5945020DB23C42FD8873132C0D(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E814F16632C();
	void OnBlendOut_5D118C384AE61F1C80292E814F16632C();
	void OnInterrupted_5D118C384AE61F1C80292E814F16632C();
	void OnCancelled_5D118C384AE61F1C80292E814F16632C();
	void OnTick_5D118C384AE61F1C80292E814F16632C();
	void Added_21071CB943CD992BF8EFD6A35163261C(const struct FGameplayTag& Tag);
	void Added_21071CB943CD992BF8EFD6A3CD35A445(const struct FGameplayTag& Tag);
	void EventReceived_18B59F5945020DB23C42FD881D80F166(const struct FGameplayEventData& Payload);
	void EventReceived_18B59F5945020DB23C42FD8865470148(const struct FGameplayEventData& Payload);
	void 显示玩家模型();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Comboo_SuiGuang_Vision_C">();
	}
	static class UGA_Comboo_SuiGuang_Vision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Comboo_SuiGuang_Vision_C>();
	}
};
static_assert(alignof(UGA_Comboo_SuiGuang_Vision_C) == 0x000008, "Wrong alignment on UGA_Comboo_SuiGuang_Vision_C");
static_assert(sizeof(UGA_Comboo_SuiGuang_Vision_C) == 0x0005B0, "Wrong size on UGA_Comboo_SuiGuang_Vision_C");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, UberGraphFrame_GA_Comboo_SuiGuang_Vision_C) == 0x000568, "Member 'UGA_Comboo_SuiGuang_Vision_C::UberGraphFrame_GA_Comboo_SuiGuang_Vision_C' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 技能目标) == 0x000570, "Member 'UGA_Comboo_SuiGuang_Vision_C::技能目标' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 召唤者) == 0x000578, "Member 'UGA_Comboo_SuiGuang_Vision_C::召唤者' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 召唤者ID) == 0x000580, "Member 'UGA_Comboo_SuiGuang_Vision_C::召唤者ID' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 声骸对象) == 0x000588, "Member 'UGA_Comboo_SuiGuang_Vision_C::声骸对象' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 变身结束_材质特效) == 0x000590, "Member 'UGA_Comboo_SuiGuang_Vision_C::变身结束_材质特效' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 变身结束_粒子特效) == 0x000598, "Member 'UGA_Comboo_SuiGuang_Vision_C::变身结束_粒子特效' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 是否成功释放) == 0x0005A0, "Member 'UGA_Comboo_SuiGuang_Vision_C::是否成功释放' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 主动结束) == 0x0005A1, "Member 'UGA_Comboo_SuiGuang_Vision_C::主动结束' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 材质Handle) == 0x0005A4, "Member 'UGA_Comboo_SuiGuang_Vision_C::材质Handle' has a wrong offset!");
static_assert(offsetof(UGA_Comboo_SuiGuang_Vision_C, 已结束) == 0x0005A8, "Member 'UGA_Comboo_SuiGuang_Vision_C::已结束' has a wrong offset!");

}

