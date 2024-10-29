#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Persona {
public:
string nombre;
int edad;
Persona(std::string n, int e) : nombre(n), edad(e) {}
};
bool compararEdad(const Persona &a, const Persona &b) {
return a.edad < b.edad;
}
int main() {
vector<Persona> personas;
string nombre;
int edad;
char continuar;
do {
cout << "Ingrese nombre de la persona: ";
cin >> nombre;
cout << "Ingrese edad: ";
cin >> edad;
personas.push_back(Persona(nombre, edad));
cout << "¿Desea agregar otra persona? (s/n): ";
cin >> continuar;
} while (continuar == 's');
sort(personas.begin(), personas.end(), compararEdad);
for (const auto& persona : personas) {
cout << "Nombre: " << persona.nombre << ", Edad: " << persona.edad << endl;
}
return 0;
}