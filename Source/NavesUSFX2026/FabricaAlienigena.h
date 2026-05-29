#pragma once // Evita inclusiones múltiples del archivo de cabecera en el compilador
#include "CoreMinimal.h" // Trae los tipos de datos estándar del motor
#include "GameFramework/Actor.h" // Necesario porque esta fábrica existirá físicamente en el mundo como un Actor
#include "FabricaNivel.h" // Incluimos la interfaz que creamos antes para poder firmar el contrato
#include "FabricaAlienigena.generated.h" // El archivo de macros autogenerado por Unreal

UCLASS() // Indica a Unreal que esta es una clase instanciable dentro del motor
class NAVESUSFX2026_API AFabricaAlienigena : public AActor, public IFabricaNivel // Hereda de AActor y de la interfaz IFabricaNivel
{
	GENERATED_BODY() // Inserta el código oculto necesario para el funcionamiento en Unreal

public: // Sección pública accesible externamente
	AFabricaAlienigena(); // Declaramos el constructor principal de la fábrica

	virtual class AEnemigo* CrearEnemigo(FVector Posicion) override; // Implementamos la creación obligatoria del enemigo
	virtual class ANavesUSFX2026Projectile* CrearProyectil(FVector Posicion) override; // Implementamos la creación obligatoria del proyectil
	virtual class AActor* CrearEfectoVisual(FVector Posicion) override; // Implementamos la creación obligatoria del efecto visual
}; // Fin de la declaración de la clase AFabricaAlienigena