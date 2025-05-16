// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/Public/DirectorLaberinto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorLaberinto() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ADirectorLaberinto();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ADirectorLaberinto_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Class ADirectorLaberinto
void ADirectorLaberinto::StaticRegisterNativesADirectorLaberinto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirectorLaberinto);
UClass* Z_Construct_UClass_ADirectorLaberinto_NoRegister()
{
	return ADirectorLaberinto::StaticClass();
}
struct Z_Construct_UClass_ADirectorLaberinto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorLaberinto.h" },
		{ "ModuleRelativePath", "Public/DirectorLaberinto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorLaberinto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADirectorLaberinto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorLaberinto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirectorLaberinto_Statics::ClassParams = {
	&ADirectorLaberinto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorLaberinto_Statics::Class_MetaDataParams), Z_Construct_UClass_ADirectorLaberinto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADirectorLaberinto()
{
	if (!Z_Registration_Info_UClass_ADirectorLaberinto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirectorLaberinto.OuterSingleton, Z_Construct_UClass_ADirectorLaberinto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADirectorLaberinto.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<ADirectorLaberinto>()
{
	return ADirectorLaberinto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorLaberinto);
ADirectorLaberinto::~ADirectorLaberinto() {}
// End Class ADirectorLaberinto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_DirectorLaberinto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADirectorLaberinto, ADirectorLaberinto::StaticClass, TEXT("ADirectorLaberinto"), &Z_Registration_Info_UClass_ADirectorLaberinto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirectorLaberinto), 4071669773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_DirectorLaberinto_h_2954195420(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_DirectorLaberinto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_DirectorLaberinto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
