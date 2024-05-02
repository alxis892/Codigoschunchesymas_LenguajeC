#include <stdio.h>

int main() {
    int dia_semana;

    printf("Ingrese un numero del 1 al 7 para representar un dia de la semana: ");
    scanf("%d", &dia_semana);

    switch (dia_semana) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miercoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Numero de dia invalido\n");
            break;
    }

    return 0;
}
