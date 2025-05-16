// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/BomberMan_PatronesGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_PatronesGameMode() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ABomberMan_PatronesGameMode();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ABomberMan_PatronesGameMode_NoRegister();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ADirectorLaberinto_NoRegister();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ALaberintoConcreto_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Class ABomberMan_PatronesGameMode
void ABomberMan_PatronesGameMode::StaticRegisterNativesABomberMan_PatronesGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_PatronesGameMode);
UClass* Z_Construct_UClass_ABomberMan_PatronesGameMode_NoRegister()
{
	return ABomberMan_PatronesGameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_PatronesGameMode.h" },
		{ "ModuleRelativePath", "BomberMan_PatronesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderLab_MetaData[] = {
		{ "Category", "GameModeBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//El actor constructor\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_PatronesGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El actor constructor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Director_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "BomberMan_PatronesGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuilderLab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Director;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_PatronesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::NewProp_BuilderLab = { "BuilderLab", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_PatronesGameMode, BuilderLab), Z_Construct_UClass_ALaberintoConcreto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderLab_MetaData), NewProp_BuilderLab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::NewProp_Director = { "Director", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_PatronesGameMode, Director), Z_Construct_UClass_ADirectorLaberinto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Director_MetaData), NewProp_Director_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::NewProp_BuilderLab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::NewProp_Director,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::ClassParams = {
	&ABomberMan_PatronesGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_PatronesGameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_PatronesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_PatronesGameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_PatronesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_PatronesGameMode.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<ABomberMan_PatronesGameMode>()
{
	return ABomberMan_PatronesGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_PatronesGameMode);
ABomberMan_PatronesGameMode::~ABomberMan_PatronesGameMode() {}
// End Class ABomberMan_PatronesGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_BomberMan_PatronesGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_PatronesGameMode, ABomberMan_PatronesGameMode::StaticClass, TEXT("ABomberMan_PatronesGameMode"), &Z_Registration_Info_UClass_ABomberMan_PatronesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_PatronesGameMode), 3312719687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_BomberMan_PatronesGameMode_h_3815044524(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_BomberMan_PatronesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_BomberMan_PatronesGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
