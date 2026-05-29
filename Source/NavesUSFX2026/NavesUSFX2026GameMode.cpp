// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavesUSFX2026GameMode.h"
#include "NavesUSFX2026Pawn.h"
#include "GeneradorLaberinto.h"
#include "Engine/World.h"
#include "Bloque.h"
#include "Bonus.h" // Agrega esta línea al inicio del archivo para incluir la definición completa de ABonus
#include "EnemigoAnimal.h"
#include "GestorOleadas.h"
#include "FabricaAlienigena.h" // Incluimos nuestra fábrica concreta
#include "Enemigo.h" // Necesario para que reconozca al enemigo
#include "NavesUSFX2026Projectile.h" // Necesario para el proyectil
#include "Engine/StaticMeshActor.h" // Necesario para el efecto visual básico

ANavesUSFX2026GameMode::ANavesUSFX2026GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANavesUSFX2026Pawn::StaticClass();
    GeneradorLaberintoInstancia = CreateDefaultSubobject<AGeneradorLaberinto>(TEXT("GeneradorLaberinto"));

    //GeneradorLaberintoClass = AGeneradorLaberinto::StaticClass();
}


void ANavesUSFX2026GameMode::BeginPlay()
{
	Super::BeginPlay();

	// 1. REGLA DE ORO: Guardamos y validamos el puntero al mundo ANTES de usarlo
	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("GameMode: World no valido."));
		return;
	}

	// 2. Instanciamos el Gestor de Oleadas (Patrón Observer) de forma segura
	World->SpawnActor<AGestorOleadas>(AGestorOleadas::StaticClass());

	// 3. Variables para instanciar objetos
	FVector PosicionSpawn = FVector::ZeroVector;
	FRotator RotacionSpawn = FRotator::ZeroRotator;

	// 4. Instanciamos el Generador de Laberinto
	GeneradorLaberintoInstancia = World->SpawnActor<AGeneradorLaberinto>(
		AGeneradorLaberinto::StaticClass(),
		PosicionSpawn,
		RotacionSpawn
	);

	if (GeneradorLaberintoInstancia)
	{
		UE_LOG(LogTemp, Warning, TEXT("GameMode: ALaberintoGenerador creado correctamente."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GameMode: No se pudo crear ALaberintoGenerador."));
	}

	// 5. Bucle de prueba para el Patrón Singleton (Bonus)
	for (int i = 0; i < 30; i++)
	{
		ABonus* BonusActual = ABonus::GetInstancia(World);
		if (BonusActual) // Siempre es buena práctica validar
		{
			UE_LOG(LogTemp, Warning, TEXT("GameMode: Bloque %d en posicion (%f, %f, %f)"), i, BonusActual->GetActorLocation().X, BonusActual->GetActorLocation().Y, BonusActual->GetActorLocation().Z);
		}
	}

	// 6. Prueba de instanciación del Enemigo Animal
	AEnemigoAnimal* EnemigoActual = World->SpawnActor<AEnemigoAnimal>(
		AEnemigoAnimal::StaticClass(),
		FVector(500.0f, 0.0f, 200.0f), // Le cambié un poco la posición para que no choque con el laberinto (0,0,0)
		FRotator::ZeroRotator
	);
	
	// =========================================================================
	// PRUEBA DE LA PREGUNTA 19: PATRÓN ABSTRACT FACTORY
	// =========================================================================

	// Declaramos una variable puntero para guardar nuestra fábrica y le pedimos al mundo que la instancie (cree) en la memoria
	AFabricaAlienigena* FabricaAlien = World->SpawnActor<AFabricaAlienigena>(AFabricaAlienigena::StaticClass());

	// Verificamos si el puntero de la fábrica no es nulo para evitar que el juego crashee
	if (FabricaAlien)
	{
		// Imprimimos un mensaje de color amarillo en la consola indicando que la fábrica está lista para trabajar
		UE_LOG(LogTemp, Warning, TEXT("GameMode: Fabrica Alienigena lista. Creando emboscada..."));

		// Creamos un vector (coordenadas X, Y, Z) para definir el punto central donde aparecerá el enemigo
		FVector PosicionDelEnemigo = FVector(0.0f, 600.0f, 200.0f);

		// Le damos la orden a la fábrica de crear un Enemigo exactamente en la posición que acabamos de definir
		AEnemigo* NuevoMalo = FabricaAlien->CrearEnemigo(PosicionDelEnemigo);

		// Inmediatamente, le pedimos a la fábrica que cree el Efecto Visual en esa misma posición para simular que el enemigo "apareció mágicamente"
		AActor* EfectoAparicion = FabricaAlien->CrearEfectoVisual(PosicionDelEnemigo);

		// Creamos un nuevo vector sumando 150 a la coordenada X para definir una posición justo enfrente del enemigo
		FVector PosicionDelDisparo = FVector(150.0f, 600.0f, 200.0f);

		// Le ordenamos a la fábrica que cree un Proyectil en esa nueva posición frontal para simular que el enemigo acaba de disparar
		ANavesUSFX2026Projectile* NuevoMisil = FabricaAlien->CrearProyectil(PosicionDelDisparo);

		// Imprimimos otro mensaje en la consola confirmando que toda la familia de productos se creó con éxito
		UE_LOG(LogTemp, Warning, TEXT("GameMode: Enemigo creado, efecto desplegado y proyectil disparado."));
	}
}

void ANavesUSFX2026GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

