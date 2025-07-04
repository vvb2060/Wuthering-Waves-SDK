﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RailSlideConfig

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SFloatCurve_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RailSlideConfig.BP_RailSlideConfig_C
// 0x00C0 (0x00F8 - 0x0038)
class UBP_RailSlideConfig_C final : public UPrimaryDataAsset
{
public:
	int32                                         初始速度;                                          // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         基础目标速度;                                      // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         基础加速度;                                        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         上坡目标速度;                                      // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         上坡加速度;                                        // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         下坡目标速度;                                      // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         下坡加速度;                                        // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         基础跳跃高度;                                      // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         基础跳远倍率;                                      // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         最大跳跃距离;                                      // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         最大跳跃高度;                                      // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         起跳加速度;                                        // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         起跳加速度_卡提西亚;                               // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         起跳时长;                                          // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         起跳时长_卡提西亚;                                 // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         落地时长_卡提西亚;                                 // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         倾斜输入插值;                                      // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         最大倾斜角度;                                      // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         初始进入轨道速度;                                  // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         切换轨道CD;                                        // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         切换轨道水平距离;                                  // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         切换轨道垂直距离;                                  // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         最大加速度角度;                                    // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         起跳目标速度;                                      // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         切换轨道基速度;                                    // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSFloatCurve                           位移曲线;                                          // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSFloatCurve                           位移曲线_卡提西亚;                                 // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         限制输入角度;                                      // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  期间Tag;                                           // 0x00B8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         落地最大速度;                                      // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         落地最小速度;                                      // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 打断技能列表;                                      // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         跳跃空中总时长;                                    // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugDraw;                                         // 0x00F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RailSlideConfig_C">();
	}
	static class UBP_RailSlideConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RailSlideConfig_C>();
	}
};
static_assert(alignof(UBP_RailSlideConfig_C) == 0x000008, "Wrong alignment on UBP_RailSlideConfig_C");
static_assert(sizeof(UBP_RailSlideConfig_C) == 0x0000F8, "Wrong size on UBP_RailSlideConfig_C");
static_assert(offsetof(UBP_RailSlideConfig_C, 初始速度) == 0x000038, "Member 'UBP_RailSlideConfig_C::初始速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 基础目标速度) == 0x00003C, "Member 'UBP_RailSlideConfig_C::基础目标速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 基础加速度) == 0x000040, "Member 'UBP_RailSlideConfig_C::基础加速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 上坡目标速度) == 0x000044, "Member 'UBP_RailSlideConfig_C::上坡目标速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 上坡加速度) == 0x000048, "Member 'UBP_RailSlideConfig_C::上坡加速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 下坡目标速度) == 0x00004C, "Member 'UBP_RailSlideConfig_C::下坡目标速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 下坡加速度) == 0x000050, "Member 'UBP_RailSlideConfig_C::下坡加速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 基础跳跃高度) == 0x000054, "Member 'UBP_RailSlideConfig_C::基础跳跃高度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 基础跳远倍率) == 0x000058, "Member 'UBP_RailSlideConfig_C::基础跳远倍率' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 最大跳跃距离) == 0x00005C, "Member 'UBP_RailSlideConfig_C::最大跳跃距离' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 最大跳跃高度) == 0x000060, "Member 'UBP_RailSlideConfig_C::最大跳跃高度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 起跳加速度) == 0x000064, "Member 'UBP_RailSlideConfig_C::起跳加速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 起跳加速度_卡提西亚) == 0x000068, "Member 'UBP_RailSlideConfig_C::起跳加速度_卡提西亚' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 起跳时长) == 0x00006C, "Member 'UBP_RailSlideConfig_C::起跳时长' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 起跳时长_卡提西亚) == 0x000070, "Member 'UBP_RailSlideConfig_C::起跳时长_卡提西亚' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 落地时长_卡提西亚) == 0x000074, "Member 'UBP_RailSlideConfig_C::落地时长_卡提西亚' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 倾斜输入插值) == 0x000078, "Member 'UBP_RailSlideConfig_C::倾斜输入插值' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 最大倾斜角度) == 0x00007C, "Member 'UBP_RailSlideConfig_C::最大倾斜角度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 初始进入轨道速度) == 0x000080, "Member 'UBP_RailSlideConfig_C::初始进入轨道速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 切换轨道CD) == 0x000084, "Member 'UBP_RailSlideConfig_C::切换轨道CD' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 切换轨道水平距离) == 0x000088, "Member 'UBP_RailSlideConfig_C::切换轨道水平距离' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 切换轨道垂直距离) == 0x00008C, "Member 'UBP_RailSlideConfig_C::切换轨道垂直距离' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 最大加速度角度) == 0x000090, "Member 'UBP_RailSlideConfig_C::最大加速度角度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 起跳目标速度) == 0x000094, "Member 'UBP_RailSlideConfig_C::起跳目标速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 切换轨道基速度) == 0x000098, "Member 'UBP_RailSlideConfig_C::切换轨道基速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 位移曲线) == 0x0000A0, "Member 'UBP_RailSlideConfig_C::位移曲线' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 位移曲线_卡提西亚) == 0x0000A8, "Member 'UBP_RailSlideConfig_C::位移曲线_卡提西亚' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 限制输入角度) == 0x0000B0, "Member 'UBP_RailSlideConfig_C::限制输入角度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 期间Tag) == 0x0000B8, "Member 'UBP_RailSlideConfig_C::期间Tag' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 落地最大速度) == 0x0000D8, "Member 'UBP_RailSlideConfig_C::落地最大速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 落地最小速度) == 0x0000DC, "Member 'UBP_RailSlideConfig_C::落地最小速度' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 打断技能列表) == 0x0000E0, "Member 'UBP_RailSlideConfig_C::打断技能列表' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, 跳跃空中总时长) == 0x0000F0, "Member 'UBP_RailSlideConfig_C::跳跃空中总时长' has a wrong offset!");
static_assert(offsetof(UBP_RailSlideConfig_C, DebugDraw) == 0x0000F4, "Member 'UBP_RailSlideConfig_C::DebugDraw' has a wrong offset!");

}

