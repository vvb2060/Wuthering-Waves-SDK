﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Seq_Dajijiguan02_Init

#include "Basic.hpp"

#include "Seq_Dajijiguan02_Init_classes.hpp"
#include "Seq_Dajijiguan02_Init_parameters.hpp"


namespace SDK
{

// Function Seq_Dajijiguan02_Init.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Seq_Dajijiguan02_Init::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Seq_Dajijiguan02_Init.SequenceDirector_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void Seq_Dajijiguan02_Init::USequenceDirector_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Seq_Dajijiguan02_Init.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)

void Seq_Dajijiguan02_Init::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

