﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsControlBlueprintFunctionLibrary

#include "Basic.hpp"

#include "TsControlBlueprintFunctionLibrary_classes.hpp"
#include "TsControlBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.GetMoveVectorCache
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UTsControlBlueprintFunctionLibrary_C::GetMoveVectorCache(int32 entityId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "GetMoveVectorCache");

	Params::TsControlBlueprintFunctionLibrary_C_GetMoveVectorCache Parms{};

	Parms.entityId = entityId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.GetMoveDirectionCache
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UTsControlBlueprintFunctionLibrary_C::GetMoveDirectionCache(int32 entityId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "GetMoveDirectionCache");

	Params::TsControlBlueprintFunctionLibrary_C_GetMoveDirectionCache Parms{};

	Parms.entityId = entityId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.GetWorldMoveDirectionCache
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UTsControlBlueprintFunctionLibrary_C::GetWorldMoveDirectionCache(int32 entityId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "GetWorldMoveDirectionCache");

	Params::TsControlBlueprintFunctionLibrary_C_GetWorldMoveDirectionCache Parms{};

	Parms.entityId = entityId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.GetMoveVector
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UTsControlBlueprintFunctionLibrary_C::GetMoveVector(int32 entityId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "GetMoveVector");

	Params::TsControlBlueprintFunctionLibrary_C_GetMoveVector Parms{};

	Parms.entityId = entityId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.GetMoveDirection
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UTsControlBlueprintFunctionLibrary_C::GetMoveDirection(int32 entityId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "GetMoveDirection");

	Params::TsControlBlueprintFunctionLibrary_C_GetMoveDirection Parms{};

	Parms.entityId = entityId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.PlayKuroForceFeedback
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKuroForceFeedbackEffect*         forceFeedbackEffect                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLooping                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIgnoreTimeDilation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bPlayWhilePaused                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsControlBlueprintFunctionLibrary_C::PlayKuroForceFeedback(class UKuroForceFeedbackEffect* forceFeedbackEffect, class FName tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "PlayKuroForceFeedback");

	Params::TsControlBlueprintFunctionLibrary_C_PlayKuroForceFeedback Parms{};

	Parms.forceFeedbackEffect = forceFeedbackEffect;
	Parms.tag = tag;
	Parms.bLooping = bLooping;
	Parms.bIgnoreTimeDilation = bIgnoreTimeDilation;
	Parms.bPlayWhilePaused = bPlayWhilePaused;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.StopKuroForceFeedback
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKuroForceFeedbackEffect*         forceFeedbackEffect1                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             tag1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsControlBlueprintFunctionLibrary_C::StopKuroForceFeedback(class UKuroForceFeedbackEffect* forceFeedbackEffect1, class FName tag1, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "StopKuroForceFeedback");

	Params::TsControlBlueprintFunctionLibrary_C_StopKuroForceFeedback Parms{};

	Parms.forceFeedbackEffect1 = forceFeedbackEffect1;
	Parms.tag1 = tag1;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.BpInputReceiveEndPlay
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsControlBlueprintFunctionLibrary_C::BpInputReceiveEndPlay(int32 entityId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "BpInputReceiveEndPlay");

	Params::TsControlBlueprintFunctionLibrary_C_BpInputReceiveEndPlay Parms{};

	Parms.entityId = entityId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.SetUseControllerRotationPitch
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsControlBlueprintFunctionLibrary_C::SetUseControllerRotationPitch(int32 entityId, bool value, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "SetUseControllerRotationPitch");

	Params::TsControlBlueprintFunctionLibrary_C_SetUseControllerRotationPitch Parms{};

	Parms.entityId = entityId;
	Parms.value = value;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.SetUseControllerRotationYaw
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsControlBlueprintFunctionLibrary_C::SetUseControllerRotationYaw(int32 entityId, bool value, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "SetUseControllerRotationYaw");

	Params::TsControlBlueprintFunctionLibrary_C_SetUseControllerRotationYaw Parms{};

	Parms.entityId = entityId;
	Parms.value = value;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.SetUseControllerRotationRoll
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsControlBlueprintFunctionLibrary_C::SetUseControllerRotationRoll(int32 entityId, bool value, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "SetUseControllerRotationRoll");

	Params::TsControlBlueprintFunctionLibrary_C_SetUseControllerRotationRoll Parms{};

	Parms.entityId = entityId;
	Parms.value = value;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsControlBlueprintFunctionLibrary.TsControlBlueprintFunctionLibrary_C.SetBpInputComponent
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputBase_C*                  bpInputComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsControlBlueprintFunctionLibrary_C::SetBpInputComponent(int32 entityId, class UBP_InputBase_C* bpInputComp, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TsControlBlueprintFunctionLibrary_C", "SetBpInputComponent");

	Params::TsControlBlueprintFunctionLibrary_C_SetBpInputComponent Parms{};

	Parms.entityId = entityId;
	Parms.bpInputComp = bpInputComp;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

