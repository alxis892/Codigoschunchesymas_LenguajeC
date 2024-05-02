#include <stdio.h>

int main() {
    int numero = 2; // Inicializamos el número en 2, el primer número par

    while (numero <= 10) { // Mientras el número sea menor o igual que 10
        printf("%d\n", numero); // Imprimimos el número actual
        numero += 2; // Aumentamos el número en 2 para pasar al siguiente número par
    }

    return 0;
}
