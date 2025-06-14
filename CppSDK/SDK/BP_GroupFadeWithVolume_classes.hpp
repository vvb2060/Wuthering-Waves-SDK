﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GroupFadeWithVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GroupFadeWithVolume.BP_GroupFadeWithVolume_C
// 0x0338 (0x05E8 - 0x02B0)
class ABP_GroupFadeWithVolume_C final : public AUKuroCustomCookActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSet<class ALight*>                           LightList;                                         // 0x02C0(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<float>                                 CachedLightIntensity;                              // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class ABP_VolumetricSphereLight_C*>      VolumeLightSphereList;                             // 0x0320(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<float>                                 CachedVolumeLightSphere;                           // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class ABP_KuroLightDecal_C*>             DecalLightList;                                    // 0x0380(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                 CachedDecalLight;                                  // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class ABP_VolumetricSphereLightSuperFar_C*> VolumeLightSphereSuperFarList;                  // 0x03E0(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<float>                                 CachedVolumeLightSphereSuperFar;                   // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AKuroPostProcessVolume*                 BoundVolume;                                       // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GlobalGI_C*                         CachedGlobalGI;                                    // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         lastWeight;                                        // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_454[0x4];                                      // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class ABP_SingleCloud_C*>                CloudList;                                         // 0x0458(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<float>                                 CachedCloudIntensity;                              // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bPC;                                               // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bMobile;                                           // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BA[0x6];                                      // 0x04BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class AKuroPostProcessVolume*>           FadeOutVolumes;                                    // 0x04C0(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	float                                         maxFadeoutWeight;                                  // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCooked;                                           // 0x0514(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_515[0x3];                                      // 0x0515(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class ABP_SuperFarFog_C*>                SuperfarFogList;                                   // 0x0518(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<float>                                 CachedSuperFarFogOpacity;                          // 0x0568(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 CachedSuperFarFogOpacity_Night;                    // 0x0578(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class ABP_KuroFlickLight_C*>             FlickLightList;                                    // 0x0588(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<float>                                 CachedFlickLightIntensity;                         // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UpdateFlickLight(float A);
	void CacheFlickLight();
	void MarkLightExcludeFromTOD();
	float ComputeWeight();
	void CheckObjectPlatform(const class UObject* Object, bool* valid);
	void CheckPlatform();
	void UpdateSuperFarFog(float A);
	void CacheSuperFarFog();
	void UpdateCloud(float B);
	void CacheCloud();
	void UpdateVolumeLightSphereFar(float A);
	void CacheVolumeLightSphereFar();
	void UpdateVolumeLightSphere(float B);
	void CacheVolumeLightSphere();
	void UpdateLight(float A);
	void CacheLightInstensity();
	void ClearInvalid();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CacheIntensity();
	void BeforeCookForMobile();
	void BeforeCookForPC();
	void ExecuteUbergraph_BP_GroupFadeWithVolume(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GroupFadeWithVolume_C">();
	}
	static class ABP_GroupFadeWithVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GroupFadeWithVolume_C>();
	}
};
static_assert(alignof(ABP_GroupFadeWithVolume_C) == 0x000008, "Wrong alignment on ABP_GroupFadeWithVolume_C");
static_assert(sizeof(ABP_GroupFadeWithVolume_C) == 0x0005E8, "Wrong size on ABP_GroupFadeWithVolume_C");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, UberGraphFrame) == 0x0002B0, "Member 'ABP_GroupFadeWithVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_GroupFadeWithVolume_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, LightList) == 0x0002C0, "Member 'ABP_GroupFadeWithVolume_C::LightList' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CachedLightIntensity) == 0x000310, "Member 'ABP_GroupFadeWithVolume_C::CachedLightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, VolumeLightSphereList) == 0x000320, "Member 'ABP_GroupFadeWithVolume_C::VolumeLightSphereList' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CachedVolumeLightSphere) == 0x000370, "Member 'ABP_GroupFadeWithVolume_C::CachedVolumeLightSphere' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, DecalLightList) == 0x000380, "Member 'ABP_GroupFadeWithVolume_C::DecalLightList' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CachedDecalLight) == 0x0003D0, "Member 'ABP_GroupFadeWithVolume_C::CachedDecalLight' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, VolumeLightSphereSuperFarList) == 0x0003E0, "Member 'ABP_GroupFadeWithVolume_C::VolumeLightSphereSuperFarList' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CachedVolumeLightSphereSuperFar) == 0x000430, "Member 'ABP_GroupFadeWithVolume_C::CachedVolumeLightSphereSuperFar' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, BoundVolume) == 0x000440, "Member 'ABP_GroupFadeWithVolume_C::BoundVolume' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CachedGlobalGI) == 0x000448, "Member 'ABP_GroupFadeWithVolume_C::CachedGlobalGI' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, lastWeight) == 0x000450, "Member 'ABP_GroupFadeWithVolume_C::lastWeight' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CloudList) == 0x000458, "Member 'ABP_GroupFadeWithVolume_C::CloudList' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CachedCloudIntensity) == 0x0004A8, "Member 'ABP_GroupFadeWithVolume_C::CachedCloudIntensity' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, bPC) == 0x0004B8, "Member 'ABP_GroupFadeWithVolume_C::bPC' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, bMobile) == 0x0004B9, "Member 'ABP_GroupFadeWithVolume_C::bMobile' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, FadeOutVolumes) == 0x0004C0, "Member 'ABP_GroupFadeWithVolume_C::FadeOutVolumes' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, maxFadeoutWeight) == 0x000510, "Member 'ABP_GroupFadeWithVolume_C::maxFadeoutWeight' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, bCooked) == 0x000514, "Member 'ABP_GroupFadeWithVolume_C::bCooked' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, SuperfarFogList) == 0x000518, "Member 'ABP_GroupFadeWithVolume_C::SuperfarFogList' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CachedSuperFarFogOpacity) == 0x000568, "Member 'ABP_GroupFadeWithVolume_C::CachedSuperFarFogOpacity' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CachedSuperFarFogOpacity_Night) == 0x000578, "Member 'ABP_GroupFadeWithVolume_C::CachedSuperFarFogOpacity_Night' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, FlickLightList) == 0x000588, "Member 'ABP_GroupFadeWithVolume_C::FlickLightList' has a wrong offset!");
static_assert(offsetof(ABP_GroupFadeWithVolume_C, CachedFlickLightIntensity) == 0x0005D8, "Member 'ABP_GroupFadeWithVolume_C::CachedFlickLightIntensity' has a wrong offset!");

}

