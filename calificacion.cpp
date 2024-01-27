#include <iostream>

int main() {
    int calificacion;

    std::cout << "Ingresa tu calificacion en C++: ";
    std::cin >> calificacion;

    if (calificacion >= 60) {
        std::cout << "Felicidades, has aprobado el examen." << std::endl;
    } else {
        std::cout << "Lo siento, has reprobado el examen." << std::endl;
    }

    return 0;
}
