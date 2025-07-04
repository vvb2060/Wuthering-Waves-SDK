﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VolumetricFogDistFalloff_PointLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VolumetricFogDistFalloff_PointLight.BP_VolumetricFogDistFalloff_PointLight_C
// 0x0038 (0x0300 - 0x02C8)
class ABP_VolumetricFogDistFalloff_PointLight_C final : public APointLight
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         VolumetricFogIntensity;                            // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceStart;                                     // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         brightness;                                        // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CameraVector;                                      // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceEnd;                                       // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         currentDistance;                                   // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VolumetricFogDistFalloff_PointLight(int32 EntryPoint);
	void TimerEvent();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void PointFunction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VolumetricFogDistFalloff_PointLight_C">();
	}
	static class ABP_VolumetricFogDistFalloff_PointLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VolumetricFogDistFalloff_PointLight_C>();
	}
};
static_assert(alignof(ABP_VolumetricFogDistFalloff_PointLight_C) == 0x000008, "Wrong alignment on ABP_VolumetricFogDistFalloff_PointLight_C");
static_assert(sizeof(ABP_VolumetricFogDistFalloff_PointLight_C) == 0x000300, "Wrong size on ABP_VolumetricFogDistFalloff_PointLight_C");
static_assert(offsetof(ABP_VolumetricFogDistFalloff_PointLight_C, UberGraphFrame) == 0x0002C8, "Member 'ABP_VolumetricFogDistFalloff_PointLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricFogDistFalloff_PointLight_C, VolumetricFogIntensity) == 0x0002D0, "Member 'ABP_VolumetricFogDistFalloff_PointLight_C::VolumetricFogIntensity' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricFogDistFalloff_PointLight_C, DistanceStart) == 0x0002D4, "Member 'ABP_VolumetricFogDistFalloff_PointLight_C::DistanceStart' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricFogDistFalloff_PointLight_C, brightness) == 0x0002D8, "Member 'ABP_VolumetricFogDistFalloff_PointLight_C::brightness' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricFogDistFalloff_PointLight_C, CameraVector) == 0x0002E0, "Member 'ABP_VolumetricFogDistFalloff_PointLight_C::CameraVector' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricFogDistFalloff_PointLight_C, DistanceEnd) == 0x0002F8, "Member 'ABP_VolumetricFogDistFalloff_PointLight_C::DistanceEnd' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricFogDistFalloff_PointLight_C, currentDistance) == 0x0002FC, "Member 'ABP_VolumetricFogDistFalloff_PointLight_C::currentDistance' has a wrong offset!");

}

