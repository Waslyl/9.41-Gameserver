#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2248 - 0x2220)
// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
class AAthena_GameState_C : public AFortGameStateAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_21F3C11243B4DF8C6B6A958D51E85950; // 0x2230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_21F3C11243B4DF8C6B6A958D51E85950; // 0x2234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_458E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x2238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Victory_Royale_Sound;                              // 0x2240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAthena_GameState_C* GetDefaultObj();

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnWinnerAnnounced();
	void ExecuteUbergraph_Athena_GameState(int32 EntryPoint, bool CallFunc_CanUseSlowMotionOnVictory_ReturnValue);
};

}


