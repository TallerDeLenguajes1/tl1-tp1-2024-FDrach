#include <stdio.h>

int main() {
    int variable = 10;
    int *puntero = &variable;

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Dirección de memoria almacenada por el puntero: %p\n", (void *)puntero);
    printf("Dirección de memoria de la variable: %p\n", (void *)&variable);
    printf("Dirección de memoria del puntero: %p\n", (void *)&puntero);
    printf("Tamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(variable));

    return 0;
}
