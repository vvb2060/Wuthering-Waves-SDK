﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSceneInteractionitemIndestructibleEffectsParameters

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SSceneInteractionitemIndestructibleEffectsParameters.SSceneInteractionitemIndestructibleEffectsParameters
// 0x00A8 (0x00A8 - 0x0000)
struct FSSceneInteractionitemIndestructibleEffectsParameters final
{
public:
	TMap<class FString, float>                    FloatParameters_84_B532FFB04DC2442D10AD458DF67E6090; // 0x0000(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, struct FLinearColor>      ColorParameters_92_F1D7CBF3415667A4A70E7ABE1C8AB559; // 0x0050(0x0050)(Edit, BlueprintVisible)
	int32                                         IndestructibleEffectIndex_90_BE43D5A54A37AEBC3AE88BBA44457CB2; // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSSceneInteractionitemIndestructibleEffectsParameters) == 0x000008, "Wrong alignment on FSSceneInteractionitemIndestructibleEffectsParameters");
static_assert(sizeof(FSSceneInteractionitemIndestructibleEffectsParameters) == 0x0000A8, "Wrong size on FSSceneInteractionitemIndestructibleEffectsParameters");
static_assert(offsetof(FSSceneInteractionitemIndestructibleEffectsParameters, FloatParameters_84_B532FFB04DC2442D10AD458DF67E6090) == 0x000000, "Member 'FSSceneInteractionitemIndestructibleEffectsParameters::FloatParameters_84_B532FFB04DC2442D10AD458DF67E6090' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionitemIndestructibleEffectsParameters, ColorParameters_92_F1D7CBF3415667A4A70E7ABE1C8AB559) == 0x000050, "Member 'FSSceneInteractionitemIndestructibleEffectsParameters::ColorParameters_92_F1D7CBF3415667A4A70E7ABE1C8AB559' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionitemIndestructibleEffectsParameters, IndestructibleEffectIndex_90_BE43D5A54A37AEBC3AE88BBA44457CB2) == 0x0000A0, "Member 'FSSceneInteractionitemIndestructibleEffectsParameters::IndestructibleEffectIndex_90_BE43D5A54A37AEBC3AE88BBA44457CB2' has a wrong offset!");

}

