﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsMeshAnimBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsMeshAnimBlueprintFunctionLibrary.TsMeshAnimBlueprintFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UTsMeshAnimBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static struct FVector GetSightDirect(int32 entityId, class UObject* __WorldContext);
	static class UMeshComponent* GetHulu(int32 entityId, class UObject* __WorldContext);
	static float GetBattleIdleTime(int32 entityId, class UObject* __WorldContext);
	static void EnterBattleIdle(int32 entityId, class UObject* __WorldContext);
	static void HideWeaponsWhenHideBones(int32 entityId, bool hide, class FName socketName, class UObject* __WorldContext);
	static int32 GetCurrentWeaponHangState(int32 entityId, class UObject* __WorldContext);
	static void ChangeWeapon(int32 entityId, const struct FSWeaponSocketItem& weaponSocket, class UObject* __WorldContext);
	static float GetRandomStandActionIndex(int32 entityId, class UObject* __WorldContext);
	static void HideWeapon(int32 entityId, bool hide, int32 index, bool hideEffect, bool useHighPriority, class UObject* __WorldContext);
	static void HideHulu(int32 entityId, bool bHidden, class UObject* __WorldContext);
	static void ChangeMeshAnim(int32 entityId, class USkeletalMesh* meshClass, class UClass* animBlueprintClass, class UObject* __WorldContext);
	static float GetDegMovementSlope(int32 entityId, class UObject* __WorldContext);
	static class FString GetRoleFootStepState(int32 entityId, class UObject* __WorldContext);
	static void SetIkMeshOffset(int32 entityId, float offset, class UObject* __WorldContext);
	static float GetWeaponBreachLevel(int32 entityId, class UObject* __WorldContext);
	static void SetTransformWithModelBuffer(int32 entityId, const struct FTransformDouble& transform, float timeLength, class UObject* __WorldContext);
	static void SetSightDirectEnable(int32 entityId, bool v, class UObject* __WorldContext);
	static class UAnimInstance* MainAnimInstance(int32 entityId, class UObject* __WorldContext);
	static void UpdateAnimInfoMeshAnim(int32 entityId, class UBP_ABPLogicParams_C* animLogicParams, class UObject* __WorldContext);
	static void UpdateAnimInfoMeshAnimRoleNpc(int32 entityId, class UBP_ABPLogicParams_C* animLogicParams, class UObject* __WorldContext);
	static void ChangeWeaponHangState(int32 entityId, int32 weaponState, float lerpTime, TArray<class FName>& sockets, TArray<struct FTransform>& transforms, class UObject* __WorldContext);
	static void ChangeTickOverlap(int32 entityId, bool overlap, class UObject* __WorldContext);
	static bool GetIsCurrentWeaponHideEffectPlaying(int32 entityId, class UObject* __WorldContext);
	static void UpdateFootstepAudioEvent(int32 entityId, int32 角色蓝图EntityId, const struct FSFootstepAudioEventParam& params, class UObject* __WorldContext);
	static void AnimTurnLog(int32 entityId, class UObject* __WorldContext);
	static bool IsNpcTurning(int32 entityId, class UObject* __WorldContext);
	static void UpdateAndGetRotateBonesMap(int32 entityId, float deltaSeconds, TMap<class FString, float>& outMap, struct FVector& outOffset, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsMeshAnimBlueprintFunctionLibrary_C">();
	}
	static class UTsMeshAnimBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsMeshAnimBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UTsMeshAnimBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UTsMeshAnimBlueprintFunctionLibrary_C");
static_assert(sizeof(UTsMeshAnimBlueprintFunctionLibrary_C) == 0x000030, "Wrong size on UTsMeshAnimBlueprintFunctionLibrary_C");

}

