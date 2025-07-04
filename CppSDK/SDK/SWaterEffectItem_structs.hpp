﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SWaterEffectItem

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SWaterEffectItem.SWaterEffectItem
// 0x0068 (0x0068 - 0x0000)
struct FSWaterEffectItem final
{
public:
	float                                         Speed_2_F583B78840B6993AE0DE088887941E47;          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UEffectModelBase>        EffectDataRef_13_8B63B05C462B101215CC648DA1BD7DB5; // 0x0008(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UEffectModelBase>        AudioEffectDataRef_14_F30AAB8D42CE04201B859E94E8B688B8; // 0x0038(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FSWaterEffectItem) == 0x000008, "Wrong alignment on FSWaterEffectItem");
static_assert(sizeof(FSWaterEffectItem) == 0x000068, "Wrong size on FSWaterEffectItem");
static_assert(offsetof(FSWaterEffectItem, Speed_2_F583B78840B6993AE0DE088887941E47) == 0x000000, "Member 'FSWaterEffectItem::Speed_2_F583B78840B6993AE0DE088887941E47' has a wrong offset!");
static_assert(offsetof(FSWaterEffectItem, EffectDataRef_13_8B63B05C462B101215CC648DA1BD7DB5) == 0x000008, "Member 'FSWaterEffectItem::EffectDataRef_13_8B63B05C462B101215CC648DA1BD7DB5' has a wrong offset!");
static_assert(offsetof(FSWaterEffectItem, AudioEffectDataRef_14_F30AAB8D42CE04201B859E94E8B688B8) == 0x000038, "Member 'FSWaterEffectItem::AudioEffectDataRef_14_F30AAB8D42CE04201B859E94E8B688B8' has a wrong offset!");

}

