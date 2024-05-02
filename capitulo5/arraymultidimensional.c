#include <stdio.h>

int main() {
    // Declaración e inicialización de un arreglo multidimensinal (tridimensional) de enteros 3x3x3
    int cubo[3][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    // Acceso e impresión de elementos del arreglo tridimensional
    printf("Elementos del arreglo tridimensional:\n");
    for (int i = 0; i < 3; i++) {  // Dimensión 1
        for (int j = 0; j < 3; j++) {  // Dimensión 2
            for (int k = 0; k < 3; k++) {  // Dimensión 3
                printf("%d ", cubo[i][j][k]);  // Imprime cada elemento del arreglo
            }
            printf("\n");  // Nueva línea al final de cada dimensión 2
        }
        printf("\n");  // Nueva línea al final de cada dimensión 1
    }

    return 0;
}
