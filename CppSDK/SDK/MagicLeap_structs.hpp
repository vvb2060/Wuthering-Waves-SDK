﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeap

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum MagicLeap.PurchaseType
// NumValues: 0x0004
enum class EPurchaseType : uint8
{
	Consumable                               = 0,
	Nonconsumable                            = 1,
	Undefined                                = 2,
	PurchaseType_MAX                         = 3,
};

// Enum MagicLeap.EFocusLostReason
// NumValues: 0x0003
enum class EFocusLostReason : uint8
{
	EFocusLostReason_Invalid                 = 0,
	EFocusLostReason_System                  = 1,
	EFocusLostReason_MAX                     = 2,
};

// Enum MagicLeap.EMagicLeapMeshLOD
// NumValues: 0x0004
enum class EMagicLeapMeshLOD : uint8
{
	Minimum                                  = 0,
	Medium                                   = 1,
	Maximum                                  = 2,
	EMagicLeapMeshLOD_MAX                    = 3,
};

// Enum MagicLeap.EMagicLeapMeshState
// NumValues: 0x0005
enum class EMagicLeapMeshState : uint8
{
	New                                      = 0,
	Updated                                  = 1,
	Deleted                                  = 2,
	Unchanged                                = 3,
	EMagicLeapMeshState_MAX                  = 4,
};

// Enum MagicLeap.EMagicLeapMeshVertexColorMode
// NumValues: 0x0005
enum class EMagicLeapMeshVertexColorMode : uint8
{
	None                                     = 0,
	Confidence                               = 1,
	Block                                    = 2,
	LOD                                      = 3,
	EMagicLeapMeshVertexColorMode_MAX        = 4,
};

// Enum MagicLeap.EMagicLeapMeshType
// NumValues: 0x0003
enum class EMagicLeapMeshType : uint8
{
	Triangles                                = 0,
	PointCloud                               = 1,
	EMagicLeapMeshType_MAX                   = 2,
};

// Enum MagicLeap.EMagicLeapRaycastResultState
// NumValues: 0x0005
enum class EMagicLeapRaycastResultState : uint8
{
	RequestFailed                            = 0,
	NoCollision                              = 1,
	HitUnobserved                            = 2,
	HitObserved                              = 3,
	EMagicLeapRaycastResultState_MAX         = 4,
};

// Enum MagicLeap.CloudStatus
// NumValues: 0x0003
enum class ECloudStatus : uint8
{
	CloudStatus_NotDone                      = 0,
	CloudStatus_Done                         = 1,
	CloudStatus_MAX                          = 2,
};

// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
// NumValues: 0x0005
enum class EMagicLeapHeadTrackingMapEvent : uint8
{
	Lost                                     = 0,
	Recovered                                = 1,
	RecoveryFailed                           = 2,
	NewSession                               = 3,
	EMagicLeapHeadTrackingMapEvent_MAX       = 4,
};

// Enum MagicLeap.EMagicLeapHeadTrackingMode
// NumValues: 0x0004
enum class EMagicLeapHeadTrackingMode : uint8
{
	PositionAndOrientation                   = 0,
	Unavailable                              = 1,
	Unknown                                  = 2,
	EMagicLeapHeadTrackingMode_MAX           = 3,
};

// Enum MagicLeap.EMagicLeapHeadTrackingError
// NumValues: 0x0005
enum class EMagicLeapHeadTrackingError : uint8
{
	None                                     = 0,
	NotEnoughFeatures                        = 1,
	LowLight                                 = 2,
	Unknown                                  = 3,
	EMagicLeapHeadTrackingError_MAX          = 4,
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
// 0x0024 (0x0024 - 0x0000)
struct FMagicLeapRaycastHitResult final
{
public:
	EMagicLeapRaycastResultState                  HitState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitPoint;                                          // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Confidence;                                        // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UserData;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapRaycastHitResult) == 0x000004, "Wrong alignment on FMagicLeapRaycastHitResult");
static_assert(sizeof(FMagicLeapRaycastHitResult) == 0x000024, "Wrong size on FMagicLeapRaycastHitResult");
static_assert(offsetof(FMagicLeapRaycastHitResult, HitState) == 0x000000, "Member 'FMagicLeapRaycastHitResult::HitState' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastHitResult, HitPoint) == 0x000004, "Member 'FMagicLeapRaycastHitResult::HitPoint' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastHitResult, Normal) == 0x000010, "Member 'FMagicLeapRaycastHitResult::Normal' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastHitResult, Confidence) == 0x00001C, "Member 'FMagicLeapRaycastHitResult::Confidence' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastHitResult, UserData) == 0x000020, "Member 'FMagicLeapRaycastHitResult::UserData' has a wrong offset!");

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
// 0x0014 (0x0014 - 0x0000)
struct FMagicLeapMeshBlockRequest final
{
public:
	struct FGuid                                  BlockID;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapMeshLOD                             LevelOfDetail;                                     // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMagicLeapMeshBlockRequest) == 0x000004, "Wrong alignment on FMagicLeapMeshBlockRequest");
static_assert(sizeof(FMagicLeapMeshBlockRequest) == 0x000014, "Wrong size on FMagicLeapMeshBlockRequest");
static_assert(offsetof(FMagicLeapMeshBlockRequest, BlockID) == 0x000000, "Member 'FMagicLeapMeshBlockRequest::BlockID' has a wrong offset!");
static_assert(offsetof(FMagicLeapMeshBlockRequest, LevelOfDetail) == 0x000010, "Member 'FMagicLeapMeshBlockRequest::LevelOfDetail' has a wrong offset!");

// ScriptStruct MagicLeap.PurchaseItemDetails
// 0x0040 (0x0040 - 0x0000)
struct FPurchaseItemDetails final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Price;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPurchaseType                                 Type;                                              // 0x0030(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0xF];                                       // 0x0031(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPurchaseItemDetails) == 0x000008, "Wrong alignment on FPurchaseItemDetails");
static_assert(sizeof(FPurchaseItemDetails) == 0x000040, "Wrong size on FPurchaseItemDetails");
static_assert(offsetof(FPurchaseItemDetails, Price) == 0x000010, "Member 'FPurchaseItemDetails::Price' has a wrong offset!");
static_assert(offsetof(FPurchaseItemDetails, Name) == 0x000020, "Member 'FPurchaseItemDetails::Name' has a wrong offset!");
static_assert(offsetof(FPurchaseItemDetails, Type) == 0x000030, "Member 'FPurchaseItemDetails::Type' has a wrong offset!");

// ScriptStruct MagicLeap.PurchaseConfirmation
// 0x0050 (0x0050 - 0x0000)
struct FPurchaseConfirmation final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PackageName;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x28];                                      // 0x0020(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	EPurchaseType                                 Type;                                              // 0x0048(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPurchaseConfirmation) == 0x000008, "Wrong alignment on FPurchaseConfirmation");
static_assert(sizeof(FPurchaseConfirmation) == 0x000050, "Wrong size on FPurchaseConfirmation");
static_assert(offsetof(FPurchaseConfirmation, PackageName) == 0x000010, "Member 'FPurchaseConfirmation::PackageName' has a wrong offset!");
static_assert(offsetof(FPurchaseConfirmation, Type) == 0x000048, "Member 'FPurchaseConfirmation::Type' has a wrong offset!");

// ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
// 0x001C (0x001C - 0x0000)
struct FMagicLeapGraphicsClientPerformanceInfo final
{
public:
	float                                         FrameStartCPUCompAcquireCPUTimeMs;                 // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameStartCPUFrameEndGPUTimeMs;                    // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameStartCPUFrameStartCPUTimeMs;                  // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameDurationCPUTimeMs;                            // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameDurationGPUTimeMs;                            // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameInternalDurationCPUTimeMs;                    // 0x0014(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameInternalDurationGPUTimeMs;                    // 0x0018(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapGraphicsClientPerformanceInfo) == 0x000004, "Wrong alignment on FMagicLeapGraphicsClientPerformanceInfo");
static_assert(sizeof(FMagicLeapGraphicsClientPerformanceInfo) == 0x00001C, "Wrong size on FMagicLeapGraphicsClientPerformanceInfo");
static_assert(offsetof(FMagicLeapGraphicsClientPerformanceInfo, FrameStartCPUCompAcquireCPUTimeMs) == 0x000000, "Member 'FMagicLeapGraphicsClientPerformanceInfo::FrameStartCPUCompAcquireCPUTimeMs' has a wrong offset!");
static_assert(offsetof(FMagicLeapGraphicsClientPerformanceInfo, FrameStartCPUFrameEndGPUTimeMs) == 0x000004, "Member 'FMagicLeapGraphicsClientPerformanceInfo::FrameStartCPUFrameEndGPUTimeMs' has a wrong offset!");
static_assert(offsetof(FMagicLeapGraphicsClientPerformanceInfo, FrameStartCPUFrameStartCPUTimeMs) == 0x000008, "Member 'FMagicLeapGraphicsClientPerformanceInfo::FrameStartCPUFrameStartCPUTimeMs' has a wrong offset!");
static_assert(offsetof(FMagicLeapGraphicsClientPerformanceInfo, FrameDurationCPUTimeMs) == 0x00000C, "Member 'FMagicLeapGraphicsClientPerformanceInfo::FrameDurationCPUTimeMs' has a wrong offset!");
static_assert(offsetof(FMagicLeapGraphicsClientPerformanceInfo, FrameDurationGPUTimeMs) == 0x000010, "Member 'FMagicLeapGraphicsClientPerformanceInfo::FrameDurationGPUTimeMs' has a wrong offset!");
static_assert(offsetof(FMagicLeapGraphicsClientPerformanceInfo, FrameInternalDurationCPUTimeMs) == 0x000014, "Member 'FMagicLeapGraphicsClientPerformanceInfo::FrameInternalDurationCPUTimeMs' has a wrong offset!");
static_assert(offsetof(FMagicLeapGraphicsClientPerformanceInfo, FrameInternalDurationGPUTimeMs) == 0x000018, "Member 'FMagicLeapGraphicsClientPerformanceInfo::FrameInternalDurationGPUTimeMs' has a wrong offset!");

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
// 0x0048 (0x0048 - 0x0000)
struct FMagicLeapMeshBlockInfo final
{
public:
	struct FGuid                                  BlockID;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BlockPosition;                                     // 0x0010(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               BlockOrientation;                                  // 0x001C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                BlockDimensions;                                   // 0x0028(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              Timestamp;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapMeshState                           BlockState;                                        // 0x0040(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMagicLeapMeshBlockInfo) == 0x000008, "Wrong alignment on FMagicLeapMeshBlockInfo");
static_assert(sizeof(FMagicLeapMeshBlockInfo) == 0x000048, "Wrong size on FMagicLeapMeshBlockInfo");
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockID) == 0x000000, "Member 'FMagicLeapMeshBlockInfo::BlockID' has a wrong offset!");
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockPosition) == 0x000010, "Member 'FMagicLeapMeshBlockInfo::BlockPosition' has a wrong offset!");
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockOrientation) == 0x00001C, "Member 'FMagicLeapMeshBlockInfo::BlockOrientation' has a wrong offset!");
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockDimensions) == 0x000028, "Member 'FMagicLeapMeshBlockInfo::BlockDimensions' has a wrong offset!");
static_assert(offsetof(FMagicLeapMeshBlockInfo, Timestamp) == 0x000038, "Member 'FMagicLeapMeshBlockInfo::Timestamp' has a wrong offset!");
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockState) == 0x000040, "Member 'FMagicLeapMeshBlockInfo::BlockState' has a wrong offset!");

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
// 0x0018 (0x0018 - 0x0000)
struct FMagicLeapTrackingMeshInfo final
{
public:
	struct FTimespan                              Timestamp;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapMeshBlockInfo>        BlockData;                                         // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapTrackingMeshInfo) == 0x000008, "Wrong alignment on FMagicLeapTrackingMeshInfo");
static_assert(sizeof(FMagicLeapTrackingMeshInfo) == 0x000018, "Wrong size on FMagicLeapTrackingMeshInfo");
static_assert(offsetof(FMagicLeapTrackingMeshInfo, Timestamp) == 0x000000, "Member 'FMagicLeapTrackingMeshInfo::Timestamp' has a wrong offset!");
static_assert(offsetof(FMagicLeapTrackingMeshInfo, BlockData) == 0x000008, "Member 'FMagicLeapTrackingMeshInfo::BlockData' has a wrong offset!");

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
// 0x0038 (0x0038 - 0x0000)
struct FMagicLeapRaycastQueryParams final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Direction;                                         // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                UpVector;                                          // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Width;                                             // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Height;                                            // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HorizontalFovDegrees;                              // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CollideWithUnobserved;                             // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UserData;                                          // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapRaycastQueryParams) == 0x000004, "Wrong alignment on FMagicLeapRaycastQueryParams");
static_assert(sizeof(FMagicLeapRaycastQueryParams) == 0x000038, "Wrong size on FMagicLeapRaycastQueryParams");
static_assert(offsetof(FMagicLeapRaycastQueryParams, Position) == 0x000000, "Member 'FMagicLeapRaycastQueryParams::Position' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastQueryParams, Direction) == 0x00000C, "Member 'FMagicLeapRaycastQueryParams::Direction' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastQueryParams, UpVector) == 0x000018, "Member 'FMagicLeapRaycastQueryParams::UpVector' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastQueryParams, Width) == 0x000024, "Member 'FMagicLeapRaycastQueryParams::Width' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastQueryParams, Height) == 0x000028, "Member 'FMagicLeapRaycastQueryParams::Height' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastQueryParams, HorizontalFovDegrees) == 0x00002C, "Member 'FMagicLeapRaycastQueryParams::HorizontalFovDegrees' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastQueryParams, CollideWithUnobserved) == 0x000030, "Member 'FMagicLeapRaycastQueryParams::CollideWithUnobserved' has a wrong offset!");
static_assert(offsetof(FMagicLeapRaycastQueryParams, UserData) == 0x000034, "Member 'FMagicLeapRaycastQueryParams::UserData' has a wrong offset!");

// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
// 0x0008 (0x0008 - 0x0000)
struct FMagicLeapHeadTrackingState final
{
public:
	EMagicLeapHeadTrackingMode                    Mode;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapHeadTrackingError                   Error;                                             // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Confidence;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapHeadTrackingState) == 0x000004, "Wrong alignment on FMagicLeapHeadTrackingState");
static_assert(sizeof(FMagicLeapHeadTrackingState) == 0x000008, "Wrong size on FMagicLeapHeadTrackingState");
static_assert(offsetof(FMagicLeapHeadTrackingState, Mode) == 0x000000, "Member 'FMagicLeapHeadTrackingState::Mode' has a wrong offset!");
static_assert(offsetof(FMagicLeapHeadTrackingState, Error) == 0x000001, "Member 'FMagicLeapHeadTrackingState::Error' has a wrong offset!");
static_assert(offsetof(FMagicLeapHeadTrackingState, Confidence) == 0x000004, "Member 'FMagicLeapHeadTrackingState::Confidence' has a wrong offset!");

// ScriptStruct MagicLeap.MagicLeapResult
// 0x0018 (0x0018 - 0x0000)
struct FMagicLeapResult final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AdditionalInfo;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapResult) == 0x000008, "Wrong alignment on FMagicLeapResult");
static_assert(sizeof(FMagicLeapResult) == 0x000018, "Wrong size on FMagicLeapResult");
static_assert(offsetof(FMagicLeapResult, bSuccess) == 0x000000, "Member 'FMagicLeapResult::bSuccess' has a wrong offset!");
static_assert(offsetof(FMagicLeapResult, AdditionalInfo) == 0x000008, "Member 'FMagicLeapResult::AdditionalInfo' has a wrong offset!");

}

