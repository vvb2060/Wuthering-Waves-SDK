﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_ControllerBase

#include "Basic.hpp"

#include "SE_ControllerBase_classes.hpp"
#include "SE_ControllerBase_parameters.hpp"


namespace SDK
{

// Function SE_ControllerBase.SE_ControllerBase_C.ExecuteUbergraph_SE_ControllerBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_ControllerBase_C::ExecuteUbergraph_SE_ControllerBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_ControllerBase_C", "ExecuteUbergraph_SE_ControllerBase");

	Params::SE_ControllerBase_C_ExecuteUbergraph_SE_ControllerBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_ControllerBase.SE_ControllerBase_C.ApplyEnvironmentFactor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   EnvironmentFactor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_ControllerBase_C::ApplyEnvironmentFactor(float EnvironmentFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_ControllerBase_C", "ApplyEnvironmentFactor");

	Params::SE_ControllerBase_C_ApplyEnvironmentFactor Parms{};

	Parms.EnvironmentFactor = EnvironmentFactor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_ControllerBase.SE_ControllerBase_C.ApplyAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_ControllerBase_C::ApplyAlpha(float alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_ControllerBase_C", "ApplyAlpha");

	Params::SE_ControllerBase_C_ApplyAlpha Parms{};

	Parms.alpha = alpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_ControllerBase.SE_ControllerBase_C.Loop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_ControllerBase_C::Loop(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_ControllerBase_C", "Loop");

	Params::SE_ControllerBase_C_Loop Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_ControllerBase.SE_ControllerBase_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_ControllerBase_C::Start(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_ControllerBase_C", "Start");

	Params::SE_ControllerBase_C_Start Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_ControllerBase.SE_ControllerBase_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_ControllerBase_C::End(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_ControllerBase_C", "End");

	Params::SE_ControllerBase_C_End Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_ControllerBase.SE_ControllerBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_ControllerBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_ControllerBase_C", "ReceiveTick");

	Params::SE_ControllerBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_ControllerBase.SE_ControllerBase_C.BeforeStart
// (Public, BlueprintCallable, BlueprintEvent)

void USE_ControllerBase_C::BeforeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_ControllerBase_C", "BeforeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SE_ControllerBase.SE_ControllerBase_C.ApplyVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USE_ControllerBase_C::ApplyVisibility(bool visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_ControllerBase_C", "ApplyVisibility");

	Params::SE_ControllerBase_C_ApplyVisibility Parms{};

	Parms.visibility = visibility;

	UObject::ProcessEvent(Func, &Parms);
}

}

