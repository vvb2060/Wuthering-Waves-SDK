﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Skill02_Jinxi

#include "Basic.hpp"

#include "GA_Skill02_Jinxi_classes.hpp"
#include "GA_Skill02_Jinxi_parameters.hpp"


namespace SDK
{

// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.ExecuteUbergraph_GA_Skill02_Jinxi
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Skill02_Jinxi_C::ExecuteUbergraph_GA_Skill02_Jinxi(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "ExecuteUbergraph_GA_Skill02_Jinxi");

	Params::GA_Skill02_Jinxi_C_ExecuteUbergraph_GA_Skill02_Jinxi Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Skill02_Jinxi_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "K2_OnEndAbility");

	Params::GA_Skill02_Jinxi_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Skill02_Jinxi_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnCompleted_5D118C384AE61F1C80292E81F5996D51
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnCompleted_5D118C384AE61F1C80292E81F5996D51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnCompleted_5D118C384AE61F1C80292E81F5996D51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnBlendOut_5D118C384AE61F1C80292E81F5996D51
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnBlendOut_5D118C384AE61F1C80292E81F5996D51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnBlendOut_5D118C384AE61F1C80292E81F5996D51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnInterrupted_5D118C384AE61F1C80292E81F5996D51
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnInterrupted_5D118C384AE61F1C80292E81F5996D51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnInterrupted_5D118C384AE61F1C80292E81F5996D51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnCancelled_5D118C384AE61F1C80292E81F5996D51
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnCancelled_5D118C384AE61F1C80292E81F5996D51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnCancelled_5D118C384AE61F1C80292E81F5996D51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnTick_5D118C384AE61F1C80292E81F5996D51
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnTick_5D118C384AE61F1C80292E81F5996D51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnTick_5D118C384AE61F1C80292E81F5996D51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.EventReceived_18B59F5945020DB23C42FD8838024515
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Skill02_Jinxi_C::EventReceived_18B59F5945020DB23C42FD8838024515(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "EventReceived_18B59F5945020DB23C42FD8838024515");

	Params::GA_Skill02_Jinxi_C_EventReceived_18B59F5945020DB23C42FD8838024515 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.EventReceived_18B59F5945020DB23C42FD8864D9312B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Skill02_Jinxi_C::EventReceived_18B59F5945020DB23C42FD8864D9312B(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "EventReceived_18B59F5945020DB23C42FD8864D9312B");

	Params::GA_Skill02_Jinxi_C_EventReceived_18B59F5945020DB23C42FD8864D9312B Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnCompleted_5D118C384AE61F1C80292E81849B761B
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnCompleted_5D118C384AE61F1C80292E81849B761B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnCompleted_5D118C384AE61F1C80292E81849B761B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnBlendOut_5D118C384AE61F1C80292E81849B761B
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnBlendOut_5D118C384AE61F1C80292E81849B761B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnBlendOut_5D118C384AE61F1C80292E81849B761B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnInterrupted_5D118C384AE61F1C80292E81849B761B
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnInterrupted_5D118C384AE61F1C80292E81849B761B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnInterrupted_5D118C384AE61F1C80292E81849B761B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnCancelled_5D118C384AE61F1C80292E81849B761B
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnCancelled_5D118C384AE61F1C80292E81849B761B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnCancelled_5D118C384AE61F1C80292E81849B761B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill02_Jinxi.GA_Skill02_Jinxi_C.OnTick_5D118C384AE61F1C80292E81849B761B
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill02_Jinxi_C::OnTick_5D118C384AE61F1C80292E81849B761B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill02_Jinxi_C", "OnTick_5D118C384AE61F1C80292E81849B761B");

	UObject::ProcessEvent(Func, nullptr);
}

}

