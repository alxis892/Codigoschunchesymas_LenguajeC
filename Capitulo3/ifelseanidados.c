#include <stdio.h>

int main() {
    int puntaje;

    printf("Ingrese el puntaje del examen: ");
    scanf("%d", &puntaje);

    if (puntaje >= 90) {
        printf("La calificacion es A\n");
    } else if (puntaje >= 80) {
        printf("La calificacion es B\n");
    } else if (puntaje >= 70) {
        printf("La calificacion es C\n");
    } else if (puntaje >= 60) {
        printf("La calificacion es D\n");
    } else {
        printf("La calificacion es F\n");
    }

    return 0;
}
