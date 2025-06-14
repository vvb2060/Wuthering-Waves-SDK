﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsRecordEffect

#include "Basic.hpp"

#include "TsRecordEffect_classes.hpp"
#include "TsRecordEffect_parameters.hpp"


namespace SDK
{

// Function TsRecordEffect.TsRecordEffect_C.ExecuteUbergraph_TsRecordEffect
// (Final, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsRecordEffect_C::ExecuteUbergraph_TsRecordEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordEffect_C", "ExecuteUbergraph_TsRecordEffect");

	Params::TsRecordEffect_C_ExecuteUbergraph_TsRecordEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsRecordEffect.TsRecordEffect_C.ReceiveBeginPlay
// (Event, Public, Protected, BlueprintCallable, BlueprintEvent)

void ATsRecordEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordEffect_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsRecordEffect.TsRecordEffect_C.ReceiveTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsRecordEffect_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordEffect_C", "ReceiveTick");

	Params::TsRecordEffect_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsRecordEffect.TsRecordEffect_C.ReceiveEndPlay
// (Event, Public, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsRecordEffect_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordEffect_C", "ReceiveEndPlay");

	Params::TsRecordEffect_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsRecordEffect.TsRecordEffect_C.OnPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATsRecordEffect_C::OnPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordEffect_C", "OnPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsRecordEffect.TsRecordEffect_C.OnStop
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATsRecordEffect_C::OnStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordEffect_C", "OnStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsRecordEffect.TsRecordEffect_C.TryAddEffectView
// (Public, BlueprintCallable, BlueprintEvent)

void ATsRecordEffect_C::TryAddEffectView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordEffect_C", "TryAddEffectView");

	UObject::ProcessEvent(Func, nullptr);
}

}

