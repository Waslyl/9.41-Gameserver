#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C40 (0x3010 - 0x3D0)
// AnimBlueprintGeneratedClass M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint.M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C
class UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4D083CFB43E11F85A96087A218BB7BAE; // 0x3D8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1872ACF04C46FFA045FC69B4A8A5BE74; // 0x408(0x140)(ContainsInstancedReference)
	uint8                                        Pad_663C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_DA7F616742A73676682DFE962C7A9097; // 0x550(0x440)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7DB76C3F48F97D8CF7DFB98F3C0DF756; // 0x990(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F250A6D64C5D0DFA740D4AA5A241B6D7; // 0x9B0(0x20)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_68C7555B4952C826BD5E4CB53F095FA7; // 0x9D0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8651B63E4AA91C51A815929C08C3C559; // 0xE10(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_EFFE8AEA4DD194B52BCE94B3662DE607; // 0x1250(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_38FA54CC43BC1C1D2C4408A8C09F82E6; // 0x1690(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A5E507C9415604E9DAE77683DBC92AE0; // 0x1AD0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8C4AA5B641FE517FCA350DB5D1932FE4; // 0x1F10(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_01EDC5964A42C785313443AE90C2EA31; // 0x2350(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_B78997D142A0D1CF2837DF888BDB7B06; // 0x2790(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A0C97E4A46266B7CFE56A7BC1B12FC7C; // 0x2BD0(0x440)(None)

	static class UClass* StaticClass();
	static class UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}


