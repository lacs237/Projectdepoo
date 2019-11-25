//
// Created by LUIS on 22/11/2019.
//

#ifndef PROJECTDEPOO_STACK_H
#define PROJECTDEPOO_STACK_H

#include <iostream>

#include "producto.h"
#include "tipos.h"

using namespace std;

class stack {
private:
    TipoTamaño tamaño, indiceTop;
    producto *productos;
    TipoTamaño tamañoPredeterminado = 10;

public:
    stack(TipoTamaño tamaño);
    void push(producto producto);
    producto* pop(TipoNombre producto);

    stack();
};


#endif //PROJECTDEPOO_STACK_H
