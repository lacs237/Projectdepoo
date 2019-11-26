#ifndef PROJECTDEPOO_PRODUCTO_H
#define PROJECTDEPOO_PRODUCTO_H

#include <iostream>

using namespace std;

class Producto {
protected:
    string nombre;

public:
    Producto(string nombre);
    Producto();
    string get_nombre();
};


#endif //PROJECTDEPOO_PRODUCTO_H
