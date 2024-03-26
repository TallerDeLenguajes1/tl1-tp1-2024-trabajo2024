#include <iostream>

float cuadrado(float a);
void cuadradoProcedimiento(float a);
void invertir(int a, int b);
void orden(int a, int b);

int main() {
    int *pNumero, numero = 4;
    pNumero = &numero;

    std::cout << "Hola, mundo" << std::endl;
    std::cout << "El contenido del puntero es: " << *pNumero << std::endl;
    std::cout << "La direccion del puntero es: " << pNumero << std::endl;
    std::cout << "La direccion propia del puntero " << &pNumero << std::endl;
    std::cout << "La direccion de la variable original es: " << &numero << std::endl;
    std::cout << "El tamanio de memoria almacenado por el puntero es: " << sizeof(*pNumero) << " bytes" << std::endl;

    float num, numCuadrado;
    printf("Inserte un numero para obtener su cuadrado\n");
    scanf("%f", &num);
    numCuadrado = cuadrado(num);
    return 0;
}

float cuadrado(float a){
    return a*a;
}
void cuadradoProcedimiento(float a){
    printf("%p\n%d\n", &a, a);
}
void invertir(int a, int b){

}
void orden(int a, int b){

}