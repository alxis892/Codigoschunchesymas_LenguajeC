#include <stdio.h>

// Función que suma dos números y devuelve el resultado
int sumar(int a, int b) {
    int resultado = a + b;
    return resultado;  // Devolver el resultado de la suma (utilizando la sentencia return)
}

int main() {
    int num1 = 5;
    int num2 = 3;
    int suma = sumar(num1, num2);  // Llamada a la función sumar

    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    return 0;
}
