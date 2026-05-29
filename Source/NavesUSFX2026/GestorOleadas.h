#pragma once // Evita que el archivo se incluya múltiples veces por el compilador

#include "CoreMinimal.h" // Incluye las librerías matemáticas y básicas de Unreal
#include "GameFramework/Actor.h" // Necesario porque este gestor existe en el mundo como un Actor
#include "Observer.h" // Incluimos la interfaz del Patrón Observer para poder escuchar
#include "GestorOleadas.generated.h" // Archivo autogenerado por Unreal, siempre debe ser el último include

UCLASS() // Indica a Unreal que esta clase puede interactuar con el motor
class NAVESUSFX2026_API AGestorOleadas : public AActor, public IObserver // Hereda de AActor y firma el contrato de IObserver
{
	GENERATED_BODY() // Inserta el código base oculto necesario de Unreal
	
public:	// Todo lo que esté aquí será accesible desde otras clases
	AGestorOleadas(); // Declaramos el constructor del gestor

protected: // Métodos que solo esta clase y sus hijos pueden usar
	virtual void BeginPlay() override; // Método que se ejecuta una sola vez cuando arranca el juego

public:	// Volvemos a la sección pública
	virtual void Tick(float DeltaTime) override; // Método que se actualiza en cada fotograma del juego

	virtual void OnNotify() override; // El método obligatorio de la interfaz que recibe el aviso del enemigo

	int32 EnemigosEnJuego; // Variable entera que lleva la cuenta de los enemigos vivos

	int32 NumeroDeOleada; // <--- ¡AQUÍ ESTÁ LA SOLUCIÓN! Declaramos la variable que el compilador no encontraba

	void IniciarOleada(); // Declaramos el método encargado de crear las familias y suscribirse a ellas
}; // Cierre de la clase GestorOleadas