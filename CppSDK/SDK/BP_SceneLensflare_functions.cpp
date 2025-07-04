﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SceneLensflare

#include "Basic.hpp"

#include "BP_SceneLensflare_classes.hpp"
#include "BP_SceneLensflare_parameters.hpp"


namespace SDK
{

// Function BP_SceneLensflare.BP_SceneLensflare_C.ExecuteUbergraph_BP_SceneLensflare
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneLensflare_C::ExecuteUbergraph_BP_SceneLensflare(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneLensflare_C", "ExecuteUbergraph_BP_SceneLensflare");

	Params::BP_SceneLensflare_C_ExecuteUbergraph_BP_SceneLensflare Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneLensflare.BP_SceneLensflare_C.ApplyDynamicMaterialGlare
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         DynMaterial                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneLensflare_C::ApplyDynamicMaterialGlare(class UMaterialInstanceDynamic* DynMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneLensflare_C", "ApplyDynamicMaterialGlare");

	Params::BP_SceneLensflare_C_ApplyDynamicMaterialGlare Parms{};

	Parms.DynMaterial = DynMaterial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneLensflare.BP_SceneLensflare_C.ApplyDynamicMaterialHalo
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         DynMaterial                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneLensflare_C::ApplyDynamicMaterialHalo(class UMaterialInstanceDynamic* DynMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneLensflare_C", "ApplyDynamicMaterialHalo");

	Params::BP_SceneLensflare_C_ApplyDynamicMaterialHalo Parms{};

	Parms.DynMaterial = DynMaterial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneLensflare.BP_SceneLensflare_C.ApplyDynamicMaterialGhost
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         DynMaterial                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneLensflare_C::ApplyDynamicMaterialGhost(class UMaterialInstanceDynamic* DynMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneLensflare_C", "ApplyDynamicMaterialGhost");

	Params::BP_SceneLensflare_C_ApplyDynamicMaterialGhost Parms{};

	Parms.DynMaterial = DynMaterial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneLensflare.BP_SceneLensflare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SceneLensflare_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneLensflare_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneLensflare.BP_SceneLensflare_C.GetCustomGhostParameter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLensflareSamplerActorGhostParameterReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FLensflareSamplerActorGhostParameter ABP_SceneLensflare_C::GetCustomGhostParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneLensflare_C", "GetCustomGhostParameter");

	Params::BP_SceneLensflare_C_GetCustomGhostParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SceneLensflare.BP_SceneLensflare_C.GetCustomHaloParameter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLensflareSamplerActorHaloParameterReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FLensflareSamplerActorHaloParameter ABP_SceneLensflare_C::GetCustomHaloParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneLensflare_C", "GetCustomHaloParameter");

	Params::BP_SceneLensflare_C_GetCustomHaloParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SceneLensflare.BP_SceneLensflare_C.GetCustomGlareParameter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLensflareSamplerActorGlareParameterReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FLensflareSamplerActorGlareParameter ABP_SceneLensflare_C::GetCustomGlareParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneLensflare_C", "GetCustomGlareParameter");

	Params::BP_SceneLensflare_C_GetCustomGlareParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SceneLensflare.BP_SceneLensflare_C.GetLensflareParameter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLensflareSamplerActorParameter  ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FLensflareSamplerActorParameter ABP_SceneLensflare_C::GetLensflareParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneLensflare_C", "GetLensflareParameter");

	Params::BP_SceneLensflare_C_GetLensflareParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

