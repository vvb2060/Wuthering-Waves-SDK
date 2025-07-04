﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SManipulateConfig

#include "Basic.hpp"

#include "SManipulatePointInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct SManipulateConfig.SManipulateConfig
// 0x0028 (0x0028 - 0x0000)
struct FSManipulateConfig final
{
public:
	class FName                                   ConfigName_2_B83FF9884D1C60F4DF6C54A78519CC1A;     // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSManipulatePointInfo>          ManipulatePoints_6_E3F152364E49B089E5A4F78CF74257E0; // 0x0010(0x0010)(Edit, BlueprintVisible)
	float                                         Duration_12_74DFD9F94817F729CD3B1483D7CF097D;      // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSManipulateConfig) == 0x000008, "Wrong alignment on FSManipulateConfig");
static_assert(sizeof(FSManipulateConfig) == 0x000028, "Wrong size on FSManipulateConfig");
static_assert(offsetof(FSManipulateConfig, ConfigName_2_B83FF9884D1C60F4DF6C54A78519CC1A) == 0x000000, "Member 'FSManipulateConfig::ConfigName_2_B83FF9884D1C60F4DF6C54A78519CC1A' has a wrong offset!");
static_assert(offsetof(FSManipulateConfig, ManipulatePoints_6_E3F152364E49B089E5A4F78CF74257E0) == 0x000010, "Member 'FSManipulateConfig::ManipulatePoints_6_E3F152364E49B089E5A4F78CF74257E0' has a wrong offset!");
static_assert(offsetof(FSManipulateConfig, Duration_12_74DFD9F94817F729CD3B1483D7CF097D) == 0x000020, "Member 'FSManipulateConfig::Duration_12_74DFD9F94817F729CD3B1483D7CF097D' has a wrong offset!");

}

