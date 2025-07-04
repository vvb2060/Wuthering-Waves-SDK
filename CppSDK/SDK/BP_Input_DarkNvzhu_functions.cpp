﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Input_DarkNvzhu

#include "Basic.hpp"

#include "BP_Input_DarkNvzhu_classes.hpp"
#include "BP_Input_DarkNvzhu_parameters.hpp"


namespace SDK
{

// Function BP_Input_DarkNvzhu.BP_Input_DarkNvzhu_C.攻击按下
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_Input_DarkNvzhu_C::攻击按下(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Input_DarkNvzhu_C", "攻击按下");

	Params::BP_Input_DarkNvzhu_C_攻击按下 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Input_DarkNvzhu.BP_Input_DarkNvzhu_C.攻击长按
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_Input_DarkNvzhu_C::攻击长按(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Input_DarkNvzhu_C", "攻击长按");

	Params::BP_Input_DarkNvzhu_C_攻击长按 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Input_DarkNvzhu.BP_Input_DarkNvzhu_C.技能1按下
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_Input_DarkNvzhu_C::技能1按下(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Input_DarkNvzhu_C", "技能1按下");

	Params::BP_Input_DarkNvzhu_C_技能1按下 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Input_DarkNvzhu.BP_Input_DarkNvzhu_C.大招按下
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_Input_DarkNvzhu_C::大招按下(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Input_DarkNvzhu_C", "大招按下");

	Params::BP_Input_DarkNvzhu_C_大招按下 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

