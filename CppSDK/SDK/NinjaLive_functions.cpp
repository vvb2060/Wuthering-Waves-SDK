﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NinjaLive

#include "Basic.hpp"

#include "NinjaLive_classes.hpp"
#include "NinjaLive_parameters.hpp"


namespace SDK
{

// Function NinjaLive.NinjaLive_C.ResetTempArrays
// (Public, BlueprintCallable, BlueprintEvent)

void ANinjaLive_C::ResetTempArrays()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "ResetTempArrays");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLive.NinjaLive_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANinjaLive_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLive.NinjaLive_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// ETouchIndex                             FingerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_C::InpTchEvt_Released(ETouchIndex FingerIndex, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "InpTchEvt_Released");

	Params::NinjaLive_C_InpTchEvt_Released Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// ETouchIndex                             FingerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_C::InpTchEvt_Pressed(ETouchIndex FingerIndex, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "InpTchEvt_Pressed");

	Params::NinjaLive_C_InpTchEvt_Pressed Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ANinjaLive_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	Params::NinjaLive_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ANinjaLive_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0");

	Params::NinjaLive_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.LiveActivation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ParamName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeTimeOfBrush                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeTimeOfCanvas                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_C::LiveActivation(class FName ParamName, float FadeTimeOfBrush, float FadeTimeOfCanvas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "LiveActivation");

	Params::NinjaLive_C_LiveActivation Parms{};

	Parms.ParamName = ParamName;
	Parms.FadeTimeOfBrush = FadeTimeOfBrush;
	Parms.FadeTimeOfCanvas = FadeTimeOfCanvas;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.LiveFluidParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BrushSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_C::LiveFluidParams(float BrushSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "LiveFluidParams");

	Params::NinjaLive_C_LiveFluidParams Parms{};

	Parms.BrushSize = BrushSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_C::ReceiveTick(float DeltaSeconds_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "ReceiveTick");

	Params::NinjaLive_C_ReceiveTick Parms{};

	Parms.DeltaSeconds_0 = DeltaSeconds_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANinjaLive_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLive.NinjaLive_C.RePlay
// (BlueprintCallable, BlueprintEvent)

void ANinjaLive_C::RePlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "RePlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLive.NinjaLive_C.BeforeCookForPC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANinjaLive_C::BeforeCookForPC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "BeforeCookForPC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLive.NinjaLive_C.BeforeCookForMobile
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANinjaLive_C::BeforeCookForMobile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "BeforeCookForMobile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLive.NinjaLive_C.BeginOverlapComponent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ANinjaLive_C::BeginOverlapComponent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "BeginOverlapComponent");

	Params::NinjaLive_C_BeginOverlapComponent Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.EndOverlapComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_C::EndOverlapComponent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "EndOverlapComponent");

	Params::NinjaLive_C_EndOverlapComponent Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "ReceiveActorEndOverlap");

	Params::NinjaLive_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "ReceiveActorBeginOverlap");

	Params::NinjaLive_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive.NinjaLive_C.ExecuteUbergraph_NinjaLive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_C::ExecuteUbergraph_NinjaLive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_C", "ExecuteUbergraph_NinjaLive");

	Params::NinjaLive_C_ExecuteUbergraph_NinjaLive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

