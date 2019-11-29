#include "almacen.h"


Almacen::Almacen(TipoNumero n, TipoPosicion dimensionX, TipoPosicion dimensionY) {
    this->NUMERO_DE_ROBOTS = n;
    robots = new Robot[NUMERO_DE_ROBOTS];
    almacen = new Stack*[dimensionX];
    for (TipoNumero i = 0; i < dimensionY; ++i) {
        almacen[i] = new Stack[dimensionY];
    }
}

void Almacen::Poner(int id, TipoPosicion destinoX, TipoPosicion destinoY, TipoNombre producto) {
    Robot robot = robots[id - 1];
    Producto productObject(nullptr);
    if (producto == "Libro") {
        productObject = Libro();
    } else if (producto == "Disco") {
        productObject = Disco();
    } else if (producto == "Dispositivo") {
        productObject = Dispositivo();
    }
    robot.Insertar(almacen[destinoX][destinoY], productObject);
}

void Almacen::setOrigenRobot(int id, TipoPosicion x, TipoPosicion y) {
    robots[id].setInicio(x, y);
}

Producto* Almacen::Obtener(int id, TipoPosicion destinoX, TipoPosicion destinoY, TipoNombre producto) {
    Robot robot = robots[id - 1];
    return robot.Extraer(almacen[destinoX][destinoY], producto);
}
