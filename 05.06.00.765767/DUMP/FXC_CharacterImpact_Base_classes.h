// BlueprintGeneratedClass FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C
// Size: 0x968 (Inherited: 0x530)
struct AFXC_CharacterImpact_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct FRotator ParticleRotation; // 0x548(0x0c)
	float ParticleScale; // 0x554(0x04)
	struct FCharacterImpactParticle Shooter Particles; // 0x558(0x90)
	struct FCharacterImpactParticle Victim Particles; // 0x5e8(0x90)
	struct FCharacterImpactParticle Non-Blood 3P Particles; // 0x678(0x90)
	struct FCharacterImpactParticle 3P Particles; // 0x708(0x90)
	float SplatterDistance; // 0x798(0x04)
	char pad_79C[0x4]; // 0x79c(0x04)
	struct FCharacterImpactParticle Non Human Particles; // 0x7a0(0x90)
	struct FCharacterImpactParticle Non Blood Particles; // 0x830(0x90)
	bool bIsSpawnedAndLocallyControlled; // 0x8c0(0x01)
	bool TargetMakesBloodSplatters; // 0x8c1(0x01)
	bool TargetIsFirstPerson; // 0x8c2(0x01)
	char pad_8C3[0x5]; // 0x8c3(0x05)
	struct FCharacterImpactParticle AttachedImpactParticles; // 0x8c8(0x90)
	bool PlayAttachedVFX; // 0x958(0x01)
	char pad_959[0x7]; // 0x959(0x07)
	struct AShooterCharacter* AttachedToCharacter; // 0x960(0x08)
};
