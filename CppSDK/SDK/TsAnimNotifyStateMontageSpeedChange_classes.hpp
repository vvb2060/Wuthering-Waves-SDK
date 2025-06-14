﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateMontageSpeedChange

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateMontageSpeedChange.TsAnimNotifyStateMontageSpeedChange_C
// 0x0008 (0x0050 - 0x0048)
class UTsAnimNotifyStateMontageSpeedChange_C final : public UKuroAnimNotifyState
{
public:
	float                                         MontagePlayRate;                                   // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateMontageSpeedChange_C">();
	}
	static class UTsAnimNotifyStateMontageSpeedChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateMontageSpeedChange_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateMontageSpeedChange_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateMontageSpeedChange_C");
static_assert(sizeof(UTsAnimNotifyStateMontageSpeedChange_C) == 0x000050, "Wrong size on UTsAnimNotifyStateMontageSpeedChange_C");
static_assert(offsetof(UTsAnimNotifyStateMontageSpeedChange_C, MontagePlayRate) == 0x000048, "Member 'UTsAnimNotifyStateMontageSpeedChange_C::MontagePlayRate' has a wrong offset!");

}

