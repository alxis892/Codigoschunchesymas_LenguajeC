#include <stdio.h>

int main() {
    unsigned int a = 60;  // Representación binaria: 0011 1100
    unsigned int b = 13;  // Representación binaria: 0000 1101
    unsigned int resultado;

    // Operaciones de bit a bit
    resultado = a & b;  // AND a nivel de bit
    printf("a & b = %d\n", resultado);  // Resultado: 0000 1100

    resultado = a | b;  // OR a nivel de bit
    printf("a | b = %d\n", resultado);  // Resultado: 0011 1101

    resultado = a ^ b;  // XOR a nivel de bit
    printf("a ^ b = %d\n", resultado);  // Resultado: 0011 0001

    resultado = ~a;  // Complemento a nivel de bit
    printf("~a = %d\n", resultado);  // Resultado: 1100 0011

    resultado = a << 2;  // Desplazamiento a la izquierda
    printf("a << 2 = %d\n", resultado);  // Resultado: 1111 0000

    resultado = a >> 2;  // Desplazamiento a la derecha
    printf("a >> 2 = %d\n", resultado);  // Resultado: 0000 1111

    return 0;
}
