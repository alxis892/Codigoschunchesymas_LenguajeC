#include <stdio.h>

//codigo sencillo de printf

int main() {
    int entero = 42;
    float flotante = 3.14;
    char caracter = 'A';
    char cadena[] = "Hola";
    float PIreal = 3.14159265358979323846;
    

    // utilizamos la estructura del printf y lo imprimimos en pantalla
    // mostrarlo en la consola de comandos

    printf("Entero: %d\n", entero);        // %d para enteros
    printf("Flotante: %f\n", flotante);    // %f para flotantes
    printf("Caracter: %c\n", caracter);    // %c para caracteres
    printf("Cadena: %s\n", cadena);        // %s para cadenas de caracteres

    // Imprimir el entero con un ancho de 5 caracteres
    printf("Entero con ancho de 5: %5d\n", entero);

     // Imprimir el número con precisión de 2 decimales
    printf("Numero con precisiOn de 2 decimales: %.2f\n", PIreal);

    // Imprimir el entero con un tamaño de campo de 5 caracteres
    printf("Entero con tamaño de campo de 5: %5d\n", entero);

    return 0;
}
