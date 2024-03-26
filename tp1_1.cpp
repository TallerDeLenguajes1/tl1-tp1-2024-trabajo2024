#include <iostream>

int main() {
    int *pNumero, numero = 4;
    pNumero = &numero;

    std::cout << "Hola, mundo" << std::endl;
    std::cout << "El contenido del puntero es: " << *pNumero << std::endl;
    std::cout << "La direccion del puntero es: " << pNumero << std::endl;
    std::cout << "La direccion propia del puntero " << &pNumero << std::endl;
    std::cout << "La direccion de la variable original es: " << &numero << std::endl;
    std::cout << "El tamanio de memoria almacenado por el puntero es: " << sizeof(*pNumero) << " bytes" << std::endl;

    return 0;
}
