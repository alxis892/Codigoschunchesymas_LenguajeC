#include <stdio.h>
#include <stdlib.h>

void allocate_and_assign(int **ptr) {
    *ptr = (int *)malloc(sizeof(int)); // Asignación de memoria dinámica
    **ptr = 30; // Asignación de valor
}

int main() {
    int *dynamic_ptr; // Declaración de apuntador
    allocate_and_assign(&dynamic_ptr); // Pasando el puntero a la función
    printf("Valor apuntado por el apuntador dinámico: %d\n", *dynamic_ptr);
    free(dynamic_ptr); // Liberar memoria asignada dinámicamente
    return 0;
}
