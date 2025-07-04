﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapEyeTracker

#include "Basic.hpp"

#include "MagicLeapEyeTracker_structs.hpp"


namespace SDK::Params
{

// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus final
{
public:
	EMagicLeapEyeTrackingCalibrationStatus        ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus) == 0x000001, "Wrong alignment on MagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus");
static_assert(sizeof(MagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus) == 0x000001, "Wrong size on MagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus");
static_assert(offsetof(MagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus, ReturnValue) == 0x000000, "Member 'MagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus::ReturnValue' has a wrong offset!");

// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
// 0x0003 (0x0003 - 0x0000)
struct MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState final
{
public:
	struct FMagicLeapEyeBlinkState                BlinkState;                                        // 0x0000(0x0002)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState) == 0x000001, "Wrong alignment on MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState");
static_assert(sizeof(MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState) == 0x000003, "Wrong size on MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState");
static_assert(offsetof(MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState, BlinkState) == 0x000000, "Member 'MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState::BlinkState' has a wrong offset!");
static_assert(offsetof(MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState, ReturnValue) == 0x000002, "Member 'MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState::ReturnValue' has a wrong offset!");

}

