#ifndef PROJECTDEPOO_PRODUCTO_H
#define PROJECTDEPOO_PRODUCTO_H

#include <iostream>

using namespace std;

class producto {
protected:
    string nombre;

public:
    producto(string nombre);
    producto();
    string get_nombre();
};


#endif //PROJECTDEPOO_PRODUCTO_H
