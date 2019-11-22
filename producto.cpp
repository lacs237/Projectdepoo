#include "producto.h"
#include "tipos.h"

producto::producto(TipoNombre nombre) {
    this->nombre = nombre;
}

producto::producto() {

}

TipoNombre producto::get_nombre() {
    return nombre;
}
