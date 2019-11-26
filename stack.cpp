#include "stack.h"


Stack::Stack(TipoTamano tamano) {
    this->tamano = tamano;
    this->productos = new Producto[tamano];
    this->indiceTop = -1;
}

void Stack::push(Producto producto) {
    if (indiceTop == (tamano - 1)) {
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
    this->tamano = tamanoPredeterminado;
    this->productos = new Producto[tamanoPredeterminado];
    this->indiceTop = -1;
}

