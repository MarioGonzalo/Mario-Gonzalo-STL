#include <iostream>
#include <cmath>
// Se crea un namespace llamado Matematicas que contiene todas las funciones matemáticas básicas
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    float division(int a, int b) {
        return a / b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    int potencia(int a, int b) {
        return pow(a, b);
    }

    float raizCuadrada(int a) {
        return sqrt(a);
    }

    float logaritmo(int a) {
        return log(a);
    }

    float seno(int a) {
        return sin(a);
    }

    float coseno(int a) {
        return cos(a);
    }

    float tangente(int a) {
        return tan(a);
    }

    int factorial(int a) {
        int factorial = 1;
        for (int i = 1; i <= a; i++) {
            factorial *= i;
        }
        return factorial;
    }
}

// En el main se llama a las funciones del namespace Matematicas
int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    std::cout << "Division: " << Matematicas::division(5, 3) << std::endl;
    std::cout << "Multiplicacion: " << Matematicas::multiplicacion(5, 3) << std::endl;
    std::cout << "Potencia: " << Matematicas::potencia(5, 3) << std::endl;
    std::cout << "Raiz cuadrada: " << Matematicas::raizCuadrada(5) << std::endl;
    std::cout << "Logaritmo: " << Matematicas::logaritmo(5) << std::endl;
    std::cout << "Seno: " << Matematicas::seno(5) << std::endl;
    std::cout << "Coseno: " << Matematicas::coseno(5) << std::endl;
    std::cout << "Tangente: " << Matematicas::tangente(5) << std::endl;
    std::cout << "Factorial: " << Matematicas::factorial(5) << std::endl;
    return 0;
}
