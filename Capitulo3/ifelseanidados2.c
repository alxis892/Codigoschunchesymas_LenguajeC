#include <stdio.h>

int main() {
    int edad;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 0) {
        if (edad < 18) {
            printf("Eres menor de edad.\n");
        } else if (edad >= 18 && edad < 65) {
            printf("Eres adulto.\n");
        } else {
            printf("Eres adulto mayor.\n");
        }
    } else {
        printf("La edad ingresada es invalida.\n");
    }

    return 0;
}
