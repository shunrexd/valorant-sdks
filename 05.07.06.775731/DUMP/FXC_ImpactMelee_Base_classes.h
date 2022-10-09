// BlueprintGeneratedClass FXC_ImpactMelee_Base.FXC_ImpactMelee_Base_C
// Size: 0x610 (Inherited: 0x530)
struct AFXC_ImpactMelee_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x538(0x08)
	struct TMap<enum class EAresSurfaceType, struct FAresHitImpactParticle> ImpactParticle; // 0x540(0x50)
	struct TMap<enum class EAresSurfaceType, struct FMaterialList> ImpactDecal; // 0x590(0x50)
	float DecalRotation; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct UAkAudioEvent* ImpactAudioEvent; // 0x5e8(0x08)
	struct FRotator ParticleRotation; // 0x5f0(0x0c)
	float ParticleScale; // 0x5fc(0x04)
	struct UAkAudioEvent* ImpactAudioSkinEvent; // 0x600(0x08)
	struct UObject* FXC Context; // 0x608(0x08)

	void Get Decal Rotation(float& DecalRotation); // Function FXC_ImpactMelee_Base.FXC_ImpactMelee_Base_C.Get Decal Rotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_ImpactMelee_Base.FXC_ImpactMelee_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_FXC_ImpactMelee_Base(int32_t EntryPoint); // Function FXC_ImpactMelee_Base.FXC_ImpactMelee_Base_C.ExecuteUbergraph_FXC_ImpactMelee_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

