﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapImageTracker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MagicLeapImageTracker_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// 0x0070 (0x0290 - 0x0220)
class UMagicLeapImageTrackerComponent final : public USceneComponent
{
public:
	class UTexture2D*                             TargetImageTexture;                                // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name_0;                                            // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LongerDimension;                                   // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsStationary;                                     // 0x0234(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseUnreliablePose;                                // 0x0235(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapImageTargetOrientation              AxisOrientation;                                   // 0x0236(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_237[0x1];                                      // 0x0237(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnSetImageTargetSucceeded;                         // 0x0238(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnSetImageTargetFailed;                            // 0x0248(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnImageTargetFound;                                // 0x0258(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnImageTargetLost;                                 // 0x0268(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FVector& LastTrackedLocation, const struct FRotator& LastTrackedRotation, const struct FVector& NewUnreliableLocation, const struct FRotator& NewUnreliableRotation)> OnImageTargetUnreliableTracking; // 0x0278(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_288[0x8];                                      // 0x0288(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool RemoveTargetAsync();
	bool SetTargetAsync(class UTexture2D* ImageTarget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapImageTrackerComponent">();
	}
	static class UMagicLeapImageTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapImageTrackerComponent>();
	}
};
static_assert(alignof(UMagicLeapImageTrackerComponent) == 0x000010, "Wrong alignment on UMagicLeapImageTrackerComponent");
static_assert(sizeof(UMagicLeapImageTrackerComponent) == 0x000290, "Wrong size on UMagicLeapImageTrackerComponent");
static_assert(offsetof(UMagicLeapImageTrackerComponent, TargetImageTexture) == 0x000218, "Member 'UMagicLeapImageTrackerComponent::TargetImageTexture' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, Name_0) == 0x000220, "Member 'UMagicLeapImageTrackerComponent::Name_0' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, LongerDimension) == 0x000230, "Member 'UMagicLeapImageTrackerComponent::LongerDimension' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, bIsStationary) == 0x000234, "Member 'UMagicLeapImageTrackerComponent::bIsStationary' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, bUseUnreliablePose) == 0x000235, "Member 'UMagicLeapImageTrackerComponent::bUseUnreliablePose' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, AxisOrientation) == 0x000236, "Member 'UMagicLeapImageTrackerComponent::AxisOrientation' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnSetImageTargetSucceeded) == 0x000238, "Member 'UMagicLeapImageTrackerComponent::OnSetImageTargetSucceeded' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnSetImageTargetFailed) == 0x000248, "Member 'UMagicLeapImageTrackerComponent::OnSetImageTargetFailed' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnImageTargetFound) == 0x000258, "Member 'UMagicLeapImageTrackerComponent::OnImageTargetFound' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnImageTargetLost) == 0x000268, "Member 'UMagicLeapImageTrackerComponent::OnImageTargetLost' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnImageTargetUnreliableTracking) == 0x000278, "Member 'UMagicLeapImageTrackerComponent::OnImageTargetUnreliableTracking' has a wrong offset!");

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UMagicLeapImageTrackerFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EnableImageTracking(bool bEnable);
	static int32 GetMaxSimultaneousTargets();
	static bool IsImageTrackingEnabled();
	static void SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapImageTrackerFunctionLibrary">();
	}
	static class UMagicLeapImageTrackerFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapImageTrackerFunctionLibrary>();
	}
};
static_assert(alignof(UMagicLeapImageTrackerFunctionLibrary) == 0x000008, "Wrong alignment on UMagicLeapImageTrackerFunctionLibrary");
static_assert(sizeof(UMagicLeapImageTrackerFunctionLibrary) == 0x000030, "Wrong size on UMagicLeapImageTrackerFunctionLibrary");

}

