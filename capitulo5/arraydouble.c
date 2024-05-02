#include <stdio.h>

int main() {
    // Declaración e inicialización de un vector de tipo double
    double precios[5] = {99.99, 49.95, 79.50, 129.75, 199.99};

    // Acceso y modificación de elementos del vector
    precios[1] = 39.99;  // Modifica el segundo elemento del vector

    // Imprimir todos los precios almacenados en el vector
    printf("Lista de precios:\n");
    for (int i = 0; i < 5; i++) {
        printf("Producto %d: %.2f\n", i + 1, precios[i]);
    }

    return 0;
}
