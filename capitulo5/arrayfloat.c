#include <stdio.h>

int main() {
    // Declaración e inicialización de un vector de tipo float
    float temperaturas[7] = {25.5, 26.0, 24.8, 27.3, 25.9, 28.1, 26.7};

    // Acceso y modificación de elementos del vector
    temperaturas[2] = 24.5;  // Modifica el tercer elemento del vector

    // Imprimir todas las temperaturas almacenadas en el vector
    printf("Temperaturas diarias:\n");
    for (int i = 0; i < 7; i++) {
        printf("Dia %d: %.1f\n", i + 1, temperaturas[i]);
    }

    return 0;
}
