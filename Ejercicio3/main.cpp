#include <iostream>
#include <cmath>
//Dentro del namespace Geometria, crea las clases Circulo, Rectangulo, Triangulo, Cuadrado y Rombo.
namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };
    class Rectangulo {
    private:
        double base;
        double altura;
    public:
        Rectangulo(double b, double a) : base(b), altura(a) {}
        double calcularArea() {
            return base * altura;
        }
        double calcularPerimetro() {
            return 2 * (base + altura);
        }
    };
    class Triangulo {
    private:
        double base;
        double altura;
    public:
        Triangulo(double b, double a) : base(b), altura(a) {}
        double calcularArea() {
            return (base * altura) / 2;
        }
        double calcularPerimetro() {
            return 3 * base;
        }
    };
    class Cuadrado {
    private:
        double lado;
    public:
        Cuadrado(double l) : lado(l) {}
        double calcularArea() {
            return lado * lado;
        }
        double calcularPerimetro() {
            return 4 * lado;
        }
    };
    class rombo {
    private:
        double diagonalMayor;
        double diagonalMenor;
    public:
        rombo(double dM, double dm) : diagonalMayor(dM), diagonalMenor(dm) {}
        double calcularArea() {
            return (diagonalMayor * diagonalMenor) / 2;
        }
        double calcularPerimetro() {
            return 4* sqrt((diagonalMayor * diagonalMayor) + (diagonalMenor * diagonalMenor));
        }

    };
}
//En el main, crea un objeto de cada clase y muestra por pantalla el área y el perímetro de cada uno de ellos.
int main() {
    Geometria::Circulo c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;
    Geometria::Rectangulo r(5, 3);
    std::cout << "Area: " << r.calcularArea() << std::endl;
    std::cout << "Perimetro: " << r.calcularPerimetro() << std::endl;
    Geometria::Triangulo t(5, 3);
    std::cout << "Area: " << t.calcularArea() << std::endl;
    std::cout << "Perimetro: " << t.calcularPerimetro() << std::endl;
    Geometria::Cuadrado cu(5);
    std::cout << "Area: " << cu.calcularArea() << std::endl;
    std::cout << "Perimetro: " << cu.calcularPerimetro() << std::endl;
    Geometria::rombo ro(5, 3);
    std::cout << "Area: " << ro.calcularArea() << std::endl;
    std::cout << "Perimetro: " << ro.calcularPerimetro() << std::endl;
    return 0;
}