#include "robot.h"
#include "producto.h"

robot::robot() {

}

void robot::setInicio(int x, int y) {
    this->origenX = x;
    this->origenY = y;
}

void robot::Insertar(stack &pila, producto producto) {
    pila.push(producto);
}

producto* robot::Extraer(stack &pila, TipoNombre producto) {
    return pila.pop(producto);
}
