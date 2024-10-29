#include <iostream>
#include <vector>
using namespace std;
class Alumno {
public:
string nombre;
float nota1, nota2, nota3;
Alumno(string n, float n1, float n2, float n3) : nombre(n), nota1(n1), nota2(n2),
nota3(n3) {}
};
int main() {
vector<Alumno> alumnos;
string nombre;
float nota1, nota2, nota3;
char continuar;
do {
cout << "Ingrese nombre del alumno: ";
cin >> nombre;
cout << "Ingrese nota 1: ";
cin >> nota1;
cout << "Ingrese nota 2: ";
cin >> nota2;
cout << "Ingrese nota 3: ";
cin >> nota3;
alumnos.push_back(Alumno(nombre, nota1, nota2, nota3));
cout << "¿Desea agregar otro alumno? (s/n): ";
cin >> continuar;
} while (continuar == 's');
for (const auto& alumno : alumnos) {
cout << "Nombre: " << alumno.nombre << ", Nota 1: " << alumno.nota1 << ", Nota 2: "
<< alumno.nota2 << ", Nota 3: " << alumno.nota3 << endl;
}
return 0;
}