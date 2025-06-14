﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SAudioEventProbabilityCooldownInfo

#include "Basic.hpp"

#include "SGameplayTagProbabilityCooldownInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct SAudioEventProbabilityCooldownInfo.SAudioEventProbabilityCooldownInfo
// 0x0018 (0x0018 - 0x0000)
struct FSAudioEventProbabilityCooldownInfo final
{
public:
	float                                         DefaultProbability_10_745EC015436DEFB2B292A79C081F3E4F; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefaultCooldownTime_18_977F859548C9BB2FAB972D9C48D5EB19; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSGameplayTagProbabilityCooldownInfo> TagProbability_15_717CFA424B383E7CBB53C2A5731D30CA; // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSAudioEventProbabilityCooldownInfo) == 0x000008, "Wrong alignment on FSAudioEventProbabilityCooldownInfo");
static_assert(sizeof(FSAudioEventProbabilityCooldownInfo) == 0x000018, "Wrong size on FSAudioEventProbabilityCooldownInfo");
static_assert(offsetof(FSAudioEventProbabilityCooldownInfo, DefaultProbability_10_745EC015436DEFB2B292A79C081F3E4F) == 0x000000, "Member 'FSAudioEventProbabilityCooldownInfo::DefaultProbability_10_745EC015436DEFB2B292A79C081F3E4F' has a wrong offset!");
static_assert(offsetof(FSAudioEventProbabilityCooldownInfo, DefaultCooldownTime_18_977F859548C9BB2FAB972D9C48D5EB19) == 0x000004, "Member 'FSAudioEventProbabilityCooldownInfo::DefaultCooldownTime_18_977F859548C9BB2FAB972D9C48D5EB19' has a wrong offset!");
static_assert(offsetof(FSAudioEventProbabilityCooldownInfo, TagProbability_15_717CFA424B383E7CBB53C2A5731D30CA) == 0x000008, "Member 'FSAudioEventProbabilityCooldownInfo::TagProbability_15_717CFA424B383E7CBB53C2A5731D30CA' has a wrong offset!");

}

