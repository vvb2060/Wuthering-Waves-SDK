﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractionMaterialController

#include "Basic.hpp"

#include "BP_InteractionMaterialController_classes.hpp"
#include "BP_InteractionMaterialController_parameters.hpp"


namespace SDK
{

// Function BP_InteractionMaterialController.BP_InteractionMaterialController_C.ExecuteUbergraph_BP_InteractionMaterialController
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractionMaterialController_C::ExecuteUbergraph_BP_InteractionMaterialController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionMaterialController_C", "ExecuteUbergraph_BP_InteractionMaterialController");

	Params::BP_InteractionMaterialController_C_ExecuteUbergraph_BP_InteractionMaterialController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionMaterialController.BP_InteractionMaterialController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InteractionMaterialController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionMaterialController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionMaterialController.BP_InteractionMaterialController_C.Test
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_InteractionMaterialController_C::Test()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionMaterialController_C", "Test");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionMaterialController.BP_InteractionMaterialController_C.ForEach
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_InteractionMaterialController_C::ForEach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionMaterialController_C", "ForEach");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionMaterialController.BP_InteractionMaterialController_C.ChangeScalarParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   FloatParameter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    FloatParameterName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_InteractionMaterialController_C::ChangeScalarParameter(float FloatParameter, const class FString& FloatParameterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionMaterialController_C", "ChangeScalarParameter");

	Params::BP_InteractionMaterialController_C_ChangeScalarParameter Parms{};

	Parms.FloatParameter = FloatParameter;
	Parms.FloatParameterName = std::move(FloatParameterName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionMaterialController.BP_InteractionMaterialController_C.ChangeVectorParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              VectorParameter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    VectorParameterName                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_InteractionMaterialController_C::ChangeVectorParameter(const struct FLinearColor& VectorParameter, const class FString& VectorParameterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionMaterialController_C", "ChangeVectorParameter");

	Params::BP_InteractionMaterialController_C_ChangeVectorParameter Parms{};

	Parms.VectorParameter = std::move(VectorParameter);
	Parms.VectorParameterName = std::move(VectorParameterName);

	UObject::ProcessEvent(Func, &Parms);
}

}

