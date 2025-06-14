﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroData

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class KuroData.KuroHitResult
// 0x0218 (0x0248 - 0x0030)
class UKuroHitResult final : public UObject
{
public:
	uint8                                         Pad_30[0xA8];                                      // 0x0030(0x00A8)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bBlockingHit;                                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStartPenetrating;                                 // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TWeakObjectPtr<class AActor>>          Actors;                                            // 0x00E0(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> Components;                                    // 0x00F0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UPhysicalMaterial>> PhysMaterials;                                   // 0x0100(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                         BoneNameArray;                                     // 0x0110(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                 ElementIndexArray;                                 // 0x0120(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 FaceIndexArray;                                    // 0x0130(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 ItemArray;                                         // 0x0140(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 DistanceArray;                                     // 0x0150(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 PenetrationDepthArray;                             // 0x0160(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 TimeArray;                                         // 0x0170(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 ImpactNormalX_Array;                               // 0x0180(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 ImpactNormalY_Array;                               // 0x0190(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 ImpactNormalZ_Array;                               // 0x01A0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 ImpactPointX_Array;                                // 0x01B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 ImpactPointY_Array;                                // 0x01C0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 ImpactPointZ_Array;                                // 0x01D0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 LocationX_Array;                                   // 0x01E0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 LocationY_Array;                                   // 0x01F0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 LocationZ_Array;                                   // 0x0200(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 NormalX_Array;                                     // 0x0210(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 NormalY_Array;                                     // 0x0220(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 NormalZ_Array;                                     // 0x0230(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_240[0x8];                                      // 0x0240(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Clear();

	int32 GetHitCount() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroHitResult">();
	}
	static class UKuroHitResult* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroHitResult>();
	}
};
static_assert(alignof(UKuroHitResult) == 0x000008, "Wrong alignment on UKuroHitResult");
static_assert(sizeof(UKuroHitResult) == 0x000248, "Wrong size on UKuroHitResult");
static_assert(offsetof(UKuroHitResult, bBlockingHit) == 0x0000D8, "Member 'UKuroHitResult::bBlockingHit' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, bStartPenetrating) == 0x0000D9, "Member 'UKuroHitResult::bStartPenetrating' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, Actors) == 0x0000E0, "Member 'UKuroHitResult::Actors' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, Components) == 0x0000F0, "Member 'UKuroHitResult::Components' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, PhysMaterials) == 0x000100, "Member 'UKuroHitResult::PhysMaterials' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, BoneNameArray) == 0x000110, "Member 'UKuroHitResult::BoneNameArray' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, ElementIndexArray) == 0x000120, "Member 'UKuroHitResult::ElementIndexArray' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, FaceIndexArray) == 0x000130, "Member 'UKuroHitResult::FaceIndexArray' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, ItemArray) == 0x000140, "Member 'UKuroHitResult::ItemArray' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, DistanceArray) == 0x000150, "Member 'UKuroHitResult::DistanceArray' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, PenetrationDepthArray) == 0x000160, "Member 'UKuroHitResult::PenetrationDepthArray' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, TimeArray) == 0x000170, "Member 'UKuroHitResult::TimeArray' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, ImpactNormalX_Array) == 0x000180, "Member 'UKuroHitResult::ImpactNormalX_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, ImpactNormalY_Array) == 0x000190, "Member 'UKuroHitResult::ImpactNormalY_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, ImpactNormalZ_Array) == 0x0001A0, "Member 'UKuroHitResult::ImpactNormalZ_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, ImpactPointX_Array) == 0x0001B0, "Member 'UKuroHitResult::ImpactPointX_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, ImpactPointY_Array) == 0x0001C0, "Member 'UKuroHitResult::ImpactPointY_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, ImpactPointZ_Array) == 0x0001D0, "Member 'UKuroHitResult::ImpactPointZ_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, LocationX_Array) == 0x0001E0, "Member 'UKuroHitResult::LocationX_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, LocationY_Array) == 0x0001F0, "Member 'UKuroHitResult::LocationY_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, LocationZ_Array) == 0x000200, "Member 'UKuroHitResult::LocationZ_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, NormalX_Array) == 0x000210, "Member 'UKuroHitResult::NormalX_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, NormalY_Array) == 0x000220, "Member 'UKuroHitResult::NormalY_Array' has a wrong offset!");
static_assert(offsetof(UKuroHitResult, NormalZ_Array) == 0x000230, "Member 'UKuroHitResult::NormalZ_Array' has a wrong offset!");

// Class KuroData.KuroTraceLibrary
// 0x0000 (0x0030 - 0x0030)
class UKuroTraceLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AsyncBoxTrace(class UTraceBoxElement* Element, const class FString& ProfileKey, const TDelegate<void(bool Result, class UTraceBaseElement* Element, double Frame, double Index)>& Delegate, const double Frame, const double Index_0);
	static void AsyncCapsuleTrace(class UTraceCapsuleElement* Element, const class FString& ProfileKey, const TDelegate<void(bool Result, class UTraceBaseElement* Element, double Frame, double Index)>& Delegate, const double Frame, const double Index_0);
	static void AsyncLineTrace(class UTraceLineElement* Element, const class FString& ProfileKey, const TDelegate<void(bool Result, class UTraceBaseElement* Element, double Frame, double Index)>& Delegate, const double Frame, const double Index_0);
	static void AsyncSphereTrace(class UTraceSphereElement* Element, const class FString& ProfileKey, const TDelegate<void(bool Result, class UTraceBaseElement* Element, double Frame, double Index)>& Delegate, const double Frame, const double Index_0);
	static bool BoxTrace(class UTraceBoxElement* Element, const class FString& ProfileKey);
	static bool CapsuleTrace(class UTraceCapsuleElement* Element, const class FString& ProfileKey);
	static bool LineTrace(class UTraceLineElement* Element, const class FString& ProfileKey);
	static bool ShapeTrace(class UShapeComponent* InShapeComp, class UTraceBaseElement* Element, const class FName& TraceTagName, const class FString& ProfileKey);
	static bool SphereTrace(class UTraceSphereElement* Element, const class FString& ProfileKey);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroTraceLibrary">();
	}
	static class UKuroTraceLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroTraceLibrary>();
	}
};
static_assert(alignof(UKuroTraceLibrary) == 0x000008, "Wrong alignment on UKuroTraceLibrary");
static_assert(sizeof(UKuroTraceLibrary) == 0x000030, "Wrong size on UKuroTraceLibrary");

// Class KuroData.TraceBaseElement
// 0x00B0 (0x00E0 - 0x0030)
class UTraceBaseElement : public UObject
{
public:
	class UObject*                                WorldContextObject;                                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x28];                                      // 0x0038(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ActorsToIgnore;                                    // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UKuroHitResult*                         HitResult;                                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        StartX;                                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        StartY;                                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        StartZ;                                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        EndX;                                              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        EndY;                                              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        EndZ;                                              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceColor_R;                                      // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceColor_G;                                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceColor_B;                                      // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceColor_A;                                      // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceHitColor_R;                                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceHitColor_G;                                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceHitColor_B;                                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceHitColor_A;                                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DrawTime;                                          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTraceComplex;                                     // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreSelf;                                       // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsSingle;                                         // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsProfile;                                        // 0x00CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ProfileName;                                       // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddObjectTypeQuery(EObjectTypeQuery ObjectType);
	void ClearCacheData(bool bClearWorld);
	void Dispose();
	void SetDrawDebugTrace(EDrawDebugTrace Type);
	void SetEndLocation(double X, double Y, double Z);
	void SetObjectTypesQuery(TArray<EObjectTypeQuery>* ObjectTypes);
	void SetStartLocation(double X, double Y, double Z);
	void SetTraceColor(float R, float G, float B, float A);
	void SetTraceHitColor(float R, float G, float B, float A);
	void SetTraceTypeQuery(ETraceTypeQuery Type);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TraceBaseElement">();
	}
	static class UTraceBaseElement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTraceBaseElement>();
	}
};
static_assert(alignof(UTraceBaseElement) == 0x000008, "Wrong alignment on UTraceBaseElement");
static_assert(sizeof(UTraceBaseElement) == 0x0000E0, "Wrong size on UTraceBaseElement");
static_assert(offsetof(UTraceBaseElement, WorldContextObject) == 0x000030, "Member 'UTraceBaseElement::WorldContextObject' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, ActorsToIgnore) == 0x000060, "Member 'UTraceBaseElement::ActorsToIgnore' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, HitResult) == 0x000070, "Member 'UTraceBaseElement::HitResult' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, StartX) == 0x000078, "Member 'UTraceBaseElement::StartX' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, StartY) == 0x000080, "Member 'UTraceBaseElement::StartY' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, StartZ) == 0x000088, "Member 'UTraceBaseElement::StartZ' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, EndX) == 0x000090, "Member 'UTraceBaseElement::EndX' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, EndY) == 0x000098, "Member 'UTraceBaseElement::EndY' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, EndZ) == 0x0000A0, "Member 'UTraceBaseElement::EndZ' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, TraceColor_R) == 0x0000A8, "Member 'UTraceBaseElement::TraceColor_R' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, TraceColor_G) == 0x0000AC, "Member 'UTraceBaseElement::TraceColor_G' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, TraceColor_B) == 0x0000B0, "Member 'UTraceBaseElement::TraceColor_B' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, TraceColor_A) == 0x0000B4, "Member 'UTraceBaseElement::TraceColor_A' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, TraceHitColor_R) == 0x0000B8, "Member 'UTraceBaseElement::TraceHitColor_R' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, TraceHitColor_G) == 0x0000BC, "Member 'UTraceBaseElement::TraceHitColor_G' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, TraceHitColor_B) == 0x0000C0, "Member 'UTraceBaseElement::TraceHitColor_B' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, TraceHitColor_A) == 0x0000C4, "Member 'UTraceBaseElement::TraceHitColor_A' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, DrawTime) == 0x0000C8, "Member 'UTraceBaseElement::DrawTime' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, bTraceComplex) == 0x0000CC, "Member 'UTraceBaseElement::bTraceComplex' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, bIgnoreSelf) == 0x0000CD, "Member 'UTraceBaseElement::bIgnoreSelf' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, bIsSingle) == 0x0000CE, "Member 'UTraceBaseElement::bIsSingle' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, bIsProfile) == 0x0000CF, "Member 'UTraceBaseElement::bIsProfile' has a wrong offset!");
static_assert(offsetof(UTraceBaseElement, ProfileName) == 0x0000D0, "Member 'UTraceBaseElement::ProfileName' has a wrong offset!");

// Class KuroData.TraceLineElement
// 0x0000 (0x00E0 - 0x00E0)
class UTraceLineElement final : public UTraceBaseElement
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TraceLineElement">();
	}
	static class UTraceLineElement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTraceLineElement>();
	}
};
static_assert(alignof(UTraceLineElement) == 0x000008, "Wrong alignment on UTraceLineElement");
static_assert(sizeof(UTraceLineElement) == 0x0000E0, "Wrong size on UTraceLineElement");

// Class KuroData.TraceBoxElement
// 0x0018 (0x00F8 - 0x00E0)
class UTraceBoxElement final : public UTraceBaseElement
{
public:
	float                                         HalfSizeX;                                         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HalfSizeY;                                         // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HalfSizeZ;                                         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OrientationPitch;                                  // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OrientationYaw;                                    // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OrientationRoll;                                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetBoxHalfSize(float X, float Y, float Z);
	void SetBoxOrientation(float Pitch, float Yaw, float Roll);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TraceBoxElement">();
	}
	static class UTraceBoxElement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTraceBoxElement>();
	}
};
static_assert(alignof(UTraceBoxElement) == 0x000008, "Wrong alignment on UTraceBoxElement");
static_assert(sizeof(UTraceBoxElement) == 0x0000F8, "Wrong size on UTraceBoxElement");
static_assert(offsetof(UTraceBoxElement, HalfSizeX) == 0x0000E0, "Member 'UTraceBoxElement::HalfSizeX' has a wrong offset!");
static_assert(offsetof(UTraceBoxElement, HalfSizeY) == 0x0000E4, "Member 'UTraceBoxElement::HalfSizeY' has a wrong offset!");
static_assert(offsetof(UTraceBoxElement, HalfSizeZ) == 0x0000E8, "Member 'UTraceBoxElement::HalfSizeZ' has a wrong offset!");
static_assert(offsetof(UTraceBoxElement, OrientationPitch) == 0x0000EC, "Member 'UTraceBoxElement::OrientationPitch' has a wrong offset!");
static_assert(offsetof(UTraceBoxElement, OrientationYaw) == 0x0000F0, "Member 'UTraceBoxElement::OrientationYaw' has a wrong offset!");
static_assert(offsetof(UTraceBoxElement, OrientationRoll) == 0x0000F4, "Member 'UTraceBoxElement::OrientationRoll' has a wrong offset!");

// Class KuroData.TraceCapsuleElement
// 0x0008 (0x00E8 - 0x00E0)
class UTraceCapsuleElement final : public UTraceBaseElement
{
public:
	float                                         Radius;                                            // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HalfHeight;                                        // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TraceCapsuleElement">();
	}
	static class UTraceCapsuleElement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTraceCapsuleElement>();
	}
};
static_assert(alignof(UTraceCapsuleElement) == 0x000008, "Wrong alignment on UTraceCapsuleElement");
static_assert(sizeof(UTraceCapsuleElement) == 0x0000E8, "Wrong size on UTraceCapsuleElement");
static_assert(offsetof(UTraceCapsuleElement, Radius) == 0x0000E0, "Member 'UTraceCapsuleElement::Radius' has a wrong offset!");
static_assert(offsetof(UTraceCapsuleElement, HalfHeight) == 0x0000E4, "Member 'UTraceCapsuleElement::HalfHeight' has a wrong offset!");

// Class KuroData.TraceSphereElement
// 0x0008 (0x00E8 - 0x00E0)
class UTraceSphereElement final : public UTraceBaseElement
{
public:
	float                                         Radius;                                            // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TraceSphereElement">();
	}
	static class UTraceSphereElement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTraceSphereElement>();
	}
};
static_assert(alignof(UTraceSphereElement) == 0x000008, "Wrong alignment on UTraceSphereElement");
static_assert(sizeof(UTraceSphereElement) == 0x0000E8, "Wrong size on UTraceSphereElement");
static_assert(offsetof(UTraceSphereElement, Radius) == 0x0000E0, "Member 'UTraceSphereElement::Radius' has a wrong offset!");

}

