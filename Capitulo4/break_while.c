#include <stdio.h>

int main() {
    int i = 1;

    // Imprimir los números del 1 al 10, pero salir del bucle si se encuentra el número 5
    while (i <= 10) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
        i++;
    }

    printf("\nBucle while terminado\n");
    return 0;
}
