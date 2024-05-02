#include <stdio.h>

int main() {
    int numero = 1; // Inicializamos el número en 1, el primer número natural

    printf("Numero\tCuadrado\n"); // Encabezado de la tabla

    while (numero <= 10) { // Mientras el número sea menor o igual que 10
        printf("%d\t%d\n", numero, numero * numero); // Imprimimos el número y su cuadrado
        numero++; // Incrementamos el número en 1 para pasar al siguiente número natural
    }

    return 0;
}
