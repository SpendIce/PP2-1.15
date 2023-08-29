#include <iostream>
#include <string>
using namespace std;
// Definición de la estructura Libro
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

    // Ingresar la información de cada libro
    for (int i = 0; i < numLibros; ++i) {
        cin.ignore(); // Limpiar el búfer
        cout << "Libro " << i + 1 << ":" << endl;
        cout << "Título: ";
        getline(cin, biblioteca[i].titulo);
        cout << "Autor: ";
        getline(cin, biblioteca[i].autor);
        cout << "Año: ";
        cin >> biblioteca[i].anio;
    }

    // Mostrar la información de los libros
    cout << "\nInformación de los libros en la biblioteca:" << endl;
    for (int i = 0; i < numLibros; ++i) {
        cout << "Libro " << i + 1 << ":" << endl;
        cout << "Título: " << biblioteca[i].titulo << endl;
        cout << "Autor: " << biblioteca[i].autor << endl;
        cout << "Año: " << biblioteca[i].anio << endl;
    }

    // Liberar la memoria del arreglo dinámico
    delete[] biblioteca;

    return 0;
}
