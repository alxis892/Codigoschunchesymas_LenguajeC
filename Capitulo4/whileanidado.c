#include <stdio.h>

int main() {
    int altura = 5;
    int fila = 0;

    // Ciclo while externo para iterar sobre las filas
    while (fila < altura) {
        int columna = 0;

        // Ciclo while interno para iterar sobre las columnas
        while (columna <= fila) {
            printf("* ");
            columna++;
        }

        printf("\n"); // Salto de línea al final de cada fila
        fila++;
    }

    return 0;
}
