#include <stdio.h>

// Función que suma dos números enteros y devuelve el resultado
//Funcion que recibe un valor y devuelve un valor.

int sumar(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main() {
    int num1 = 10, num2 = 20;
    int resultado_suma;

    // Llamada a la función sumar y almacenamiento del valor de retorno
    resultado_suma = sumar(num1, num2);

    // Uso del valor de retorno en el programa
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado_suma);

    return 0;
}
