#include <stdio.h>

// Declaración de la función suma
int suma(int a, int b);

int main() {
    int x = 5;
    int y = 3;
    int resultado;

    // Llamada a la función suma
    resultado = suma(x, y);

    // Imprimir el resultado
    printf("La suma de %d y %d es %d\n", x, y, resultado);

    return 0;
}

// Definición de la función suma
int suma(int a, int b) {
    return a + b;
}


