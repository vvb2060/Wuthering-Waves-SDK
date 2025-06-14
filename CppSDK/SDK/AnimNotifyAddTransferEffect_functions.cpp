﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyAddTransferEffect

#include "Basic.hpp"

#include "AnimNotifyAddTransferEffect_classes.hpp"
#include "AnimNotifyAddTransferEffect_parameters.hpp"


namespace SDK
{

// Function AnimNotifyAddTransferEffect.AnimNotifyAddTransferEffect_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UAnimNotifyAddTransferEffect_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyAddTransferEffect_C", "GetNotifyName");

	Params::AnimNotifyAddTransferEffect_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

