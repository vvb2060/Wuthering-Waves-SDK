﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SStateBasedEffectFloatCurveSection

#include "Basic.hpp"

#include "SEffectStateFloatCurve_structs.hpp"


namespace SDK
{

// UserDefinedStruct SStateBasedEffectFloatCurveSection.SStateBasedEffectFloatCurveSection
// 0x0170 (0x0170 - 0x0000)
struct FSStateBasedEffectFloatCurveSection final
{
public:
	struct FSEffectStateFloatCurve                DefaultCurveInfo_2_0CBEFA9548D4F820144755924BAF7B94; // 0x0000(0x0120)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<int32, struct FSEffectStateFloatCurve>   OverrideSectionCurveInfo_7_76CD87F44453715D0AE8618BC17D5D4B; // 0x0120(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FSStateBasedEffectFloatCurveSection) == 0x000008, "Wrong alignment on FSStateBasedEffectFloatCurveSection");
static_assert(sizeof(FSStateBasedEffectFloatCurveSection) == 0x000170, "Wrong size on FSStateBasedEffectFloatCurveSection");
static_assert(offsetof(FSStateBasedEffectFloatCurveSection, DefaultCurveInfo_2_0CBEFA9548D4F820144755924BAF7B94) == 0x000000, "Member 'FSStateBasedEffectFloatCurveSection::DefaultCurveInfo_2_0CBEFA9548D4F820144755924BAF7B94' has a wrong offset!");
static_assert(offsetof(FSStateBasedEffectFloatCurveSection, OverrideSectionCurveInfo_7_76CD87F44453715D0AE8618BC17D5D4B) == 0x000120, "Member 'FSStateBasedEffectFloatCurveSection::OverrideSectionCurveInfo_7_76CD87F44453715D0AE8618BC17D5D4B' has a wrong offset!");

}

