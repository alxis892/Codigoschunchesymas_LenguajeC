#include <stdio.h>

int main() {
    int dia;
    int mes;

     // Solicitar al usuario que ingrese el numero de dia
    printf("Ingrese el numero de dia : ");
    scanf("%d", &dia);

     // Solicitar al usuario que ingrese el numero del mes
    printf("Ingrese el numero de mes: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            switch (dia) {
                case 1:
                    printf("Es el primer dia del año.\n");
                    break;
                default:
                    printf("Es un dia de enero, pero no es el primero.\n");
                    break;
            }
            break;
        case 2:
            printf("Es febrero.\n");
            break;
        // Otros meses...
        default:
            printf("Es un mes diferente a enero y febrero.\n");
            break;
    }

    return 0;
}

