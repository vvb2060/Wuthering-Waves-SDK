﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_EFuludelisiDajianMd10011

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_MonsterCommon_classes.hpp"
#include "KuroAnim_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_EFuludelisiDajianMd10011.ABP_EFuludelisiDajianMd10011_C
// 0x0800 (0x3760 - 0x2F60)
class UABP_EFuludelisiDajianMd10011_C final : public UABP_MonsterCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ABP_EFuludelisiDajianMd10011_C;     // 0x2F58(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_1_ABP_EFuludelisiDajianMd10011_C; // 0x2F60(0x0038)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_ABP_EFuludelisiDajianMd10011_C; // 0x2F98(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_ABP_EFuludelisiDajianMd10011_C; // 0x2FB8(0x0020)()
	struct FAnimNode_Feedback                     AnimGraphNode_Feedback_ABP_EFuludelisiDajianMd10011_C; // 0x2FD8(0x0278)()
	struct FAnimNode_SightLock                    AnimGraphNode_SightLock_ABP_EFuludelisiDajianMd10011_C; // 0x3250(0x01D0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_ABP_EFuludelisiDajianMd10011_C; // 0x3420(0x0138)()
	struct FAnimNode_BoneRotateToLocation         AnimGraphNode_BoneRotateToLocation_ABP_EFuludelisiDajianMd10011_C; // 0x3558(0x0138)()
	struct FAnimNode_Root                         AnimGraphNode_Root_ABP_EFuludelisiDajianMd10011_C; // 0x3690(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_ABP_EFuludelisiDajianMd10011_C; // 0x36C8(0x0090)()

public:
	void ExecuteUbergraph_ABP_EFuludelisiDajianMd10011(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EFuludelisiDajianMd10011_AnimGraphNode_Feedback_88BC8C7048D1A599A53B89B41DDF8B6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EFuludelisiDajianMd10011_AnimGraphNode_BoneRotateToLocation_997366FA4794D4E31A7BC4B0C18A3DE4();
	void AnimGraph(struct FPoseLink* Param_AnimGraph_0);
	void IKAndFk_Clone(const struct FPoseLink& InPose, struct FPoseLink* IKAndFk_Clone_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_EFuludelisiDajianMd10011_C">();
	}
	static class UABP_EFuludelisiDajianMd10011_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_EFuludelisiDajianMd10011_C>();
	}
};
static_assert(alignof(UABP_EFuludelisiDajianMd10011_C) == 0x000010, "Wrong alignment on UABP_EFuludelisiDajianMd10011_C");
static_assert(sizeof(UABP_EFuludelisiDajianMd10011_C) == 0x003760, "Wrong size on UABP_EFuludelisiDajianMd10011_C");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, UberGraphFrame_ABP_EFuludelisiDajianMd10011_C) == 0x002F58, "Member 'UABP_EFuludelisiDajianMd10011_C::UberGraphFrame_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, AnimGraphNode_Root_1_ABP_EFuludelisiDajianMd10011_C) == 0x002F60, "Member 'UABP_EFuludelisiDajianMd10011_C::AnimGraphNode_Root_1_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, AnimGraphNode_LocalToComponentSpace_ABP_EFuludelisiDajianMd10011_C) == 0x002F98, "Member 'UABP_EFuludelisiDajianMd10011_C::AnimGraphNode_LocalToComponentSpace_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, AnimGraphNode_ComponentToLocalSpace_ABP_EFuludelisiDajianMd10011_C) == 0x002FB8, "Member 'UABP_EFuludelisiDajianMd10011_C::AnimGraphNode_ComponentToLocalSpace_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, AnimGraphNode_Feedback_ABP_EFuludelisiDajianMd10011_C) == 0x002FD8, "Member 'UABP_EFuludelisiDajianMd10011_C::AnimGraphNode_Feedback_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, AnimGraphNode_SightLock_ABP_EFuludelisiDajianMd10011_C) == 0x003250, "Member 'UABP_EFuludelisiDajianMd10011_C::AnimGraphNode_SightLock_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, AnimGraphNode_LinkedInputPose_ABP_EFuludelisiDajianMd10011_C) == 0x003420, "Member 'UABP_EFuludelisiDajianMd10011_C::AnimGraphNode_LinkedInputPose_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, AnimGraphNode_BoneRotateToLocation_ABP_EFuludelisiDajianMd10011_C) == 0x003558, "Member 'UABP_EFuludelisiDajianMd10011_C::AnimGraphNode_BoneRotateToLocation_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, AnimGraphNode_Root_ABP_EFuludelisiDajianMd10011_C) == 0x003690, "Member 'UABP_EFuludelisiDajianMd10011_C::AnimGraphNode_Root_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");
static_assert(offsetof(UABP_EFuludelisiDajianMd10011_C, AnimGraphNode_SequencePlayer_ABP_EFuludelisiDajianMd10011_C) == 0x0036C8, "Member 'UABP_EFuludelisiDajianMd10011_C::AnimGraphNode_SequencePlayer_ABP_EFuludelisiDajianMd10011_C' has a wrong offset!");

}

