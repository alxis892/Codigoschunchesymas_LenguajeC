#include <stdio.h>

int main() {
    // Imprimir los números del 1 al 10, pero salir del bucle si se encuentra el número 5
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }

    printf("\nBucle for terminado\n");
    return 0;
}
