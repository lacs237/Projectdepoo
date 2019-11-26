#include "almacen.h"


almacen::almacen(int n, int dimensionX, int dimensionY) {
    this->NUMERO_DE_ROBOTS = n;
    robots = new robot[NUMERO_DE_ROBOTS];
    Almacen = new stack*[dimensionX];
    for (int fila = 0; fila < dimensionY; ++fila) {
        Almacen[fila] = new stack[dimensionY];
    }

}

void almacen::poner(int id, int destinoX, int destinoY, TipoNombre producto) {
    robot robot = robots[id - 1];
    producto productObject;
    if (producto == "Libro") {
        productObject = libro();
    } else if (producto == "Disco") {
        productObject = disco();
    } else if (producto == "Dispositivo") {
        productObject = dispositivo();
    }
    robot.insertar(Almacen[destinoX][destinoY], productObject);
}

void almacen::setOrigenRobot(int id, int x, int y) {
    robots[id].setOrigin(x, y);
}

producto* almacen::obtener(int id, int destinoX, int destinoY, string producto) {
    robot robot = robots[id - 1];
    return robot.extraer(Almacen[destinoX][destinoY], producto);
}
