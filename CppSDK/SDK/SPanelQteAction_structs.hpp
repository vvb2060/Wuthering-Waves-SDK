﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SPanelQteAction

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "EPanelQteCustomAction_structs.hpp"


namespace SDK
{

// UserDefinedStruct SPanelQteAction.SPanelQteAction
// 0x0048 (0x0048 - 0x0000)
struct FSPanelQteAction final
{
public:
	int32                                         Target_2_B7DB0C4C437A26A5AE19FA82BB2EA1E9;         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   AddTags_15_9DEB844E43C37816AAC392AE33D9BEA5;       // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                   RemoveTags_17_0DA0F25944D8CA5EC04061B9BD7F55C0;    // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<int64>                                 AddBuffs_24_72A8A69A4FCC1DC5FE00F9818DCD97AC;      // 0x0028(0x0010)(Edit, BlueprintVisible)
	TArray<EPanelQteCustomAction>                 CustomActions_20_0DC3AE1C4DA3A2904FD46BB63A3770F2; // 0x0038(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSPanelQteAction) == 0x000008, "Wrong alignment on FSPanelQteAction");
static_assert(sizeof(FSPanelQteAction) == 0x000048, "Wrong size on FSPanelQteAction");
static_assert(offsetof(FSPanelQteAction, Target_2_B7DB0C4C437A26A5AE19FA82BB2EA1E9) == 0x000000, "Member 'FSPanelQteAction::Target_2_B7DB0C4C437A26A5AE19FA82BB2EA1E9' has a wrong offset!");
static_assert(offsetof(FSPanelQteAction, AddTags_15_9DEB844E43C37816AAC392AE33D9BEA5) == 0x000008, "Member 'FSPanelQteAction::AddTags_15_9DEB844E43C37816AAC392AE33D9BEA5' has a wrong offset!");
static_assert(offsetof(FSPanelQteAction, RemoveTags_17_0DA0F25944D8CA5EC04061B9BD7F55C0) == 0x000018, "Member 'FSPanelQteAction::RemoveTags_17_0DA0F25944D8CA5EC04061B9BD7F55C0' has a wrong offset!");
static_assert(offsetof(FSPanelQteAction, AddBuffs_24_72A8A69A4FCC1DC5FE00F9818DCD97AC) == 0x000028, "Member 'FSPanelQteAction::AddBuffs_24_72A8A69A4FCC1DC5FE00F9818DCD97AC' has a wrong offset!");
static_assert(offsetof(FSPanelQteAction, CustomActions_20_0DC3AE1C4DA3A2904FD46BB63A3770F2) == 0x000038, "Member 'FSPanelQteAction::CustomActions_20_0DC3AE1C4DA3A2904FD46BB63A3770F2' has a wrong offset!");

}

