﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SAIConfig

#include "Basic.hpp"

#include "EActionPlan_structs.hpp"


namespace SDK
{

// UserDefinedStruct SAIConfig.SAIConfig
// 0x0050 (0x0050 - 0x0000)
struct FSAIConfig final
{
public:
	TSoftClassPtr<class UClass>                   AIController_7_114CE7C14BF6547437BE0AAF22CB7BB5;   // 0x0000(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	EActionPlan                                   计划任务_20_E8C02CCD444132A33DA253AD49C6ACE3;      // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         鸣萤寻路样条ID_13_4CA5953444638F2541FEA3908EC0CDBF; // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         巡逻样条ID_16_0CA4707C4C24CBB8B5A720B2E6404E7D;    // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PathPointList_23_9441C9544F041EA104C4EA9EB62510E7; // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 备注_10_E15B53A34C8BCD7CEACAFD966CD0542F;          // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FSAIConfig) == 0x000008, "Wrong alignment on FSAIConfig");
static_assert(sizeof(FSAIConfig) == 0x000050, "Wrong size on FSAIConfig");
static_assert(offsetof(FSAIConfig, AIController_7_114CE7C14BF6547437BE0AAF22CB7BB5) == 0x000000, "Member 'FSAIConfig::AIController_7_114CE7C14BF6547437BE0AAF22CB7BB5' has a wrong offset!");
static_assert(offsetof(FSAIConfig, 计划任务_20_E8C02CCD444132A33DA253AD49C6ACE3) == 0x000030, "Member 'FSAIConfig::计划任务_20_E8C02CCD444132A33DA253AD49C6ACE3' has a wrong offset!");
static_assert(offsetof(FSAIConfig, 鸣萤寻路样条ID_13_4CA5953444638F2541FEA3908EC0CDBF) == 0x000034, "Member 'FSAIConfig::鸣萤寻路样条ID_13_4CA5953444638F2541FEA3908EC0CDBF' has a wrong offset!");
static_assert(offsetof(FSAIConfig, 巡逻样条ID_16_0CA4707C4C24CBB8B5A720B2E6404E7D) == 0x000038, "Member 'FSAIConfig::巡逻样条ID_16_0CA4707C4C24CBB8B5A720B2E6404E7D' has a wrong offset!");
static_assert(offsetof(FSAIConfig, PathPointList_23_9441C9544F041EA104C4EA9EB62510E7) == 0x00003C, "Member 'FSAIConfig::PathPointList_23_9441C9544F041EA104C4EA9EB62510E7' has a wrong offset!");
static_assert(offsetof(FSAIConfig, 备注_10_E15B53A34C8BCD7CEACAFD966CD0542F) == 0x000040, "Member 'FSAIConfig::备注_10_E15B53A34C8BCD7CEACAFD966CD0542F' has a wrong offset!");

}

