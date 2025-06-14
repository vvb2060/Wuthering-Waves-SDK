﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapLightEstimation

#include "Basic.hpp"

#include "MagicLeapLightEstimation_classes.hpp"
#include "MagicLeapLightEstimation_parameters.hpp"


namespace SDK
{

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::CreateTracker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MagicLeapLightEstimationFunctionLibrary", "CreateTracker");

	Params::MagicLeapLightEstimationFunctionLibrary_CreateTracker Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)

void UMagicLeapLightEstimationFunctionLibrary::DestroyTracker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MagicLeapLightEstimationFunctionLibrary", "DestroyTracker");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMagicLeapLightEstimationAmbientGlobalState*GlobalAmbientState                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MagicLeapLightEstimationFunctionLibrary", "GetAmbientGlobalState");

	Params::MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (GlobalAmbientState != nullptr)
		*GlobalAmbientState = std::move(Parms.GlobalAmbientState);

	return Parms.ReturnValue;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMagicLeapLightEstimationColorTemperatureState*ColorTemperatureState                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MagicLeapLightEstimationFunctionLibrary", "GetColorTemperatureState");

	Params::MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ColorTemperatureState != nullptr)
		*ColorTemperatureState = std::move(Parms.ColorTemperatureState);

	return Parms.ReturnValue;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::IsTrackerValid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MagicLeapLightEstimationFunctionLibrary", "IsTrackerValid");

	Params::MagicLeapLightEstimationFunctionLibrary_IsTrackerValid Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

