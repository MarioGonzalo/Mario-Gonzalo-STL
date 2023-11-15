#include <iostream>
#include "Geometria.h"

int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    std::cout << "Area del rombo: " << Geometria::calcularAreaRombo(5, 3) << std::endl;
    std::cout << "Area del cuadrado: " << Geometria::calcularAreaCuadrado(5) << std::endl;
    std::cout << "Area del rectangulo: " << Geometria::calcularAreaRectangulo(5, 3) << std::endl;
    return 0;
}