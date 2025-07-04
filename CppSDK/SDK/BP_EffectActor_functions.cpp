﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectActor

#include "Basic.hpp"

#include "BP_EffectActor_classes.hpp"
#include "BP_EffectActor_parameters.hpp"


namespace SDK
{

// Function BP_EffectActor.BP_EffectActor_C.ExecuteUbergraph_BP_EffectActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffectActor_C::ExecuteUbergraph_BP_EffectActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "ExecuteUbergraph_BP_EffectActor");

	Params::BP_EffectActor_C_ExecuteUbergraph_BP_EffectActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EffectActor.BP_EffectActor_C.EditorDestroy
// (Event, Public, BlueprintEvent)

void ABP_EffectActor_C::EditorDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "EditorDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.OnReceiveShowSceneEffectActor
// (Event, Protected, BlueprintEvent)

void ABP_EffectActor_C::OnReceiveShowSceneEffectActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "OnReceiveShowSceneEffectActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.OnReceiveHideSceneEffectActor
// (Event, Protected, BlueprintEvent)

void ABP_EffectActor_C::OnReceiveHideSceneEffectActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "OnReceiveHideSceneEffectActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.DoHiddenInGame
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EffectActor_C::DoHiddenInGame(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "DoHiddenInGame");

	Params::BP_EffectActor_C_DoHiddenInGame Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EffectActor.BP_EffectActor_C.EditorTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffectActor_C::EditorTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "EditorTick");

	Params::BP_EffectActor_C_EditorTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EffectActor.BP_EffectActor_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffectActor_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "ReceiveEndPlay");

	Params::BP_EffectActor_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EffectActor.BP_EffectActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EffectActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.RemoveHandle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EffectActor_C::RemoveHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "RemoveHandle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.SetHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffectActor_C::SetHandle(int32 Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "SetHandle");

	Params::BP_EffectActor_C_SetHandle Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EffectActor.BP_EffectActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EffectActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EffectActor_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.CalculateLifeTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EffectActor_C::CalculateLifeTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "CalculateLifeTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.IsEditor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsEditor_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EffectActor_C::IsEditor(bool* IsEditor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "IsEditor");

	Params::BP_EffectActor_C_IsEditor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEditor_0 != nullptr)
		*IsEditor_0 = Parms.IsEditor_0;
}


// Function BP_EffectActor.BP_EffectActor_C.Stop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_EffectActor_C::Stop(const class FString& Reason, bool Immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "Stop");

	Params::BP_EffectActor_C_Stop Parms{};

	Parms.Reason = std::move(Reason);
	Parms.Immediately = Immediately;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EffectActor.BP_EffectActor_C.Play
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_EffectActor_C::Play(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "Play");

	Params::BP_EffectActor_C_Play Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EffectActor.BP_EffectActor_C.PlayEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EffectActor_C::PlayEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "PlayEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.StopEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EffectActor_C::StopEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "StopEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectActor.BP_EffectActor_C.GetHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32*                                  Handle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffectActor_C::GetHandle(int32* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectActor_C", "GetHandle");

	Params::BP_EffectActor_C_GetHandle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;
}

}

