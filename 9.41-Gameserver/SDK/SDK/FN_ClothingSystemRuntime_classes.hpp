#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntime.ClothingAssetCustomData
class UClothingAssetCustomData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UClothingAssetCustomData* GetDefaultObj();

};

// 0x130 (0x178 - 0x48)
// Class ClothingSystemRuntime.ClothingAsset
class UClothingAsset : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothConfig                          ClothConfig;                                       // 0x50(0xD4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FClothLODData>                 LODData;                                           // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LodMap;                                            // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          UsedBoneNames;                                     // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                UsedBoneIndices;                                   // 0x158(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReferenceBoneIndex;                                // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClothingAssetCustomData*              CustomData;                                        // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UClothingAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationFactoryNv* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class ClothingSystemRuntime.ClothingSimulationInteractorNv
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:
	uint8                                        Pad_1F46[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClothingSimulationInteractorNv* GetDefaultObj();

	void SetAnimDriveSpringStiffness(float InStiffness);
	void SetAnimDriveDamperStiffness(float InStiffness);
	void EnableGravityOverride(struct FVector& InVector);
	void DisableGravityOverride();
};

}


