// Copyright 2018 Pavlov Dmitriy
#pragma once

#include "Engine/DataAsset.h"
#include "Factories/Factory.h"
#include "RoomStorage_AssetFactory.generated.h"



UCLASS()
class URoomStorageAssetFactory : public UFactory
{
	GENERATED_UCLASS_BODY()


	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;


	virtual bool CanCreateNew() const override { return true; }
};