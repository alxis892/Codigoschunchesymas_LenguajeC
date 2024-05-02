#include <stdio.h>

int main() {
    int numero;
    printf("Escribe un numero entero : ");
    scanf("%d", &numero);

    if (numero > 10) {
        printf("El numero es mayor que 10.\n");
    } else {
        printf("El numero no es mayor que 10.\n");
    }

    return 0;
   
}
