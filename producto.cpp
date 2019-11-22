#include "producto.h"

producto::producto(string nombre) {
    this->nombre = nombre;
}

producto::producto() {

}

string producto::get_nombre() {
    return nombre;
}
