#include <stdio.h>

int main() {
    int i, j;

    // Ciclo for para imprimir la tabla de multiplicación del 1 al 10
    for (i = 1; i <= 10; i++) {
        printf("Tabla de multiplicar del %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
