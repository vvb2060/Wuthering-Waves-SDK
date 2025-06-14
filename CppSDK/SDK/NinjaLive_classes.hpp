﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NinjaLive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InactiveBehaviour_Enum_structs.hpp"
#include "InputCore_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "UserInput_Enum_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass NinjaLive.NinjaLive_C
// 0x0278 (0x0528 - 0x02B0)
class ANinjaLive_C final : public AUKuroCustomCookActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNinjaLiveComponent_C*                  NinjaLiveComponent;                                // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InteractionVolume;                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          ActivationVolume;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialBillboardComponent*            EditorIcon;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TraceMesh;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RT_DensityPreview;                                 // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      InactiveGrayMaterial;                              // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableBlueprint;                                  // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeCounterForBrush;                               // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MousePressed;                                      // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShowTraceMeshInEditor;                             // 0x0305(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_306[0x2];                                      // 0x0306(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TraceMeshSize;                                     // 0x0308(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EUserInput_Enum                               UserInputBasedInteraction;                         // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OverlapBasedInteraction;                           // 0x0315(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_316[0x2];                                      // 0x0316(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ANinjaLive_C*>                   NinjaLIVECollisionExclude;                         // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         Time;                                              // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SimActivatedByPawnProximity;                       // 0x032C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowActivationVolumeInEditor;                      // 0x032D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32E[0x2];                                      // 0x032E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ActivationVolumeSize;                              // 0x0330(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         ActivatorProximityCheckFrequency;                  // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionChannel                             ActivatorType;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Activator;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PawnInsideActivationBounds;                        // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InitDone;                                          // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BeginPlaySupressed;                                // 0x0352(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseTraceMeshAsInteractionVolume;                   // 0x0353(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowInteractionVolumeInEditor;                     // 0x0354(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_355[0x3];                                      // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InteractionVolumeSize;                             // 0x0358(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  MultipleTouchLookup;                               // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TickRateCustom;                                    // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37C[0x4];                                      // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    InteractionVolumeTemplate;                         // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TrackActorPrimitiveComponentsWithTag;              // 0x0388(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TrackActorSkeletalMeshComponentsWithTag;           // 0x0394(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      OverlapFilterInclusiveObjType;                     // 0x03A0(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           OverlapFilterInclusiveBoneNameExact;               // 0x03B0(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         OverlapFilterInclusiveBoneNamePartial;             // 0x03C0(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         ExcludeSpecificActorsFromOverlap;                  // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          AutoExcludeLargeOverlappingObjects;                // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ECollisionChannel, EObjectTypeQuery>     OverlapFilterInclusiveCollisionType;               // 0x03E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	EInactiveBehaviour_Enum                       TraceMeshInactiveBehaviour;                        // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ActivationEventsDebugPrint;                        // 0x0439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SimContainerCapacityWarning;                       // 0x043A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SaveDebugTextToLog;                                // 0x043B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         DebugTextLifeTimeLength;                           // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OverlappingSkeletalMesh;                           // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BrushStrengthTemp2;                                // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InputFeedbackTemp1;                                // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableAndNotTickBlock;                            // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451[0x7];                                      // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            OverlappingComponents;                             // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                         OverlappingActors;                                 // 0x0468(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TMap<int32, class UPrimitiveComponent*>       SkeletalMesh_TempArray_Pairs;                      // 0x0478(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                         OverlappingActorsInitial;                          // 0x04C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMulticastInlineDelegate<void()>              OwnerRePlayEvent;                                  // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          OverrideComponentVariables;                        // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AutoConnectToMemoryPool_IF_Found;                  // 0x04E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EA[0x2];                                      // 0x04EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutputFilterMaterialIndex;                         // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowLODdebugMessagesOnScreen;                      // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F1[0x3];                                      // 0x04F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GlobalBrushScale;                                  // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LOD1_ReduceIterations;                             // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LOD2_ReduceSamplingFPS;                            // 0x04F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LOD3_ReduceCollisionAmount;                        // 0x04FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB[0x1];                                      // 0x04FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinSamplingFPS;                                    // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LOD_FarBound;                                      // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LOD_NearBound;                                     // 0x0504(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DownscaleCollisionPainterResolution;               // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DownscalePressureResolution;                       // 0x050C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SingleTargetMode;                                  // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InitialActorsProcessed;                            // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SKMeshTagged;                                      // 0x0512(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOnlySelfTraceMesh;                                // 0x0513(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOnlyFirstSkeletal;                                // 0x0514(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_515[0x3];                                      // 0x0515(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMeshComponent*>         tempArray;                                         // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ResetTempArrays();
	void UserConstructionScript();
	void InpTchEvt_Released(ETouchIndex FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(ETouchIndex FingerIndex, const struct FVector& Location);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void LiveActivation(class FName ParamName, float FadeTimeOfBrush, float FadeTimeOfCanvas);
	void LiveFluidParams(float BrushSize);
	void ReceiveTick(float DeltaSeconds_0);
	void ReceiveBeginPlay();
	void RePlay();
	void BeforeCookForPC();
	void BeforeCookForMobile();
	void BeginOverlapComponent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EndOverlapComponent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_NinjaLive(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NinjaLive_C">();
	}
	static class ANinjaLive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANinjaLive_C>();
	}
};
static_assert(alignof(ANinjaLive_C) == 0x000008, "Wrong alignment on ANinjaLive_C");
static_assert(sizeof(ANinjaLive_C) == 0x000528, "Wrong size on ANinjaLive_C");
static_assert(offsetof(ANinjaLive_C, UberGraphFrame) == 0x0002B0, "Member 'ANinjaLive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, NinjaLiveComponent) == 0x0002B8, "Member 'ANinjaLive_C::NinjaLiveComponent' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, InteractionVolume) == 0x0002C0, "Member 'ANinjaLive_C::InteractionVolume' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ActivationVolume) == 0x0002C8, "Member 'ANinjaLive_C::ActivationVolume' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, EditorIcon) == 0x0002D0, "Member 'ANinjaLive_C::EditorIcon' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, TraceMesh) == 0x0002D8, "Member 'ANinjaLive_C::TraceMesh' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, Root) == 0x0002E0, "Member 'ANinjaLive_C::Root' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, RT_DensityPreview) == 0x0002E8, "Member 'ANinjaLive_C::RT_DensityPreview' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, InactiveGrayMaterial) == 0x0002F0, "Member 'ANinjaLive_C::InactiveGrayMaterial' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, DisableBlueprint) == 0x0002F8, "Member 'ANinjaLive_C::DisableBlueprint' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, TimeCounterForBrush) == 0x0002FC, "Member 'ANinjaLive_C::TimeCounterForBrush' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, DeltaSeconds) == 0x000300, "Member 'ANinjaLive_C::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, MousePressed) == 0x000304, "Member 'ANinjaLive_C::MousePressed' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ShowTraceMeshInEditor) == 0x000305, "Member 'ANinjaLive_C::ShowTraceMeshInEditor' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, TraceMeshSize) == 0x000308, "Member 'ANinjaLive_C::TraceMeshSize' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, UserInputBasedInteraction) == 0x000314, "Member 'ANinjaLive_C::UserInputBasedInteraction' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverlapBasedInteraction) == 0x000315, "Member 'ANinjaLive_C::OverlapBasedInteraction' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, NinjaLIVECollisionExclude) == 0x000318, "Member 'ANinjaLive_C::NinjaLIVECollisionExclude' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, Time) == 0x000328, "Member 'ANinjaLive_C::Time' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, SimActivatedByPawnProximity) == 0x00032C, "Member 'ANinjaLive_C::SimActivatedByPawnProximity' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ShowActivationVolumeInEditor) == 0x00032D, "Member 'ANinjaLive_C::ShowActivationVolumeInEditor' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ActivationVolumeSize) == 0x000330, "Member 'ANinjaLive_C::ActivationVolumeSize' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ActivatorProximityCheckFrequency) == 0x00033C, "Member 'ANinjaLive_C::ActivatorProximityCheckFrequency' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ActivatorType) == 0x000340, "Member 'ANinjaLive_C::ActivatorType' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, Activator) == 0x000348, "Member 'ANinjaLive_C::Activator' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, PawnInsideActivationBounds) == 0x000350, "Member 'ANinjaLive_C::PawnInsideActivationBounds' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, InitDone) == 0x000351, "Member 'ANinjaLive_C::InitDone' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, BeginPlaySupressed) == 0x000352, "Member 'ANinjaLive_C::BeginPlaySupressed' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, UseTraceMeshAsInteractionVolume) == 0x000353, "Member 'ANinjaLive_C::UseTraceMeshAsInteractionVolume' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ShowInteractionVolumeInEditor) == 0x000354, "Member 'ANinjaLive_C::ShowInteractionVolumeInEditor' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, InteractionVolumeSize) == 0x000358, "Member 'ANinjaLive_C::InteractionVolumeSize' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, MultipleTouchLookup) == 0x000368, "Member 'ANinjaLive_C::MultipleTouchLookup' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, TickRateCustom) == 0x000378, "Member 'ANinjaLive_C::TickRateCustom' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, InteractionVolumeTemplate) == 0x000380, "Member 'ANinjaLive_C::InteractionVolumeTemplate' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, TrackActorPrimitiveComponentsWithTag) == 0x000388, "Member 'ANinjaLive_C::TrackActorPrimitiveComponentsWithTag' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, TrackActorSkeletalMeshComponentsWithTag) == 0x000394, "Member 'ANinjaLive_C::TrackActorSkeletalMeshComponentsWithTag' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverlapFilterInclusiveObjType) == 0x0003A0, "Member 'ANinjaLive_C::OverlapFilterInclusiveObjType' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverlapFilterInclusiveBoneNameExact) == 0x0003B0, "Member 'ANinjaLive_C::OverlapFilterInclusiveBoneNameExact' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverlapFilterInclusiveBoneNamePartial) == 0x0003C0, "Member 'ANinjaLive_C::OverlapFilterInclusiveBoneNamePartial' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ExcludeSpecificActorsFromOverlap) == 0x0003D0, "Member 'ANinjaLive_C::ExcludeSpecificActorsFromOverlap' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, AutoExcludeLargeOverlappingObjects) == 0x0003E0, "Member 'ANinjaLive_C::AutoExcludeLargeOverlappingObjects' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverlapFilterInclusiveCollisionType) == 0x0003E8, "Member 'ANinjaLive_C::OverlapFilterInclusiveCollisionType' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, TraceMeshInactiveBehaviour) == 0x000438, "Member 'ANinjaLive_C::TraceMeshInactiveBehaviour' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ActivationEventsDebugPrint) == 0x000439, "Member 'ANinjaLive_C::ActivationEventsDebugPrint' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, SimContainerCapacityWarning) == 0x00043A, "Member 'ANinjaLive_C::SimContainerCapacityWarning' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, SaveDebugTextToLog) == 0x00043B, "Member 'ANinjaLive_C::SaveDebugTextToLog' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, DebugTextLifeTimeLength) == 0x00043C, "Member 'ANinjaLive_C::DebugTextLifeTimeLength' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverlappingSkeletalMesh) == 0x000440, "Member 'ANinjaLive_C::OverlappingSkeletalMesh' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, BrushStrengthTemp2) == 0x000448, "Member 'ANinjaLive_C::BrushStrengthTemp2' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, InputFeedbackTemp1) == 0x00044C, "Member 'ANinjaLive_C::InputFeedbackTemp1' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, DisableAndNotTickBlock) == 0x000450, "Member 'ANinjaLive_C::DisableAndNotTickBlock' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverlappingComponents) == 0x000458, "Member 'ANinjaLive_C::OverlappingComponents' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverlappingActors) == 0x000468, "Member 'ANinjaLive_C::OverlappingActors' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, SkeletalMesh_TempArray_Pairs) == 0x000478, "Member 'ANinjaLive_C::SkeletalMesh_TempArray_Pairs' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverlappingActorsInitial) == 0x0004C8, "Member 'ANinjaLive_C::OverlappingActorsInitial' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OwnerRePlayEvent) == 0x0004D8, "Member 'ANinjaLive_C::OwnerRePlayEvent' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OverrideComponentVariables) == 0x0004E8, "Member 'ANinjaLive_C::OverrideComponentVariables' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, AutoConnectToMemoryPool_IF_Found) == 0x0004E9, "Member 'ANinjaLive_C::AutoConnectToMemoryPool_IF_Found' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, OutputFilterMaterialIndex) == 0x0004EC, "Member 'ANinjaLive_C::OutputFilterMaterialIndex' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, ShowLODdebugMessagesOnScreen) == 0x0004F0, "Member 'ANinjaLive_C::ShowLODdebugMessagesOnScreen' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, GlobalBrushScale) == 0x0004F4, "Member 'ANinjaLive_C::GlobalBrushScale' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, LOD1_ReduceIterations) == 0x0004F8, "Member 'ANinjaLive_C::LOD1_ReduceIterations' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, LOD2_ReduceSamplingFPS) == 0x0004F9, "Member 'ANinjaLive_C::LOD2_ReduceSamplingFPS' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, LOD3_ReduceCollisionAmount) == 0x0004FA, "Member 'ANinjaLive_C::LOD3_ReduceCollisionAmount' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, MinSamplingFPS) == 0x0004FC, "Member 'ANinjaLive_C::MinSamplingFPS' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, LOD_FarBound) == 0x000500, "Member 'ANinjaLive_C::LOD_FarBound' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, LOD_NearBound) == 0x000504, "Member 'ANinjaLive_C::LOD_NearBound' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, DownscaleCollisionPainterResolution) == 0x000508, "Member 'ANinjaLive_C::DownscaleCollisionPainterResolution' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, DownscalePressureResolution) == 0x00050C, "Member 'ANinjaLive_C::DownscalePressureResolution' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, SingleTargetMode) == 0x000510, "Member 'ANinjaLive_C::SingleTargetMode' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, InitialActorsProcessed) == 0x000511, "Member 'ANinjaLive_C::InitialActorsProcessed' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, SKMeshTagged) == 0x000512, "Member 'ANinjaLive_C::SKMeshTagged' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, bOnlySelfTraceMesh) == 0x000513, "Member 'ANinjaLive_C::bOnlySelfTraceMesh' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, bOnlyFirstSkeletal) == 0x000514, "Member 'ANinjaLive_C::bOnlyFirstSkeletal' has a wrong offset!");
static_assert(offsetof(ANinjaLive_C, tempArray) == 0x000518, "Member 'ANinjaLive_C::tempArray' has a wrong offset!");

}

