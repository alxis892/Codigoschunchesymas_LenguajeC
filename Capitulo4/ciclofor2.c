#include <stdio.h>

int main() {
    int i, suma = 0;

    // Ciclo for para calcular la suma de los primeros 10 números naturales
    for (i = 1; i <= 10; i++) {
        suma += i;
    }

    printf("La suma de los primeros 10 numeros naturales es: %d\n", suma);

    return 0;
}
