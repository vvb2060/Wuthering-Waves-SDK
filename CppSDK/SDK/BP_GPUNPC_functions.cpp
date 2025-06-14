﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GPUNPC

#include "Basic.hpp"

#include "BP_GPUNPC_classes.hpp"
#include "BP_GPUNPC_parameters.hpp"


namespace SDK
{

// Function BP_GPUNPC.BP_GPUNPC_C.ExecuteUbergraph_BP_GPUNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GPUNPC_C::ExecuteUbergraph_BP_GPUNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "ExecuteUbergraph_BP_GPUNPC");

	Params::BP_GPUNPC_C_ExecuteUbergraph_BP_GPUNPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GPUNPC.BP_GPUNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GPUNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.生成 GPU NPC
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GPUNPC_C::生成_GPU_NPC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "生成 GPU NPC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.配置 Instance Groups
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GPUNPC_C::配置_Instance_Groups()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "配置 Instance Groups");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.通过索引获取 Instance Group
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBakedBoneMeshInstanceGroup**     OutInstanceGroup                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GPUNPC_C::通过索引获取_Instance_Group(int32 Index_0, class UBakedBoneMeshInstanceGroup** OutInstanceGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "通过索引获取 Instance Group");

	Params::BP_GPUNPC_C_通过索引获取_Instance_Group Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (OutInstanceGroup != nullptr)
		*OutInstanceGroup = Parms.OutInstanceGroup;
}


// Function BP_GPUNPC.BP_GPUNPC_C.生成Instance数据
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GPUNPC_C::生成Instance数据()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "生成Instance数据");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.获取随机 Instance Group
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBakedBoneMeshComponent**         OutComponent                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GPUNPC_C::获取随机_Instance_Group(class UBakedBoneMeshComponent** OutComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "获取随机 Instance Group");

	Params::BP_GPUNPC_C_获取随机_Instance_Group Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponent != nullptr)
		*OutComponent = Parms.OutComponent;
}


// Function BP_GPUNPC.BP_GPUNPC_C.刷新 BakedBoneMesh 组件
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_GPUNPC_C::刷新_BakedBoneMesh_组件()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "刷新 BakedBoneMesh 组件");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.生成Instance变换数据
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GPUNPC_C::生成Instance变换数据()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "生成Instance变换数据");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.生成Instance随机配置
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GPUNPC_C::生成Instance随机配置()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "生成Instance随机配置");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.获取 BakedBoneMesh 组件
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBakedBoneMeshComponent**         OutComp                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GPUNPC_C::获取_BakedBoneMesh_组件(class UBakedBoneMeshComponent** OutComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "获取 BakedBoneMesh 组件");

	Params::BP_GPUNPC_C_获取_BakedBoneMesh_组件 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutComp != nullptr)
		*OutComp = Parms.OutComp;
}


// Function BP_GPUNPC.BP_GPUNPC_C.获取 InstanceGroup 个数
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32*                                  NumInstanceGroups                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GPUNPC_C::获取_InstanceGroup_个数(int32* NumInstanceGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "获取 InstanceGroup 个数");

	Params::BP_GPUNPC_C_获取_InstanceGroup_个数 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NumInstanceGroups != nullptr)
		*NumInstanceGroups = Parms.NumInstanceGroups;
}


// Function BP_GPUNPC.BP_GPUNPC_C.获取所有 InstanceGroup
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBakedBoneMeshInstanceGroup*>*OutInstanceGroups                                      (Parm, OutParm)

void ABP_GPUNPC_C::获取所有_InstanceGroup(TArray<class UBakedBoneMeshInstanceGroup*>* OutInstanceGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "获取所有 InstanceGroup");

	Params::BP_GPUNPC_C_获取所有_InstanceGroup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutInstanceGroups != nullptr)
		*OutInstanceGroups = std::move(Parms.OutInstanceGroups);
}


// Function BP_GPUNPC.BP_GPUNPC_C.计算 InstanceGroups 个数
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32*                                  NumInstanceGroups                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GPUNPC_C::计算_InstanceGroups_个数(int32* NumInstanceGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "计算 InstanceGroups 个数");

	Params::BP_GPUNPC_C_计算_InstanceGroups_个数 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NumInstanceGroups != nullptr)
		*NumInstanceGroups = Parms.NumInstanceGroups;
}


// Function BP_GPUNPC.BP_GPUNPC_C.重置 InstanceGroups
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_GPUNPC_C::重置_InstanceGroups()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "重置 InstanceGroups");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.生成贴图合并配置
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GPUNPC_C::生成贴图合并配置()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "生成贴图合并配置");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.迁移 Instance配置到 Editor Only
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GPUNPC_C::迁移_Instance配置到_Editor_Only()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "迁移 Instance配置到 Editor Only");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GPUNPC.BP_GPUNPC_C.获取随机 Instance Group索引
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32*                                  Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GPUNPC_C::获取随机_Instance_Group索引(int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "获取随机 Instance Group索引");

	Params::BP_GPUNPC_C_获取随机_Instance_Group索引 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function BP_GPUNPC.BP_GPUNPC_C.获取InstanceGroup的随机动画贴图索引
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   GroupIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GPUNPC_C::获取InstanceGroup的随机动画贴图索引(int32 GroupIndex, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GPUNPC_C", "获取InstanceGroup的随机动画贴图索引");

	Params::BP_GPUNPC_C_获取InstanceGroup的随机动画贴图索引 Parms{};

	Parms.GroupIndex = GroupIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}

}

