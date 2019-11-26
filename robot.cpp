#include "Robot.h"
#include "producto.h"

Robot::Robot() {

}

void Robot::setInicio(int x, int y) {
    this->origenX = x;
    this->origenY = y;
}

void Robot::Insertar(Stack &pila, Producto producto) {
    pila.push(producto);
}

Producto* Robot::Extraer(Stack &pila, TipoNombre producto) {
    return pila.pop(producto);
}
