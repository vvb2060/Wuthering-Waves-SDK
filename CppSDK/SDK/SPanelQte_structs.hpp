﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SPanelQte

#include "Basic.hpp"

#include "EPanelQteViewType_structs.hpp"
#include "EBattleUIChild_structs.hpp"
#include "SPanelQteAction_structs.hpp"


namespace SDK
{

// UserDefinedStruct SPanelQte.SPanelQte
// 0x00C8 (0x00C8 - 0x0000)
struct FSPanelQte final
{
public:
	EPanelQteViewType                             ViewType_6_30F290C549F8B08518D4999F98079171;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration_2_8BE797FC4ECCC7B83368359F0DA20DA7;       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorldTimeDilation_30_35AC006F4A84D1B00C8993987FB221EF; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinSuccessCount_12_793730E348903585CF7885AAD7281E90; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxSuccessCount_11_0C675AF74F9FF90F5063E6B04B829D36; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideAllBattleUi_53_867D7AC7430AC020E5BA9CBDCE7C2391; // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EBattleUIChild>                        HideUIElement_31_B09A84A54CC18D8FE3E772864D30209B; // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSPanelQteAction>               SuccessActions_24_595DBA5B427AB2898D526088988080DE; // 0x0028(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSPanelQteAction>               FailActions_25_957EBD4543704EE96F3B1DB460D121CD;   // 0x0038(0x0010)(Edit, BlueprintVisible)
	int64                                         BuffOnInput_46_AA179276492FA25EC7D01EAAA4FE7CED;   // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BuffCd_51_0D18113C4B6EFD44FB718CB4019163F5;        // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CameraShakeOnInput_35_05708E4743D60D91309FF1A4DBC40190; // 0x0054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CameraShakeType_41_48B958D547C8585498DECB89BB9E8536; // 0x0058(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                 Action_57_9BCCB1CD4843CE536C56AE8CEFF6B6DF;        // 0x0088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ULGUITexturePackerSpriteData> Icon_61_B9FC411C4C4579CB0686BE94D2ACD754;     // 0x0098(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FSPanelQte) == 0x000008, "Wrong alignment on FSPanelQte");
static_assert(sizeof(FSPanelQte) == 0x0000C8, "Wrong size on FSPanelQte");
static_assert(offsetof(FSPanelQte, ViewType_6_30F290C549F8B08518D4999F98079171) == 0x000000, "Member 'FSPanelQte::ViewType_6_30F290C549F8B08518D4999F98079171' has a wrong offset!");
static_assert(offsetof(FSPanelQte, Duration_2_8BE797FC4ECCC7B83368359F0DA20DA7) == 0x000004, "Member 'FSPanelQte::Duration_2_8BE797FC4ECCC7B83368359F0DA20DA7' has a wrong offset!");
static_assert(offsetof(FSPanelQte, WorldTimeDilation_30_35AC006F4A84D1B00C8993987FB221EF) == 0x000008, "Member 'FSPanelQte::WorldTimeDilation_30_35AC006F4A84D1B00C8993987FB221EF' has a wrong offset!");
static_assert(offsetof(FSPanelQte, MinSuccessCount_12_793730E348903585CF7885AAD7281E90) == 0x00000C, "Member 'FSPanelQte::MinSuccessCount_12_793730E348903585CF7885AAD7281E90' has a wrong offset!");
static_assert(offsetof(FSPanelQte, MaxSuccessCount_11_0C675AF74F9FF90F5063E6B04B829D36) == 0x000010, "Member 'FSPanelQte::MaxSuccessCount_11_0C675AF74F9FF90F5063E6B04B829D36' has a wrong offset!");
static_assert(offsetof(FSPanelQte, HideAllBattleUi_53_867D7AC7430AC020E5BA9CBDCE7C2391) == 0x000014, "Member 'FSPanelQte::HideAllBattleUi_53_867D7AC7430AC020E5BA9CBDCE7C2391' has a wrong offset!");
static_assert(offsetof(FSPanelQte, HideUIElement_31_B09A84A54CC18D8FE3E772864D30209B) == 0x000018, "Member 'FSPanelQte::HideUIElement_31_B09A84A54CC18D8FE3E772864D30209B' has a wrong offset!");
static_assert(offsetof(FSPanelQte, SuccessActions_24_595DBA5B427AB2898D526088988080DE) == 0x000028, "Member 'FSPanelQte::SuccessActions_24_595DBA5B427AB2898D526088988080DE' has a wrong offset!");
static_assert(offsetof(FSPanelQte, FailActions_25_957EBD4543704EE96F3B1DB460D121CD) == 0x000038, "Member 'FSPanelQte::FailActions_25_957EBD4543704EE96F3B1DB460D121CD' has a wrong offset!");
static_assert(offsetof(FSPanelQte, BuffOnInput_46_AA179276492FA25EC7D01EAAA4FE7CED) == 0x000048, "Member 'FSPanelQte::BuffOnInput_46_AA179276492FA25EC7D01EAAA4FE7CED' has a wrong offset!");
static_assert(offsetof(FSPanelQte, BuffCd_51_0D18113C4B6EFD44FB718CB4019163F5) == 0x000050, "Member 'FSPanelQte::BuffCd_51_0D18113C4B6EFD44FB718CB4019163F5' has a wrong offset!");
static_assert(offsetof(FSPanelQte, CameraShakeOnInput_35_05708E4743D60D91309FF1A4DBC40190) == 0x000054, "Member 'FSPanelQte::CameraShakeOnInput_35_05708E4743D60D91309FF1A4DBC40190' has a wrong offset!");
static_assert(offsetof(FSPanelQte, CameraShakeType_41_48B958D547C8585498DECB89BB9E8536) == 0x000058, "Member 'FSPanelQte::CameraShakeType_41_48B958D547C8585498DECB89BB9E8536' has a wrong offset!");
static_assert(offsetof(FSPanelQte, Action_57_9BCCB1CD4843CE536C56AE8CEFF6B6DF) == 0x000088, "Member 'FSPanelQte::Action_57_9BCCB1CD4843CE536C56AE8CEFF6B6DF' has a wrong offset!");
static_assert(offsetof(FSPanelQte, Icon_61_B9FC411C4C4579CB0686BE94D2ACD754) == 0x000098, "Member 'FSPanelQte::Icon_61_B9FC411C4C4579CB0686BE94D2ACD754' has a wrong offset!");

}

