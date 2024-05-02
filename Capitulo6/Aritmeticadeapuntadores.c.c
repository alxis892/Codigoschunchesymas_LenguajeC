#include <stdio.h>

int main(){

int var1 = 10;
int var2 = 20;

int *ptr1 = &var1;
int *ptr2 = &var2;

if (ptr1 == ptr2) {
    printf("Los apuntadores apuntan a la misma dirección de memoria.\n");
} else {
    printf("Los apuntadores apuntan a direcciones de memoria diferentes.\n");
}


}


