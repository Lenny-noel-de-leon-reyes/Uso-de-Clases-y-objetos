#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string titulo, autor;
    int anio, edicion, paginas;

public:
    void ingresar() {
        
        cout << "\nTitulo: ";
        getline(cin, titulo);
        cout << "Autor: ";
        getline(cin, autor);
        cout << "Anio de publicacion: ";
        cin >> anio;
        cout << "Edicion: ";
        cin >> edicion;
        cout << "Cantidad de paginas: ";
        cin >> paginas;
        cin.ignore();
    }

    void mostrar() {
        cout << "\nTitulo               : " << titulo;
        cout << "\nAutor                : " << autor;
        cout << "\nAnio de publicacion   : " << anio;
        cout << "\nEdicion              : " << edicion;
        cout << "\nCantidad de paginas  : " << paginas;
        cout << "\n====================================\n";
    }
};

int main() {
    Libro libros[5];
    cout << "\n====================================";
    cout << "\n          INGRESE LOS LIBROS";
    cout << "\n====================================";

    for (int i = 0; i < 5; i++) {
        cout << "\nLibro " << i + 1 << endl;
        libros[i].ingresar();
    }

    cout << "\n===== LIBROS INGRESADOS =====\n";
    cout << "\n";
    for (int i = 0; i < 5; i++) {
        libros[i].mostrar();
    }

    return 0;
}
