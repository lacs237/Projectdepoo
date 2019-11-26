#include "Tipos.h"
#include "Producto.h"
#include <utility>

Producto::Producto(TipoNombre nombre) {
    this->nombre = nombre;
}

Producto::Producto(const char string1[6]) {

}

TipoNombre Producto::get_nombre() {
    return nombre;
}
