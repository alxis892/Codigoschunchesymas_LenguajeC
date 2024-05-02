#include <stdio.h>

// codigo que determina si te puedes subir a una atraccion conforme a tu edad y altura
int main() {
    int edad = 20;
    int altura = 180;

    // Verificación de múltiples condiciones utilizando operadores lógicos
    int puede_montar = (edad >= 18) && (altura >= 160);

    // Se imprime el resultado basado en la evaluación de las condiciones
    // para mas conveniencia se podria usar un if else pero aun no llegamos a esa parte del curso :)
    printf("Puede montar en la atraccion: %s\n", puede_montar ? "Si" : "No");

    return 0;
}
