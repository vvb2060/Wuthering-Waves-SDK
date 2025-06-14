﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Skill01_Jinxi

#include "Basic.hpp"

#include "GA_Skill01_Jinxi_classes.hpp"
#include "GA_Skill01_Jinxi_parameters.hpp"


namespace SDK
{

// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.ExecuteUbergraph_GA_Skill01_Jinxi
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Skill01_Jinxi_C::ExecuteUbergraph_GA_Skill01_Jinxi(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "ExecuteUbergraph_GA_Skill01_Jinxi");

	Params::GA_Skill01_Jinxi_C_ExecuteUbergraph_GA_Skill01_Jinxi Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Skill01_Jinxi_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "K2_OnEndAbility");

	Params::GA_Skill01_Jinxi_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Skill01_Jinxi_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnCompleted_5D118C384AE61F1C80292E81D8A0A9D8
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnCompleted_5D118C384AE61F1C80292E81D8A0A9D8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnCompleted_5D118C384AE61F1C80292E81D8A0A9D8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnBlendOut_5D118C384AE61F1C80292E81D8A0A9D8
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnBlendOut_5D118C384AE61F1C80292E81D8A0A9D8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnBlendOut_5D118C384AE61F1C80292E81D8A0A9D8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnInterrupted_5D118C384AE61F1C80292E81D8A0A9D8
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnInterrupted_5D118C384AE61F1C80292E81D8A0A9D8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnInterrupted_5D118C384AE61F1C80292E81D8A0A9D8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnCancelled_5D118C384AE61F1C80292E81D8A0A9D8
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnCancelled_5D118C384AE61F1C80292E81D8A0A9D8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnCancelled_5D118C384AE61F1C80292E81D8A0A9D8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnTick_5D118C384AE61F1C80292E81D8A0A9D8
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnTick_5D118C384AE61F1C80292E81D8A0A9D8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnTick_5D118C384AE61F1C80292E81D8A0A9D8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.EventReceived_18B59F5945020DB23C42FD8825B6A318
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Skill01_Jinxi_C::EventReceived_18B59F5945020DB23C42FD8825B6A318(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "EventReceived_18B59F5945020DB23C42FD8825B6A318");

	Params::GA_Skill01_Jinxi_C_EventReceived_18B59F5945020DB23C42FD8825B6A318 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.EventReceived_18B59F5945020DB23C42FD88C4B006DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Skill01_Jinxi_C::EventReceived_18B59F5945020DB23C42FD88C4B006DD(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "EventReceived_18B59F5945020DB23C42FD88C4B006DD");

	Params::GA_Skill01_Jinxi_C_EventReceived_18B59F5945020DB23C42FD88C4B006DD Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnCompleted_5D118C384AE61F1C80292E81D8D6CD82
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnCompleted_5D118C384AE61F1C80292E81D8D6CD82()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnCompleted_5D118C384AE61F1C80292E81D8D6CD82");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnBlendOut_5D118C384AE61F1C80292E81D8D6CD82
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnBlendOut_5D118C384AE61F1C80292E81D8D6CD82()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnBlendOut_5D118C384AE61F1C80292E81D8D6CD82");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnInterrupted_5D118C384AE61F1C80292E81D8D6CD82
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnInterrupted_5D118C384AE61F1C80292E81D8D6CD82()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnInterrupted_5D118C384AE61F1C80292E81D8D6CD82");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnCancelled_5D118C384AE61F1C80292E81D8D6CD82
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnCancelled_5D118C384AE61F1C80292E81D8D6CD82()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnCancelled_5D118C384AE61F1C80292E81D8D6CD82");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Skill01_Jinxi.GA_Skill01_Jinxi_C.OnTick_5D118C384AE61F1C80292E81D8D6CD82
// (BlueprintCallable, BlueprintEvent)

void UGA_Skill01_Jinxi_C::OnTick_5D118C384AE61F1C80292E81D8D6CD82()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Skill01_Jinxi_C", "OnTick_5D118C384AE61F1C80292E81D8D6CD82");

	UObject::ProcessEvent(Func, nullptr);
}

}

