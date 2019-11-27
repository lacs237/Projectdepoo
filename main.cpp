#include <iostream>
#include <fstream>
#include <sstream>

#include "almacen.h"

using namespace std;

TipoNumero NUMERO_DE_ROBOTS;
TipoNumero NUMERO_DE_INSTRUCCIONES;
ifstream archivo("input.txt");
Almacen *almacen;

void leerDatos(istream& in){
    TipoNombre
};

void abrirArchivo(istream& in){
        if (archivo.is_open()) {
            leerDatos();
            archivo.close();
        }
        else
            cout << "No se puede abrir el archivo" << endl;
};



int main() {
    abrirArchivo(cin);
    leerDatos(cin);
    return 0;
}