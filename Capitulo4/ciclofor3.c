#include <stdio.h>

//impresion de numeros pares e impares usando ciclo for
//ciclos repetitivos o bucles 

int main() {
    int i;

    // Imprimir números pares del 1 al 20
    printf("Numeros pares:\n");
    for (i = 2; i <= 20; i += 2) {
        printf("%d\n", i);
    }

    printf("\n");

    // Imprimir números impares del 1 al 20
    printf("Numeros impares:\n");
    for (i = 1; i <= 20; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
