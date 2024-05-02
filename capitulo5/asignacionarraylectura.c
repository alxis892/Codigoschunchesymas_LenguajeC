#include <stdio.h>

//arreglos declarados usando scanf o pidiendo datos al usuario
int main() {
    int numeros[5];  // Declaración de un arreglo de enteros

    // Leer valores para el arreglo desde el usuario
    printf("Ingrese 5 numeros enteros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);  // Lee cada número y lo almacena en el arreglo
    }

    // Imprimir los valores almacenados en el arreglo
    printf("Valores ingresados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
