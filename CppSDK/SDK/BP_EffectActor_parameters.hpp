﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SEffectFloatParameter_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"


namespace SDK::Params
{

// Function BP_EffectActor.BP_EffectActor_C.ExecuteUbergraph_BP_EffectActor
// 0x0040 (0x0040 - 0x0000)
struct BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InitializeWithPreview_Success;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Handle;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bValue;                               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           K2Node_DynamicCast_AsAk_Component;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue_1;        // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue_2;        // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue_3;        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKuroFeatureLevel                             CallFunc_GetWorldFeatureLevel_ReturnValue;         // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Stop_ReturnValue_1;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue_4;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor) == 0x000008, "Wrong alignment on BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor");
static_assert(sizeof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor) == 0x000040, "Wrong size on BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, EntryPoint) == 0x000000, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_InitializeWithPreview_Success) == 0x000004, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_InitializeWithPreview_Success' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, K2Node_Event_EndPlayReason) == 0x000005, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, K2Node_Event_Handle) == 0x000008, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::K2Node_Event_Handle' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000010, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, K2Node_SwitchEnum_CmpSuccess) == 0x000012, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000018, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, K2Node_Event_bValue) == 0x000020, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::K2Node_Event_bValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, K2Node_DynamicCast_AsAk_Component) == 0x000028, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::K2Node_DynamicCast_AsAk_Component' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_Stop_ReturnValue) == 0x000031, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_EffectHandleIsValid_ReturnValue_1) == 0x000032, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_EffectHandleIsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_EffectHandleIsValid_ReturnValue_2) == 0x000033, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_EffectHandleIsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_EffectHandleIsValid_ReturnValue_3) == 0x000034, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_EffectHandleIsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_GetWorldFeatureLevel_ReturnValue) == 0x000035, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_GetWorldFeatureLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_IsVisible_ReturnValue) == 0x000036, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000037, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_Stop_ReturnValue_1) == 0x000038, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_Stop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor, CallFunc_EffectHandleIsValid_ReturnValue_4) == 0x000039, "Member 'BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor::CallFunc_EffectHandleIsValid_ReturnValue_4' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.DoHiddenInGame
// 0x0001 (0x0001 - 0x0000)
struct BP_EffectActor_C_DoHiddenInGame final
{
public:
	bool                                          bValue;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActor_C_DoHiddenInGame) == 0x000001, "Wrong alignment on BP_EffectActor_C_DoHiddenInGame");
static_assert(sizeof(BP_EffectActor_C_DoHiddenInGame) == 0x000001, "Wrong size on BP_EffectActor_C_DoHiddenInGame");
static_assert(offsetof(BP_EffectActor_C_DoHiddenInGame, bValue) == 0x000000, "Member 'BP_EffectActor_C_DoHiddenInGame::bValue' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.EditorTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EffectActor_C_EditorTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EffectActor_C_EditorTick) == 0x000004, "Wrong alignment on BP_EffectActor_C_EditorTick");
static_assert(sizeof(BP_EffectActor_C_EditorTick) == 0x000004, "Wrong size on BP_EffectActor_C_EditorTick");
static_assert(offsetof(BP_EffectActor_C_EditorTick, DeltaSeconds) == 0x000000, "Member 'BP_EffectActor_C_EditorTick::DeltaSeconds' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_EffectActor_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EffectActor_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_EffectActor_C_ReceiveEndPlay");
static_assert(sizeof(BP_EffectActor_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_EffectActor_C_ReceiveEndPlay");
static_assert(offsetof(BP_EffectActor_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_EffectActor_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.SetHandle
// 0x0004 (0x0004 - 0x0000)
struct BP_EffectActor_C_SetHandle final
{
public:
	int32                                         Handle;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EffectActor_C_SetHandle) == 0x000004, "Wrong alignment on BP_EffectActor_C_SetHandle");
static_assert(sizeof(BP_EffectActor_C_SetHandle) == 0x000004, "Wrong size on BP_EffectActor_C_SetHandle");
static_assert(offsetof(BP_EffectActor_C_SetHandle, Handle) == 0x000000, "Member 'BP_EffectActor_C_SetHandle::Handle' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.UserConstructionScript
// 0x0050 (0x0050 - 0x0000)
struct BP_EffectActor_C_UserConstructionScript final
{
public:
	class FString                                 CallFunc_BreakSoftObjectPath_PathString;           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_IsEditor;                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActor_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_EffectActor_C_UserConstructionScript");
static_assert(sizeof(BP_EffectActor_C_UserConstructionScript) == 0x000050, "Wrong size on BP_EffectActor_C_UserConstructionScript");
static_assert(offsetof(BP_EffectActor_C_UserConstructionScript, CallFunc_BreakSoftObjectPath_PathString) == 0x000000, "Member 'BP_EffectActor_C_UserConstructionScript::CallFunc_BreakSoftObjectPath_PathString' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'BP_EffectActor_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000020, "Member 'BP_EffectActor_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_UserConstructionScript, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'BP_EffectActor_C_UserConstructionScript::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000038, "Member 'BP_EffectActor_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_UserConstructionScript, CallFunc_IsEditor_IsEditor) == 0x000048, "Member 'BP_EffectActor_C_UserConstructionScript::CallFunc_IsEditor_IsEditor' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.Refresh
// 0x0018 (0x0018 - 0x0000)
struct BP_EffectActor_C_Refresh final
{
public:
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InitializeWithPreview_Success;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActor_C_Refresh) == 0x000008, "Wrong alignment on BP_EffectActor_C_Refresh");
static_assert(sizeof(BP_EffectActor_C_Refresh) == 0x000018, "Wrong size on BP_EffectActor_C_Refresh");
static_assert(offsetof(BP_EffectActor_C_Refresh, CallFunc_Stop_ReturnValue) == 0x000000, "Member 'BP_EffectActor_C_Refresh::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Refresh, CallFunc_GetOuterObject_ReturnValue) == 0x000008, "Member 'BP_EffectActor_C_Refresh::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Refresh, CallFunc_InitializeWithPreview_Success) == 0x000010, "Member 'BP_EffectActor_C_Refresh::CallFunc_InitializeWithPreview_Success' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.IsEditor
// 0x0002 (0x0002 - 0x0000)
struct BP_EffectActor_C_IsEditor final
{
public:
	bool                                          IsEditor_0;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEffectSystemInEditorNoPIE_ReturnValue;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActor_C_IsEditor) == 0x000001, "Wrong alignment on BP_EffectActor_C_IsEditor");
static_assert(sizeof(BP_EffectActor_C_IsEditor) == 0x000002, "Wrong size on BP_EffectActor_C_IsEditor");
static_assert(offsetof(BP_EffectActor_C_IsEditor, IsEditor_0) == 0x000000, "Member 'BP_EffectActor_C_IsEditor::IsEditor_0' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_IsEditor, CallFunc_IsEffectSystemInEditorNoPIE_ReturnValue) == 0x000001, "Member 'BP_EffectActor_C_IsEditor::CallFunc_IsEffectSystemInEditorNoPIE_ReturnValue' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.Stop
// 0x0018 (0x0018 - 0x0000)
struct BP_EffectActor_C_Stop final
{
public:
	class FString                                 Reason;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Immediately;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_IsEditor;                        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_IsEditor_1;                      // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_StopEffect_ReturnValue;                   // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActor_C_Stop) == 0x000008, "Wrong alignment on BP_EffectActor_C_Stop");
static_assert(sizeof(BP_EffectActor_C_Stop) == 0x000018, "Wrong size on BP_EffectActor_C_Stop");
static_assert(offsetof(BP_EffectActor_C_Stop, Reason) == 0x000000, "Member 'BP_EffectActor_C_Stop::Reason' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Stop, Immediately) == 0x000010, "Member 'BP_EffectActor_C_Stop::Immediately' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Stop, ReturnValue) == 0x000011, "Member 'BP_EffectActor_C_Stop::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Stop, CallFunc_IsEditor_IsEditor) == 0x000012, "Member 'BP_EffectActor_C_Stop::CallFunc_IsEditor_IsEditor' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Stop, CallFunc_IsEditor_IsEditor_1) == 0x000013, "Member 'BP_EffectActor_C_Stop::CallFunc_IsEditor_IsEditor_1' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Stop, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'BP_EffectActor_C_Stop::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Stop, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000015, "Member 'BP_EffectActor_C_Stop::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Stop, CallFunc_StopEffect_ReturnValue) == 0x000016, "Member 'BP_EffectActor_C_Stop::CallFunc_StopEffect_ReturnValue' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.Play
// 0x00B0 (0x00B0 - 0x0000)
struct BP_EffectActor_C_Play final
{
public:
	class FString                                 Reason;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTransformDouble                       CallFunc_D_GetTransform_ReturnValue;               // 0x0010(0x0040)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsWorldPartitionActor_ReturnValue;     // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSEffectFloatParameter                 K2Node_MakeStruct_SEffectFloatParameter;           // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_IsEditor;                        // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayEffect_ReturnValue;                   // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue_1;        // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E[0x2];                                       // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue_1;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_BreakSoftObjectPath_PathString;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SpawnEffect_ReturnValue;                  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SpawnEffectWithActor_ReturnValue;         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EffectActor_C_Play) == 0x000010, "Wrong alignment on BP_EffectActor_C_Play");
static_assert(sizeof(BP_EffectActor_C_Play) == 0x0000B0, "Wrong size on BP_EffectActor_C_Play");
static_assert(offsetof(BP_EffectActor_C_Play, Reason) == 0x000000, "Member 'BP_EffectActor_C_Play::Reason' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_D_GetTransform_ReturnValue) == 0x000010, "Member 'BP_EffectActor_C_Play::CallFunc_D_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000050, "Member 'BP_EffectActor_C_Play::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_Not_PreBool_ReturnValue) == 0x000051, "Member 'BP_EffectActor_C_Play::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_GetIsWorldPartitionActor_ReturnValue) == 0x000052, "Member 'BP_EffectActor_C_Play::CallFunc_GetIsWorldPartitionActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_BooleanAND_ReturnValue) == 0x000053, "Member 'BP_EffectActor_C_Play::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_BooleanOR_ReturnValue) == 0x000054, "Member 'BP_EffectActor_C_Play::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, K2Node_MakeStruct_SEffectFloatParameter) == 0x000058, "Member 'BP_EffectActor_C_Play::K2Node_MakeStruct_SEffectFloatParameter' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000068, "Member 'BP_EffectActor_C_Play::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_IsEditor_IsEditor) == 0x000069, "Member 'BP_EffectActor_C_Play::CallFunc_IsEditor_IsEditor' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_GetOuterObject_ReturnValue) == 0x000070, "Member 'BP_EffectActor_C_Play::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_Array_Add_ReturnValue) == 0x000078, "Member 'BP_EffectActor_C_Play::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_PlayEffect_ReturnValue) == 0x00007C, "Member 'BP_EffectActor_C_Play::CallFunc_PlayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_EffectHandleIsValid_ReturnValue_1) == 0x00007D, "Member 'BP_EffectActor_C_Play::CallFunc_EffectHandleIsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_GetOuterObject_ReturnValue_1) == 0x000080, "Member 'BP_EffectActor_C_Play::CallFunc_GetOuterObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_BreakSoftObjectPath_PathString) == 0x000088, "Member 'BP_EffectActor_C_Play::CallFunc_BreakSoftObjectPath_PathString' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_IsEmpty_ReturnValue) == 0x000098, "Member 'BP_EffectActor_C_Play::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_SpawnEffect_ReturnValue) == 0x00009C, "Member 'BP_EffectActor_C_Play::CallFunc_SpawnEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_Play, CallFunc_SpawnEffectWithActor_ReturnValue) == 0x0000A0, "Member 'BP_EffectActor_C_Play::CallFunc_SpawnEffectWithActor_ReturnValue' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.PlayEffect
// 0x0018 (0x0018 - 0x0000)
struct BP_EffectActor_C_PlayEffect final
{
public:
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InitializeWithPreview_Success;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActor_C_PlayEffect) == 0x000008, "Wrong alignment on BP_EffectActor_C_PlayEffect");
static_assert(sizeof(BP_EffectActor_C_PlayEffect) == 0x000018, "Wrong size on BP_EffectActor_C_PlayEffect");
static_assert(offsetof(BP_EffectActor_C_PlayEffect, CallFunc_Stop_ReturnValue) == 0x000000, "Member 'BP_EffectActor_C_PlayEffect::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_PlayEffect, CallFunc_GetOuterObject_ReturnValue) == 0x000008, "Member 'BP_EffectActor_C_PlayEffect::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_PlayEffect, CallFunc_InitializeWithPreview_Success) == 0x000010, "Member 'BP_EffectActor_C_PlayEffect::CallFunc_InitializeWithPreview_Success' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.StopEffect
// 0x0001 (0x0001 - 0x0000)
struct BP_EffectActor_C_StopEffect final
{
public:
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActor_C_StopEffect) == 0x000001, "Wrong alignment on BP_EffectActor_C_StopEffect");
static_assert(sizeof(BP_EffectActor_C_StopEffect) == 0x000001, "Wrong size on BP_EffectActor_C_StopEffect");
static_assert(offsetof(BP_EffectActor_C_StopEffect, CallFunc_Stop_ReturnValue) == 0x000000, "Member 'BP_EffectActor_C_StopEffect::CallFunc_Stop_ReturnValue' has a wrong offset!");

// Function BP_EffectActor.BP_EffectActor_C.GetHandle
// 0x0008 (0x0008 - 0x0000)
struct BP_EffectActor_C_GetHandle final
{
public:
	int32                                         Handle;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActor_C_GetHandle) == 0x000004, "Wrong alignment on BP_EffectActor_C_GetHandle");
static_assert(sizeof(BP_EffectActor_C_GetHandle) == 0x000008, "Wrong size on BP_EffectActor_C_GetHandle");
static_assert(offsetof(BP_EffectActor_C_GetHandle, Handle) == 0x000000, "Member 'BP_EffectActor_C_GetHandle::Handle' has a wrong offset!");
static_assert(offsetof(BP_EffectActor_C_GetHandle, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000004, "Member 'BP_EffectActor_C_GetHandle::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");

}

