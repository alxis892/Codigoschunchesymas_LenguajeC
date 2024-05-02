#include <stdio.h>

// apuntadores codigo sencillo 1
int main() {
    int numero = 10;  // Variable entera
    int *ptr;         // Declaración de un apuntador a entero

    ptr = &numero;    // Asigna la dirección de memoria de 'numero' al apuntador 'ptr'

    printf("Valor de 'numero' antes de modificar: %d\n", numero);

    *ptr = 20;        // Modifica el valor de 'numero' a través del apuntador 'ptr'

    printf("Valor de 'numero' despues de modificar: %d\n", numero);

    return 0;
}
