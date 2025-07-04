﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Skill01

#include "Basic.hpp"

#include "GA_Skill01_classes.hpp"
#include "GA_Skill01_parameters.hpp"


namespace SDK
{

// Function GA_Skill01.GA_Skill01_C.ExecuteUbergraph_GA_Skill01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Skill01_C::ExecuteUbergraph_GA_Skill01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_C", "ExecuteUbergraph_GA_Skill01");

	Params::GA_Skill01_C_ExecuteUbergraph_GA_Skill01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill01.GA_Skill01_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Skill01_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01.GA_Skill01_C.EventReceived_78C11FDC4E31F4AA834B36AA5270976D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Skill01_C::EventReceived_78C11FDC4E31F4AA834B36AA5270976D(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_C", "EventReceived_78C11FDC4E31F4AA834B36AA5270976D");

	Params::GA_Skill01_C_EventReceived_78C11FDC4E31F4AA834B36AA5270976D Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill01.GA_Skill01_C.OnCompleted_5D118C384AE61F1C80292E815E3B69F0
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_C::OnCompleted_5D118C384AE61F1C80292E815E3B69F0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_C", "OnCompleted_5D118C384AE61F1C80292E815E3B69F0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01.GA_Skill01_C.OnBlendOut_5D118C384AE61F1C80292E815E3B69F0
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_C::OnBlendOut_5D118C384AE61F1C80292E815E3B69F0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_C", "OnBlendOut_5D118C384AE61F1C80292E815E3B69F0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01.GA_Skill01_C.OnInterrupted_5D118C384AE61F1C80292E815E3B69F0
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_C::OnInterrupted_5D118C384AE61F1C80292E815E3B69F0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_C", "OnInterrupted_5D118C384AE61F1C80292E815E3B69F0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01.GA_Skill01_C.OnCancelled_5D118C384AE61F1C80292E815E3B69F0
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_C::OnCancelled_5D118C384AE61F1C80292E815E3B69F0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_C", "OnCancelled_5D118C384AE61F1C80292E815E3B69F0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01.GA_Skill01_C.OnTick_5D118C384AE61F1C80292E815E3B69F0
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_C::OnTick_5D118C384AE61F1C80292E815E3B69F0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_C", "OnTick_5D118C384AE61F1C80292E815E3B69F0");

	UObject::ProcessEvent(Func, nullptr);
}

}

