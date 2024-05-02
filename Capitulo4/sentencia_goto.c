#include <stdio.h>

int main() {
    int edad;

    //ejemplo de codigo goto
    //acceso a personas mayores de 18 y menores de 60 años

input:
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    // Validar la entrada: la edad debe estar entre 18 y 60 años
    if (edad < 18 || edad > 60) {
        printf("Edad no valida. Debe estar entre 18 y 60 años.\n");
        goto input; // Volver al punto de entrada para solicitar otra edad
    }

    printf("¡Bienvenido! Su edad es: %d\n", edad);
    printf("Acceso permitido.\n");

    return 0;
}
