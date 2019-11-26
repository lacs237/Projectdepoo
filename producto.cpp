#include "tipos.h"
#include "producto.h"
#include <utility>

Producto::Producto(string nombre) {
    this->nombre = nombre;
}

Producto::Producto() {

}

string Producto::get_nombre() {
    return nombre;
}
