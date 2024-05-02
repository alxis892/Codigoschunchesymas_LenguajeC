#include <stdio.h>

int main() {
    int i = 1;

    // Imprimir solo los números impares del 1 al 10
    do {
        if (i % 2 == 0) {
            i++; // Incrementar i antes de continuar para evitar un bucle infinito
            continue; // Saltar a la siguiente iteración si el número es par
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);

    printf("\nBucle do-while terminado\n");
    return 0;
}
