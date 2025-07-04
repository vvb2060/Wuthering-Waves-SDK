﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GlobalBlueprintFunctionLibrary

#include "Basic.hpp"

#include "GlobalBlueprintFunctionLibrary_classes.hpp"
#include "GlobalBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function GlobalBlueprintFunctionLibrary.GlobalBlueprintFunctionLibrary_C.GetBpEventManager
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UGlobalBlueprintFunctionLibrary_C::GetBpEventManager(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GlobalBlueprintFunctionLibrary_C", "GetBpEventManager");

	Params::GlobalBlueprintFunctionLibrary_C_GetBpEventManager Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GlobalBlueprintFunctionLibrary.GlobalBlueprintFunctionLibrary_C.GetBpFightManager
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UGlobalBlueprintFunctionLibrary_C::GetBpFightManager(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GlobalBlueprintFunctionLibrary_C", "GetBpFightManager");

	Params::GlobalBlueprintFunctionLibrary_C_GetBpFightManager Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

