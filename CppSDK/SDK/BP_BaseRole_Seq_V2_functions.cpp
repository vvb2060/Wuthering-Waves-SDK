﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseRole_Seq_V2

#include "Basic.hpp"

#include "BP_BaseRole_Seq_V2_classes.hpp"
#include "BP_BaseRole_Seq_V2_parameters.hpp"


namespace SDK
{

// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.ExecuteUbergraph_BP_BaseRole_Seq_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseRole_Seq_V2_C::ExecuteUbergraph_BP_BaseRole_Seq_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "ExecuteUbergraph_BP_BaseRole_Seq_V2");

	Params::BP_BaseRole_Seq_V2_C_ExecuteUbergraph_BP_BaseRole_Seq_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_BaseRole_Seq_V2_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseRole_Seq_V2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.JumpFrame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseRole_Seq_V2_C::JumpFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "JumpFrame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.BeginSwitchPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           From                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           To                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SwitchTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ErrorLog                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseRole_Seq_V2_C::BeginSwitchPose(class AActor* From, class AActor* To, float SwitchTime, bool ErrorLog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "BeginSwitchPose");

	Params::BP_BaseRole_Seq_V2_C_BeginSwitchPose Parms{};

	Parms.From = From;
	Parms.To = To;
	Parms.SwitchTime = SwitchTime;
	Parms.ErrorLog = ErrorLog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.EndSwitchPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           To                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Log                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseRole_Seq_V2_C::EndSwitchPose(class AActor* To, bool Log)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "EndSwitchPose");

	Params::BP_BaseRole_Seq_V2_C_EndSwitchPose Parms{};

	Parms.To = To;
	Parms.Log = Log;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.SwitchMeshTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LevelA                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseRole_Seq_V2_C::SwitchMeshTransform(bool LevelA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "SwitchMeshTransform");

	Params::BP_BaseRole_Seq_V2_C_SwitchMeshTransform Parms{};

	Parms.LevelA = LevelA;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.ChangeHuluState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseRole_Seq_V2_C::ChangeHuluState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "ChangeHuluState");

	Params::BP_BaseRole_Seq_V2_C_ChangeHuluState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.CleanHuluState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseRole_Seq_V2_C::CleanHuluState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "CleanHuluState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.添加角色材质控制器组
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseRole_Seq_V2_C::添加角色材质控制器组()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "添加角色材质控制器组");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.卸载角色材质控制器组
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseRole_Seq_V2_C::卸载角色材质控制器组()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "卸载角色材质控制器组");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.添加角色材质控制器
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseRole_Seq_V2_C::添加角色材质控制器()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "添加角色材质控制器");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.卸载角色材质控制器
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseRole_Seq_V2_C::卸载角色材质控制器()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "卸载角色材质控制器");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.添加扫描效果
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BaseRole_Seq_V2_C::添加扫描效果()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "添加扫描效果");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.BeginSwitchPose_ToSeq
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           From                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           To                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SwitchTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ErrorLog                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseRole_Seq_V2_C::BeginSwitchPose_ToSeq(class AActor* From, class AActor* To, float SwitchTime, bool ErrorLog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "BeginSwitchPose_ToSeq");

	Params::BP_BaseRole_Seq_V2_C_BeginSwitchPose_ToSeq Parms{};

	Parms.From = From;
	Parms.To = To;
	Parms.SwitchTime = SwitchTime;
	Parms.ErrorLog = ErrorLog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.BeginSwitchPose_ToBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           From                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           To                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SwitchTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ErrorLog                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseRole_Seq_V2_C::BeginSwitchPose_ToBP(class AActor* From, class AActor* To, float SwitchTime, bool ErrorLog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "BeginSwitchPose_ToBP");

	Params::BP_BaseRole_Seq_V2_C_BeginSwitchPose_ToBP Parms{};

	Parms.From = From;
	Parms.To = To;
	Parms.SwitchTime = SwitchTime;
	Parms.ErrorLog = ErrorLog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.EndSwitchPose_ToSeq
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           To                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Log                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseRole_Seq_V2_C::EndSwitchPose_ToSeq(class AActor* To, bool Log)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "EndSwitchPose_ToSeq");

	Params::BP_BaseRole_Seq_V2_C_EndSwitchPose_ToSeq Parms{};

	Parms.To = To;
	Parms.Log = Log;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.EndSwitchPose_ToBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           To                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Log                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseRole_Seq_V2_C::EndSwitchPose_ToBP(class AActor* To, bool Log)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "EndSwitchPose_ToBP");

	Params::BP_BaseRole_Seq_V2_C_EndSwitchPose_ToBP Parms{};

	Parms.To = To;
	Parms.Log = Log;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.GetABPC_Body_V2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UABPC_Seq_Body_V2_C**             ABPC_Body_V2_0                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseRole_Seq_V2_C::GetABPC_Body_V2(class UABPC_Seq_Body_V2_C** ABPC_Body_V2_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "GetABPC_Body_V2");

	Params::BP_BaseRole_Seq_V2_C_GetABPC_Body_V2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ABPC_Body_V2_0 != nullptr)
		*ABPC_Body_V2_0 = Parms.ABPC_Body_V2_0;
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.SetAnimDataVector
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TMap<class FName, struct FVector>&VectorCurveData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_BaseRole_Seq_V2_C::SetAnimDataVector(const TMap<class FName, struct FVector>& VectorCurveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "SetAnimDataVector");

	Params::BP_BaseRole_Seq_V2_C_SetAnimDataVector Parms{};

	Parms.VectorCurveData = std::move(VectorCurveData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.SetAnimDataFloat
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<struct FNamedCurveValue>&  FloatCurveData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_BaseRole_Seq_V2_C::SetAnimDataFloat(const TArray<struct FNamedCurveValue>& FloatCurveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "SetAnimDataFloat");

	Params::BP_BaseRole_Seq_V2_C_SetAnimDataFloat Parms{};

	Parms.FloatCurveData = std::move(FloatCurveData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.GetAnimDataVector
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FVector>*      VectorCurveData                                        (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_BaseRole_Seq_V2_C::GetAnimDataVector(TMap<class FName, struct FVector>* VectorCurveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "GetAnimDataVector");

	Params::BP_BaseRole_Seq_V2_C_GetAnimDataVector Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VectorCurveData != nullptr)
		*VectorCurveData = std::move(Parms.VectorCurveData);

	return Parms.ReturnValue;
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.GetAnimDataFloat
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FNamedCurveValue>*        FloatCurveData                                         (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_BaseRole_Seq_V2_C::GetAnimDataFloat(TArray<struct FNamedCurveValue>* FloatCurveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "GetAnimDataFloat");

	Params::BP_BaseRole_Seq_V2_C_GetAnimDataFloat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FloatCurveData != nullptr)
		*FloatCurveData = std::move(Parms.FloatCurveData);

	return Parms.ReturnValue;
}


// Function BP_BaseRole_Seq_V2.BP_BaseRole_Seq_V2_C.GetSupportGroupNames
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class FName> ABP_BaseRole_Seq_V2_C::GetSupportGroupNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseRole_Seq_V2_C", "GetSupportGroupNames");

	Params::BP_BaseRole_Seq_V2_C_GetSupportGroupNames Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

