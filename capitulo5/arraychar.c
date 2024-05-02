#include <stdio.h>

int main() {
    // Declaración e inicialización de un vector de caracteres
    char frase[50] = "Hola, como estas?";

    // Modificar la frase reemplazando un carácter
    frase[9] = 'b';  // Reemplaza la coma por la letra 'b'

    // Imprimir la frase modificada
    printf("Frase modificada: %s\n", frase);

    return 0;
}
