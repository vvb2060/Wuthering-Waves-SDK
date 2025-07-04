﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Mascot_Seq

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Mascot_Seq.ABP_Mascot_Seq_C
// 0x0850 (0x0EB0 - 0x0660)
class UABP_Mascot_Seq_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0668(0x0038)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x06A0(0x0138)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x07D8(0x0060)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0838(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0858(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0980(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0AA8(0x0020)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0AC8(0x00D8)()
	struct FAnimNode_CurveSource                  AnimGraphNode_CurveSource;                         // 0x0BA0(0x0040)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0BE0(0x0060)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0C40(0x0060)()
	struct FAnimNode_CurveFix                     AnimGraphNode_CurveFix;                            // 0x0CA0(0x0030)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0CD0(0x01A8)()
	struct FRotator                               Add_Spine;                                         // 0x0E78(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Spine_Head;                                    // 0x0E84(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Enable_AimOffset;                                  // 0x0E90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E91[0x7];                                      // 0x0E91(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAimOffsetBlendSpace*                   AimOffset;                                         // 0x0E98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LookXY;                                            // 0x0EA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Mascot_Seq(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Mascot_Seq_C">();
	}
	static class UABP_Mascot_Seq_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Mascot_Seq_C>();
	}
};
static_assert(alignof(UABP_Mascot_Seq_C) == 0x000010, "Wrong alignment on UABP_Mascot_Seq_C");
static_assert(sizeof(UABP_Mascot_Seq_C) == 0x000EB0, "Wrong size on UABP_Mascot_Seq_C");
static_assert(offsetof(UABP_Mascot_Seq_C, UberGraphFrame) == 0x000660, "Member 'UABP_Mascot_Seq_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_Root) == 0x000668, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_LinkedInputPose) == 0x0006A0, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_Slot_2) == 0x0007D8, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_LocalToComponentSpace) == 0x000838, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_ModifyBone_1) == 0x000858, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_ModifyBone) == 0x000980, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_ComponentToLocalSpace) == 0x000AA8, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_ApplyAdditive) == 0x000AC8, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_CurveSource) == 0x000BA0, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_CurveSource' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_Slot_1) == 0x000BE0, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_Slot) == 0x000C40, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_CurveFix) == 0x000CA0, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_CurveFix' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x000CD0, "Member 'UABP_Mascot_Seq_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, Add_Spine) == 0x000E78, "Member 'UABP_Mascot_Seq_C::Add_Spine' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, Add_Spine_Head) == 0x000E84, "Member 'UABP_Mascot_Seq_C::Add_Spine_Head' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, Enable_AimOffset) == 0x000E90, "Member 'UABP_Mascot_Seq_C::Enable_AimOffset' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, AimOffset) == 0x000E98, "Member 'UABP_Mascot_Seq_C::AimOffset' has a wrong offset!");
static_assert(offsetof(UABP_Mascot_Seq_C, LookXY) == 0x000EA0, "Member 'UABP_Mascot_Seq_C::LookXY' has a wrong offset!");

}

