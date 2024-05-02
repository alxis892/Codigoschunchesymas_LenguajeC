#include <stdio.h>
#include <string.h>

int main() {
    // Arreglo de nombres
    char *nombres[] = {"Juan", "María", "Carlos", "Ana"};
    // Número de nombres en el arreglo
    int numNombres = sizeof(nombres) / sizeof(nombres[0]);
    // Longitud total de la cadena resultante
    int longitudTotal = 0;

    // Calcula la longitud total de la cadena resultante
    for (int i = 0; i < numNombres; i++) {
        longitudTotal += strlen(nombres[i]);
    }

    // Añade espacio para los separadores entre nombres y el carácter nulo
    longitudTotal += numNombres - 1; // Un espacio menos que el número de nombres para los separadores
    // Crea una cadena con la longitud total
    char cadenaResultante[longitudTotal + 1]; // +1 para el carácter nulo
    cadenaResultante[0] = '\0'; // Inicializa la cadena como vacía

    // Concatena cada nombre del arreglo en la cadena resultante
    for (int i = 0; i < numNombres; i++) {
        strcat(cadenaResultante, nombres[i]);
        // Añade un separador entre nombres, excepto para el último nombre
        if (i < numNombres - 1) {
            strcat(cadenaResultante, ", ");
        }
    }

    printf("Lista de nombres: %s\n", cadenaResultante);

    return 0;
}
