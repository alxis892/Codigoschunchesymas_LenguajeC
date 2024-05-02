#include <string.h>

size_t strlen(const char *str);    //strlen(): Calcula la longitud de una cadena.

char *strcpy(char *dest, const char *src);  //strcpy(): Copia una cadena a otra.

char *strcat(char *dest, const char *src);  //strcat(): Concatena dos cadenas.
 
int strcmp(const char *str1, const char *str2);  //strcmp(): Compara dos cadenas.

int strncmp(const char *str1, const char *str2, size_t n);  //strncmp(): Compara los primeros n caracteres de dos cadenas.

char *strchr(const char *str, int c);   //strchr(): Busca la primera aparición de un carácter en una cadena.

char *strstr(const char *haystack, const char *needle);  //strstr(): Busca la primera aparición de una subcadena en una cadena.

char *strtok(char *str, const char *delim);  //char *strtok(char *str, const char *delim);
