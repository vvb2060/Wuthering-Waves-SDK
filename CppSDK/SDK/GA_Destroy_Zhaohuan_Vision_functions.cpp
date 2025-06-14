﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Destroy_Zhaohuan_Vision

#include "Basic.hpp"

#include "GA_Destroy_Zhaohuan_Vision_classes.hpp"
#include "GA_Destroy_Zhaohuan_Vision_parameters.hpp"


namespace SDK
{

// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.ExecuteUbergraph_GA_Destroy_Zhaohuan_Vision
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Destroy_Zhaohuan_Vision_C::ExecuteUbergraph_GA_Destroy_Zhaohuan_Vision(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "ExecuteUbergraph_GA_Destroy_Zhaohuan_Vision");

	Params::GA_Destroy_Zhaohuan_Vision_C_ExecuteUbergraph_GA_Destroy_Zhaohuan_Vision Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Destroy_Zhaohuan_Vision_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "K2_OnEndAbility");

	Params::GA_Destroy_Zhaohuan_Vision_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Destroy_Zhaohuan_Vision_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.OnCompleted_5D118C384AE61F1C80292E81FBB8B5B5
// (BlueprintCallable, BlueprintEvent)

void UGA_Destroy_Zhaohuan_Vision_C::OnCompleted_5D118C384AE61F1C80292E81FBB8B5B5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "OnCompleted_5D118C384AE61F1C80292E81FBB8B5B5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.OnBlendOut_5D118C384AE61F1C80292E81FBB8B5B5
// (BlueprintCallable, BlueprintEvent)

void UGA_Destroy_Zhaohuan_Vision_C::OnBlendOut_5D118C384AE61F1C80292E81FBB8B5B5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "OnBlendOut_5D118C384AE61F1C80292E81FBB8B5B5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.OnInterrupted_5D118C384AE61F1C80292E81FBB8B5B5
// (BlueprintCallable, BlueprintEvent)

void UGA_Destroy_Zhaohuan_Vision_C::OnInterrupted_5D118C384AE61F1C80292E81FBB8B5B5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "OnInterrupted_5D118C384AE61F1C80292E81FBB8B5B5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.OnCancelled_5D118C384AE61F1C80292E81FBB8B5B5
// (BlueprintCallable, BlueprintEvent)

void UGA_Destroy_Zhaohuan_Vision_C::OnCancelled_5D118C384AE61F1C80292E81FBB8B5B5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "OnCancelled_5D118C384AE61F1C80292E81FBB8B5B5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.OnTick_5D118C384AE61F1C80292E81FBB8B5B5
// (BlueprintCallable, BlueprintEvent)

void UGA_Destroy_Zhaohuan_Vision_C::OnTick_5D118C384AE61F1C80292E81FBB8B5B5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "OnTick_5D118C384AE61F1C80292E81FBB8B5B5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.EventReceived_18B59F5945020DB23C42FD882782F9D4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Destroy_Zhaohuan_Vision_C::EventReceived_18B59F5945020DB23C42FD882782F9D4(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "EventReceived_18B59F5945020DB23C42FD882782F9D4");

	Params::GA_Destroy_Zhaohuan_Vision_C_EventReceived_18B59F5945020DB23C42FD882782F9D4 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.初始化参数
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Destroy_Zhaohuan_Vision_C::初始化参数()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "初始化参数");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.获取幻象数据
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATsBaseCharacter_C*               entity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   是否找到                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSVisionData*                    输出行                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void UGA_Destroy_Zhaohuan_Vision_C::获取幻象数据(class ATsBaseCharacter_C* entity, bool* 是否找到, struct FSVisionData* 输出行)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "获取幻象数据");

	Params::GA_Destroy_Zhaohuan_Vision_C_获取幻象数据 Parms{};

	Parms.entity = entity;

	UObject::ProcessEvent(Func, &Parms);

	if (是否找到 != nullptr)
		*是否找到 = Parms.是否找到;

	if (输出行 != nullptr)
		*输出行 = std::move(Parms.输出行);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.结束召唤状态
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Destroy_Zhaohuan_Vision_C::结束召唤状态()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "结束召唤状态");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C.清理伴生物
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Destroy_Zhaohuan_Vision_C::清理伴生物()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Destroy_Zhaohuan_Vision_C", "清理伴生物");

	UObject::ProcessEvent(Func, nullptr);
}

}

