#include <iostream>
#include <cmath>
// En el namespace Ciencia se encuentran los namespaces Fisica, Quimica y Matemáticas
namespace Ciencia {
    // En el namespace Fisica se encuentran las funciones calcularEnergia y calcularMasa
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
        double calcularMasa(double energia) {
            return energia / (c * c);
        }
    }
    // En el namespace Quimica se encuentran las funciones calcularPH y calcularConcentracion
    namespace Quimica {
        double calcularPH(double concentracion) {
            return -std::log10(concentracion);
        }
        double calcularConcentracion(double ph) {
            return std::pow(10, -ph);
        }
    }
    // En el namespace Matemáticas se encuentran las funciones calcularPotencia y calcularRaiz
    namespace Matemáticas {
        double calcularPotencia(double base, double exponente) {
            return std::pow(base, exponente);
        }
        double calcularRaiz(double base, double exponente) {
            return std::pow(base, 1 / exponente);
        }
    }
}
// En el int main se llaman a las funciones de los namespaces
int main() {
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    std::cout << "Masa: " << Ciencia::Fisica::calcularMasa(10) << std::endl;
    std::cout << "PH: " << Ciencia::Quimica::calcularPH(10) << std::endl;
    std::cout << "Concentracion: " << Ciencia::Quimica::calcularConcentracion(10) << std::endl;
    std::cout << "Potencia: " << Ciencia::Matemáticas::calcularPotencia(10, 2) << std::endl;
    std::cout << "Raiz: " << Ciencia::Matemáticas::calcularRaiz(10, 2) << std::endl;
    return 0;
}