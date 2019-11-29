#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "almacen.h"

using namespace std;

TipoNumero NUMERO_DE_ROBOTS;
TipoNumero NUMERO_DE_INSTRUCCIONES;
Almacen *almacen;

void abrirArchivo(TipoNombre file_name, ifstream& archivo){
    archivo.open(file_name, ios::in);
        if (!archivo.is_open()) {
            cout << "No se puede abrir el archivo" << endl;
        }
};

void leerDatos(ifstream& archivo) {
    TipoNombre linea, operacion, producto;
    stringstream ss;
    TipoNumero robot;
    TipoPosicion robotX, robotY, destino_x, destino_y;

    /* Quiero volver a usar el archivo que usé por referencia en leerArchivo(),
    pero cuando lo trato de hacer se malogra el "getline" */

    getline(archivo, linea);
    NUMERO_DE_ROBOTS = stoi(linea);
    almacen = new Almacen(NUMERO_DE_ROBOTS, 30, 30);
    for (TipoNumero numeroRobot = 0; numeroRobot < NUMERO_DE_ROBOTS; ++numeroRobot) {
        getline(archivo, linea);
        ss << linea;
        ss >> robotX >> robotY;
        almacen->setOrigenRobot(numeroRobot, robotX, robotY);
        ss.clear();
    }
    getline(archivo, linea);
    NUMERO_DE_INSTRUCCIONES = stoi(linea);
    for (TipoNumero numeroInstruccion = 0; numeroInstruccion < NUMERO_DE_INSTRUCCIONES; ++numeroInstruccion) {
        getline(archivo, linea);
        ss << linea;
        ss >> robot >> operacion >> destino_x >> destino_y >> producto;
        if (operacion == "Ingreso") {
            almacen->Poner(robot, destino_x, destino_y, producto);
        }
        else if (operacion == "Retiro") {
            Producto *res = almacen->Obtener(robot, destino_x, destino_y, producto);
            if (res) {
                cout << "Retirado "<<endl;
            }
            else
                cout << "No se encontro el elemento" << endl;
        }
        ss.clear();
    }
}

int main() {
    ifstream archivo;
    abrirArchivo("prueba.txt",archivo);
    leerDatos(archivo);
    return 0;
}

