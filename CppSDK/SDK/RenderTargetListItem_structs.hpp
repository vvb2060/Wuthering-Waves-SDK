﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RenderTargetListItem

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct RenderTargetListItem.RenderTargetListItem
// 0x0010 (0x0010 - 0x0000)
struct FRenderTargetListItem final
{
public:
	class UTextureRenderTarget2D*                 RT_5_26B8F9784999052098981CA5C1210A3E;             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          free_4_81B0BE2645F8D8E2D1E0ED842AB32125;           // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FRenderTargetListItem) == 0x000008, "Wrong alignment on FRenderTargetListItem");
static_assert(sizeof(FRenderTargetListItem) == 0x000010, "Wrong size on FRenderTargetListItem");
static_assert(offsetof(FRenderTargetListItem, RT_5_26B8F9784999052098981CA5C1210A3E) == 0x000000, "Member 'FRenderTargetListItem::RT_5_26B8F9784999052098981CA5C1210A3E' has a wrong offset!");
static_assert(offsetof(FRenderTargetListItem, free_4_81B0BE2645F8D8E2D1E0ED842AB32125) == 0x000008, "Member 'FRenderTargetListItem::free_4_81B0BE2645F8D8E2D1E0ED842AB32125' has a wrong offset!");

}

