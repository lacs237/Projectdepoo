#include "stack.h"


stack::stack(TipoTamaño tamaño) {
    this->tamaño = tamaño;
    this->productos = new producto[tamaño];
    this->indiceTop = -1;
}

void stack::push(producto producto) {
    if (indiceTop == (tamaño - 1)) {
        cout << "No hay mas espacio." << endl;
    }
    else {
        ++indiceTop;
        productos[indiceTop] = producto;
    }
}

producto* stack::pop(TipoNombre producto) {
    producto *objetoTop = nullptr;
    int indiceTemp = indiceTop;
    if (indiceTop != -1) {
        while (indiceTemp >= 0) {
            if (productos[indiceTemp].get_nombre() == producto) {
                objetoTop = &productos[indiceTemp];
                break;
            }
            --indiceTemp;
        }
        for (int i = indiceTemp; i < indiceTop; ++i) {
            productos[i] = productos[i + 1];
        }
        --indiceTop;
    }
    return objetoTop;
}

stack::stack() {
    this->tamaño = tamañoPredeterminado;
    this->productos = new producto[tamañoPredeterminado];
    this->indiceTop = -1;
}

