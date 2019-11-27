#include <iostream>
#include <fstream>
#include <sstream>

#include "almacen.h"

using namespace std;

TipoNumero NUMERO_DE_ROBOTS;
TipoNumero NUMERO_DE_INSTRUCCIONES;
fstream archivo("input.txt");
Almacen *almacen;

void leerArchivo();
void leerDatos();


int main() {
    leerArchivo();
    return 0;
}