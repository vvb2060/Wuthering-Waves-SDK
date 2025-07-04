﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T4MRuntime

#include "Basic.hpp"

#include "T4MRuntime_classes.hpp"
#include "T4MRuntime_parameters.hpp"


namespace SDK
{

// Function T4MRuntime.T4MLandscapeComponent.GenerateLandscapeLayerParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bMarkRenderStateDirty                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UT4MLandscapeComponent::GenerateLandscapeLayerParams(bool bMarkRenderStateDirty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T4MLandscapeComponent", "GenerateLandscapeLayerParams");

	Params::T4MLandscapeComponent_GenerateLandscapeLayerParams Parms{};

	Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

