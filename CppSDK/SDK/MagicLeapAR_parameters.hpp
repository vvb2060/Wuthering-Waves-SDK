﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapAR

#include "Basic.hpp"

#include "MagicLeapAR_structs.hpp"
#include "Engine_structs.hpp"
#include "MagicLeapImageTracker_structs.hpp"
#include "AugmentedReality_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
// 0x0030 (0x0030 - 0x0000)
struct LuminARSessionFunctionLibrary_StartLuminARSession final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                      LatentInfo;                                        // 0x0008(0x0020)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ULuminARSessionConfig*                  Configuration;                                     // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LuminARSessionFunctionLibrary_StartLuminARSession) == 0x000008, "Wrong alignment on LuminARSessionFunctionLibrary_StartLuminARSession");
static_assert(sizeof(LuminARSessionFunctionLibrary_StartLuminARSession) == 0x000030, "Wrong size on LuminARSessionFunctionLibrary_StartLuminARSession");
static_assert(offsetof(LuminARSessionFunctionLibrary_StartLuminARSession, WorldContextObject) == 0x000000, "Member 'LuminARSessionFunctionLibrary_StartLuminARSession::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LuminARSessionFunctionLibrary_StartLuminARSession, LatentInfo) == 0x000008, "Member 'LuminARSessionFunctionLibrary_StartLuminARSession::LatentInfo' has a wrong offset!");
static_assert(offsetof(LuminARSessionFunctionLibrary_StartLuminARSession, Configuration) == 0x000028, "Member 'LuminARSessionFunctionLibrary_StartLuminARSession::Configuration' has a wrong offset!");

// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
// 0x0001 (0x0001 - 0x0000)
struct LuminARFrameFunctionLibrary_GetTrackingState final
{
public:
	ELuminARTrackingState                         ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LuminARFrameFunctionLibrary_GetTrackingState) == 0x000001, "Wrong alignment on LuminARFrameFunctionLibrary_GetTrackingState");
static_assert(sizeof(LuminARFrameFunctionLibrary_GetTrackingState) == 0x000001, "Wrong size on LuminARFrameFunctionLibrary_GetTrackingState");
static_assert(offsetof(LuminARFrameFunctionLibrary_GetTrackingState, ReturnValue) == 0x000000, "Member 'LuminARFrameFunctionLibrary_GetTrackingState::ReturnValue' has a wrong offset!");

// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
// 0x0078 (0x0078 - 0x0000)
struct LuminARFrameFunctionLibrary_LuminARLineTrace final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ScreenPosition;                                    // 0x0008(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<ELuminARLineTraceChannel>                TraceChannels;                                     // 0x0010(0x0050)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FARTraceResult>                 OutHitResults;                                     // 0x0060(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LuminARFrameFunctionLibrary_LuminARLineTrace) == 0x000008, "Wrong alignment on LuminARFrameFunctionLibrary_LuminARLineTrace");
static_assert(sizeof(LuminARFrameFunctionLibrary_LuminARLineTrace) == 0x000078, "Wrong size on LuminARFrameFunctionLibrary_LuminARLineTrace");
static_assert(offsetof(LuminARFrameFunctionLibrary_LuminARLineTrace, WorldContextObject) == 0x000000, "Member 'LuminARFrameFunctionLibrary_LuminARLineTrace::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LuminARFrameFunctionLibrary_LuminARLineTrace, ScreenPosition) == 0x000008, "Member 'LuminARFrameFunctionLibrary_LuminARLineTrace::ScreenPosition' has a wrong offset!");
static_assert(offsetof(LuminARFrameFunctionLibrary_LuminARLineTrace, TraceChannels) == 0x000010, "Member 'LuminARFrameFunctionLibrary_LuminARLineTrace::TraceChannels' has a wrong offset!");
static_assert(offsetof(LuminARFrameFunctionLibrary_LuminARLineTrace, OutHitResults) == 0x000060, "Member 'LuminARFrameFunctionLibrary_LuminARLineTrace::OutHitResults' has a wrong offset!");
static_assert(offsetof(LuminARFrameFunctionLibrary_LuminARLineTrace, ReturnValue) == 0x000070, "Member 'LuminARFrameFunctionLibrary_LuminARLineTrace::ReturnValue' has a wrong offset!");

// Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
// 0x0010 (0x0010 - 0x0000)
struct LuminARLightEstimate_GetAmbientIntensityNits final
{
public:
	TArray<float>                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LuminARLightEstimate_GetAmbientIntensityNits) == 0x000008, "Wrong alignment on LuminARLightEstimate_GetAmbientIntensityNits");
static_assert(sizeof(LuminARLightEstimate_GetAmbientIntensityNits) == 0x000010, "Wrong size on LuminARLightEstimate_GetAmbientIntensityNits");
static_assert(offsetof(LuminARLightEstimate_GetAmbientIntensityNits, ReturnValue) == 0x000000, "Member 'LuminARLightEstimate_GetAmbientIntensityNits::ReturnValue' has a wrong offset!");

// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
// 0x0030 (0x0030 - 0x0000)
struct LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage final
{
public:
	class UARSessionConfig*                       SessionConfig;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             CandidateTexture;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FriendlyName;                                      // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PhysicalWidth;                                     // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseUnreliablePose;                                // 0x0024(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImageIsStationary;                                // 0x0025(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ULuminARCandidateImage*                 ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage) == 0x000008, "Wrong alignment on LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage");
static_assert(sizeof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage) == 0x000030, "Wrong size on LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage, SessionConfig) == 0x000000, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage::SessionConfig' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage, CandidateTexture) == 0x000008, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage::CandidateTexture' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage, FriendlyName) == 0x000010, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage::FriendlyName' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage, PhysicalWidth) == 0x000020, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage::PhysicalWidth' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage, bUseUnreliablePose) == 0x000024, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage::bUseUnreliablePose' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage, bImageIsStationary) == 0x000025, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage::bImageIsStationary' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage, ReturnValue) == 0x000028, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage::ReturnValue' has a wrong offset!");

// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx
// 0x0030 (0x0030 - 0x0000)
struct LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx final
{
public:
	class UARSessionConfig*                       SessionConfig;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             CandidateTexture;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FriendlyName;                                      // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PhysicalWidth;                                     // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseUnreliablePose;                                // 0x0024(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImageIsStationary;                                // 0x0025(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapImageTargetOrientation              InAxisOrientation;                                 // 0x0026(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_27[0x1];                                       // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ULuminARCandidateImage*                 ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx) == 0x000008, "Wrong alignment on LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx");
static_assert(sizeof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx) == 0x000030, "Wrong size on LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx, SessionConfig) == 0x000000, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx::SessionConfig' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx, CandidateTexture) == 0x000008, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx::CandidateTexture' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx, FriendlyName) == 0x000010, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx::FriendlyName' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx, PhysicalWidth) == 0x000020, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx::PhysicalWidth' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx, bUseUnreliablePose) == 0x000024, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx::bUseUnreliablePose' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx, bImageIsStationary) == 0x000025, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx::bImageIsStationary' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx, InAxisOrientation) == 0x000026, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx::InAxisOrientation' has a wrong offset!");
static_assert(offsetof(LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx, ReturnValue) == 0x000028, "Member 'LuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx::ReturnValue' has a wrong offset!");

// Function MagicLeapAR.LuminARCandidateImage.GetAxisOrientation
// 0x0001 (0x0001 - 0x0000)
struct LuminARCandidateImage_GetAxisOrientation final
{
public:
	EMagicLeapImageTargetOrientation              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LuminARCandidateImage_GetAxisOrientation) == 0x000001, "Wrong alignment on LuminARCandidateImage_GetAxisOrientation");
static_assert(sizeof(LuminARCandidateImage_GetAxisOrientation) == 0x000001, "Wrong size on LuminARCandidateImage_GetAxisOrientation");
static_assert(offsetof(LuminARCandidateImage_GetAxisOrientation, ReturnValue) == 0x000000, "Member 'LuminARCandidateImage_GetAxisOrientation::ReturnValue' has a wrong offset!");

// Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
// 0x0001 (0x0001 - 0x0000)
struct LuminARCandidateImage_GetImageIsStationary final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LuminARCandidateImage_GetImageIsStationary) == 0x000001, "Wrong alignment on LuminARCandidateImage_GetImageIsStationary");
static_assert(sizeof(LuminARCandidateImage_GetImageIsStationary) == 0x000001, "Wrong size on LuminARCandidateImage_GetImageIsStationary");
static_assert(offsetof(LuminARCandidateImage_GetImageIsStationary, ReturnValue) == 0x000000, "Member 'LuminARCandidateImage_GetImageIsStationary::ReturnValue' has a wrong offset!");

// Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
// 0x0001 (0x0001 - 0x0000)
struct LuminARCandidateImage_GetUseUnreliablePose final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LuminARCandidateImage_GetUseUnreliablePose) == 0x000001, "Wrong alignment on LuminARCandidateImage_GetUseUnreliablePose");
static_assert(sizeof(LuminARCandidateImage_GetUseUnreliablePose) == 0x000001, "Wrong size on LuminARCandidateImage_GetUseUnreliablePose");
static_assert(offsetof(LuminARCandidateImage_GetUseUnreliablePose, ReturnValue) == 0x000000, "Member 'LuminARCandidateImage_GetUseUnreliablePose::ReturnValue' has a wrong offset!");

}

