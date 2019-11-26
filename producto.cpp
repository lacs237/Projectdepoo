#include "Tipos.h"
#include "Producto.h"
#include <utility>

Producto::Producto(TipoNombre nombre) {
    this->nombre = nombre;
}

Producto::Producto() {

}

TipoNombre Producto::get_nombre() {
    return nombre;
}
