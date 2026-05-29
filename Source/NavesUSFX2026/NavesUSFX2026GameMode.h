// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NavesUSFX2026GameMode.generated.h"

class ABonus;
class AGeneradorLaberinto;

UCLASS(MinimalAPI)
class ANavesUSFX2026GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANavesUSFX2026GameMode();



protected:
	virtual void BeginPlay() override;

	//UPROPERTY(EditAnywhere, Category = "Laberinto")
	//TSubclassOf<AGeneradorLaberinto> GeneradorLaberintoClass;

	//UPROPERTY(VisibleAnywhere, Category = "Laberinto")
	AGeneradorLaberinto* GeneradorLaberintoInstancia;

	ABonus* BonusInstancia;

public:
	virtual void Tick(float DeltaTime) override;

	
};



