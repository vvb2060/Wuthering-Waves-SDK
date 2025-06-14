﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroAnim_structs.hpp"
#include "KuroAnim_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint.MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C
// 0x0AA0 (0x11F0 - 0x0750)
class UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C final : public UKuroAnimInstance
{
public:
	uint8                                         Pad_748[0x8];                                      // 0x0748(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0758(0x0038)()
	struct FAnimNode_ExtraFollowAnims             AnimGraphNode_ExtraFollowAnims;                    // 0x0790(0x0A50)()
	class ATsBaseCharacter_C*                     当前角色;                                          // 0x11E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void OnComponentStart();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C">();
	}
	static class UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C) == 0x0011F0, "Wrong size on UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x000750, "Member 'UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x000758, "Member 'UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C, AnimGraphNode_ExtraFollowAnims) == 0x000790, "Member 'UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C::AnimGraphNode_ExtraFollowAnims' has a wrong offset!");
static_assert(offsetof(UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C, 当前角色) == 0x0011E0, "Member 'UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C::当前角色' has a wrong offset!");

}

