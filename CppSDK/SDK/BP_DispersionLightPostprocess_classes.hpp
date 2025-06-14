﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DispersionLightPostprocess

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DispersionLightPostprocess.BP_DispersionLightPostprocess_C
// 0x01C0 (0x0470 - 0x02B0)
class ABP_DispersionLightPostprocess_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              KuroPostProcess;                                   // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MainMaterial;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     AddMaterial;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UMaterialInterface*                     MultyMaterial;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UTexture*                               BaseTexture;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BaseTexRGBA_Strength;                              // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColor;                                        // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightShadowColor_Multi;                            // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensity;                                    // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         LightShadowIntensity_Multi;                        // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         ShadowProcess;                                     // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         ShadowWidth;                                       // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         InnerRadius;                                       // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         SecondOffset;                                      // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         ThirdOffset;                                       // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetStrength;                                    // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         U_Pos;                                             // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         V_Pos;                                             // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         U_Scale;                                           // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         V_Scale;                                           // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseMultiBlend;                                     // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, float>                      Scalar_Parameters;                                 // 0x0360(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FLinearColor>        Vector_Parameters;                                 // 0x03B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class UTexture*>            Texture_Parameters;                                // 0x0400(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         NoiseUSpeed;                                       // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoiseVSpeed;                                       // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoiseUVMulty;                                      // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoiseStrength;                                     // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               NoiseTex;                                          // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Reverse;                                           // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         Desaturation;                                      // 0x046C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DispersionLightPostprocess(int32 EntryPoint);
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void UpdateEditor();
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DispersionLightPostprocess_C">();
	}
	static class ABP_DispersionLightPostprocess_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DispersionLightPostprocess_C>();
	}
};
static_assert(alignof(ABP_DispersionLightPostprocess_C) == 0x000008, "Wrong alignment on ABP_DispersionLightPostprocess_C");
static_assert(sizeof(ABP_DispersionLightPostprocess_C) == 0x000470, "Wrong size on ABP_DispersionLightPostprocess_C");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, UberGraphFrame) == 0x0002B0, "Member 'ABP_DispersionLightPostprocess_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, Arrow) == 0x0002B8, "Member 'ABP_DispersionLightPostprocess_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, Sphere) == 0x0002C0, "Member 'ABP_DispersionLightPostprocess_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, KuroPostProcess) == 0x0002C8, "Member 'ABP_DispersionLightPostprocess_C::KuroPostProcess' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, MainMaterial) == 0x0002D0, "Member 'ABP_DispersionLightPostprocess_C::MainMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, AddMaterial) == 0x0002D8, "Member 'ABP_DispersionLightPostprocess_C::AddMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, MultyMaterial) == 0x0002E0, "Member 'ABP_DispersionLightPostprocess_C::MultyMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, BaseTexture) == 0x0002E8, "Member 'ABP_DispersionLightPostprocess_C::BaseTexture' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, BaseTexRGBA_Strength) == 0x0002F0, "Member 'ABP_DispersionLightPostprocess_C::BaseTexRGBA_Strength' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, LightColor) == 0x000300, "Member 'ABP_DispersionLightPostprocess_C::LightColor' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, LightShadowColor_Multi) == 0x000310, "Member 'ABP_DispersionLightPostprocess_C::LightShadowColor_Multi' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, LightIntensity) == 0x000320, "Member 'ABP_DispersionLightPostprocess_C::LightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, LightShadowIntensity_Multi) == 0x000324, "Member 'ABP_DispersionLightPostprocess_C::LightShadowIntensity_Multi' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, ShadowProcess) == 0x000328, "Member 'ABP_DispersionLightPostprocess_C::ShadowProcess' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, ShadowWidth) == 0x00032C, "Member 'ABP_DispersionLightPostprocess_C::ShadowWidth' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, InnerRadius) == 0x000330, "Member 'ABP_DispersionLightPostprocess_C::InnerRadius' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, SecondOffset) == 0x000334, "Member 'ABP_DispersionLightPostprocess_C::SecondOffset' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, ThirdOffset) == 0x000338, "Member 'ABP_DispersionLightPostprocess_C::ThirdOffset' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, OffsetStrength) == 0x00033C, "Member 'ABP_DispersionLightPostprocess_C::OffsetStrength' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, U_Pos) == 0x000340, "Member 'ABP_DispersionLightPostprocess_C::U_Pos' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, V_Pos) == 0x000344, "Member 'ABP_DispersionLightPostprocess_C::V_Pos' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, U_Scale) == 0x000348, "Member 'ABP_DispersionLightPostprocess_C::U_Scale' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, V_Scale) == 0x00034C, "Member 'ABP_DispersionLightPostprocess_C::V_Scale' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, DynamicMaterial) == 0x000350, "Member 'ABP_DispersionLightPostprocess_C::DynamicMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, UseMultiBlend) == 0x000358, "Member 'ABP_DispersionLightPostprocess_C::UseMultiBlend' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, Scalar_Parameters) == 0x000360, "Member 'ABP_DispersionLightPostprocess_C::Scalar_Parameters' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, Vector_Parameters) == 0x0003B0, "Member 'ABP_DispersionLightPostprocess_C::Vector_Parameters' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, Texture_Parameters) == 0x000400, "Member 'ABP_DispersionLightPostprocess_C::Texture_Parameters' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, NoiseUSpeed) == 0x000450, "Member 'ABP_DispersionLightPostprocess_C::NoiseUSpeed' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, NoiseVSpeed) == 0x000454, "Member 'ABP_DispersionLightPostprocess_C::NoiseVSpeed' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, NoiseUVMulty) == 0x000458, "Member 'ABP_DispersionLightPostprocess_C::NoiseUVMulty' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, NoiseStrength) == 0x00045C, "Member 'ABP_DispersionLightPostprocess_C::NoiseStrength' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, NoiseTex) == 0x000460, "Member 'ABP_DispersionLightPostprocess_C::NoiseTex' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, Reverse) == 0x000468, "Member 'ABP_DispersionLightPostprocess_C::Reverse' has a wrong offset!");
static_assert(offsetof(ABP_DispersionLightPostprocess_C, Desaturation) == 0x00046C, "Member 'ABP_DispersionLightPostprocess_C::Desaturation' has a wrong offset!");

}

