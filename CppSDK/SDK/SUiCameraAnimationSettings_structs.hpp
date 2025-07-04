﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SUiCameraAnimationSettings

#include "Basic.hpp"

#include "EUiCameraAnimationTargetType_structs.hpp"
#include "Engine_structs.hpp"
#include "EUiCameraAnimationLocationType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EUiCameraAnimationRotationType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SUiCameraAnimationSettings.SUiCameraAnimationSettings
// 0x01A8 (0x01A8 - 0x0000)
struct FSUiCameraAnimationSettings final
{
public:
	bool                                          IsEmptyState_137_35A3DA104E73C0B4C24623A8E65E6521; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReplaceCameraTag_135_97FB1B474D73E1DDCDA796A944C123F9; // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Description_57_2699C81243FDF267B243358BBA97F4B9;   // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SocketName_2_AAFC68CF40B7CB79547BDEA3767CBF3F;     // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EUiCameraAnimationTargetType                  TargetType_63_4B5CEAC5486479B38EDA97AAB776C749;    // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUiCameraAnimationLocationType                LocationType_5_EF25D2BD4994F34B2C49939A33385649;   // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location_8_F6BD70F5468065051D264E804809BA03;       // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUiCameraAnimationRotationType                RotationType_11_CC30C4DD4FC8D1B8989F31BF5B7DA29F;  // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation_14_FFA6184B46A00B877705ACA77144EF83;      // 0x004C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsTrack_102_E962456B45C27131517B3B80A2DD9885;      // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsTrackWorldLocation_101_DF6B22B5403AD1E1AB83248CF218B99E; // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOverrideTrackPitch_115_51F73C76494575C5637BD98207C8F671; // 0x005A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B[0x1];                                       // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TrackPitchOverride_112_AFC05914412E39792BD3CC85DF76E59B; // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTargetActorAsCenter_140_246A0ACB4AD5EE115D42AE91FF7BD3A5; // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TrackLocation_98_D48F83A34EBE64CC4E14ED8D7019CF5E; // 0x0064(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ArmLength_18_7DFFED6740C21E2E0CCE478BC5514EA5;     // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ArmOffsetLocation_22_4D2D8C614EC242BC4A37F3B033C9DFE5; // 0x0074(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ArmOffsetRotation_26_6264F5004D7B7158D67B309F23F6CA61; // 0x0080(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDynamicFov_156_49CA1E6B4DCFD9F4B3DD75AA3D60317E; // 0x008C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              DynamicBaseResolution_152_2A0008844AAF4DB8A6F7A7810C0D40AD; // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraFieldOfView_32_18D320494E237D930C76D2AB41F97110; // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ArmCollisionTest_29_4798165641A47EB2504133A22DCF4EA2; // 0x009C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FocalDistance_50_76CE40E64216E8630D1D51BC8F2B1CD3; // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Aperture_91_D91368A04312625350B4DCB97728044A;      // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FocalRegion_143_B718BAF34313890245BC5E9767C1D5ED;  // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProcessBlendWeight_52_49ECD5C7423F58B4AD617784D0D6A3AD; // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendInTime_34_97B18B6441CDC0DEDAF3B39BE5713CD2;   // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendInExp_36_319D6BA94CE2AAB406E7EAA492BB1801;    // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ULevelSequence>          BlendInCameraSequence_118_BCE373AC40C0D79EB09C0AB0F05763B6; // 0x00B8(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         BlendInCameraSequencePlayRate_129_CFBFCC3F457E2A032A15BAB3C49FACED; // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRevertBlendInCameraSequence_126_EFB33A0C4550DEE59DB784886AA014E1; // 0x00EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ULevelSequence>          BlendOutCameraSequence_120_505CFAF7433ED0ED7C1B7281CA4D0934; // 0x00F0(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         BlendOutCameraSequencePlayRate_130_8B59E93B47D81EC6D36568862F70E966; // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRevertBlendOutCameraSequence_128_10B9C99141A62215DB23D88E713697E2; // 0x0124(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EViewTargetBlendFunction                      BlendInFunction_39_30697DD84302198D54BDE19849302655; // 0x0125(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_126[0x2];                                      // 0x0126(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ULevelSequence>          BlendInSequence_66_F98E6AF045E2028FDDD3A795C1278A60; // 0x0128(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          bBlendInSequenceReverse_71_B2DA07AB4E4B8AF4532DDAA5A24C4A8F; // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x3];                                      // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendInPlayRate_86_08C8D85C48D333E2829627B8C8302681; // 0x015C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendOutTime_42_0009F45D41DDA23BC7F10B8AA1499560;  // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendOutExp_44_089F028D4AACA42E06365DB9E4F20C4B;   // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EViewTargetBlendFunction                      BlendOutFunction_47_F95C1D8745DCA7A61EB54D8E130A919A; // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ULevelSequence>          BlendOutSequence_78_92B4FF6F45D66BE027C61C816AF83160; // 0x0170(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         BlendOutPlayRate_88_1359BA3349E592ACE4596C9E4D8AC112; // 0x01A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBlendOutSequenceReverse_81_A2612ABC4C193747A4D910BAB97ED30D; // 0x01A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bResetCameraTransform_54_84C8405C475B0DDBF978D8A7703FE77B; // 0x01A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSUiCameraAnimationSettings) == 0x000008, "Wrong alignment on FSUiCameraAnimationSettings");
static_assert(sizeof(FSUiCameraAnimationSettings) == 0x0001A8, "Wrong size on FSUiCameraAnimationSettings");
static_assert(offsetof(FSUiCameraAnimationSettings, IsEmptyState_137_35A3DA104E73C0B4C24623A8E65E6521) == 0x000000, "Member 'FSUiCameraAnimationSettings::IsEmptyState_137_35A3DA104E73C0B4C24623A8E65E6521' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, ReplaceCameraTag_135_97FB1B474D73E1DDCDA796A944C123F9) == 0x000008, "Member 'FSUiCameraAnimationSettings::ReplaceCameraTag_135_97FB1B474D73E1DDCDA796A944C123F9' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, Description_57_2699C81243FDF267B243358BBA97F4B9) == 0x000018, "Member 'FSUiCameraAnimationSettings::Description_57_2699C81243FDF267B243358BBA97F4B9' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, SocketName_2_AAFC68CF40B7CB79547BDEA3767CBF3F) == 0x000028, "Member 'FSUiCameraAnimationSettings::SocketName_2_AAFC68CF40B7CB79547BDEA3767CBF3F' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, TargetType_63_4B5CEAC5486479B38EDA97AAB776C749) == 0x000038, "Member 'FSUiCameraAnimationSettings::TargetType_63_4B5CEAC5486479B38EDA97AAB776C749' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, LocationType_5_EF25D2BD4994F34B2C49939A33385649) == 0x000039, "Member 'FSUiCameraAnimationSettings::LocationType_5_EF25D2BD4994F34B2C49939A33385649' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, Location_8_F6BD70F5468065051D264E804809BA03) == 0x00003C, "Member 'FSUiCameraAnimationSettings::Location_8_F6BD70F5468065051D264E804809BA03' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, RotationType_11_CC30C4DD4FC8D1B8989F31BF5B7DA29F) == 0x000048, "Member 'FSUiCameraAnimationSettings::RotationType_11_CC30C4DD4FC8D1B8989F31BF5B7DA29F' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, Rotation_14_FFA6184B46A00B877705ACA77144EF83) == 0x00004C, "Member 'FSUiCameraAnimationSettings::Rotation_14_FFA6184B46A00B877705ACA77144EF83' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, IsTrack_102_E962456B45C27131517B3B80A2DD9885) == 0x000058, "Member 'FSUiCameraAnimationSettings::IsTrack_102_E962456B45C27131517B3B80A2DD9885' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, IsTrackWorldLocation_101_DF6B22B5403AD1E1AB83248CF218B99E) == 0x000059, "Member 'FSUiCameraAnimationSettings::IsTrackWorldLocation_101_DF6B22B5403AD1E1AB83248CF218B99E' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, bOverrideTrackPitch_115_51F73C76494575C5637BD98207C8F671) == 0x00005A, "Member 'FSUiCameraAnimationSettings::bOverrideTrackPitch_115_51F73C76494575C5637BD98207C8F671' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, TrackPitchOverride_112_AFC05914412E39792BD3CC85DF76E59B) == 0x00005C, "Member 'FSUiCameraAnimationSettings::TrackPitchOverride_112_AFC05914412E39792BD3CC85DF76E59B' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, bTargetActorAsCenter_140_246A0ACB4AD5EE115D42AE91FF7BD3A5) == 0x000060, "Member 'FSUiCameraAnimationSettings::bTargetActorAsCenter_140_246A0ACB4AD5EE115D42AE91FF7BD3A5' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, TrackLocation_98_D48F83A34EBE64CC4E14ED8D7019CF5E) == 0x000064, "Member 'FSUiCameraAnimationSettings::TrackLocation_98_D48F83A34EBE64CC4E14ED8D7019CF5E' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, ArmLength_18_7DFFED6740C21E2E0CCE478BC5514EA5) == 0x000070, "Member 'FSUiCameraAnimationSettings::ArmLength_18_7DFFED6740C21E2E0CCE478BC5514EA5' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, ArmOffsetLocation_22_4D2D8C614EC242BC4A37F3B033C9DFE5) == 0x000074, "Member 'FSUiCameraAnimationSettings::ArmOffsetLocation_22_4D2D8C614EC242BC4A37F3B033C9DFE5' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, ArmOffsetRotation_26_6264F5004D7B7158D67B309F23F6CA61) == 0x000080, "Member 'FSUiCameraAnimationSettings::ArmOffsetRotation_26_6264F5004D7B7158D67B309F23F6CA61' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, IsDynamicFov_156_49CA1E6B4DCFD9F4B3DD75AA3D60317E) == 0x00008C, "Member 'FSUiCameraAnimationSettings::IsDynamicFov_156_49CA1E6B4DCFD9F4B3DD75AA3D60317E' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, DynamicBaseResolution_152_2A0008844AAF4DB8A6F7A7810C0D40AD) == 0x000090, "Member 'FSUiCameraAnimationSettings::DynamicBaseResolution_152_2A0008844AAF4DB8A6F7A7810C0D40AD' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, CameraFieldOfView_32_18D320494E237D930C76D2AB41F97110) == 0x000098, "Member 'FSUiCameraAnimationSettings::CameraFieldOfView_32_18D320494E237D930C76D2AB41F97110' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, ArmCollisionTest_29_4798165641A47EB2504133A22DCF4EA2) == 0x00009C, "Member 'FSUiCameraAnimationSettings::ArmCollisionTest_29_4798165641A47EB2504133A22DCF4EA2' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, FocalDistance_50_76CE40E64216E8630D1D51BC8F2B1CD3) == 0x0000A0, "Member 'FSUiCameraAnimationSettings::FocalDistance_50_76CE40E64216E8630D1D51BC8F2B1CD3' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, Aperture_91_D91368A04312625350B4DCB97728044A) == 0x0000A4, "Member 'FSUiCameraAnimationSettings::Aperture_91_D91368A04312625350B4DCB97728044A' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, FocalRegion_143_B718BAF34313890245BC5E9767C1D5ED) == 0x0000A8, "Member 'FSUiCameraAnimationSettings::FocalRegion_143_B718BAF34313890245BC5E9767C1D5ED' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, PostProcessBlendWeight_52_49ECD5C7423F58B4AD617784D0D6A3AD) == 0x0000AC, "Member 'FSUiCameraAnimationSettings::PostProcessBlendWeight_52_49ECD5C7423F58B4AD617784D0D6A3AD' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendInTime_34_97B18B6441CDC0DEDAF3B39BE5713CD2) == 0x0000B0, "Member 'FSUiCameraAnimationSettings::BlendInTime_34_97B18B6441CDC0DEDAF3B39BE5713CD2' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendInExp_36_319D6BA94CE2AAB406E7EAA492BB1801) == 0x0000B4, "Member 'FSUiCameraAnimationSettings::BlendInExp_36_319D6BA94CE2AAB406E7EAA492BB1801' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendInCameraSequence_118_BCE373AC40C0D79EB09C0AB0F05763B6) == 0x0000B8, "Member 'FSUiCameraAnimationSettings::BlendInCameraSequence_118_BCE373AC40C0D79EB09C0AB0F05763B6' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendInCameraSequencePlayRate_129_CFBFCC3F457E2A032A15BAB3C49FACED) == 0x0000E8, "Member 'FSUiCameraAnimationSettings::BlendInCameraSequencePlayRate_129_CFBFCC3F457E2A032A15BAB3C49FACED' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, bRevertBlendInCameraSequence_126_EFB33A0C4550DEE59DB784886AA014E1) == 0x0000EC, "Member 'FSUiCameraAnimationSettings::bRevertBlendInCameraSequence_126_EFB33A0C4550DEE59DB784886AA014E1' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendOutCameraSequence_120_505CFAF7433ED0ED7C1B7281CA4D0934) == 0x0000F0, "Member 'FSUiCameraAnimationSettings::BlendOutCameraSequence_120_505CFAF7433ED0ED7C1B7281CA4D0934' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendOutCameraSequencePlayRate_130_8B59E93B47D81EC6D36568862F70E966) == 0x000120, "Member 'FSUiCameraAnimationSettings::BlendOutCameraSequencePlayRate_130_8B59E93B47D81EC6D36568862F70E966' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, bRevertBlendOutCameraSequence_128_10B9C99141A62215DB23D88E713697E2) == 0x000124, "Member 'FSUiCameraAnimationSettings::bRevertBlendOutCameraSequence_128_10B9C99141A62215DB23D88E713697E2' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendInFunction_39_30697DD84302198D54BDE19849302655) == 0x000125, "Member 'FSUiCameraAnimationSettings::BlendInFunction_39_30697DD84302198D54BDE19849302655' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendInSequence_66_F98E6AF045E2028FDDD3A795C1278A60) == 0x000128, "Member 'FSUiCameraAnimationSettings::BlendInSequence_66_F98E6AF045E2028FDDD3A795C1278A60' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, bBlendInSequenceReverse_71_B2DA07AB4E4B8AF4532DDAA5A24C4A8F) == 0x000158, "Member 'FSUiCameraAnimationSettings::bBlendInSequenceReverse_71_B2DA07AB4E4B8AF4532DDAA5A24C4A8F' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendInPlayRate_86_08C8D85C48D333E2829627B8C8302681) == 0x00015C, "Member 'FSUiCameraAnimationSettings::BlendInPlayRate_86_08C8D85C48D333E2829627B8C8302681' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendOutTime_42_0009F45D41DDA23BC7F10B8AA1499560) == 0x000160, "Member 'FSUiCameraAnimationSettings::BlendOutTime_42_0009F45D41DDA23BC7F10B8AA1499560' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendOutExp_44_089F028D4AACA42E06365DB9E4F20C4B) == 0x000164, "Member 'FSUiCameraAnimationSettings::BlendOutExp_44_089F028D4AACA42E06365DB9E4F20C4B' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendOutFunction_47_F95C1D8745DCA7A61EB54D8E130A919A) == 0x000168, "Member 'FSUiCameraAnimationSettings::BlendOutFunction_47_F95C1D8745DCA7A61EB54D8E130A919A' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendOutSequence_78_92B4FF6F45D66BE027C61C816AF83160) == 0x000170, "Member 'FSUiCameraAnimationSettings::BlendOutSequence_78_92B4FF6F45D66BE027C61C816AF83160' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, BlendOutPlayRate_88_1359BA3349E592ACE4596C9E4D8AC112) == 0x0001A0, "Member 'FSUiCameraAnimationSettings::BlendOutPlayRate_88_1359BA3349E592ACE4596C9E4D8AC112' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, bBlendOutSequenceReverse_81_A2612ABC4C193747A4D910BAB97ED30D) == 0x0001A4, "Member 'FSUiCameraAnimationSettings::bBlendOutSequenceReverse_81_A2612ABC4C193747A4D910BAB97ED30D' has a wrong offset!");
static_assert(offsetof(FSUiCameraAnimationSettings, bResetCameraTransform_54_84C8405C475B0DDBF978D8A7703FE77B) == 0x0001A5, "Member 'FSUiCameraAnimationSettings::bResetCameraTransform_54_84C8405C475B0DDBF978D8A7703FE77B' has a wrong offset!");

}

