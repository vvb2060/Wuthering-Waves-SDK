﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CutSkill

#include "Basic.hpp"

#include "GA_CutSkill_classes.hpp"
#include "GA_CutSkill_parameters.hpp"


namespace SDK
{

// Function GA_CutSkill.GA_CutSkill_C.ExecuteUbergraph_GA_CutSkill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CutSkill_C::ExecuteUbergraph_GA_CutSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "ExecuteUbergraph_GA_CutSkill");

	Params::GA_CutSkill_C_ExecuteUbergraph_GA_CutSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CutSkill.GA_CutSkill_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_CutSkill_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "K2_OnEndAbility");

	Params::GA_CutSkill_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CutSkill.GA_CutSkill_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_CutSkill_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnCompleted_5D118C384AE61F1C80292E816ABAE652
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnCompleted_5D118C384AE61F1C80292E816ABAE652()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnCompleted_5D118C384AE61F1C80292E816ABAE652");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnBlendOut_5D118C384AE61F1C80292E816ABAE652
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnBlendOut_5D118C384AE61F1C80292E816ABAE652()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnBlendOut_5D118C384AE61F1C80292E816ABAE652");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnInterrupted_5D118C384AE61F1C80292E816ABAE652
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnInterrupted_5D118C384AE61F1C80292E816ABAE652()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnInterrupted_5D118C384AE61F1C80292E816ABAE652");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnCancelled_5D118C384AE61F1C80292E816ABAE652
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnCancelled_5D118C384AE61F1C80292E816ABAE652()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnCancelled_5D118C384AE61F1C80292E816ABAE652");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnTick_5D118C384AE61F1C80292E816ABAE652
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnTick_5D118C384AE61F1C80292E816ABAE652()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnTick_5D118C384AE61F1C80292E816ABAE652");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnFinish_C27893F84059C305198BAA83EA4452CF
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnFinish_C27893F84059C305198BAA83EA4452CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnFinish_C27893F84059C305198BAA83EA4452CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.EventReceived_18B59F5945020DB23C42FD88914BEF75
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CutSkill_C::EventReceived_18B59F5945020DB23C42FD88914BEF75(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "EventReceived_18B59F5945020DB23C42FD88914BEF75");

	Params::GA_CutSkill_C_EventReceived_18B59F5945020DB23C42FD88914BEF75 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CutSkill.GA_CutSkill_C.EventReceived_18B59F5945020DB23C42FD8819F2F59A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CutSkill_C::EventReceived_18B59F5945020DB23C42FD8819F2F59A(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "EventReceived_18B59F5945020DB23C42FD8819F2F59A");

	Params::GA_CutSkill_C_EventReceived_18B59F5945020DB23C42FD8819F2F59A Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CutSkill.GA_CutSkill_C.OnCompleted_5D118C384AE61F1C80292E812D9B2979
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnCompleted_5D118C384AE61F1C80292E812D9B2979()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnCompleted_5D118C384AE61F1C80292E812D9B2979");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnBlendOut_5D118C384AE61F1C80292E812D9B2979
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnBlendOut_5D118C384AE61F1C80292E812D9B2979()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnBlendOut_5D118C384AE61F1C80292E812D9B2979");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnInterrupted_5D118C384AE61F1C80292E812D9B2979
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnInterrupted_5D118C384AE61F1C80292E812D9B2979()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnInterrupted_5D118C384AE61F1C80292E812D9B2979");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnCancelled_5D118C384AE61F1C80292E812D9B2979
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnCancelled_5D118C384AE61F1C80292E812D9B2979()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnCancelled_5D118C384AE61F1C80292E812D9B2979");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnTick_5D118C384AE61F1C80292E812D9B2979
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnTick_5D118C384AE61F1C80292E812D9B2979()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnTick_5D118C384AE61F1C80292E812D9B2979");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnCompleted_5D118C384AE61F1C80292E81DD272441
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnCompleted_5D118C384AE61F1C80292E81DD272441()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnCompleted_5D118C384AE61F1C80292E81DD272441");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnBlendOut_5D118C384AE61F1C80292E81DD272441
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnBlendOut_5D118C384AE61F1C80292E81DD272441()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnBlendOut_5D118C384AE61F1C80292E81DD272441");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnInterrupted_5D118C384AE61F1C80292E81DD272441
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnInterrupted_5D118C384AE61F1C80292E81DD272441()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnInterrupted_5D118C384AE61F1C80292E81DD272441");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnCancelled_5D118C384AE61F1C80292E81DD272441
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnCancelled_5D118C384AE61F1C80292E81DD272441()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnCancelled_5D118C384AE61F1C80292E81DD272441");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnTick_5D118C384AE61F1C80292E81DD272441
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnTick_5D118C384AE61F1C80292E81DD272441()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnTick_5D118C384AE61F1C80292E81DD272441");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnCompleted_5D118C384AE61F1C80292E8154657579
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnCompleted_5D118C384AE61F1C80292E8154657579()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnCompleted_5D118C384AE61F1C80292E8154657579");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnBlendOut_5D118C384AE61F1C80292E8154657579
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnBlendOut_5D118C384AE61F1C80292E8154657579()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnBlendOut_5D118C384AE61F1C80292E8154657579");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnInterrupted_5D118C384AE61F1C80292E8154657579
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnInterrupted_5D118C384AE61F1C80292E8154657579()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnInterrupted_5D118C384AE61F1C80292E8154657579");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnCancelled_5D118C384AE61F1C80292E8154657579
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnCancelled_5D118C384AE61F1C80292E8154657579()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnCancelled_5D118C384AE61F1C80292E8154657579");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.OnTick_5D118C384AE61F1C80292E8154657579
// (BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::OnTick_5D118C384AE61F1C80292E8154657579()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "OnTick_5D118C384AE61F1C80292E8154657579");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.获取镜头变换
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransformDouble*                镜头变换                                               (Parm, OutParm, IsPlainOldData, NoDestructor)

void UGA_CutSkill_C::获取镜头变换(struct FTransformDouble* 镜头变换)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "获取镜头变换");

	Params::GA_CutSkill_C_获取镜头变换 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (镜头变换 != nullptr)
		*镜头变换 = std::move(Parms.镜头变换);
}


// Function GA_CutSkill.GA_CutSkill_C.计算当前输入向量余弦值
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGA_CutSkill_C::计算当前输入向量余弦值()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "计算当前输入向量余弦值");

	Params::GA_CutSkill_C_计算当前输入向量余弦值 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_CutSkill.GA_CutSkill_C.依据斩击方向选择匹配斩切线特效
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::依据斩击方向选择匹配斩切线特效()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "依据斩击方向选择匹配斩切线特效");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.依据斩击方向选择匹配切屏特效
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::依据斩击方向选择匹配切屏特效()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "依据斩击方向选择匹配切屏特效");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.修改默认初始方向
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::修改默认初始方向()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "修改默认初始方向");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.计算一次斩击方向
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::计算一次斩击方向()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "计算一次斩击方向");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CutSkill.GA_CutSkill_C.瞬移特效
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_CutSkill_C::瞬移特效()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CutSkill_C", "瞬移特效");

	UObject::ProcessEvent(Func, nullptr);
}

}

