﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroVehicle

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum KuroVehicle.EKuroVehicleMovementMode
// NumValues: 0x0005
enum class EKuroVehicleMovementMode : uint8
{
	KURO_VEHICLE_MOVE_None                   = 0,
	KURO_VEHICLE_MOVE_Falling                = 1,
	KURO_VEHICLE_MOVE_Shipping               = 2,
	KURO_VEHICLE_MOVE_Custom                 = 3,
	KURO_VEHICLE_MOVE_MAX                    = 4,
};

// ScriptStruct KuroVehicle.VehicleRootMotionSourceGroup
// 0x0000 (0x0038 - 0x0038)
struct FVehicleRootMotionSourceGroup final : public FRootMotionSourceGroup
{
};
static_assert(alignof(FVehicleRootMotionSourceGroup) == 0x000008, "Wrong alignment on FVehicleRootMotionSourceGroup");
static_assert(sizeof(FVehicleRootMotionSourceGroup) == 0x000038, "Wrong size on FVehicleRootMotionSourceGroup");

}

