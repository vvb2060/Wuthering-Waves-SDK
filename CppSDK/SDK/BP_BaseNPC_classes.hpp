﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseNPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BaseNPC.BP_BaseNPC_C
// 0x0060 (0x07B0 - 0x0750)
class ABP_BaseNPC_C : public ATsBaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BaseNPC_C;                       // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          HitCollision;                                      // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavigationInvokerComponent*            NavigationInvoker_0;                               // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBeingImpacted;                                   // 0x0768(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_769[0x3];                                      // 0x0769(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Direction;                                         // 0x076C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Strength;                                          // 0x0770(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBeingAttacked;                                   // 0x0774(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanPlayerImpact;                                   // 0x0775(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          CanPlayerAttack;                                   // 0x0776(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          CanLookAtPlayer;                                   // 0x0777(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FSoftObjectPath                        BornEffect;                                        // 0x0778(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CombineFaceMesh;                                   // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanUpdateTextureFace;                              // 0x07A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsEnableIK;                                        // 0x07A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_BaseNPC(int32 EntryPoint);
	void BndEvt__BP_BaseNPC_HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_BaseNPC_HitCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void initAI();
	void 设置硬直(bool Value);
	void 通知AIC冲撞结果(bool IsImpact);
	void 执行冲撞处理(bool* Success);
	void 执行攻击处理(bool* Success);
	void 通知AIC攻击结果(bool IsAttack);
	void 检查是否玩家攻击(bool* IsAttack);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BaseNPC_C">();
	}
	static class ABP_BaseNPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BaseNPC_C>();
	}
};
static_assert(alignof(ABP_BaseNPC_C) == 0x000010, "Wrong alignment on ABP_BaseNPC_C");
static_assert(sizeof(ABP_BaseNPC_C) == 0x0007B0, "Wrong size on ABP_BaseNPC_C");
static_assert(offsetof(ABP_BaseNPC_C, UberGraphFrame_BP_BaseNPC_C) == 0x000750, "Member 'ABP_BaseNPC_C::UberGraphFrame_BP_BaseNPC_C' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, HitCollision) == 0x000758, "Member 'ABP_BaseNPC_C::HitCollision' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, NavigationInvoker_0) == 0x000760, "Member 'ABP_BaseNPC_C::NavigationInvoker_0' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, IsBeingImpacted) == 0x000768, "Member 'ABP_BaseNPC_C::IsBeingImpacted' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, Direction) == 0x00076C, "Member 'ABP_BaseNPC_C::Direction' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, Strength) == 0x000770, "Member 'ABP_BaseNPC_C::Strength' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, IsBeingAttacked) == 0x000774, "Member 'ABP_BaseNPC_C::IsBeingAttacked' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, CanPlayerImpact) == 0x000775, "Member 'ABP_BaseNPC_C::CanPlayerImpact' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, CanPlayerAttack) == 0x000776, "Member 'ABP_BaseNPC_C::CanPlayerAttack' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, CanLookAtPlayer) == 0x000777, "Member 'ABP_BaseNPC_C::CanLookAtPlayer' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, BornEffect) == 0x000778, "Member 'ABP_BaseNPC_C::BornEffect' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, CombineFaceMesh) == 0x000798, "Member 'ABP_BaseNPC_C::CombineFaceMesh' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, CanUpdateTextureFace) == 0x0007A0, "Member 'ABP_BaseNPC_C::CanUpdateTextureFace' has a wrong offset!");
static_assert(offsetof(ABP_BaseNPC_C, IsEnableIK) == 0x0007A1, "Member 'ABP_BaseNPC_C::IsEnableIK' has a wrong offset!");

}

