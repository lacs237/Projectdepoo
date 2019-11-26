#ifndef PROJECTDEPOO_STACK_H
#define PROJECTDEPOO_STACK_H

#include <iostream>

#include "Producto.h"
#include "tipos.h"

using namespace std;

class Stack {
private:
    TipoTamaño tamaño, indiceTop;
    Producto *productos;
    TipoTamaño tamañoPredeterminado = 10;

public:
    Stack(TipoTamaño tamaño);
    void push(Producto producto);
    Producto* pop(TipoNombre producto);

    Stack();
};


#endif //PROJECTDEPOO_STACK_H
