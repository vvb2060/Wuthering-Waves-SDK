﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EffectViewComponent

#include "Basic.hpp"

#include "EffectViewComponent_classes.hpp"
#include "EffectViewComponent_parameters.hpp"


namespace SDK
{

// Function EffectViewComponent.EffectViewComponent_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffectViewComponent_C::Stop(bool immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EffectViewComponent_C", "Stop");

	Params::EffectViewComponent_C_Stop Parms{};

	Parms.immediately = immediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EffectViewComponent.EffectViewComponent_C.Play
// (Public, BlueprintCallable, BlueprintEvent)

void UEffectViewComponent_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EffectViewComponent_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EffectViewComponent.EffectViewComponent_C.SetAutoPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    autoPlay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffectViewComponent_C::SetAutoPlay(bool autoPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EffectViewComponent_C", "SetAutoPlay");

	Params::EffectViewComponent_C_SetAutoPlay Parms{};

	Parms.autoPlay = autoPlay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EffectViewComponent.EffectViewComponent_C.EditorTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   deltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffectViewComponent_C::EditorTick(float deltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EffectViewComponent_C", "EditorTick");

	Params::EffectViewComponent_C_EditorTick Parms{};

	Parms.deltaSecond = deltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}

}

