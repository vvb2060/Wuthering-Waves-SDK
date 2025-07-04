﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SceneInteractionActor

#include "Basic.hpp"

#include "SSceneInteractionitem_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "SScenePropertyEffect_structs.hpp"
#include "Engine_structs.hpp"
#include "ESceneInteractionEffect_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SSceneInteractionTags_structs.hpp"


namespace SDK
{

// TypeScriptGeneratedClass SceneInteractionActor.SceneInteractionActor_C
// 0x02C0 (0x0570 - 0x02B0)
class ASceneInteractionActor_C final : public AKuroSceneInteractionActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<EKuroSceneInteractionState, struct FSSceneInteractionitem> States;                          // 0x02C0(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, class AActor*>            ReferenceActors;                                   // 0x0310(0x0050)(Edit, BlueprintVisible)
	TArray<class AActor*>                         CollisionActors;                                   // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class FString                                 LevelName;                                         // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         HandleId;                                          // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384[0x4];                                      // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ESceneInteractionEffect, class ABP_EffectActor_C*> EndEffects;                              // 0x0388(0x0050)(Edit, BlueprintVisible)
	TMap<ESceneInteractionEffect, struct FSScenePropertyEffect> Effects;                             // 0x03D8(0x0050)(Edit, BlueprintVisible)
	TArray<class AActor*>                         InteractionEffectHookActors;                       // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ATsBaseCharacter_C*                     CharacterForOrgan;                                 // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TMap<struct FGameplayTag, struct FSSceneInteractionTags> TagsAndCorrespondingEffects;            // 0x0440(0x0050)(Edit, BlueprintVisible)
	TArray<class AActor*>                         ActorsForProjection;                               // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TMap<class AActor*, struct FGameplayTag>      PartCollisionActorsAndCorrespondingTags;           // 0x04A0(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UMaterialInstance*                      MaterialForProjection;                             // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASkeletalMeshActor*>             SkeletalMeshActors;                                // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AActor*>                         ReceivingDecalsActors;                             // 0x0508(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ABP_InteractionMaterialController_C*    InteractionMaterialController;                     // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BasePlatform_C*                     BasePlatformInternal;                              // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentStateAkEventHandle;                         // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52C[0x4];                                      // 0x052C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMesh*>                    StaticMeshList;                                    // 0x0530(0x0010)(Edit, BlueprintVisible)
	bool                                          需要过渡状态;                                      // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          跳过表现过程;                                      // 0x0541(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EKuroSceneInteractionState                    模拟状态;                                          // 0x0542(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_543[0x1];                                      // 0x0543(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           模拟Tag;                                           // 0x0544(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<class ASkeletalMeshActor*>             AllSkeletalMeshActors;                             // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          IsAnimtionMotagePlayed;                            // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_561[0x7];                                      // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 OverrideEffectActor;                               // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SceneInteractionActor(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void AddNewEffect();
	void AddNewState();
	void UpdateTimeDilation();
	void AddNewEndEffect();
	void AddMatrialDataForChildrenActor(class AActor* actor, class UItemMaterialControllerActorData_C* materialData);
	void ResetTagActorHide(const struct FGameplayTag& tag);
	void StopExtraEffectOnTagsChange(const struct FGameplayTag& tag);
	class ALevelSequenceActor* GetDirectorBySequence(class ULevelSequence* sequence);
	void DestroySelf();
	void StopTagAkEvent(const struct FGameplayTag& tag);
	void UpdateProjectionActorTransform(const struct FTransformDouble& transform1);
	void TryStopCurrentState();
	void ChangeState1();
	void ChangeState2();
	void ChangeState3();
	void ChangeState4();
	void ChangeState5();
	void ChangeState6();
	void ChangeState7();
	void ChangeState8();
	void PreviewFullDestructible();
	void RemoveActorProjection();
	void 使用字段值切换状态();
	void 模拟Tag添加();
	void 模拟Tag移除();
	void 重置();
	void ApplyAnimOptimizationParams(bool bUseDistanceMap);
	void PendingPlayStateEffect();
	void RemovePendingStateEffectTick();
	void PendingPlayCrossStateEffect();
	void RemovePendingCrossStateEffectTick();
	void PendingPlayTagEffect();
	void RemovePendingTagEffectTick();
	void PlayKuroSkeletalMeshDestruction(class AActor* actor, bool isJumpToEnd);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SceneInteractionActor_C">();
	}
	static class ASceneInteractionActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASceneInteractionActor_C>();
	}
};
static_assert(alignof(ASceneInteractionActor_C) == 0x000008, "Wrong alignment on ASceneInteractionActor_C");
static_assert(sizeof(ASceneInteractionActor_C) == 0x000570, "Wrong size on ASceneInteractionActor_C");
static_assert(offsetof(ASceneInteractionActor_C, UberGraphFrame) == 0x0002B0, "Member 'ASceneInteractionActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, DefaultSceneRoot) == 0x0002B8, "Member 'ASceneInteractionActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, States) == 0x0002C0, "Member 'ASceneInteractionActor_C::States' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, ReferenceActors) == 0x000310, "Member 'ASceneInteractionActor_C::ReferenceActors' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, CollisionActors) == 0x000360, "Member 'ASceneInteractionActor_C::CollisionActors' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, LevelName) == 0x000370, "Member 'ASceneInteractionActor_C::LevelName' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, HandleId) == 0x000380, "Member 'ASceneInteractionActor_C::HandleId' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, EndEffects) == 0x000388, "Member 'ASceneInteractionActor_C::EndEffects' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, Effects) == 0x0003D8, "Member 'ASceneInteractionActor_C::Effects' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, InteractionEffectHookActors) == 0x000428, "Member 'ASceneInteractionActor_C::InteractionEffectHookActors' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, CharacterForOrgan) == 0x000438, "Member 'ASceneInteractionActor_C::CharacterForOrgan' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, TagsAndCorrespondingEffects) == 0x000440, "Member 'ASceneInteractionActor_C::TagsAndCorrespondingEffects' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, ActorsForProjection) == 0x000490, "Member 'ASceneInteractionActor_C::ActorsForProjection' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, PartCollisionActorsAndCorrespondingTags) == 0x0004A0, "Member 'ASceneInteractionActor_C::PartCollisionActorsAndCorrespondingTags' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, MaterialForProjection) == 0x0004F0, "Member 'ASceneInteractionActor_C::MaterialForProjection' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, SkeletalMeshActors) == 0x0004F8, "Member 'ASceneInteractionActor_C::SkeletalMeshActors' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, ReceivingDecalsActors) == 0x000508, "Member 'ASceneInteractionActor_C::ReceivingDecalsActors' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, InteractionMaterialController) == 0x000518, "Member 'ASceneInteractionActor_C::InteractionMaterialController' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, BasePlatformInternal) == 0x000520, "Member 'ASceneInteractionActor_C::BasePlatformInternal' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, CurrentStateAkEventHandle) == 0x000528, "Member 'ASceneInteractionActor_C::CurrentStateAkEventHandle' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, StaticMeshList) == 0x000530, "Member 'ASceneInteractionActor_C::StaticMeshList' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, 需要过渡状态) == 0x000540, "Member 'ASceneInteractionActor_C::需要过渡状态' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, 跳过表现过程) == 0x000541, "Member 'ASceneInteractionActor_C::跳过表现过程' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, 模拟状态) == 0x000542, "Member 'ASceneInteractionActor_C::模拟状态' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, 模拟Tag) == 0x000544, "Member 'ASceneInteractionActor_C::模拟Tag' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, AllSkeletalMeshActors) == 0x000550, "Member 'ASceneInteractionActor_C::AllSkeletalMeshActors' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, IsAnimtionMotagePlayed) == 0x000560, "Member 'ASceneInteractionActor_C::IsAnimtionMotagePlayed' has a wrong offset!");
static_assert(offsetof(ASceneInteractionActor_C, OverrideEffectActor) == 0x000568, "Member 'ASceneInteractionActor_C::OverrideEffectActor' has a wrong offset!");

}

