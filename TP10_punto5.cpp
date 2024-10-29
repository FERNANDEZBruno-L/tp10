#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Empleado {
public:
string nombre;
float salario;
string departamento;
Empleado(string n, float s, string d) : nombre(n), salario(s), departamento(d) {}
};
bool compararSalario(const Empleado &a, const Empleado &b) {
return a.salario > b.salario;
}
int main() {
vector<Empleado> empleados;
std::string nombre, departamento;
float salario;
char continuar;
do {
cout << "Ingrese nombre del empleado: ";
cin >> nombre;
cout << "Ingrese salario del empleado: ";
cin >> salario;
cout << "Ingrese departamento del empleado: ";
cin >> departamento;
empleados.push_back(Empleado(nombre, salario, departamento));
cout << "¿Desea agregar otro empleado? (s/n): ";
cin >> continuar;
} while (continuar == 's');
sort(empleados.begin(), empleados.end(), compararSalario);
cout << "\nEmpleados ordenados por salario (de mayor a menor):" << endl;
for (const auto& empleado : empleados) {
cout << "Nombre: " << empleado.nombre << ", Salario: " << empleado.salario
<< ", Departamento: " << empleado.departamento << endl;
}
return 0;
}