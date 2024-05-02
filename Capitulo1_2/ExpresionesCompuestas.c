#include <stdio.h>

int main() {
    int x = 5;
    int y = 3;
    int z = 7;
    int resultado;

    // Expresión compuesta: combinación de operaciones aritméticas y lógicas
    resultado = (x + y) * z / 2 - (y << 1);

    // Impresión del resultado
    printf("El resultado de la expresión compuesta es: %d\n", resultado);

    return 0;
}
