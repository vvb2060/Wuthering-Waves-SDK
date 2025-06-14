﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CineCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CinematicCamera_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SUiCameraAnimationSettings_structs.hpp"


namespace SDK::Params
{

// Function BP_CineCamera.BP_CineCamera_C.ExecuteUbergraph_BP_CineCamera
// 0x00B0 (0x00B0 - 0x0000)
struct BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovieSceneDialogueSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_TimeLength;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovieSceneDialogueSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_TryGetAutoTransformByOffsetTime_OutTrans; // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TryGetAutoTransformByOffsetTime_ReturnValue; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0xF];                                       // 0x0061(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_TryGetAutoTransformByOffsetTime_OutTrans_1; // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TryGetAutoTransformByOffsetTime_ReturnValue_1; // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera) == 0x000010, "Wrong alignment on BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera");
static_assert(sizeof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera) == 0x0000B0, "Wrong size on BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, EntryPoint) == 0x000000, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, K2Node_Event_TimeLength) == 0x000010, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::K2Node_Event_TimeLength' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, CallFunc_Add_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x000020, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, CallFunc_Less_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, CallFunc_TryGetAutoTransformByOffsetTime_OutTrans) == 0x000030, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::CallFunc_TryGetAutoTransformByOffsetTime_OutTrans' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, CallFunc_TryGetAutoTransformByOffsetTime_ReturnValue) == 0x000060, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::CallFunc_TryGetAutoTransformByOffsetTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, CallFunc_TryGetAutoTransformByOffsetTime_OutTrans_1) == 0x000070, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::CallFunc_TryGetAutoTransformByOffsetTime_OutTrans_1' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera, CallFunc_TryGetAutoTransformByOffsetTime_ReturnValue_1) == 0x0000A0, "Member 'BP_CineCamera_C_ExecuteUbergraph_BP_CineCamera::CallFunc_TryGetAutoTransformByOffsetTime_ReturnValue_1' has a wrong offset!");

// Function BP_CineCamera.BP_CineCamera_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CineCamera_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CineCamera_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CineCamera_C_ReceiveTick");
static_assert(sizeof(BP_CineCamera_C_ReceiveTick) == 0x000004, "Wrong size on BP_CineCamera_C_ReceiveTick");
static_assert(offsetof(BP_CineCamera_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CineCamera_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CineCamera.BP_CineCamera_C.BeginAutoTransform
// 0x0004 (0x0004 - 0x0000)
struct BP_CineCamera_C_BeginAutoTransform final
{
public:
	float                                         TimeLength;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CineCamera_C_BeginAutoTransform) == 0x000004, "Wrong alignment on BP_CineCamera_C_BeginAutoTransform");
static_assert(sizeof(BP_CineCamera_C_BeginAutoTransform) == 0x000004, "Wrong size on BP_CineCamera_C_BeginAutoTransform");
static_assert(offsetof(BP_CineCamera_C_BeginAutoTransform, TimeLength) == 0x000000, "Member 'BP_CineCamera_C_BeginAutoTransform::TimeLength' has a wrong offset!");

// Function BP_CineCamera.BP_CineCamera_C.ApplyUiCameraSettings
// 0x0368 (0x0368 - 0x0000)
struct BP_CineCamera_C_ApplyUiCameraSettings final
{
public:
	class UCineCameraComponent*                   CineCameraComponent;                               // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCineCameraComponent*                   CallFunc_GetCineCameraComponent_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	struct FSUiCameraAnimationSettings            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0078(0x01A8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0228(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0238(0x0018)()
	struct FCameraFocusSettings                   K2Node_MakeStruct_CameraFocusSettings;             // 0x0250(0x0060)()
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_Conv_VectorToVectorDouble_ReturnValue;    // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_D_K2_SetActorLocation_SweepHitResult;     // 0x02D0(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_D_K2_SetActorLocation_ReturnValue;        // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CineCamera_C_ApplyUiCameraSettings) == 0x000008, "Wrong alignment on BP_CineCamera_C_ApplyUiCameraSettings");
static_assert(sizeof(BP_CineCamera_C_ApplyUiCameraSettings) == 0x000368, "Wrong size on BP_CineCamera_C_ApplyUiCameraSettings");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CineCameraComponent) == 0x000000, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CineCameraComponent' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_GetCineCameraComponent_ReturnValue) == 0x000010, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_GetCineCameraComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_Conv_NameToText_ReturnValue) == 0x000020, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_GetDataTableRowFromName_OutRow) == 0x000078, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000220, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, K2Node_MakeArray_Array) == 0x000228, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_Format_ReturnValue) == 0x000238, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, K2Node_MakeStruct_CameraFocusSettings) == 0x000250, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::K2Node_MakeStruct_CameraFocusSettings' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0002B0, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_Conv_VectorToVectorDouble_ReturnValue) == 0x0002B8, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_Conv_VectorToVectorDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_D_K2_SetActorLocation_SweepHitResult) == 0x0002D0, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_D_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ApplyUiCameraSettings, CallFunc_D_K2_SetActorLocation_ReturnValue) == 0x000364, "Member 'BP_CineCamera_C_ApplyUiCameraSettings::CallFunc_D_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_CineCamera.BP_CineCamera_C.ResetSeqCineCamSetting
// 0x0140 (0x0140 - 0x0000)
struct BP_CineCamera_C_ResetSeqCineCamSetting final
{
public:
	struct FCameraLookatTrackingSettings          K2Node_MakeStruct_CameraLookatTrackingSettings;    // 0x0000(0x0058)()
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0090(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCineCameraComponent*                   K2Node_DynamicCast_As_______;                      // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CineCamera_C_ResetSeqCineCamSetting) == 0x000010, "Wrong alignment on BP_CineCamera_C_ResetSeqCineCamSetting");
static_assert(sizeof(BP_CineCamera_C_ResetSeqCineCamSetting) == 0x000140, "Wrong size on BP_CineCamera_C_ResetSeqCineCamSetting");
static_assert(offsetof(BP_CineCamera_C_ResetSeqCineCamSetting, K2Node_MakeStruct_CameraLookatTrackingSettings) == 0x000000, "Member 'BP_CineCamera_C_ResetSeqCineCamSetting::K2Node_MakeStruct_CameraLookatTrackingSettings' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ResetSeqCineCamSetting, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'BP_CineCamera_C_ResetSeqCineCamSetting::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ResetSeqCineCamSetting, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000090, "Member 'BP_CineCamera_C_ResetSeqCineCamSetting::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ResetSeqCineCamSetting, K2Node_DynamicCast_As_______) == 0x000128, "Member 'BP_CineCamera_C_ResetSeqCineCamSetting::K2Node_DynamicCast_As_______' has a wrong offset!");
static_assert(offsetof(BP_CineCamera_C_ResetSeqCineCamSetting, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'BP_CineCamera_C_ResetSeqCineCamSetting::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

