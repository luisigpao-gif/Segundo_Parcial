#include "FabricaAlienigena.h" // Incluye la cabecera de nuestra propia fábrica
#include "Enemigo.h" // Incluye la clase base de tu enemigo para que el compilador sepa instanciarlo
#include "NavesUSFX2026Projectile.h" // Incluye la clase de tu proyectil real
#include "Engine/StaticMeshActor.h" // Usaremos un StaticMeshActor nativo para simular un efecto visual rápido

AFabricaAlienigena::AFabricaAlienigena() // Definición inicial de la fábrica cuando es creada en el mundo
{
	PrimaryActorTick.bCanEverTick = false; // Desactivamos el Tick (actualización por frame) porque la fábrica no necesita moverse, ahorrando memoria
} // Fin del constructor

AEnemigo* AFabricaAlienigena::CrearEnemigo(FVector Posicion) // Lógica exacta de cómo esta fábrica construye un enemigo
{
	// Pide al mundo crear un AEnemigo en la Posición solicitada, sin rotación inicial, y lo retorna a quien lo pidió
	return GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), Posicion, FRotator::ZeroRotator);
} // Cierre de la función CrearEnemigo

ANavesUSFX2026Projectile* AFabricaAlienigena::CrearProyectil(FVector Posicion) // Lógica exacta para instanciar el proyectil de esta familia
{
	// Pide al mundo crear tu clase específica de Proyectil en la ubicación dada y lo devuelve
	return GetWorld()->SpawnActor<ANavesUSFX2026Projectile>(ANavesUSFX2026Projectile::StaticClass(), Posicion, FRotator::ZeroRotator);
} // Cierre de la función CrearProyectil

AActor* AFabricaAlienigena::CrearEfectoVisual(FVector Posicion) // Lógica para crear el destello o partícula al disparar/morir
{
	// Pide al mundo instanciar un Actor básico (aquí luego puedes poner un sistema de partículas) y lo devuelve
	return GetWorld()->SpawnActor<AStaticMeshActor>(AStaticMeshActor::StaticClass(), Posicion, FRotator::ZeroRotator);
} // Cierre de la función CrearEfectoVisual