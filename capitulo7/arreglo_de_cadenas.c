#include <stdio.h>
//arreglo de cadenas en c
//basico

int main() {
    // Declaración de un arreglo de cadenas
    char *arregloCadenas[] = {"Primera cadena", "Segunda cadena", "Tercera cadena"};

    // Acceso e impresión de las cadenas en el arreglo
    for (int i = 0; i < 3; i++) {
        printf("Cadena %d: %s\n", i+1, arregloCadenas[i]);
    }

    return 0;
}
