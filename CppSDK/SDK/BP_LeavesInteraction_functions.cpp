﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LeavesInteraction

#include "Basic.hpp"

#include "BP_LeavesInteraction_classes.hpp"
#include "BP_LeavesInteraction_parameters.hpp"


namespace SDK
{

// Function BP_LeavesInteraction.BP_LeavesInteraction_C.ExecuteUbergraph_BP_LeavesInteraction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LeavesInteraction_C::ExecuteUbergraph_BP_LeavesInteraction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "ExecuteUbergraph_BP_LeavesInteraction");

	Params::BP_LeavesInteraction_C_ExecuteUbergraph_BP_LeavesInteraction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.OnWeaponInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVectorDouble&             OriginPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SceneBattleInteract_C*        Config                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LeavesInteraction_C::OnWeaponInteraction(const struct FVectorDouble& OriginPoint, class UBP_SceneBattleInteract_C* Config, int32 Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "OnWeaponInteraction");

	Params::BP_LeavesInteraction_C_OnWeaponInteraction Parms{};

	Parms.OriginPoint = std::move(OriginPoint);
	Parms.Config = Config;
	Parms.Id = Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LeavesInteraction_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LeavesInteraction_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "ReceiveTick");

	Params::BP_LeavesInteraction_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LeavesInteraction_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.InitParam
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LeavesInteraction_C::InitParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "InitParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.UpdateParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   dt                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LeavesInteraction_C::UpdateParam(float dt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "UpdateParam");

	Params::BP_LeavesInteraction_C_UpdateParam Parms{};

	Parms.dt = dt;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.WeaponData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LeavesInteraction_C::WeaponData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "WeaponData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.Choose Available Point
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FVectorDouble&             CollisionPoint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVectorDouble&             WeaponPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SceneBattleInteract_C*        ConfigDA                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorDouble*                   AvailblePoint                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LeavesInteraction_C::Choose_Available_Point(const struct FVectorDouble& CollisionPoint, const struct FVectorDouble& WeaponPoint, class UBP_SceneBattleInteract_C* ConfigDA, struct FVectorDouble* AvailblePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "Choose Available Point");

	Params::BP_LeavesInteraction_C_Choose_Available_Point Parms{};

	Parms.CollisionPoint = std::move(CollisionPoint);
	Parms.WeaponPoint = std::move(WeaponPoint);
	Parms.ConfigDA = ConfigDA;

	UObject::ProcessEvent(Func, &Parms);

	if (AvailblePoint != nullptr)
		*AvailblePoint = std::move(Parms.AvailblePoint);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.Debug
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LeavesInteraction_C::Debug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "Debug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LeavesInteraction.BP_LeavesInteraction_C.SetLeavesParameters
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LeavesInteraction_C::SetLeavesParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeavesInteraction_C", "SetLeavesParameters");

	UObject::ProcessEvent(Func, nullptr);
}

}

