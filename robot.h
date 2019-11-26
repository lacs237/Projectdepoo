#ifndef PROJECTDEPOO_ROBOT_H
#define PROJECTDEPOO_ROBOT_H

#include "tipos.h"
#include "producto.h"
#include "stack.h"

class Robot {
private:
    TipoPosicion origenX;
    TipoPosicion origenY;

public:
    Robot();
    void setInicio(TipoPosicion x, TipoPosicion y);
    void Insertar(Stack &pila, Producto producto);
    producto* Extraer(Stack &pila, TipoNombre producto);

};


#endif //PROJECTDEPOO_ROBOT_H
