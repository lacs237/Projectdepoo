#ifndef PROJECTDEPOO_ROBOT_H
#define PROJECTDEPOO_ROBOT_H

#include "tipos.h"
#include "producto.h"
#include "stack.h"

class robot {
private:
    TipoPosicion origenX;
    TipoPosicion origenY;

public:
    robot();
    void setInicio(TipoPosicion x, TipoPosicion y);
    void Insertar(stack &pila, producto producto);
    void Moverse();
    producto* Extraer(stack &pila, TipoNombre producto);

};


#endif //PROJECTDEPOO_ROBOT_H
