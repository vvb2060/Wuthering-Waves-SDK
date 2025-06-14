﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NinjaLiveComponent

#include "Basic.hpp"

#include "NinjaLiveComponent_classes.hpp"
#include "NinjaLiveComponent_parameters.hpp"


namespace SDK
{

// Function NinjaLiveComponent.NinjaLiveComponent_C.PrepareBaseInfomation
// (Public, BlueprintCallable, BlueprintEvent)

void UNinjaLiveComponent_C::PrepareBaseInfomation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "PrepareBaseInfomation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.从表格读取覆盖贴图
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNinjaLiveComponent_C::从表格读取覆盖贴图()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "从表格读取覆盖贴图");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.LiveFluidParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BrushSize_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNinjaLiveComponent_C::LiveFluidParams(float BrushSize_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "LiveFluidParams");

	Params::NinjaLiveComponent_C_LiveFluidParams Parms{};

	Parms.BrushSize_0 = BrushSize_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.LiveActivation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ParamName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeTimeOfBrush                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeTimeOfCanvas                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNinjaLiveComponent_C::LiveActivation(class FName ParamName, float FadeTimeOfBrush, float FadeTimeOfCanvas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "LiveActivation");

	Params::NinjaLiveComponent_C_LiveActivation Parms{};

	Parms.ParamName = ParamName;
	Parms.FadeTimeOfBrush = FadeTimeOfBrush;
	Parms.FadeTimeOfCanvas = FadeTimeOfCanvas;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.RePlay
// (BlueprintCallable, BlueprintEvent)

void UNinjaLiveComponent_C::RePlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "RePlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNinjaLiveComponent_C::ReceiveTick(float DeltaSeconds_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "ReceiveTick");

	Params::NinjaLiveComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds_0 = DeltaSeconds_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.Shutdown
// (BlueprintCallable, BlueprintEvent)

void UNinjaLiveComponent_C::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "Shutdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.SelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    SelectedMenuItem                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    SelectedActorName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNinjaLiveComponent_C::SelChanged(const class FString& SelectedMenuItem, const class FString& SelectedActorName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "SelChanged");

	Params::NinjaLiveComponent_C_SelChanged Parms{};

	Parms.SelectedMenuItem = std::move(SelectedMenuItem);
	Parms.SelectedActorName = std::move(SelectedActorName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.PresetSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    SelectedPreset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ForceAutoLoadPreset_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNinjaLiveComponent_C::PresetSelectionChanged(const class FString& SelectedPreset, bool ForceAutoLoadPreset_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "PresetSelectionChanged");

	Params::NinjaLiveComponent_C_PresetSelectionChanged Parms{};

	Parms.SelectedPreset = std::move(SelectedPreset);
	Parms.ForceAutoLoadPreset_0 = ForceAutoLoadPreset_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.PresetSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    SelectedProject                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    SelectedPreset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OverWriteOrNot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNinjaLiveComponent_C::PresetSave(const class FString& SelectedProject, const class FString& SelectedPreset, bool OverWriteOrNot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "PresetSave");

	Params::NinjaLiveComponent_C_PresetSave Parms{};

	Parms.SelectedProject = std::move(SelectedProject);
	Parms.SelectedPreset = std::move(SelectedPreset);
	Parms.OverWriteOrNot = OverWriteOrNot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UNinjaLiveComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentRePlayEvent2
// (BlueprintCallable, BlueprintEvent)

void UNinjaLiveComponent_C::ComponentRePlayEvent2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "ComponentRePlayEvent2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLiveComponent.NinjaLiveComponent_C.ExecuteUbergraph_NinjaLiveComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNinjaLiveComponent_C::ExecuteUbergraph_NinjaLiveComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveComponent_C", "ExecuteUbergraph_NinjaLiveComponent");

	Params::NinjaLiveComponent_C_ExecuteUbergraph_NinjaLiveComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

