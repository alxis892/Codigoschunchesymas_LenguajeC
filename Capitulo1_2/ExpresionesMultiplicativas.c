#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int resultado1;
    int resultado2;
    int resultado3;

    // Expresión multiplicativa: multiplicación de dos variables
    resultado1 = a * b;
    resultado2 = a / b;
    resultado3 = a & b;

    // Impresión del resultado
    printf("El resultado de la multiplicacion es: %d\n", resultado1);
    printf("El resultado de la division es: %d\n", resultado2);
    printf("El resultado de la operacion modulo es: %d\n", resultado3);
    return 0;
}
