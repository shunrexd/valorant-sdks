// WidgetBlueprintGeneratedClass Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C
// Size: 0x30a (Inherited: 0x2c8)
struct UWidget_Ability_Element_Timer_Parent_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	bool AutomaticTimerSet; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float MaxTime; // 0x2d4(0x04)
	float StartingTime; // 0x2d8(0x04)
	bool AutoRemove; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	float TimeRemaining; // 0x2e0(0x04)
	bool ExpireWarningActived; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FMulticastInlineDelegate ExpireWarningActive; // 0x2e8(0x10)
	struct FMulticastInlineDelegate TimerComplete; // 0x2f8(0x10)
	bool ShowExpireWarning; // 0x308(0x01)
	bool FillBar; // 0x309(0x01)
};

