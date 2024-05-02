#include <stdio.h>

int main() {
    // Declaración e inicialización de una matriz de enteros 2x3
    int matriz[2][3] = {
        {1, 2, 3},  // Primera fila
        {4, 5, 6}   // Segunda fila
    };

    // Acceso e impresión de elementos de la matriz
    printf("Elementos de la matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);  // Imprime cada elemento de la matriz
        }
        printf("\n");  // Nueva línea al final de cada fila
    }

    return 0;
}
