﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Input_ME1Floater_Shooter_NM013

#include "Basic.hpp"

#include "BP_Input_ME1Floater_Shooter_NM013_classes.hpp"
#include "BP_Input_ME1Floater_Shooter_NM013_parameters.hpp"


namespace SDK
{

// Function BP_Input_ME1Floater_Shooter_NM013.BP_Input_ME1Floater_Shooter_NM013_C.攻击长按
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_Input_ME1Floater_Shooter_NM013_C::攻击长按(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Input_ME1Floater_Shooter_NM013_C", "攻击长按");

	Params::BP_Input_ME1Floater_Shooter_NM013_C_攻击长按 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Input_ME1Floater_Shooter_NM013.BP_Input_ME1Floater_Shooter_NM013_C.攻击按下
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_Input_ME1Floater_Shooter_NM013_C::攻击按下(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Input_ME1Floater_Shooter_NM013_C", "攻击按下");

	Params::BP_Input_ME1Floater_Shooter_NM013_C_攻击按下 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

