// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/Public/Facade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacade() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_AFacade();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_AFacade_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Class AFacade
void AFacade::StaticRegisterNativesAFacade()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFacade);
UClass* Z_Construct_UClass_AFacade_NoRegister()
{
	return AFacade::StaticClass();
}
struct Z_Construct_UClass_AFacade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Facade.h" },
		{ "ModuleRelativePath", "Public/Facade.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFacade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFacade_Statics::ClassParams = {
	&AFacade::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_Statics::Class_MetaDataParams), Z_Construct_UClass_AFacade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFacade()
{
	if (!Z_Registration_Info_UClass_AFacade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFacade.OuterSingleton, Z_Construct_UClass_AFacade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFacade.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<AFacade>()
{
	return AFacade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFacade);
AFacade::~AFacade() {}
// End Class AFacade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Facade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFacade, AFacade::StaticClass, TEXT("AFacade"), &Z_Registration_Info_UClass_AFacade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFacade), 567818387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Facade_h_750766113(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Facade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Facade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
