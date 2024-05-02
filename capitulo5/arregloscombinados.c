#include <stdio.h>

        //impresion de arreglos combinados inicializando y declarando
        
int main() {
    // Declaración de un arreglo de enteros 1D con dimensión específica
    int arreglo1D[5];  // Arreglo unidimensional de enteros con 5 elementos

    // Declaración de una matriz 2D con dimensiones específicas
    int matriz2D[3][4];  // Matriz bidimensional de enteros con 3 filas y 4 columnas

    // Declaración de un cubo 3D con dimensiones específicas
    int cubo3D[2][3][3];  // Cubo tridimensional de enteros con 2 capas, 3 filas y 3 columnas

    // Ejemplo de uso: asignación de valores y acceso a elementos
    arreglo1D[0] = 10;  // Asignación de un valor al primer elemento del arreglo
    matriz2D[1][2] = 20;  // Asignación de un valor a un elemento de la matriz
    cubo3D[0][1][1] = 30;  // Asignación de un valor a un elemento del cubo

    // Impresión de valores para verificar el acceso a los elementos
    printf("Valor en arreglo1D[0]: %d\n", arreglo1D[0]);
    printf("Valor en matriz2D[1][2]: %d\n", matriz2D[1][2]);
    printf("Valor en cubo3D[0][1][1]: %d\n", cubo3D[0][1][1]);

    return 0;
}
