#include <stdio.h>

int main() {
    // Imprimir solo los números impares del 1 al 10
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Saltar a la siguiente iteración si el número es par
        }
        printf("%d ", i);
    }

    printf("\nBucle for terminado\n");
    return 0;
}
