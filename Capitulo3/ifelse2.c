#include <stdio.h>

int main() {
    int numero;
    //solicitamos los datos al usuario
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    //inicia la sentencia if (condicional)
    if (numero % 2 == 0) {
        printf("%d es un numero par.\n", numero); //si cumple con la condicion
    } else {
        printf("%d es un numero impar.\n", numero);  //si no cumple con la condicion
    }

    return 0;
}
