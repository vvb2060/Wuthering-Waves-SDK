﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_EFuludelisiDajianMd10011

#include "Basic.hpp"

#include "ABP_EFuludelisiDajianMd10011_classes.hpp"
#include "ABP_EFuludelisiDajianMd10011_parameters.hpp"


namespace SDK
{

// Function ABP_EFuludelisiDajianMd10011.ABP_EFuludelisiDajianMd10011_C.ExecuteUbergraph_ABP_EFuludelisiDajianMd10011
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EFuludelisiDajianMd10011_C::ExecuteUbergraph_ABP_EFuludelisiDajianMd10011(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EFuludelisiDajianMd10011_C", "ExecuteUbergraph_ABP_EFuludelisiDajianMd10011");

	Params::ABP_EFuludelisiDajianMd10011_C_ExecuteUbergraph_ABP_EFuludelisiDajianMd10011 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_EFuludelisiDajianMd10011.ABP_EFuludelisiDajianMd10011_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EFuludelisiDajianMd10011_AnimGraphNode_Feedback_88BC8C7048D1A599A53B89B41DDF8B6D
// (BlueprintEvent)

void UABP_EFuludelisiDajianMd10011_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EFuludelisiDajianMd10011_AnimGraphNode_Feedback_88BC8C7048D1A599A53B89B41DDF8B6D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EFuludelisiDajianMd10011_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EFuludelisiDajianMd10011_AnimGraphNode_Feedback_88BC8C7048D1A599A53B89B41DDF8B6D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EFuludelisiDajianMd10011.ABP_EFuludelisiDajianMd10011_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EFuludelisiDajianMd10011_AnimGraphNode_BoneRotateToLocation_997366FA4794D4E31A7BC4B0C18A3DE4
// (BlueprintEvent)

void UABP_EFuludelisiDajianMd10011_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EFuludelisiDajianMd10011_AnimGraphNode_BoneRotateToLocation_997366FA4794D4E31A7BC4B0C18A3DE4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EFuludelisiDajianMd10011_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EFuludelisiDajianMd10011_AnimGraphNode_BoneRotateToLocation_997366FA4794D4E31A7BC4B0C18A3DE4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EFuludelisiDajianMd10011.ABP_EFuludelisiDajianMd10011_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       Param_AnimGraph_0                                      (Parm, OutParm, NoDestructor)

void UABP_EFuludelisiDajianMd10011_C::AnimGraph(struct FPoseLink* Param_AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EFuludelisiDajianMd10011_C", "AnimGraph");

	Params::ABP_EFuludelisiDajianMd10011_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph_0 != nullptr)
		*Param_AnimGraph_0 = std::move(Parms.Param_AnimGraph_0);
}


// Function ABP_EFuludelisiDajianMd10011.ABP_EFuludelisiDajianMd10011_C.IKAndFk_Clone
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       IKAndFk_Clone_0                                        (Parm, OutParm, NoDestructor)

void UABP_EFuludelisiDajianMd10011_C::IKAndFk_Clone(const struct FPoseLink& InPose, struct FPoseLink* IKAndFk_Clone_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EFuludelisiDajianMd10011_C", "IKAndFk_Clone");

	Params::ABP_EFuludelisiDajianMd10011_C_IKAndFk_Clone Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (IKAndFk_Clone_0 != nullptr)
		*IKAndFk_Clone_0 = std::move(Parms.IKAndFk_Clone_0);
}

}

