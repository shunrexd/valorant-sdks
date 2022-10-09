// BlueprintGeneratedClass BombEquippable.BombEquippable_C
// Size: 0xfa0 (Inherited: 0xed0)
struct ABombEquippable_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xed0(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipOnCompleteStateComponent; // 0xed8(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipOnCancelStateComponent; // 0xee0(0x08)
	struct UTestBranch_EffectsActive_StateComponent_C* TestBranch_EffectsActive_StateComponent; // 0xee8(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0xef0(0x08)
	struct USphereComponent* CalloutCollider; // 0xef8(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0xf00(0x08)
	struct UTeamRoleComponent* TeamRole; // 0xf08(0x08)
	struct URespondToEventStateComponent* PlantBombWithClick; // 0xf10(0x08)
	struct URespondToEventStateComponent* WaitForPlantClick; // 0xf18(0x08)
	struct UScriptStateComponent* IdleState; // 0xf20(0x08)
	struct UEquippableStateMachineComponent* PlantByLeftClickStateMachine; // 0xf28(0x08)
	struct UWaitForUsingUsableStateComponent* WaitForUsingUsableState; // 0xf30(0x08)
	struct UWhileUsingUsableStateComponent* WhileUsingUsableState; // 0xf38(0x08)
	struct UBombMinimapComponent_C* BombMinimapComponent; // 0xf40(0x08)
	struct UEquippableVisibilityComponent* EquippableVisibility; // 0xf48(0x08)
	struct UBombEquippableVOComponent_C* BombEquippableVOTriggers; // 0xf50(0x08)
	struct UCapsuleComponent* Targeting Shape; // 0xf58(0x08)
	struct UEquipStateComponent* EquipState; // 0xf60(0x08)
	struct UAresOutlineComponent* Outline3P_TempBomb; // 0xf68(0x08)
	struct UAresOutlineComponent* Outline3P; // 0xf70(0x08)
	struct UAresOutlineComponent* Outline1P; // 0xf78(0x08)
	struct FMulticastInlineDelegate OnBombPickedUp; // 0xf80(0x10)
	struct FMulticastInlineDelegate OnBombDropped; // 0xf90(0x10)
};
