#include <stdio.h>

int main() {
    int i = 1;

    // Imprimir solo los números impares del 1 al 10
    while (i <= 10) {
        if (i % 2 == 0) {
            i++; // Incrementar i antes de continuar para evitar un bucle infinito
            continue; // Saltar a la siguiente iteración si el número es par
        }
        printf("%d ", i);
        i++;
    }

    printf("\nBucle while terminado\n");
    return 0;
}
