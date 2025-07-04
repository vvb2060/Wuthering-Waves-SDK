﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapImageTracker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum MagicLeapImageTracker.EMagicLeapImageTargetOrientation
// NumValues: 0x0003
enum class EMagicLeapImageTargetOrientation : uint8
{
	ForwardAxisAsNormal                      = 0,
	UpAxisAsNormal                           = 1,
	EMagicLeapImageTargetOrientation_MAX     = 2,
};

// Enum MagicLeapImageTracker.EMagicLeapImageTargetStatus
// NumValues: 0x0004
enum class EMagicLeapImageTargetStatus : uint8
{
	Tracked                                  = 0,
	Unreliable                               = 1,
	NotTracked                               = 2,
	EMagicLeapImageTargetStatus_MAX          = 3,
};

// ScriptStruct MagicLeapImageTracker.MagicLeapImageTargetState
// 0x001C (0x001C - 0x0000)
struct FMagicLeapImageTargetState final
{
public:
	EMagicLeapImageTargetStatus                   TrackingStatus;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0004(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0010(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapImageTargetState) == 0x000004, "Wrong alignment on FMagicLeapImageTargetState");
static_assert(sizeof(FMagicLeapImageTargetState) == 0x00001C, "Wrong size on FMagicLeapImageTargetState");
static_assert(offsetof(FMagicLeapImageTargetState, TrackingStatus) == 0x000000, "Member 'FMagicLeapImageTargetState::TrackingStatus' has a wrong offset!");
static_assert(offsetof(FMagicLeapImageTargetState, Location) == 0x000004, "Member 'FMagicLeapImageTargetState::Location' has a wrong offset!");
static_assert(offsetof(FMagicLeapImageTargetState, Rotation) == 0x000010, "Member 'FMagicLeapImageTargetState::Rotation' has a wrong offset!");

// ScriptStruct MagicLeapImageTracker.MagicLeapImageTargetSettings
// 0x0020 (0x0020 - 0x0000)
struct FMagicLeapImageTargetSettings final
{
public:
	class UTexture2D*                             ImageTexture;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LongerDimension;                                   // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsStationary;                                     // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsEnabled;                                        // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMagicLeapImageTargetSettings) == 0x000008, "Wrong alignment on FMagicLeapImageTargetSettings");
static_assert(sizeof(FMagicLeapImageTargetSettings) == 0x000020, "Wrong size on FMagicLeapImageTargetSettings");
static_assert(offsetof(FMagicLeapImageTargetSettings, ImageTexture) == 0x000000, "Member 'FMagicLeapImageTargetSettings::ImageTexture' has a wrong offset!");
static_assert(offsetof(FMagicLeapImageTargetSettings, Name) == 0x000008, "Member 'FMagicLeapImageTargetSettings::Name' has a wrong offset!");
static_assert(offsetof(FMagicLeapImageTargetSettings, LongerDimension) == 0x000018, "Member 'FMagicLeapImageTargetSettings::LongerDimension' has a wrong offset!");
static_assert(offsetof(FMagicLeapImageTargetSettings, bIsStationary) == 0x00001C, "Member 'FMagicLeapImageTargetSettings::bIsStationary' has a wrong offset!");
static_assert(offsetof(FMagicLeapImageTargetSettings, bIsEnabled) == 0x00001D, "Member 'FMagicLeapImageTargetSettings::bIsEnabled' has a wrong offset!");

}

