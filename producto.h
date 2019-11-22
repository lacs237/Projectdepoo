#ifndef PROJECTDEPOO_PRODUCTO_H
#define PROJECTDEPOO_PRODUCTO_H

#include <iostream>

using namespace std;

class producto {
protected:
    TipoNombre nombre;

public:
    producto(TipoNombre nombre);
    producto();
    TipoNombre get_nombre();
};


#endif //PROJECTDEPOO_PRODUCTO_H
