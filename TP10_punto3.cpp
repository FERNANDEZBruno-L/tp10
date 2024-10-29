#include <iostream>
#include <vector>
using namespace std;
class Rectangulo {
public:
float base, altura;
Rectangulo(float b, float h) : base(b), altura(h) {}
float area() const {
return base * altura;
}
float perimetro() const {
return 2 * (base + altura);
}
};
int main() {
vector<Rectangulo> rectangulos;
float base, altura;
char continuar;
do {
cout << "Ingrese base del rectángulo: ";
cin >> base;
cout << "Ingrese altura del rectángulo: ";
cin >> altura;
rectangulos.push_back(Rectangulo(base, altura));
cout << "¿Desea agregar otro rectángulo? (s/n): ";
cin >> continuar;
} while (continuar == 's');
for (const auto& rectangulo : rectangulos) {
cout << "Base: " << rectangulo.base << ", Altura: " << rectangulo.altura
<< ", Área: " << rectangulo.area() << ", Perímetro: " << rectangulo.perimetro() <<
endl;
}
return 0;
}