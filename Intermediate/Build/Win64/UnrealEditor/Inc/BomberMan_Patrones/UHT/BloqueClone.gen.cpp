// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/Public/BloqueClone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueClone() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ABloqueClone();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ABloqueClone_NoRegister();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Class ABloqueClone
void ABloqueClone::StaticRegisterNativesABloqueClone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueClone);
UClass* Z_Construct_UClass_ABloqueClone_NoRegister()
{
	return ABloqueClone::StaticClass();
}
struct Z_Construct_UClass_ABloqueClone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueClone.h" },
		{ "ModuleRelativePath", "Public/BloqueClone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "BloqueClone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloqueClone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueClone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueClone_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueClone, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueClone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueClone_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueClone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueClone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueClone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueClone_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(ABloqueClone, IIPrototype), false },  // 2660278892
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueClone_Statics::ClassParams = {
	&ABloqueClone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueClone_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueClone_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueClone_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueClone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueClone()
{
	if (!Z_Registration_Info_UClass_ABloqueClone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueClone.OuterSingleton, Z_Construct_UClass_ABloqueClone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueClone.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<ABloqueClone>()
{
	return ABloqueClone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueClone);
ABloqueClone::~ABloqueClone() {}
// End Class ABloqueClone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_BloqueClone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueClone, ABloqueClone::StaticClass, TEXT("ABloqueClone"), &Z_Registration_Info_UClass_ABloqueClone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueClone), 3244659480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_BloqueClone_h_4220893726(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_BloqueClone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_BloqueClone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
