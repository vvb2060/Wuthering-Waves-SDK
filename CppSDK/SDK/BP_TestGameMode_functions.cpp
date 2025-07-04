﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TestGameMode

#include "Basic.hpp"

#include "BP_TestGameMode_classes.hpp"
#include "BP_TestGameMode_parameters.hpp"


namespace SDK
{

// Function BP_TestGameMode.BP_TestGameMode_C.GetServerIpAndPort
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                          ServerIp                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString*                          ApiServerPort                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString*                          LoginServerPort                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_TestGameMode_C::GetServerIpAndPort(class FString* ServerIp, class FString* ApiServerPort, class FString* LoginServerPort)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "GetServerIpAndPort");

	Params::BP_TestGameMode_C_GetServerIpAndPort Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ServerIp != nullptr)
		*ServerIp = std::move(Parms.ServerIp);

	if (ApiServerPort != nullptr)
		*ApiServerPort = std::move(Parms.ApiServerPort);

	if (LoginServerPort != nullptr)
		*LoginServerPort = std::move(Parms.LoginServerPort);
}


// Function BP_TestGameMode.BP_TestGameMode_C.DelayStreamingSource
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TestGameMode_C::DelayStreamingSource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "DelayStreamingSource");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TestGameMode.BP_TestGameMode_C.StreamingCompleted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TestGameMode_C::StreamingCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "StreamingCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TestGameMode.BP_TestGameMode_C.Get Player Starts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class APlayerStart*>*            PlayerStarts_0                                         (Parm, OutParm)

void ABP_TestGameMode_C::Get_Player_Starts(bool* Exist, TArray<class APlayerStart*>* PlayerStarts_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "Get Player Starts");

	Params::BP_TestGameMode_C_Get_Player_Starts Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

	if (PlayerStarts_0 != nullptr)
		*PlayerStarts_0 = std::move(Parms.PlayerStarts_0);
}


// Function BP_TestGameMode.BP_TestGameMode_C.CheckStreamingHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TestGameMode_C::CheckStreamingHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "CheckStreamingHandler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TestGameMode.BP_TestGameMode_C.Check
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TestGameMode_C::Check()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "Check");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TestGameMode.BP_TestGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TestGameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TestGameMode.BP_TestGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TestGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "ReceiveTick");

	Params::BP_TestGameMode_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TestGameMode.BP_TestGameMode_C.LoginServerStatusResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bConnectedSuccessfully                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   HttpResponseCode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_TestGameMode_C::LoginServerStatusResponse(bool bConnectedSuccessfully, int32 HttpResponseCode, const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "LoginServerStatusResponse");

	Params::BP_TestGameMode_C_LoginServerStatusResponse Parms{};

	Parms.bConnectedSuccessfully = bConnectedSuccessfully;
	Parms.HttpResponseCode = HttpResponseCode;
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TestGameMode.BP_TestGameMode_C.ApiServereStatusResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bConnectedSuccessfully                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   HttpResponseCode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_TestGameMode_C::ApiServereStatusResponse(bool bConnectedSuccessfully, int32 HttpResponseCode, const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "ApiServereStatusResponse");

	Params::BP_TestGameMode_C_ApiServereStatusResponse Parms{};

	Parms.bConnectedSuccessfully = bConnectedSuccessfully;
	Parms.HttpResponseCode = HttpResponseCode;
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TestGameMode.BP_TestGameMode_C.ExecuteUbergraph_BP_TestGameMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TestGameMode_C::ExecuteUbergraph_BP_TestGameMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TestGameMode_C", "ExecuteUbergraph_BP_TestGameMode");

	Params::BP_TestGameMode_C_ExecuteUbergraph_BP_TestGameMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

