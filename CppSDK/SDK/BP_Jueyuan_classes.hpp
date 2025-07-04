﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Jueyuan

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Jueyuan.BP_Jueyuan_C
// 0x0030 (0x0780 - 0x0750)
class ABP_Jueyuan_C final : public ATsBaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Jueyuan_C;                       // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UKuroAdjustableCapsuleComponent*        Bip001LThighTwist;                                 // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroAdjustableCapsuleComponent*        Bip001RThighTwist;                                 // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroAdjustableCapsuleComponent*        Bip001Spine2;                                      // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 WeaponCase0;                                       // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Jueyuan(int32 EntryPoint);
	void ReceiveBeginPlay();
	bool 获取当前高度是否满足释放空中技能();
	void FightCommand(bool isInAir);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Jueyuan_C">();
	}
	static class ABP_Jueyuan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Jueyuan_C>();
	}
};
static_assert(alignof(ABP_Jueyuan_C) == 0x000010, "Wrong alignment on ABP_Jueyuan_C");
static_assert(sizeof(ABP_Jueyuan_C) == 0x000780, "Wrong size on ABP_Jueyuan_C");
static_assert(offsetof(ABP_Jueyuan_C, UberGraphFrame_BP_Jueyuan_C) == 0x000750, "Member 'ABP_Jueyuan_C::UberGraphFrame_BP_Jueyuan_C' has a wrong offset!");
static_assert(offsetof(ABP_Jueyuan_C, Bip001LThighTwist) == 0x000758, "Member 'ABP_Jueyuan_C::Bip001LThighTwist' has a wrong offset!");
static_assert(offsetof(ABP_Jueyuan_C, Bip001RThighTwist) == 0x000760, "Member 'ABP_Jueyuan_C::Bip001RThighTwist' has a wrong offset!");
static_assert(offsetof(ABP_Jueyuan_C, Bip001Spine2) == 0x000768, "Member 'ABP_Jueyuan_C::Bip001Spine2' has a wrong offset!");
static_assert(offsetof(ABP_Jueyuan_C, Camera) == 0x000770, "Member 'ABP_Jueyuan_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_Jueyuan_C, WeaponCase0) == 0x000778, "Member 'ABP_Jueyuan_C::WeaponCase0' has a wrong offset!");

}

