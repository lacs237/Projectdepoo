#include "Tipos.h"
#include "Producto.h"

Producto::Producto(TipoNombre nombre) {
    this->nombre = nombre;
}

Producto::Producto() {

}

TipoNombre Producto::get_nombre() {
    return nombre;
}
