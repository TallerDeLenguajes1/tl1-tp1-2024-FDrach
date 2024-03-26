#include <stdio.h>

int cuadrado(int num) {
    return num * num;
}

void cuadrado_void(int *num) {
    *num = *num**num;
}

void print_direccion_contenido(int *ptr) {
    printf("La dirección de la variable es: %p\n", ptr);
    printf("El contenido de la variable es: %d\n", *ptr);
}

void invertir(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void ordenar(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}

int main() {
    int num1, num2;
    
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    printf("El cuadrado de %d es: %d\n", num1, cuadrado(num1));
    print_direccion_contenido(&num1);
    cuadrado_void(&num2);
    printf("El cuadrado de %d es: %d\n", num2 / 2, num2);
    ordenar(&num1, &num2);
    printf("Los números ordenados son: %d - %d\n", num1, num2);
    invertir(&num1, &num2);
    printf("E invertidos son: %d - %d\n", num1, num2);

    return 0;
}
