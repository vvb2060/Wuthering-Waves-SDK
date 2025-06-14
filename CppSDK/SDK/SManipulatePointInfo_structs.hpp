﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SManipulatePointInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// UserDefinedStruct SManipulatePointInfo.SManipulatePointInfo
// 0x0028 (0x0028 - 0x0000)
struct FSManipulatePointInfo final
{
public:
	struct FVector                                Location_2_4AED0E7A450EBFB222F618ACF88FEFF0;       // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ArriveTangent_11_5C1DA65145209C7EE628A1A56536195B; // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeaveTangent_10_33A9AE224B51C8E7A3987BB483EB37DF;  // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESplinePointType                              PointType_14_5A4FFA53425852E0338EEAB8A76A974C;     // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSManipulatePointInfo) == 0x000004, "Wrong alignment on FSManipulatePointInfo");
static_assert(sizeof(FSManipulatePointInfo) == 0x000028, "Wrong size on FSManipulatePointInfo");
static_assert(offsetof(FSManipulatePointInfo, Location_2_4AED0E7A450EBFB222F618ACF88FEFF0) == 0x000000, "Member 'FSManipulatePointInfo::Location_2_4AED0E7A450EBFB222F618ACF88FEFF0' has a wrong offset!");
static_assert(offsetof(FSManipulatePointInfo, ArriveTangent_11_5C1DA65145209C7EE628A1A56536195B) == 0x00000C, "Member 'FSManipulatePointInfo::ArriveTangent_11_5C1DA65145209C7EE628A1A56536195B' has a wrong offset!");
static_assert(offsetof(FSManipulatePointInfo, LeaveTangent_10_33A9AE224B51C8E7A3987BB483EB37DF) == 0x000018, "Member 'FSManipulatePointInfo::LeaveTangent_10_33A9AE224B51C8E7A3987BB483EB37DF' has a wrong offset!");
static_assert(offsetof(FSManipulatePointInfo, PointType_14_5A4FFA53425852E0338EEAB8A76A974C) == 0x000024, "Member 'FSManipulatePointInfo::PointType_14_5A4FFA53425852E0338EEAB8A76A974C' has a wrong offset!");

}

