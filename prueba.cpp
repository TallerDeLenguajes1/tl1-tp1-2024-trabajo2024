#include <stdio.h>

int main(){
    int edad = 18;
    int *puntero = &edad;

    printf("Contenido del puntero: %d \n", *puntero);
    printf("Direccion almacenada por el puntero: %p \n", puntero);
    printf("Direccion almacenada por la variable: %p \n", &edad);
    printf("Direccion de memoria del puntero: %p \n", &puntero);  
    printf("Tamanio de memoria del puntero: %zi bytes\n", sizeof(edad));  


    return 0;
}