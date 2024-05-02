#include <stdio.h>

int *global_ptr; // Declaración de apuntador global

void function() {
    *global_ptr = 20; // Acceso al apuntador global
}

int main() {
    global_ptr = malloc(sizeof(int)); // Asignación de memoria para el apuntador global
    function();
    printf("Valor apuntado por el apuntador global: %d\n", *global_ptr);
    free(global_ptr); // Liberar memoria asignada dinámicamente
    return 0;
}