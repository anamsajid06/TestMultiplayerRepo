// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestMultiplayer/MultiplayerProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerProjectile() {}
// Cross Module References
	TESTMULTIPLAYER_API UClass* Z_Construct_UClass_AMultiplayerProjectile_NoRegister();
	TESTMULTIPLAYER_API UClass* Z_Construct_UClass_AMultiplayerProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestMultiplayer();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMultiplayerProjectile::execOnProjectileImpact)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileImpact(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AMultiplayerProjectile::StaticRegisterNativesAMultiplayerProjectile()
	{
		UClass* Class = AMultiplayerProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectileImpact", &AMultiplayerProjectile::execOnProjectileImpact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics
	{
		struct MultiplayerProjectile_eventOnProjectileImpact_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileImpact_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileImpact_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileImpact_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileImpact_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileImpact_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "MultiplayerProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "OnProjectileImpact", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::MultiplayerProjectile_eventOnProjectileImpact_Parms), Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerProjectile);
	UClass* Z_Construct_UClass_AMultiplayerProjectile_NoRegister()
	{
		return AMultiplayerProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestMultiplayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiplayerProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileImpact, "OnProjectileImpact" }, // 2411138407
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultiplayerProjectile.h" },
		{ "ModuleRelativePath", "MultiplayerProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Sphere component used to test collision.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerProjectile.h" },
		{ "ToolTip", "Sphere component used to test collision." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerProjectile, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Static Mesh used to provide a visual representation of the object.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerProjectile.h" },
		{ "ToolTip", "Static Mesh used to provide a visual representation of the object." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerProjectile, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Movement component for handling projectile movement. It is already replicated\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerProjectile.h" },
		{ "ToolTip", "Movement component for handling projectile movement. It is already replicated" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "// Particle used when the projectile impacts against another object and explodes.\n" },
		{ "ModuleRelativePath", "MultiplayerProjectile.h" },
		{ "ToolTip", "Particle used when the projectile impacts against another object and explodes." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerProjectile, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "//The damage type and damage that will be done by this projectile\n" },
		{ "ModuleRelativePath", "MultiplayerProjectile.h" },
		{ "ToolTip", "The damage type and damage that will be done by this projectile" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerProjectile, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "//The damage dealt by this projectile.\n" },
		{ "ModuleRelativePath", "MultiplayerProjectile.h" },
		{ "ToolTip", "The damage dealt by this projectile." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerProjectile, Damage), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerProjectile_Statics::ClassParams = {
		&AMultiplayerProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMultiplayerProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerProjectile()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerProjectile.OuterSingleton, Z_Construct_UClass_AMultiplayerProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerProjectile.OuterSingleton;
	}
	template<> TESTMULTIPLAYER_API UClass* StaticClass<AMultiplayerProjectile>()
	{
		return AMultiplayerProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerProjectile);
	struct Z_CompiledInDeferFile_FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerProjectile, AMultiplayerProjectile::StaticClass, TEXT("AMultiplayerProjectile"), &Z_Registration_Info_UClass_AMultiplayerProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerProjectile), 3539005592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_1689563770(TEXT("/Script/TestMultiplayer"),
		Z_CompiledInDeferFile_FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
