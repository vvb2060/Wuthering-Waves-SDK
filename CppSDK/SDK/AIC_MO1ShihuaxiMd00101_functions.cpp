﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1ShihuaxiMd00101

#include "Basic.hpp"

#include "AIC_MO1ShihuaxiMd00101_classes.hpp"
#include "AIC_MO1ShihuaxiMd00101_parameters.hpp"


namespace SDK
{

// Function AIC_MO1ShihuaxiMd00101.AIC_MO1ShihuaxiMd00101_C.OnStart
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_MO1ShihuaxiMd00101_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1ShihuaxiMd00101_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_MO1ShihuaxiMd00101.AIC_MO1ShihuaxiMd00101_C.ExecuteUbergraph_AIC_MO1ShihuaxiMd00101
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_MO1ShihuaxiMd00101_C::ExecuteUbergraph_AIC_MO1ShihuaxiMd00101(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1ShihuaxiMd00101_C", "ExecuteUbergraph_AIC_MO1ShihuaxiMd00101");

	Params::AIC_MO1ShihuaxiMd00101_C_ExecuteUbergraph_AIC_MO1ShihuaxiMd00101 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

