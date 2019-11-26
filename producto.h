#ifndef PROJECTDEPOO_PRODUCTO_H
#define PROJECTDEPOO_PRODUCTO_H

#include <iostream>

using namespace std;

class Producto {
protected:
    TipoNombre nombre;

public:
    Producto(TipoNombre nombre);
    Producto();
    TipoNombre get_nombre();
};


#endif //PROJECTDEPOO_PRODUCTO_H
