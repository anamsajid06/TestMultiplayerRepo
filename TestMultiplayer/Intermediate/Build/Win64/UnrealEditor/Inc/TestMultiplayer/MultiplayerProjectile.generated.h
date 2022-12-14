// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TESTMULTIPLAYER_MultiplayerProjectile_generated_h
#error "MultiplayerProjectile.generated.h already included, missing '#pragma once' in MultiplayerProjectile.h"
#endif
#define TESTMULTIPLAYER_MultiplayerProjectile_generated_h

#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_SPARSE_DATA
#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileImpact);


#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileImpact);


#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerProjectile(); \
	friend struct Z_Construct_UClass_AMultiplayerProjectile_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerProjectile)


#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerProjectile(); \
	friend struct Z_Construct_UClass_AMultiplayerProjectile_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerProjectile)


#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerProjectile(AMultiplayerProjectile&&); \
	NO_API AMultiplayerProjectile(const AMultiplayerProjectile&); \
public:


#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerProjectile(AMultiplayerProjectile&&); \
	NO_API AMultiplayerProjectile(const AMultiplayerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerProjectile)


#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_9_PROLOG
#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_SPARSE_DATA \
	FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_RPC_WRAPPERS \
	FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_INCLASS \
	FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_SPARSE_DATA \
	FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTMULTIPLAYER_API UClass* StaticClass<class AMultiplayerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestMultiplayer_Source_TestMultiplayer_MultiplayerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
