#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Observer.generated.h"

// Esta parte (UObserver) la necesita el motor de Unreal internamente.
UINTERFACE(MinimalAPI)
class UObserver : public UInterface
{
	GENERATED_BODY()
};

// Esta parte (IObserver) es la que tú vas a usar en tu código.
class NAVESUSFX2026_API IObserver
{
	GENERATED_BODY()

public:
	// Este es el método que obliga a los suscriptores a "escuchar"
	virtual void OnNotify() = 0;
};
