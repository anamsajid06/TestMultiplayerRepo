// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef TESTMULTIPLAYER_TestMultiplayerCharacter_generated_h
#error "TestMultiplayerCharacter.generated.h already included, missing '#pragma once' in TestMultiplayerCharacter.h"
#endif
#define TESTMULTIPLAYER_TestMultiplayerCharacter_generated_h

#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_SPARSE_DATA
#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_RPC_WRAPPERS \
	virtual void HandleFire_Implementation(); \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleFire_Implementation(); \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_EVENT_PARMS
#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_CALLBACK_WRAPPERS
#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_ATestMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(ATestMultiplayerCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_ATestMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(ATestMultiplayerCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestMultiplayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestMultiplayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestMultiplayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestMultiplayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestMultiplayerCharacter(ATestMultiplayerCharacter&&); \
	NO_API ATestMultiplayerCharacter(const ATestMultiplayerCharacter&); \
public:


#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestMultiplayerCharacter(ATestMultiplayerCharacter&&); \
	NO_API ATestMultiplayerCharacter(const ATestMultiplayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestMultiplayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestMultiplayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestMultiplayerCharacter)


#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_9_PROLOG \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_EVENT_PARMS


#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_SPARSE_DATA \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_RPC_WRAPPERS \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_CALLBACK_WRAPPERS \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_INCLASS \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_SPARSE_DATA \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_CALLBACK_WRAPPERS \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTMULTIPLAYER_API UClass* StaticClass<class ATestMultiplayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestMultiplayer_Source_TestMultiplayer_TestMultiplayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
