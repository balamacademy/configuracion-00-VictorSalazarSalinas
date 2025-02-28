#include <iostream>

int main(int argc, char **argv) {
    char nombre[20];
    int edad;

    std::cin >> nombre;
    std::cin >> edad;
    std::cout<<"El nombre es ";
    std::cout<<(nombre);
    std::cout<<" de edad ";
    std::cout<<(edad);
    return 0;
}