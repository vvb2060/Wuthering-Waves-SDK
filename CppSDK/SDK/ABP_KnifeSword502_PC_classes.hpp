﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_KnifeSword502_PC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_KnifeSword502_PC.ABP_KnifeSword502_PC_C
// 0x03C0 (0x0A20 - 0x0660)
class UABP_KnifeSword502_PC_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0668(0x0038)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x06A0(0x0020)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x06C0(0x00A8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0768(0x0020)()
	uint8                                         Pad_788[0x8];                                      // 0x0788(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x0790(0x0290)()

public:
	void ExecuteUbergraph_ABP_KnifeSword502_PC(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_KnifeSword502_PC_C">();
	}
	static class UABP_KnifeSword502_PC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_KnifeSword502_PC_C>();
	}
};
static_assert(alignof(UABP_KnifeSword502_PC_C) == 0x000010, "Wrong alignment on UABP_KnifeSword502_PC_C");
static_assert(sizeof(UABP_KnifeSword502_PC_C) == 0x000A20, "Wrong size on UABP_KnifeSword502_PC_C");
static_assert(offsetof(UABP_KnifeSword502_PC_C, UberGraphFrame) == 0x000660, "Member 'UABP_KnifeSword502_PC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_KnifeSword502_PC_C, AnimGraphNode_Root) == 0x000668, "Member 'UABP_KnifeSword502_PC_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_KnifeSword502_PC_C, AnimGraphNode_LocalToComponentSpace) == 0x0006A0, "Member 'UABP_KnifeSword502_PC_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_KnifeSword502_PC_C, AnimGraphNode_LinkedAnimGraph) == 0x0006C0, "Member 'UABP_KnifeSword502_PC_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UABP_KnifeSword502_PC_C, AnimGraphNode_ComponentToLocalSpace) == 0x000768, "Member 'UABP_KnifeSword502_PC_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_KnifeSword502_PC_C, AnimGraphNode_KawaiiPhysics) == 0x000790, "Member 'UABP_KnifeSword502_PC_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");

}

