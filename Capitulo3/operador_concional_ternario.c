#include <stdio.h>

//operador condiconal o ternario.
//es usado para codificaciones sencillas
//que requieren condiciones de una sola linea
// o para ahorrar codigo
int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    (numero % 2 == 0) ? printf("%d es un numero par.\n", numero) : printf("%d es un numero impar.\n", numero);

    return 0;
}
