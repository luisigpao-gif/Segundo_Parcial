#include "GestorOleadas.h"
#include "Enemigo.h" // Necesitamos conocer al enemigo para spawnearlo
#include "FabricaAlienigena.h"

AGestorOleadas::AGestorOleadas()
{
	PrimaryActorTick.bCanEverTick = true;
	EnemigosEnJuego = 0;
}

void AGestorOleadas::BeginPlay()
{
	Super::BeginPlay();
	IniciarOleada(); // Arrancamos la primera oleada
}

void AGestorOleadas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// AQUÍ LLEGA EL AVISO CUANDO UN ENEMIGO LLAMA A Morir()
void AGestorOleadas::OnNotify()
{
	EnemigosEnJuego--; // Restamos un enemigo
	UE_LOG(LogTemp, Warning, TEXT("¡Enemigo destruido! Faltan: %d"), EnemigosEnJuego);

	// Si ya no quedan, lanzamos la siguiente oleada
	if (EnemigosEnJuego <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Oleada completada. Preparando la siguiente..."));
		IniciarOleada();
	}
}

void AGestorOleadas::IniciarOleada()
{
	// Incrementamos el contador de la oleada actual para subir la dificultad
	NumeroDeOleada++;

	// Calculamos la cantidad de enemigos multiplicando el número de oleada por 3
	EnemigosEnJuego = NumeroDeOleada * 3;

	// Imprimimos un mensaje en la consola para avisar que inicia una nueva oleada
	UE_LOG(LogTemp, Warning, TEXT("=== INICIANDO OLEADA %d ==="), NumeroDeOleada);

	// Instanciamos (creamos) la fábrica alienígena en el mundo usando GetWorld
	AFabricaAlienigena* FabricaNivel = GetWorld()->SpawnActor<AFabricaAlienigena>(AFabricaAlienigena::StaticClass());

	// Verificamos que la fábrica se haya instanciado correctamente para evitar crasheos
	if (FabricaNivel)
	{
		// Iniciamos un bucle que se repetirá tantas veces como enemigos necesitemos
		for (int i = 0; i < EnemigosEnJuego; i++)
		{
			// Calculamos una posición en el eje X, separando cada enemigo por 200 unidades
			FVector PosicionSpawn = FVector(i * 200.0f, 0.0f, 200.0f);

			// FUSIÓN DE PATRONES: Usamos la FÁBRICA (Pregunta 2) para crear al enemigo, en lugar de usar SpawnActor directamente
			AEnemigo* NuevoEnemigo = FabricaNivel->CrearEnemigo(PosicionSpawn);

			// Comprobamos que el puntero del enemigo creado por la fábrica no sea nulo
			if (NuevoEnemigo)
			{
				// FUSIÓN DE PATRONES: Usamos el OBSERVER (Pregunta 1) para que este Gestor escuche al enemigo
				NuevoEnemigo->Suscribir(this);
			}
		}
	}
}