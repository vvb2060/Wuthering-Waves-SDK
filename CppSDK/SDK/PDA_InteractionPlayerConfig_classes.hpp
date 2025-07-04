﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_InteractionPlayerConfig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_InteractionPlayerConfig.PDA_InteractionPlayerConfig_C
// 0x0038 (0x0070 - 0x0038)
class UPDA_InteractionPlayerConfig_C final : public UPrimaryDataAsset
{
public:
	bool                                          启用植被交互;                                      // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         植被交互半径;                                      // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          启用水面交互;                                      // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_WaterEffectConfigs_C*              水特效;                                            // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         射线向下延长;                                      // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          自动草集群;                                        // 0x0054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClusteredStuffDataAsset*               草集群特效;                                        // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          启用简易水面交互;                                  // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                植被交互相对位置;                                  // 0x0064(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_InteractionPlayerConfig_C">();
	}
	static class UPDA_InteractionPlayerConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_InteractionPlayerConfig_C>();
	}
};
static_assert(alignof(UPDA_InteractionPlayerConfig_C) == 0x000008, "Wrong alignment on UPDA_InteractionPlayerConfig_C");
static_assert(sizeof(UPDA_InteractionPlayerConfig_C) == 0x000070, "Wrong size on UPDA_InteractionPlayerConfig_C");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, 启用植被交互) == 0x000038, "Member 'UPDA_InteractionPlayerConfig_C::启用植被交互' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, 植被交互半径) == 0x00003C, "Member 'UPDA_InteractionPlayerConfig_C::植被交互半径' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, 启用水面交互) == 0x000040, "Member 'UPDA_InteractionPlayerConfig_C::启用水面交互' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, 水特效) == 0x000048, "Member 'UPDA_InteractionPlayerConfig_C::水特效' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, 射线向下延长) == 0x000050, "Member 'UPDA_InteractionPlayerConfig_C::射线向下延长' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, 自动草集群) == 0x000054, "Member 'UPDA_InteractionPlayerConfig_C::自动草集群' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, 草集群特效) == 0x000058, "Member 'UPDA_InteractionPlayerConfig_C::草集群特效' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, 启用简易水面交互) == 0x000060, "Member 'UPDA_InteractionPlayerConfig_C::启用简易水面交互' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, 植被交互相对位置) == 0x000064, "Member 'UPDA_InteractionPlayerConfig_C::植被交互相对位置' has a wrong offset!");

}

