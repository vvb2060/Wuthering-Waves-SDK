﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ManipulateConfig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ManipulateConfig.BP_ManipulateConfig_C
// 0x0098 (0x0158 - 0x00C0)
class UBP_ManipulateConfig_C final : public UActorComponent
{
public:
	float                                         ChantTime;                                         // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ChantCameraShake;                                  // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ChantCameraStateTag;                               // 0x00D0(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                         DrawDelay;                                         // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrawTime;                                          // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrawAlignTime;                                     // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrawAlignHeight;                                   // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 DrawCameraShake;                                   // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HoldSwingFreq;                                     // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HoldAngularVelocity;                               // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HoldRotation;                                      // 0x0100(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                HoldOffset;                                        // 0x010C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HoldSwingRange;                                    // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CastAngularVelocity;                               // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CastCameraShake;                                   // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CastVelocity;                                      // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PhysHandleLinearDamping;                           // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PhysHandleAngularStiffness;                        // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PhysHandleLinearStiffness;                         // 0x0134(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PhysHandleAngularDamping;                          // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 HoldCameraShake;                                   // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           HoldCameraStateTag;                                // 0x0148(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ManipulateConfig_C">();
	}
	static class UBP_ManipulateConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ManipulateConfig_C>();
	}
};
static_assert(alignof(UBP_ManipulateConfig_C) == 0x000008, "Wrong alignment on UBP_ManipulateConfig_C");
static_assert(sizeof(UBP_ManipulateConfig_C) == 0x000158, "Wrong size on UBP_ManipulateConfig_C");
static_assert(offsetof(UBP_ManipulateConfig_C, ChantTime) == 0x0000C0, "Member 'UBP_ManipulateConfig_C::ChantTime' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, ChantCameraShake) == 0x0000C8, "Member 'UBP_ManipulateConfig_C::ChantCameraShake' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, ChantCameraStateTag) == 0x0000D0, "Member 'UBP_ManipulateConfig_C::ChantCameraStateTag' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, DrawDelay) == 0x0000DC, "Member 'UBP_ManipulateConfig_C::DrawDelay' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, DrawTime) == 0x0000E0, "Member 'UBP_ManipulateConfig_C::DrawTime' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, DrawAlignTime) == 0x0000E4, "Member 'UBP_ManipulateConfig_C::DrawAlignTime' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, DrawAlignHeight) == 0x0000E8, "Member 'UBP_ManipulateConfig_C::DrawAlignHeight' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, DrawCameraShake) == 0x0000F0, "Member 'UBP_ManipulateConfig_C::DrawCameraShake' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, HoldSwingFreq) == 0x0000F8, "Member 'UBP_ManipulateConfig_C::HoldSwingFreq' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, HoldAngularVelocity) == 0x0000FC, "Member 'UBP_ManipulateConfig_C::HoldAngularVelocity' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, HoldRotation) == 0x000100, "Member 'UBP_ManipulateConfig_C::HoldRotation' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, HoldOffset) == 0x00010C, "Member 'UBP_ManipulateConfig_C::HoldOffset' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, HoldSwingRange) == 0x000118, "Member 'UBP_ManipulateConfig_C::HoldSwingRange' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, CastAngularVelocity) == 0x00011C, "Member 'UBP_ManipulateConfig_C::CastAngularVelocity' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, CastCameraShake) == 0x000120, "Member 'UBP_ManipulateConfig_C::CastCameraShake' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, CastVelocity) == 0x000128, "Member 'UBP_ManipulateConfig_C::CastVelocity' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, PhysHandleLinearDamping) == 0x00012C, "Member 'UBP_ManipulateConfig_C::PhysHandleLinearDamping' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, PhysHandleAngularStiffness) == 0x000130, "Member 'UBP_ManipulateConfig_C::PhysHandleAngularStiffness' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, PhysHandleLinearStiffness) == 0x000134, "Member 'UBP_ManipulateConfig_C::PhysHandleLinearStiffness' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, PhysHandleAngularDamping) == 0x000138, "Member 'UBP_ManipulateConfig_C::PhysHandleAngularDamping' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, HoldCameraShake) == 0x000140, "Member 'UBP_ManipulateConfig_C::HoldCameraShake' has a wrong offset!");
static_assert(offsetof(UBP_ManipulateConfig_C, HoldCameraStateTag) == 0x000148, "Member 'UBP_ManipulateConfig_C::HoldCameraStateTag' has a wrong offset!");

}

