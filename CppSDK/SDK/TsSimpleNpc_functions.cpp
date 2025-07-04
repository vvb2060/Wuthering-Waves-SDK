﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsSimpleNpc

#include "Basic.hpp"

#include "TsSimpleNpc_classes.hpp"
#include "TsSimpleNpc_parameters.hpp"


namespace SDK
{

// Function TsSimpleNpc.TsSimpleNpc_C.ExecuteUbergraph_TsSimpleNpc
// (Final, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsSimpleNpc_C::ExecuteUbergraph_TsSimpleNpc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "ExecuteUbergraph_TsSimpleNpc");

	Params::TsSimpleNpc_C_ExecuteUbergraph_TsSimpleNpc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSimpleNpc.TsSimpleNpc_C.ReceiveBeginPlay
// (Event, Public, Protected, BlueprintCallable, BlueprintEvent)

void ATsSimpleNpc_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleNpc.TsSimpleNpc_C.EditorInit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATsSimpleNpc_C::EditorInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "EditorInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleNpc.TsSimpleNpc_C.EditorTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsSimpleNpc_C::EditorTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "EditorTick");

	Params::TsSimpleNpc_C_EditorTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSimpleNpc.TsSimpleNpc_C.ReceiveEndPlay
// (Event, Public, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsSimpleNpc_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "ReceiveEndPlay");

	Params::TsSimpleNpc_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSimpleNpc.TsSimpleNpc_C.LoadModel
// (Public, BlueprintCallable, BlueprintEvent)

void ATsSimpleNpc_C::LoadModel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "LoadModel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleNpc.TsSimpleNpc_C.FindFloor
// (Public, BlueprintCallable, BlueprintEvent)

void ATsSimpleNpc_C::FindFloor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "FindFloor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleNpc.TsSimpleNpc_C.SetDefaultCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ATsSimpleNpc_C::SetDefaultCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "SetDefaultCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleNpc.TsSimpleNpc_C.ResetMeshLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ATsSimpleNpc_C::ResetMeshLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "ResetMeshLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleNpc.TsSimpleNpc_C.ShowDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    text1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
// float                                   removeFrame1                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ATsSimpleNpc_C::ShowDialog(const class FString& text1, float removeFrame1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "ShowDialog");

	Params::TsSimpleNpc_C_ShowDialog Parms{};

	Parms.text1 = std::move(text1);
	Parms.removeFrame1 = removeFrame1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSimpleNpc.TsSimpleNpc_C.TryPlayMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    montagePath                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATsSimpleNpc_C::TryPlayMontage(const class FString& montagePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "TryPlayMontage");

	Params::TsSimpleNpc_C_TryPlayMontage Parms{};

	Parms.montagePath = std::move(montagePath);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TsSimpleNpc.TsSimpleNpc_C.HideDialog
// (Public, BlueprintCallable, BlueprintEvent)

void ATsSimpleNpc_C::HideDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "HideDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleNpc.TsSimpleNpc_C.StopMontage
// (Public, BlueprintCallable, BlueprintEvent)

void ATsSimpleNpc_C::StopMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "StopMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleNpc.TsSimpleNpc_C.HandleLoadedDaConfig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPD_NpcSetupData_C*               daConfig1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    isEditor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

void ATsSimpleNpc_C::HandleLoadedDaConfig(class UPD_NpcSetupData_C* daConfig1, bool isEditor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "HandleLoadedDaConfig");

	Params::TsSimpleNpc_C_HandleLoadedDaConfig Parms{};

	Parms.daConfig1 = daConfig1;
	Parms.isEditor = isEditor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSimpleNpc.TsSimpleNpc_C.DebugSetNpcDitherValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ATsSimpleNpc_C::DebugSetNpcDitherValue(float value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleNpc_C", "DebugSetNpcDitherValue");

	Params::TsSimpleNpc_C_DebugSetNpcDitherValue Parms{};

	Parms.value = value;

	UObject::ProcessEvent(Func, &Parms);
}

}

