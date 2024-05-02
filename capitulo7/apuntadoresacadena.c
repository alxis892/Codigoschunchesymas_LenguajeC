#include <stdio.h>
//ejemplo 1 apuntadores a cadenas

int main() {
    char *cadena = "Hola, mundo!"; // Declaración del apuntador a cadena

    // Acceso a los caracteres de la cadena utilizando un bucle
    while (*cadena != '\0') {
        printf("%c", *cadena); // Imprime el carácter actual
        cadena++; // Avanza al siguiente carácter
    }

    return 0;
}
