﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraDrivenAutoFlightData

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraDrivenAutoFlightData.BP_CameraDrivenAutoFlightData_C
// 0x0020 (0x0058 - 0x0038)
class UBP_CameraDrivenAutoFlightData_C final : public UPrimaryDataAsset
{
public:
	float                                         自动驾驶开始时间;                                  // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         自动驾驶启动输入;                                  // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         自动驾驶完成角度;                                  // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         自动驾驶归正角度Min;                               // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         自动驾驶归正角度Max;                               // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         自动驾驶归正角度模拟输入Min;                       // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         自动驾驶归正角度模拟输入Max;                       // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraDrivenAutoFlightData_C">();
	}
	static class UBP_CameraDrivenAutoFlightData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraDrivenAutoFlightData_C>();
	}
};
static_assert(alignof(UBP_CameraDrivenAutoFlightData_C) == 0x000008, "Wrong alignment on UBP_CameraDrivenAutoFlightData_C");
static_assert(sizeof(UBP_CameraDrivenAutoFlightData_C) == 0x000058, "Wrong size on UBP_CameraDrivenAutoFlightData_C");
static_assert(offsetof(UBP_CameraDrivenAutoFlightData_C, 自动驾驶开始时间) == 0x000038, "Member 'UBP_CameraDrivenAutoFlightData_C::自动驾驶开始时间' has a wrong offset!");
static_assert(offsetof(UBP_CameraDrivenAutoFlightData_C, 自动驾驶启动输入) == 0x00003C, "Member 'UBP_CameraDrivenAutoFlightData_C::自动驾驶启动输入' has a wrong offset!");
static_assert(offsetof(UBP_CameraDrivenAutoFlightData_C, 自动驾驶完成角度) == 0x000040, "Member 'UBP_CameraDrivenAutoFlightData_C::自动驾驶完成角度' has a wrong offset!");
static_assert(offsetof(UBP_CameraDrivenAutoFlightData_C, 自动驾驶归正角度Min) == 0x000044, "Member 'UBP_CameraDrivenAutoFlightData_C::自动驾驶归正角度Min' has a wrong offset!");
static_assert(offsetof(UBP_CameraDrivenAutoFlightData_C, 自动驾驶归正角度Max) == 0x000048, "Member 'UBP_CameraDrivenAutoFlightData_C::自动驾驶归正角度Max' has a wrong offset!");
static_assert(offsetof(UBP_CameraDrivenAutoFlightData_C, 自动驾驶归正角度模拟输入Min) == 0x00004C, "Member 'UBP_CameraDrivenAutoFlightData_C::自动驾驶归正角度模拟输入Min' has a wrong offset!");
static_assert(offsetof(UBP_CameraDrivenAutoFlightData_C, 自动驾驶归正角度模拟输入Max) == 0x000050, "Member 'UBP_CameraDrivenAutoFlightData_C::自动驾驶归正角度模拟输入Max' has a wrong offset!");

}

