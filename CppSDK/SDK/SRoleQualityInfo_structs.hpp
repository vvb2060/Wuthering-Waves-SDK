﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SRoleQualityInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SRoleQualityInfo.SRoleQualityInfo
// 0x0080 (0x0080 - 0x0000)
struct FSRoleQualityInfo final
{
public:
	class FName                                   品质名称_3_443E186B4B8F47A17F04AD980E3834EC;       // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              品质Icon_10_627054A2425DD9BDC4A9BB88942A681F;      // 0x0010(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              卡牌品质边框Icon_9_3F51DC6446AFA0A9E27839BC8F517AE4; // 0x0040(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                           品质颜色_13_5628DC5E4F30B5935F24AD9D78921CD1;      // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSRoleQualityInfo) == 0x000008, "Wrong alignment on FSRoleQualityInfo");
static_assert(sizeof(FSRoleQualityInfo) == 0x000080, "Wrong size on FSRoleQualityInfo");
static_assert(offsetof(FSRoleQualityInfo, 品质名称_3_443E186B4B8F47A17F04AD980E3834EC) == 0x000000, "Member 'FSRoleQualityInfo::品质名称_3_443E186B4B8F47A17F04AD980E3834EC' has a wrong offset!");
static_assert(offsetof(FSRoleQualityInfo, 品质Icon_10_627054A2425DD9BDC4A9BB88942A681F) == 0x000010, "Member 'FSRoleQualityInfo::品质Icon_10_627054A2425DD9BDC4A9BB88942A681F' has a wrong offset!");
static_assert(offsetof(FSRoleQualityInfo, 卡牌品质边框Icon_9_3F51DC6446AFA0A9E27839BC8F517AE4) == 0x000040, "Member 'FSRoleQualityInfo::卡牌品质边框Icon_9_3F51DC6446AFA0A9E27839BC8F517AE4' has a wrong offset!");
static_assert(offsetof(FSRoleQualityInfo, 品质颜色_13_5628DC5E4F30B5935F24AD9D78921CD1) == 0x000070, "Member 'FSRoleQualityInfo::品质颜色_13_5628DC5E4F30B5935F24AD9D78921CD1' has a wrong offset!");

}

