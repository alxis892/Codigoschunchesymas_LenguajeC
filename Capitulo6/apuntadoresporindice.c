#include <stdio.h>
 // arreglos por apuntadores de indice
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Apuntador que apunta al primer elemento del arreglo

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(ptr + i)); // Acceso al elemento usando aritmética de punteros
    }

    return 0;
}
