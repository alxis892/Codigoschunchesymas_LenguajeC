#include <stdio.h>

//ejemplo 2 para contar la longitud de una cadena
//usando un apuntador

int longitudCadena(char *cadena) {
    int longitud = 0;

    // Recorre la cadena y cuenta cada carácter hasta llegar al carácter nulo
    while (*cadena != '\0') {
        longitud++; // Incrementa la longitud
        cadena++; // Avanza al siguiente carácter
    }

    return longitud;
}

int main() {
    char *cadena = "Hola, mundo!";
    printf("La longitud de la cadena es: %d\n", longitudCadena(cadena));

    return 0;
}
