#include <iostream>
#include <string>
using namespace std;
struct Libro {
    string titulo;
    string autor;
    int anio;
};

int main() {
    int numLibros;
    cout << "Ingrese el número de libros en la biblioteca: ";
    cin >> numLibros;
    // Crear un arreglo dinámico de libros usando punteros
    Libro* biblioteca = new Libro[numLibros];
    Libro *p = biblioteca;
    // Ingresar la información de cada libro
    for (int i = 0; i < numLibros; ++i) {
        cin.ignore(); // Limpiar el búfer
        cout << "Libro " << i + 1 << ":" << endl;
        cout << "Título: ";
        getline(cin, p->titulo);
        cout << "Autor: ";
        getline(cin, p->autor);
        cout << "Año: ";
        cin >> p->anio;
        p++;
    }
    p = biblioteca;
    // Mostrar la información de los libros
    cout << "\nInformación de los libros en la biblioteca:" << endl;
    for (int i = 0; i < numLibros; ++i) {
        cout << "Libro " << i + 1 << ":" << endl;
        cout << "Título: " << p->titulo << endl;
        cout << "Autor: " << p->autor << endl;
        cout << "Año: " << p->anio << endl;
        p++;
    }

    // Liberar la memoria del arreglo dinámico
    delete[] biblioteca;

    return 0;
}
