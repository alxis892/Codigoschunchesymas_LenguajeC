#include <stdio.h>

int main() {
    /*
    Declaramos las variables enteras con un valor especifico
    luego declaramos las operaciones que vamos a realizar
    */
    int a = 100, b = 35;   
    int suma = a + b;     
    int resta = a - b;
    int multiplicacion = a * b;
    int division = a / b;
    int modulo = a % b;

    // imprimimos en pantalla las operaciones que queramos realizar con las variables 
    // utilizamos el %d ya que nos permite imprimir en pantalla un numero entero

    printf("Suma: %d\n", suma); 
    printf("Resta: %d\n", resta); 
    printf("Multiplicacion: %d\n", multiplicacion); 
    printf("Division: %d\n", division); 
    printf("Modulo: %d\n", modulo); 

    return 0;
}
