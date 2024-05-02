
//estructura anidada sencilla ejemplo 
#include <stdio.h>

// Definición de la estructura Fecha
struct Fecha {
    int dia;
    int mes;
    int anio;
};

// Definición de la estructura Persona, que contiene un miembro de tipo Fecha
struct Persona {
    char nombre[50];
    struct Fecha fechaNacimiento; // Miembro de tipo Fecha anidado
};

int main() {
    // Declaración e inicialización de una estructura Fecha
    struct Fecha fechaNacimientoAlexis = {17, 06, 2002};

    // Declaración e inicialización de una estructura Persona que contiene la estructura Fecha
    struct Persona alexis = {"Alexis", fechaNacimientoAlexis};

    // Acceso a los campos de las estructuras anidadas
    printf("Nombre: %s\n", alexis.nombre);
    printf("Fecha de nacimiento: %d/%d/%d\n", alexis.fechaNacimiento.dia, alexis.fechaNacimiento.mes, alexis.fechaNacimiento.anio);

    return 0;
}
