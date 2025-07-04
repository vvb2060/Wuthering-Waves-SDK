﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Clouds

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_Cloud_Presents_structs.hpp"
#include "AkAudio_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"


namespace SDK::Params
{

// Function BP_Clouds.BP_Clouds_C.ExecuteUbergraph_BP_Clouds
// 0x0128 (0x0128 - 0x0000)
struct BP_Clouds_C_ExecuteUbergraph_BP_Clouds final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                ___object_Variable;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPathName_ReturnValue;                  // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPD_CloudPrefab_C*                      K2Node_DynamicCast_AsPD_Cloud_Prefab;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> ___delegate_Variable; // 0x0030(0x0028)(ConstParm, ZeroConstructor)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds_1;                       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0028)(ZeroConstructor)
	E_Cloud_Presents                              K2Node_CustomEvent_CloudPresents;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_ChangeSpeed_1;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsInEditor_1;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bOverrideCloudRotation;         // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x2];                                       // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_CloudSpeed;                     // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_CloudOffset;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UObject>                 K2Node_CustomEvent_Asset;                          // 0x00A8(0x0030)(HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ChangeSpeed;                    // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsInEditor;                     // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsAudio;                        // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DE[0x2];                                       // 0x00DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_IsClosed_Variable;                         // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPD_CloudPrefab_C*                      K2Node_DynamicCast_AsPD_Cloud_Prefab_1;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_SoftObjectReferenceToString_ReturnValue; // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKuroFeatureLevel                             CallFunc_GetWorldFeatureLevel_ReturnValue;         // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds) == 0x000008, "Wrong alignment on BP_Clouds_C_ExecuteUbergraph_BP_Clouds");
static_assert(sizeof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds) == 0x000128, "Wrong size on BP_Clouds_C_ExecuteUbergraph_BP_Clouds");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, EntryPoint) == 0x000000, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, ___object_Variable) == 0x000008, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::___object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, CallFunc_GetPathName_ReturnValue) == 0x000010, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::CallFunc_GetPathName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_DynamicCast_AsPD_Cloud_Prefab) == 0x000020, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_DynamicCast_AsPD_Cloud_Prefab' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, ___delegate_Variable) == 0x000030, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::___delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, ___bool_Has_Been_Initd_Variable) == 0x000058, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_Event_DeltaSeconds_1) == 0x00005C, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_Event_DeltaSeconds_1' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_Event_DeltaSeconds) == 0x000060, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_CloudPresents) == 0x000090, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_CloudPresents' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_ChangeSpeed_1) == 0x000094, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_ChangeSpeed_1' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_IsInEditor_1) == 0x000098, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_IsInEditor_1' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_bOverrideCloudRotation) == 0x000099, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_bOverrideCloudRotation' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_CloudSpeed) == 0x00009C, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_CloudSpeed' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_CloudOffset) == 0x0000A0, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_CloudOffset' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_SwitchEnum_CmpSuccess) == 0x0000A4, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_Asset) == 0x0000A8, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_Asset' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_ChangeSpeed) == 0x0000D8, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_ChangeSpeed' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_IsInEditor) == 0x0000DC, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_IsInEditor' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_IsAudio) == 0x0000DD, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_IsAudio' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x0000E0, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, ___bool_IsClosed_Variable) == 0x0000E8, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_DynamicCast_AsPD_Cloud_Prefab_1) == 0x0000F0, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_DynamicCast_AsPD_Cloud_Prefab_1' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, CallFunc_Conv_SoftObjectReferenceToString_ReturnValue) == 0x000100, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::CallFunc_Conv_SoftObjectReferenceToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, CallFunc_PostEvent_ReturnValue) == 0x000110, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000114, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, K2Node_CustomEvent_Loaded) == 0x000118, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, CallFunc_GetWorldFeatureLevel_ReturnValue) == 0x000120, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::CallFunc_GetWorldFeatureLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_ExecuteUbergraph_BP_Clouds, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000121, "Member 'BP_Clouds_C_ExecuteUbergraph_BP_Clouds::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.LoadAndSwitch
// 0x0038 (0x0038 - 0x0000)
struct BP_Clouds_C_LoadAndSwitch final
{
public:
	TSoftObjectPtr<class UObject>                 Asset;                                             // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                         ChangeSpeed;                                       // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInEditor;                                        // 0x0034(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAudio;                                           // 0x0035(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Clouds_C_LoadAndSwitch) == 0x000008, "Wrong alignment on BP_Clouds_C_LoadAndSwitch");
static_assert(sizeof(BP_Clouds_C_LoadAndSwitch) == 0x000038, "Wrong size on BP_Clouds_C_LoadAndSwitch");
static_assert(offsetof(BP_Clouds_C_LoadAndSwitch, Asset) == 0x000000, "Member 'BP_Clouds_C_LoadAndSwitch::Asset' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_LoadAndSwitch, ChangeSpeed) == 0x000030, "Member 'BP_Clouds_C_LoadAndSwitch::ChangeSpeed' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_LoadAndSwitch, IsInEditor) == 0x000034, "Member 'BP_Clouds_C_LoadAndSwitch::IsInEditor' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_LoadAndSwitch, IsAudio) == 0x000035, "Member 'BP_Clouds_C_LoadAndSwitch::IsAudio' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.Switch Clouds
// 0x0014 (0x0014 - 0x0000)
struct BP_Clouds_C_Switch_Clouds final
{
public:
	E_Cloud_Presents                              CloudPresents;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ChangeSpeed;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInEditor;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOverrideCloudRotation;                            // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CloudSpeed;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloudOffset;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Clouds_C_Switch_Clouds) == 0x000004, "Wrong alignment on BP_Clouds_C_Switch_Clouds");
static_assert(sizeof(BP_Clouds_C_Switch_Clouds) == 0x000014, "Wrong size on BP_Clouds_C_Switch_Clouds");
static_assert(offsetof(BP_Clouds_C_Switch_Clouds, CloudPresents) == 0x000000, "Member 'BP_Clouds_C_Switch_Clouds::CloudPresents' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_Switch_Clouds, ChangeSpeed) == 0x000004, "Member 'BP_Clouds_C_Switch_Clouds::ChangeSpeed' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_Switch_Clouds, IsInEditor) == 0x000008, "Member 'BP_Clouds_C_Switch_Clouds::IsInEditor' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_Switch_Clouds, bOverrideCloudRotation) == 0x000009, "Member 'BP_Clouds_C_Switch_Clouds::bOverrideCloudRotation' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_Switch_Clouds, CloudSpeed) == 0x00000C, "Member 'BP_Clouds_C_Switch_Clouds::CloudSpeed' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_Switch_Clouds, CloudOffset) == 0x000010, "Member 'BP_Clouds_C_Switch_Clouds::CloudOffset' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.EditorTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Clouds_C_EditorTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Clouds_C_EditorTick) == 0x000004, "Wrong alignment on BP_Clouds_C_EditorTick");
static_assert(sizeof(BP_Clouds_C_EditorTick) == 0x000004, "Wrong size on BP_Clouds_C_EditorTick");
static_assert(offsetof(BP_Clouds_C_EditorTick, DeltaSeconds) == 0x000000, "Member 'BP_Clouds_C_EditorTick::DeltaSeconds' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Clouds_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Clouds_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Clouds_C_ReceiveTick");
static_assert(sizeof(BP_Clouds_C_ReceiveTick) == 0x000004, "Wrong size on BP_Clouds_C_ReceiveTick");
static_assert(offsetof(BP_Clouds_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Clouds_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A
// 0x0008 (0x0008 - 0x0000)
struct BP_Clouds_C_OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Clouds_C_OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A) == 0x000008, "Wrong alignment on BP_Clouds_C_OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A");
static_assert(sizeof(BP_Clouds_C_OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A) == 0x000008, "Wrong size on BP_Clouds_C_OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A");
static_assert(offsetof(BP_Clouds_C_OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A, Loaded) == 0x000000, "Member 'BP_Clouds_C_OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A::Loaded' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.SwitchCloudsSub
// 0x0038 (0x0038 - 0x0000)
struct BP_Clouds_C_SwitchCloudsSub final
{
public:
	class UPD_CloudPrefab_C*                      CloudPresents;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChangeSpeed;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CloudPrefab_C*                      K2Node_DynamicCast_AsBP_Cloud_Prefab;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CloudPrefab_C*                      K2Node_DynamicCast_AsBP_Cloud_Prefab_1;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Clouds_C_SwitchCloudsSub) == 0x000008, "Wrong alignment on BP_Clouds_C_SwitchCloudsSub");
static_assert(sizeof(BP_Clouds_C_SwitchCloudsSub) == 0x000038, "Wrong size on BP_Clouds_C_SwitchCloudsSub");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, CloudPresents) == 0x000000, "Member 'BP_Clouds_C_SwitchCloudsSub::CloudPresents' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, ChangeSpeed) == 0x000008, "Member 'BP_Clouds_C_SwitchCloudsSub::ChangeSpeed' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, CallFunc_Array_Get_Item) == 0x00000C, "Member 'BP_Clouds_C_SwitchCloudsSub::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'BP_Clouds_C_SwitchCloudsSub::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_Clouds_C_SwitchCloudsSub::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, K2Node_DynamicCast_AsBP_Cloud_Prefab) == 0x000018, "Member 'BP_Clouds_C_SwitchCloudsSub::K2Node_DynamicCast_AsBP_Cloud_Prefab' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Clouds_C_SwitchCloudsSub::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'BP_Clouds_C_SwitchCloudsSub::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, CallFunc_IsValid_ReturnValue_1) == 0x000022, "Member 'BP_Clouds_C_SwitchCloudsSub::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, K2Node_DynamicCast_AsBP_Cloud_Prefab_1) == 0x000028, "Member 'BP_Clouds_C_SwitchCloudsSub::K2Node_DynamicCast_AsBP_Cloud_Prefab_1' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SwitchCloudsSub, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_Clouds_C_SwitchCloudsSub::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.SetCloudParameters
// 0x0028 (0x0028 - 0x0000)
struct BP_Clouds_C_SetCloudParameters final
{
public:
	class UPD_CloudPrefab_C*                      CloudPrefeb;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CloudActorComponent;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChangeSpeed;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TransSortNumber;                                   // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CloudPrefab_C*                      K2Node_DynamicCast_AsBP_Cloud_Prefab;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Clouds_C_SetCloudParameters) == 0x000008, "Wrong alignment on BP_Clouds_C_SetCloudParameters");
static_assert(sizeof(BP_Clouds_C_SetCloudParameters) == 0x000028, "Wrong size on BP_Clouds_C_SetCloudParameters");
static_assert(offsetof(BP_Clouds_C_SetCloudParameters, CloudPrefeb) == 0x000000, "Member 'BP_Clouds_C_SetCloudParameters::CloudPrefeb' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SetCloudParameters, CloudActorComponent) == 0x000008, "Member 'BP_Clouds_C_SetCloudParameters::CloudActorComponent' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SetCloudParameters, ChangeSpeed) == 0x000010, "Member 'BP_Clouds_C_SetCloudParameters::ChangeSpeed' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SetCloudParameters, TransSortNumber) == 0x000014, "Member 'BP_Clouds_C_SetCloudParameters::TransSortNumber' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SetCloudParameters, K2Node_DynamicCast_AsBP_Cloud_Prefab) == 0x000018, "Member 'BP_Clouds_C_SetCloudParameters::K2Node_DynamicCast_AsBP_Cloud_Prefab' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_SetCloudParameters, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Clouds_C_SetCloudParameters::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.Get GIParams
// 0x0004 (0x0004 - 0x0000)
struct BP_Clouds_C_Get_GIParams final
{
public:
	float                                         CurTime;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Clouds_C_Get_GIParams) == 0x000004, "Wrong alignment on BP_Clouds_C_Get_GIParams");
static_assert(sizeof(BP_Clouds_C_Get_GIParams) == 0x000004, "Wrong size on BP_Clouds_C_Get_GIParams");
static_assert(offsetof(BP_Clouds_C_Get_GIParams, CurTime) == 0x000000, "Member 'BP_Clouds_C_Get_GIParams::CurTime' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.开启云跟随摄像机移动
// 0x0038 (0x0038 - 0x0000)
struct BP_Clouds_C_开启云跟随摄像机移动 final
{
public:
	int32                                         ___int_Array_Index_Variable;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_CloudPrefab_C*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CloudPrefab_C*                      CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Clouds_C_开启云跟随摄像机移动) == 0x000008, "Wrong alignment on BP_Clouds_C_开启云跟随摄像机移动");
static_assert(sizeof(BP_Clouds_C_开启云跟随摄像机移动) == 0x000038, "Wrong size on BP_Clouds_C_开启云跟随摄像机移动");
static_assert(offsetof(BP_Clouds_C_开启云跟随摄像机移动, ___int_Array_Index_Variable) == 0x000000, "Member 'BP_Clouds_C_开启云跟随摄像机移动::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_开启云跟随摄像机移动, ___int_Loop_Counter_Variable) == 0x000004, "Member 'BP_Clouds_C_开启云跟随摄像机移动::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_开启云跟随摄像机移动, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_Clouds_C_开启云跟随摄像机移动::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_开启云跟随摄像机移动, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'BP_Clouds_C_开启云跟随摄像机移动::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_开启云跟随摄像机移动, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_Clouds_C_开启云跟随摄像机移动::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_开启云跟随摄像机移动, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_Clouds_C_开启云跟随摄像机移动::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_开启云跟随摄像机移动, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_Clouds_C_开启云跟随摄像机移动::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.关闭云跟随摄像机移动
// 0x00D0 (0x00D0 - 0x0000)
struct BP_Clouds_C_关闭云跟随摄像机移动 final
{
public:
	int32                                         ___int_Array_Index_Variable;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_CloudPrefab_C*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CloudPrefab_C*                      CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_D_K2_SetActorLocation_SweepHitResult;     // 0x0034(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_D_K2_SetActorLocation_ReturnValue;        // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Clouds_C_关闭云跟随摄像机移动) == 0x000008, "Wrong alignment on BP_Clouds_C_关闭云跟随摄像机移动");
static_assert(sizeof(BP_Clouds_C_关闭云跟随摄像机移动) == 0x0000D0, "Wrong size on BP_Clouds_C_关闭云跟随摄像机移动");
static_assert(offsetof(BP_Clouds_C_关闭云跟随摄像机移动, ___int_Array_Index_Variable) == 0x000000, "Member 'BP_Clouds_C_关闭云跟随摄像机移动::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_关闭云跟随摄像机移动, ___int_Loop_Counter_Variable) == 0x000004, "Member 'BP_Clouds_C_关闭云跟随摄像机移动::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_关闭云跟随摄像机移动, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_Clouds_C_关闭云跟随摄像机移动::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_关闭云跟随摄像机移动, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'BP_Clouds_C_关闭云跟随摄像机移动::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_关闭云跟随摄像机移动, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_Clouds_C_关闭云跟随摄像机移动::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_关闭云跟随摄像机移动, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_Clouds_C_关闭云跟随摄像机移动::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_关闭云跟随摄像机移动, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_Clouds_C_关闭云跟随摄像机移动::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_关闭云跟随摄像机移动, CallFunc_D_K2_SetActorLocation_SweepHitResult) == 0x000034, "Member 'BP_Clouds_C_关闭云跟随摄像机移动::CallFunc_D_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_关闭云跟随摄像机移动, CallFunc_D_K2_SetActorLocation_ReturnValue) == 0x0000C8, "Member 'BP_Clouds_C_关闭云跟随摄像机移动::CallFunc_D_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_Clouds.BP_Clouds_C.CloudMainParamsUpdate
// 0x0020 (0x0020 - 0x0000)
struct BP_Clouds_C_CloudMainParamsUpdate final
{
public:
	class ABP_CloudPrefab_C*                      K2Node_DynamicCast_AsBP_Cloud_Prefab;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CloudPrefab_C*                      K2Node_DynamicCast_AsBP_Cloud_Prefab_1;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Clouds_C_CloudMainParamsUpdate) == 0x000008, "Wrong alignment on BP_Clouds_C_CloudMainParamsUpdate");
static_assert(sizeof(BP_Clouds_C_CloudMainParamsUpdate) == 0x000020, "Wrong size on BP_Clouds_C_CloudMainParamsUpdate");
static_assert(offsetof(BP_Clouds_C_CloudMainParamsUpdate, K2Node_DynamicCast_AsBP_Cloud_Prefab) == 0x000000, "Member 'BP_Clouds_C_CloudMainParamsUpdate::K2Node_DynamicCast_AsBP_Cloud_Prefab' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_CloudMainParamsUpdate, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BP_Clouds_C_CloudMainParamsUpdate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_CloudMainParamsUpdate, K2Node_DynamicCast_AsBP_Cloud_Prefab_1) == 0x000010, "Member 'BP_Clouds_C_CloudMainParamsUpdate::K2Node_DynamicCast_AsBP_Cloud_Prefab_1' has a wrong offset!");
static_assert(offsetof(BP_Clouds_C_CloudMainParamsUpdate, K2Node_DynamicCast_bSuccess_1) == 0x000018, "Member 'BP_Clouds_C_CloudMainParamsUpdate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

