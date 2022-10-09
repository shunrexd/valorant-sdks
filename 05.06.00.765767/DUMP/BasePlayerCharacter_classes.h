// BlueprintGeneratedClass BasePlayerCharacter.BasePlayerCharacter_C
// Size: 0x1311 (Inherited: 0x1179)
struct ABasePlayerCharacter_C : ABasePawn_C {
	char pad_1179[0x7]; // 0x1179(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1180(0x08)
	struct UTotemSelectorComponent_C* TotemSelectorComponent; // 0x1188(0x08)
	struct UPMAimToolingSkeletalTargetComponent* PMAimToolingTarget; // 0x1190(0x08)
	struct UComp_PlayerCharacter_DebuffTagVisuals_C* Comp_PlayerCharacter_DebuffTagVisuals; // 0x1198(0x08)
	struct UCapsuleComponent* HeadBoostBlockingCapsule; // 0x11a0(0x08)
	struct UDisarmedComponent* Disarmed; // 0x11a8(0x08)
	struct UAresWidgetComponent* InWorldCharacterWidget; // 0x11b0(0x08)
	struct UAssistTrackingComponent* AssistTracking; // 0x11b8(0x08)
	struct UComp_PlayerCharacter_HealingTracker_C* Comp_PlayerCharacter_HealingTracker; // 0x11c0(0x08)
	struct UShooterCharacterAudioAttenuationComponent_C* ShooterCharacterAudioAttenuationComponent; // 0x11c8(0x08)
	struct UComp_PlayerCharacter_NearsightManager_C* Comp_PlayerCharacter_NearsightManager; // 0x11d0(0x08)
	struct UComp_AbilityStatisticsReplicator_C* Comp_AbilityStatisticsReplicator; // 0x11d8(0x08)
	struct UComp_PlayerCharacter_DebuffTagHUD_C* Comp_PlayerCharacter_DebuffTagHUD; // 0x11e0(0x08)
	struct UComp_PlayerCharacter_SmokeOverlays_C* Comp_PlayerCharacter_SmokeOverlays; // 0x11e8(0x08)
	struct UEnemySpottedVOComponent_C* EnemySpottedVOComponent; // 0x11f0(0x08)
	struct UAresAudioComponentManagerComponent* AresAudioComponentManager; // 0x11f8(0x08)
	struct UCharacterSprayComponent_C* CharacterSprayComponent; // 0x1200(0x08)
	struct USpringArmComponent* BuyPhaseCameraSpringArm; // 0x1208(0x08)
	struct UFootstepsComponent* Footsteps; // 0x1210(0x08)
	struct UCameraComponent* BuyPhaseCamera; // 0x1218(0x08)
	struct UInteractableUserComponent* InteractableUser; // 0x1220(0x08)
	struct UWidgetComponent* PlayerWidget; // 0x1228(0x08)
	struct UAnimationStateComponent* AnimationState; // 0x1230(0x08)
	struct UCorpseExploitationComponent* CorpseExploitation; // 0x1238(0x08)
	struct FEffectID ActiveHaloEffectID; // 0x1240(0x20)
	struct TMap<enum class NonVerbalCommTypesEnum, int32_t> CommStringtoFXCTagInteger; // 0x1260(0x50)
	struct FEffectID ActiveVoiceHaloEffectID; // 0x12b0(0x20)
	struct FMulticastInlineDelegate VoiceEventForMinimapDispatcher; // 0x12d0(0x10)
	struct FMulticastInlineDelegate CommEventForMinimapDispatcher; // 0x12e0(0x10)
	struct FEffectID ActiveLoadoutWidgetID; // 0x12f0(0x20)
	bool TotSelectorCreated; // 0x1310(0x01)
};

