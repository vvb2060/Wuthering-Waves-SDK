﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SMaterialControllerFloatGroup

#include "Basic.hpp"

#include "KuroCurve_structs.hpp"


namespace SDK
{

// UserDefinedStruct SMaterialControllerFloatGroup.SMaterialControllerFloatGroup
// 0x01B0 (0x01B0 - 0x0000)
struct FSMaterialControllerFloatGroup final
{
public:
	struct FKuroCurveFloat                        Start_19_BA8F63454A2DEDC93ED9DEA8D3925117;         // 0x0000(0x0090)(Edit, BlueprintVisible)
	struct FKuroCurveFloat                        Loop_20_269796ED40C12C1F3C6137AB71336D35;          // 0x0090(0x0090)(Edit, BlueprintVisible)
	struct FKuroCurveFloat                        End_21_B983B4EA4F04FBE1C1F527AC87EF2D7B;           // 0x0120(0x0090)(Edit, BlueprintVisible)
};
static_assert(alignof(FSMaterialControllerFloatGroup) == 0x000008, "Wrong alignment on FSMaterialControllerFloatGroup");
static_assert(sizeof(FSMaterialControllerFloatGroup) == 0x0001B0, "Wrong size on FSMaterialControllerFloatGroup");
static_assert(offsetof(FSMaterialControllerFloatGroup, Start_19_BA8F63454A2DEDC93ED9DEA8D3925117) == 0x000000, "Member 'FSMaterialControllerFloatGroup::Start_19_BA8F63454A2DEDC93ED9DEA8D3925117' has a wrong offset!");
static_assert(offsetof(FSMaterialControllerFloatGroup, Loop_20_269796ED40C12C1F3C6137AB71336D35) == 0x000090, "Member 'FSMaterialControllerFloatGroup::Loop_20_269796ED40C12C1F3C6137AB71336D35' has a wrong offset!");
static_assert(offsetof(FSMaterialControllerFloatGroup, End_21_B983B4EA4F04FBE1C1F527AC87EF2D7B) == 0x000120, "Member 'FSMaterialControllerFloatGroup::End_21_B983B4EA4F04FBE1C1F527AC87EF2D7B' has a wrong offset!");

}

