﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SGameplayTagProbabilityCooldownInfo

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK
{

// UserDefinedStruct SGameplayTagProbabilityCooldownInfo.SGameplayTagProbabilityCooldownInfo
// 0x0014 (0x0014 - 0x0000)
struct FSGameplayTagProbabilityCooldownInfo final
{
public:
	struct FGameplayTag                           GameplayTag_2_C6124A754A7A00A48BD1DFBD9F130812;    // 0x0000(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                         Probability_5_6CCE81FE4F80F36D7CBB95BC18FC12EE;    // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CooldownTime_9_514E7EBC44AD5303577DE88D1EBBD1F3;   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSGameplayTagProbabilityCooldownInfo) == 0x000004, "Wrong alignment on FSGameplayTagProbabilityCooldownInfo");
static_assert(sizeof(FSGameplayTagProbabilityCooldownInfo) == 0x000014, "Wrong size on FSGameplayTagProbabilityCooldownInfo");
static_assert(offsetof(FSGameplayTagProbabilityCooldownInfo, GameplayTag_2_C6124A754A7A00A48BD1DFBD9F130812) == 0x000000, "Member 'FSGameplayTagProbabilityCooldownInfo::GameplayTag_2_C6124A754A7A00A48BD1DFBD9F130812' has a wrong offset!");
static_assert(offsetof(FSGameplayTagProbabilityCooldownInfo, Probability_5_6CCE81FE4F80F36D7CBB95BC18FC12EE) == 0x00000C, "Member 'FSGameplayTagProbabilityCooldownInfo::Probability_5_6CCE81FE4F80F36D7CBB95BC18FC12EE' has a wrong offset!");
static_assert(offsetof(FSGameplayTagProbabilityCooldownInfo, CooldownTime_9_514E7EBC44AD5303577DE88D1EBBD1F3) == 0x000010, "Member 'FSGameplayTagProbabilityCooldownInfo::CooldownTime_9_514E7EBC44AD5303577DE88D1EBBD1F3' has a wrong offset!");

}

