#include <stdio.h>

//scanf utilizando el operador suma
//codigo sencillo para una suma de 2 enteros

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números enteros
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    // Calcular la suma de los números ingresados
    int suma = num1 + num2;

    // Imprimir la suma
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    return 0;
}
