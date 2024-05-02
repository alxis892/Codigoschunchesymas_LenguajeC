#include <stdio.h>

int main() {
    int i = 1;

    // Imprimir los números del 1 al 10, pero salir del bucle si se encuentra el número 5
    do {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);

    printf("\nBucle do-while terminado\n");
    return 0;
}
