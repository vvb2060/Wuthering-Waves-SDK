﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateAicAnimEvent

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateAicAnimEvent.TsAnimNotifyStateAicAnimEvent_C
// 0x0010 (0x0058 - 0x0048)
class UTsAnimNotifyStateAicAnimEvent_C final : public UKuroAnimNotifyState
{
public:
	class FName                                   Name_0;                                            // 0x0048(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCallBegin;                                        // 0x0054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCallEnd;                                          // 0x0055(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateAicAnimEvent_C">();
	}
	static class UTsAnimNotifyStateAicAnimEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateAicAnimEvent_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateAicAnimEvent_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateAicAnimEvent_C");
static_assert(sizeof(UTsAnimNotifyStateAicAnimEvent_C) == 0x000058, "Wrong size on UTsAnimNotifyStateAicAnimEvent_C");
static_assert(offsetof(UTsAnimNotifyStateAicAnimEvent_C, Name_0) == 0x000048, "Member 'UTsAnimNotifyStateAicAnimEvent_C::Name_0' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateAicAnimEvent_C, bCallBegin) == 0x000054, "Member 'UTsAnimNotifyStateAicAnimEvent_C::bCallBegin' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateAicAnimEvent_C, bCallEnd) == 0x000055, "Member 'UTsAnimNotifyStateAicAnimEvent_C::bCallEnd' has a wrong offset!");

}

