﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SLockOnConfig

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SLockOnConfig.SLockOnConfig
// 0x0010 (0x0010 - 0x0000)
struct FSLockOnConfig final
{
public:
	bool                                          IsOpened_2_333D51F8467B67C68E2EB59F098EB850;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Distance_6_3723156F401FB78699DBF999E2C8C902;       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UpDistance_8_6CE49F23489755065170BD81AF42A974;     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DownDistance_10_E86C714E431BE2F07BD36AB60DBFE510;  // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSLockOnConfig) == 0x000004, "Wrong alignment on FSLockOnConfig");
static_assert(sizeof(FSLockOnConfig) == 0x000010, "Wrong size on FSLockOnConfig");
static_assert(offsetof(FSLockOnConfig, IsOpened_2_333D51F8467B67C68E2EB59F098EB850) == 0x000000, "Member 'FSLockOnConfig::IsOpened_2_333D51F8467B67C68E2EB59F098EB850' has a wrong offset!");
static_assert(offsetof(FSLockOnConfig, Distance_6_3723156F401FB78699DBF999E2C8C902) == 0x000004, "Member 'FSLockOnConfig::Distance_6_3723156F401FB78699DBF999E2C8C902' has a wrong offset!");
static_assert(offsetof(FSLockOnConfig, UpDistance_8_6CE49F23489755065170BD81AF42A974) == 0x000008, "Member 'FSLockOnConfig::UpDistance_8_6CE49F23489755065170BD81AF42A974' has a wrong offset!");
static_assert(offsetof(FSLockOnConfig, DownDistance_10_E86C714E431BE2F07BD36AB60DBFE510) == 0x00000C, "Member 'FSLockOnConfig::DownDistance_10_E86C714E431BE2F07BD36AB60DBFE510' has a wrong offset!");

}

