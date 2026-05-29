#pragma once // Evita que este archivo se lea múltiples veces por el compilador, previniendo errores
#include "CoreMinimal.h" // Incluye las librerías matemáticas y tipos básicos de Unreal Engine
#include "UObject/Interface.h" // Permite crear y manejar interfaces en Unreal
#include "FabricaNivel.generated.h" // Archivo autogenerado por Unreal, siempre debe ser el último include

UINTERFACE(MinimalAPI) // Macro que registra esta interfaz en el motor interno de Unreal
class UFabricaNivel : public UInterface // Clase base obligatoria que Unreal usa para manejar la interfaz internamente
{
	GENERATED_BODY() // Genera el código base interno para que Unreal reconozca la clase
}; // Fin de la declaración de UFabricaNivel

class NAVESUSFX2026_API IFabricaNivel // Esta es la interfaz real que usaremos nosotros en C++ (lleva la 'I' al principio)
{
	GENERATED_BODY() // Genera el sistema de reflexión para que interactúe con el motor

public: // Todo lo que esté aquí abajo será público y accesible desde otras clases
	virtual class AEnemigo* CrearEnemigo(FVector Posicion) = 0;
	virtual class ANavesUSFX2026Projectile* CrearProyectil(FVector Posicion) = 0;
	virtual class AActor* CrearEfectoVisual(FVector Posicion) = 0;
}; // Fin de la declaración de la interfaz IFabricaNivel