#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x548 - 0x3D0)
// AnimBlueprintGeneratedClass M_MED_Cupid_Dark_FaceAcc_AnimBp.M_MED_Cupid_Dark_FaceAcc_AnimBp_C
class UM_MED_Cupid_Dark_FaceAcc_AnimBp_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_E5587FAA4F8DEC3EF218699971CC9D2A; // 0x3D8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_F5AE96034005D3557BFC3E92D992C563; // 0x408(0x140)(ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UM_MED_Cupid_Dark_FaceAcc_AnimBp_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_Cupid_Dark_FaceAcc_AnimBp(int32 EntryPoint);
};

}


