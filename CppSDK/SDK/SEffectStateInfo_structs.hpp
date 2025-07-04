﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SEffectStateInfo

#include "Basic.hpp"

#include "SEffectStateFloatCurve_structs.hpp"
#include "SEffectStateLinearColorCurve_structs.hpp"
#include "SStateBasedEffectFloatCurveSection_structs.hpp"
#include "SStateBasedEffectLinearColorCurveSection_structs.hpp"


namespace SDK
{

// UserDefinedStruct SEffectStateInfo.SEffectStateInfo
// 0x0150 (0x0150 - 0x0000)
struct FSEffectStateInfo final
{
public:
	float                                         StateTransitionTime_67_3DD750234A75325489136994A0DCED5C; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PreLoopTime_11_72CEC72C4ED64385654C5AB966B95978;   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoopTime_31_224DE317481D8C3195F97692EED77972;      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FSEffectStateFloatCurve> FloatInfos_44_A616367C4DA7C9CCD35BADA15FF37CE2; // 0x0010(0x0050)(Edit, BlueprintVisible)
	TMap<class FName, struct FSEffectStateLinearColorCurve> LinearColorInfos_45_94E48AED44A9A6653B2A4D978AB58D25; // 0x0060(0x0050)(Edit, BlueprintVisible)
	TMap<class FName, struct FSStateBasedEffectFloatCurveSection> StaticMeshFloatInfo_63_D63F21AB4EBFA038D23445A837CB06EF; // 0x00B0(0x0050)(Edit, BlueprintVisible)
	TMap<class FName, struct FSStateBasedEffectLinearColorCurveSection> StaticMeshLinearColorInfo_64_D16C51EF4274DE1AFD95799268A1AE50; // 0x0100(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FSEffectStateInfo) == 0x000008, "Wrong alignment on FSEffectStateInfo");
static_assert(sizeof(FSEffectStateInfo) == 0x000150, "Wrong size on FSEffectStateInfo");
static_assert(offsetof(FSEffectStateInfo, StateTransitionTime_67_3DD750234A75325489136994A0DCED5C) == 0x000000, "Member 'FSEffectStateInfo::StateTransitionTime_67_3DD750234A75325489136994A0DCED5C' has a wrong offset!");
static_assert(offsetof(FSEffectStateInfo, PreLoopTime_11_72CEC72C4ED64385654C5AB966B95978) == 0x000004, "Member 'FSEffectStateInfo::PreLoopTime_11_72CEC72C4ED64385654C5AB966B95978' has a wrong offset!");
static_assert(offsetof(FSEffectStateInfo, LoopTime_31_224DE317481D8C3195F97692EED77972) == 0x000008, "Member 'FSEffectStateInfo::LoopTime_31_224DE317481D8C3195F97692EED77972' has a wrong offset!");
static_assert(offsetof(FSEffectStateInfo, FloatInfos_44_A616367C4DA7C9CCD35BADA15FF37CE2) == 0x000010, "Member 'FSEffectStateInfo::FloatInfos_44_A616367C4DA7C9CCD35BADA15FF37CE2' has a wrong offset!");
static_assert(offsetof(FSEffectStateInfo, LinearColorInfos_45_94E48AED44A9A6653B2A4D978AB58D25) == 0x000060, "Member 'FSEffectStateInfo::LinearColorInfos_45_94E48AED44A9A6653B2A4D978AB58D25' has a wrong offset!");
static_assert(offsetof(FSEffectStateInfo, StaticMeshFloatInfo_63_D63F21AB4EBFA038D23445A837CB06EF) == 0x0000B0, "Member 'FSEffectStateInfo::StaticMeshFloatInfo_63_D63F21AB4EBFA038D23445A837CB06EF' has a wrong offset!");
static_assert(offsetof(FSEffectStateInfo, StaticMeshLinearColorInfo_64_D16C51EF4274DE1AFD95799268A1AE50) == 0x000100, "Member 'FSEffectStateInfo::StaticMeshLinearColorInfo_64_D16C51EF4274DE1AFD95799268A1AE50' has a wrong offset!");

}

