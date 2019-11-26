#include "Stack.h"


Stack::Stack(TipoTamaño tamaño) {
    this->tamaño = tamaño;
    this->productos = new Producto[tamaño](nullptr);
    this->indiceTop = -1;
}

void Stack::push(Producto producto) {
    if (indiceTop == (tamaño - 1)) {
        cout << "No hay mas espacio." << endl;
    }
    else {
        ++indiceTop;
        productos[indiceTop] = producto;
    }
}

Producto* Stack::pop(TipoNombre producto) {
    Producto *objetoTop = nullptr;
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

Stack::Stack() {
    this->tamaño = tamañoPredeterminado;
    this->productos = new Producto[tamañoPredeterminado](nullptr);
    this->indiceTop = -1;
}

