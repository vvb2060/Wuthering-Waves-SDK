﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ME1QunJingMd00001

#include "Basic.hpp"

#include "BP_ME1QunJingMd00001_classes.hpp"
#include "BP_ME1QunJingMd00001_parameters.hpp"


namespace SDK
{

// Function BP_ME1QunJingMd00001.BP_ME1QunJingMd00001_C.ExecuteUbergraph_BP_ME1QunJingMd00001
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ME1QunJingMd00001_C::ExecuteUbergraph_BP_ME1QunJingMd00001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ME1QunJingMd00001_C", "ExecuteUbergraph_BP_ME1QunJingMd00001");

	Params::BP_ME1QunJingMd00001_C_ExecuteUbergraph_BP_ME1QunJingMd00001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ME1QunJingMd00001.BP_ME1QunJingMd00001_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ME1QunJingMd00001_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ME1QunJingMd00001_C", "ReceiveTick");

	Params::BP_ME1QunJingMd00001_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ME1QunJingMd00001.BP_ME1QunJingMd00001_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ME1QunJingMd00001_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ME1QunJingMd00001_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

