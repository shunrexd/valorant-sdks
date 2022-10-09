// WidgetBlueprintGeneratedClass AnimatedSpriteWidget.AnimatedSpriteWidget_C
// Size: 0x3b8 (Inherited: 0x2c8)
struct UAnimatedSpriteWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct USizeBox* AlternateSizer; // 0x2d0(0x08)
	struct UImage* FrameImage; // 0x2d8(0x08)
	float FramesPerSecond; // 0x2e0(0x04)
	bool Looping; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FTimerHandle LoopUpdateHandle; // 0x2e8(0x08)
	struct UPaperFlipbook* CurrentAnimation; // 0x2f0(0x08)
	struct TMap<struct FString, struct UPaperFlipbook*> AnimationStates; // 0x2f8(0x50)
	float CurrentTime; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UPaperSprite* CurentSprite; // 0x350(0x08)
	struct FMulticastInlineDelegate FinishedAnimation; // 0x358(0x10)
	struct FMulticastInlineDelegate FinishedLoop; // 0x368(0x10)
	struct FLinearColor ColorTint; // 0x378(0x10)
	enum class ESlateVisibility OverallVisible; // 0x388(0x01)
	bool IsPaused; // 0x389(0x01)
	char pad_38A[0x6]; // 0x38a(0x06)
	struct FString CurrentState; // 0x390(0x10)
	struct UPaperSprite* sptrimerlktre; // 0x3a0(0x08)
	struct FVector2D SizeOverride; // 0x3a8(0x08)
	bool SizeToFlipbook; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	int32_t FlibookSampleFrame; // 0x3b4(0x04)
};
