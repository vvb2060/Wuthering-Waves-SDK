﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateReplaceHitEffect

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateReplaceHitEffect.TsAnimNotifyStateReplaceHitEffect_C
// 0x0010 (0x0058 - 0x0048)
class UTsAnimNotifyStateReplaceHitEffect_C final : public UKuroAnimNotifyState
{
public:
	class UBP_ReplaceHitEffect_C*                 Setting;                                           // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitEffectId;                                       // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateReplaceHitEffect_C">();
	}
	static class UTsAnimNotifyStateReplaceHitEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateReplaceHitEffect_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateReplaceHitEffect_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateReplaceHitEffect_C");
static_assert(sizeof(UTsAnimNotifyStateReplaceHitEffect_C) == 0x000058, "Wrong size on UTsAnimNotifyStateReplaceHitEffect_C");
static_assert(offsetof(UTsAnimNotifyStateReplaceHitEffect_C, Setting) == 0x000048, "Member 'UTsAnimNotifyStateReplaceHitEffect_C::Setting' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateReplaceHitEffect_C, HitEffectId) == 0x000050, "Member 'UTsAnimNotifyStateReplaceHitEffect_C::HitEffectId' has a wrong offset!");

}

