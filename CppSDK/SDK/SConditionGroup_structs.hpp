﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SConditionGroup

#include "Basic.hpp"

#include "SConDitionGroupType_structs.hpp"
#include "SCondition_structs.hpp"


namespace SDK
{

// UserDefinedStruct SConditionGroup.SConditionGroup
// 0x0050 (0x0050 - 0x0000)
struct FSConditionGroup final
{
public:
	class FName                                   条件组ID_5_7FEA7EC64FA5516AD656DF930C9CDDBB;       // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESConditionGroupType                          条件组策略_4_8CCFAF164F63C6BE9C165C8A6C61F344;     // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSCondition>                    条件组_9_264A3BB848BBDBA6C74F049A12A72C54;         // 0x0010(0x0010)(Edit, BlueprintVisible)
	class FText                                   拦截提示_16_B0DE12EC4956E1787992469B0DAEF245;      // 0x0020(0x0018)(Edit, BlueprintVisible)
	class FText                                   条件组描述_14_82CC01F24EC03E6A2D2D419277092BE0;    // 0x0038(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(FSConditionGroup) == 0x000008, "Wrong alignment on FSConditionGroup");
static_assert(sizeof(FSConditionGroup) == 0x000050, "Wrong size on FSConditionGroup");
static_assert(offsetof(FSConditionGroup, 条件组ID_5_7FEA7EC64FA5516AD656DF930C9CDDBB) == 0x000000, "Member 'FSConditionGroup::条件组ID_5_7FEA7EC64FA5516AD656DF930C9CDDBB' has a wrong offset!");
static_assert(offsetof(FSConditionGroup, 条件组策略_4_8CCFAF164F63C6BE9C165C8A6C61F344) == 0x00000C, "Member 'FSConditionGroup::条件组策略_4_8CCFAF164F63C6BE9C165C8A6C61F344' has a wrong offset!");
static_assert(offsetof(FSConditionGroup, 条件组_9_264A3BB848BBDBA6C74F049A12A72C54) == 0x000010, "Member 'FSConditionGroup::条件组_9_264A3BB848BBDBA6C74F049A12A72C54' has a wrong offset!");
static_assert(offsetof(FSConditionGroup, 拦截提示_16_B0DE12EC4956E1787992469B0DAEF245) == 0x000020, "Member 'FSConditionGroup::拦截提示_16_B0DE12EC4956E1787992469B0DAEF245' has a wrong offset!");
static_assert(offsetof(FSConditionGroup, 条件组描述_14_82CC01F24EC03E6A2D2D419277092BE0) == 0x000038, "Member 'FSConditionGroup::条件组描述_14_82CC01F24EC03E6A2D2D419277092BE0' has a wrong offset!");

}

