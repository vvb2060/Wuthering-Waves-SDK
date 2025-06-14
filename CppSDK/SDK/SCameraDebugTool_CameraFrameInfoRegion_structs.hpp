﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCameraDebugTool_CameraFrameInfoRegion

#include "Basic.hpp"

#include "SCameraDebugTool_CameraFrameInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct SCameraDebugTool_CameraFrameInfoRegion.SCameraDebugTool_CameraFrameInfoRegion
// 0x0020 (0x0020 - 0x0000)
struct FSCameraDebugTool_CameraFrameInfoRegion final
{
public:
	int64                                         StartFrame_2_59B06B004484756D9D221D913C493B61;     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         EndFrame_4_ABEF1C9D4E219ABE506A80AAC8AC3116;       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSCameraDebugTool_CameraFrameInfo> CameraFrameInfoArray_9_2F78B6014E419551AA6D51846840B4BC; // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSCameraDebugTool_CameraFrameInfoRegion) == 0x000008, "Wrong alignment on FSCameraDebugTool_CameraFrameInfoRegion");
static_assert(sizeof(FSCameraDebugTool_CameraFrameInfoRegion) == 0x000020, "Wrong size on FSCameraDebugTool_CameraFrameInfoRegion");
static_assert(offsetof(FSCameraDebugTool_CameraFrameInfoRegion, StartFrame_2_59B06B004484756D9D221D913C493B61) == 0x000000, "Member 'FSCameraDebugTool_CameraFrameInfoRegion::StartFrame_2_59B06B004484756D9D221D913C493B61' has a wrong offset!");
static_assert(offsetof(FSCameraDebugTool_CameraFrameInfoRegion, EndFrame_4_ABEF1C9D4E219ABE506A80AAC8AC3116) == 0x000008, "Member 'FSCameraDebugTool_CameraFrameInfoRegion::EndFrame_4_ABEF1C9D4E219ABE506A80AAC8AC3116' has a wrong offset!");
static_assert(offsetof(FSCameraDebugTool_CameraFrameInfoRegion, CameraFrameInfoArray_9_2F78B6014E419551AA6D51846840B4BC) == 0x000010, "Member 'FSCameraDebugTool_CameraFrameInfoRegion::CameraFrameInfoArray_9_2F78B6014E419551AA6D51846840B4BC' has a wrong offset!");

}

