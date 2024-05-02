//ejemplo de uso arreglos de cadenas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Arreglo de apuntadores a cadenas
    char *palabras[] = {"manzana", "banana", "pera", "naranja", "uva"};
    int num_palabras = sizeof(palabras) / sizeof(palabras[0]);
    
    // Ordenar el arreglo de palabras alfabéticamente
    for (int i = 0; i < num_palabras - 1; i++) {
        for (int j = i + 1; j < num_palabras; j++) {
            if (strcmp(palabras[i], palabras[j]) > 0) {
                // Intercambiar los apuntadores si la palabra actual es mayor que la siguiente
                char *temp = palabras[i];
                palabras[i] = palabras[j];
                palabras[j] = temp;
            }
        }
    }
    
    // Mostrar las palabras ordenadas
    printf("Palabras ordenadas:\n");
    for (int i = 0; i < num_palabras; i++) {
        printf("%s\n", palabras[i]);
    }
    
    return 0;
}
