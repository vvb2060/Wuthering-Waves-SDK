﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_classes.hpp"
#include "MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint.MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C.ExecuteUbergraph_MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C::ExecuteUbergraph_MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint");

	Params::MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C_ExecuteUbergraph_MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint.MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint.MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C.OnComponentStart
// (Event, Public, BlueprintEvent)

void UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C::OnComponentStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C", "OnComponentStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint.MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UMB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::MB1ZhenwuguanzheMd601_Weapon1_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

