#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 5; i++) {
        for (j = 0; j <= 20; j += 2) {
            if ((i == 1) && (j >= 7))
                goto salida;

            printf("i vale %d y j vale %d.\n", i, j);
        }
    }

salida:
    printf("Fin del programa\n");
    return 0;
}
