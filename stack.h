#ifndef PROJECTDEPOO_STACK_H
#define PROJECTDEPOO_STACK_H

#include <iostream>

#include "producto.h"
#include "tipos.h"

using namespace std;

class Stack {
private:
    TipoTamano tamano, indiceTop;
    Producto *productos;
    TipoTamano tamanoPredeterminado = 10;

public:
    Stack(TipoTamano tamano);
    void push(Producto producto);
    Producto* pop(TipoNombre producto);

    Stack();
};


#endif //PROJECTDEPOO_STACK_H
