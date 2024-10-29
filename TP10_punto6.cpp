#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Libro {
public:
string titulo;
string autor;
int anioPublicacion;
Libro(string t, string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}
};
bool compararAnio(const Libro &a, const Libro &b) {
return a.anioPublicacion < b.anioPublicacion;
}
int main() {
vector<Libro> libros;
string titulo, autor;
int anioPublicacion;
char continuar;
do {
cout << "Ingrese título del libro: ";
cin >> titulo;
cout << "Ingrese autor del libro: ";
cin >> autor;
cout << "Ingrese año de publicación: ";
cin >> anioPublicacion;
libros.push_back(Libro(titulo, autor, anioPublicacion));
cout << "¿Desea agregar otro libro? (s/n): ";
cin >> continuar;
} while (continuar == 's');
sort(libros.begin(), libros.end(), compararAnio);
for (const auto& libro : libros) {
cout << "Título: " << libro.titulo << ", Autor: " << libro.autor
<< ", Año de Publicación: " << libro.anioPublicacion << endl;
}
return 0;
}