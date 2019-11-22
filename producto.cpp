#include "tipos.h"
#include "producto.h"

producto::producto(TipoNombre nombre) {
    this->nombre = nombre;
}

producto::producto() {

}

string producto::get_nombre() {
    return nombre;
}
