#include <stdio.h>

int main() {
    // Declaración e inicialización de un arreglo de enteros
    int numeros[5] = {10, 20, 30, 40, 50};

    // Imprimir los elementos del arreglo usando un bucle for
    printf("Elementos del arreglo numeros:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);  // Imprimir cada elemento del arreglo
    }

    return 0;
}
