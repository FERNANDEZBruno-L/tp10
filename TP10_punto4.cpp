#include <iostream>
#include <vector>
using namespace std;class CuentaBancaria {
public:
int numeroCuenta;
string titular;
float saldo;
CuentaBancaria(int num, string t, float s) : numeroCuenta(num), titular(t), saldo(s) {}
void depositar(float cantidad) {
saldo += cantidad;
}
void retirar(float cantidad) {
if (cantidad <= saldo) {
saldo -= cantidad;
} else {
cout << "Saldo insuficiente." << endl;
}
}
};
int main() {
vector<CuentaBancaria> cuentas;
int numeroCuenta, seleccion;
string titular;
float saldo, cantidad;
char continuar;
do {
cout << "Ingrese número de cuenta: ";
cin >> numeroCuenta;
cout << "Ingrese nombre del titular: ";
cin >> titular;
cout << "Ingrese saldo inicial: ";
cin >> saldo;
cuentas.push_back(CuentaBancaria(numeroCuenta, titular, saldo));
cout << "¿Desea agregar otra cuenta bancaria? (s/n): ";
cin >> continuar;
} while (continuar == 's');
cout << "Seleccione una cuenta por número: ";
cin >> seleccion;
for (auto& cuenta : cuentas) {
if (cuenta.numeroCuenta == seleccion) {
cout << "Ingrese cantidad a depositar: ";
cin >> cantidad;
cuenta.depositar(cantidad);
cout << "Saldo actualizado: " << cuenta.saldo << endl;
cout << "Ingrese cantidad a retirar: ";
cin >> cantidad;
cuenta.retirar(cantidad);
cout << "Saldo actualizado: " << cuenta.saldo << endl;
}
}
return 0;
}