// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/Public/BloqueEspecial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueEspecial() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ABloqueEspecial();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ABloqueEspecial_NoRegister();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Class ABloqueEspecial
void ABloqueEspecial::StaticRegisterNativesABloqueEspecial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueEspecial);
UClass* Z_Construct_UClass_ABloqueEspecial_NoRegister()
{
	return ABloqueEspecial::StaticClass();
}
struct Z_Construct_UClass_ABloqueEspecial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueEspecial.h" },
		{ "ModuleRelativePath", "Public/BloqueEspecial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBloqueEspecial_MetaData[] = {
		{ "Category", "Componentes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Propiedades:\n// Componente de malla est\xef\xbf\xbdtica\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloqueEspecial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Propiedades:\n Componente de malla est\xef\xbf\xbdtica" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBloqueEspecial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueEspecial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueEspecial_Statics::NewProp_MallaBloqueEspecial = { "MallaBloqueEspecial", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueEspecial, MallaBloqueEspecial), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBloqueEspecial_MetaData), NewProp_MallaBloqueEspecial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueEspecial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueEspecial_Statics::NewProp_MallaBloqueEspecial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEspecial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueEspecial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEspecial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueEspecial_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(ABloqueEspecial, IIPrototype), false },  // 2660278892
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueEspecial_Statics::ClassParams = {
	&ABloqueEspecial::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueEspecial_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEspecial_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEspecial_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueEspecial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueEspecial()
{
	if (!Z_Registration_Info_UClass_ABloqueEspecial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueEspecial.OuterSingleton, Z_Construct_UClass_ABloqueEspecial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueEspecial.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<ABloqueEspecial>()
{
	return ABloqueEspecial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueEspecial);
ABloqueEspecial::~ABloqueEspecial() {}
// End Class ABloqueEspecial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_BloqueEspecial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueEspecial, ABloqueEspecial::StaticClass, TEXT("ABloqueEspecial"), &Z_Registration_Info_UClass_ABloqueEspecial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueEspecial), 1071868671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_BloqueEspecial_h_2306364621(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_BloqueEspecial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_BloqueEspecial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
