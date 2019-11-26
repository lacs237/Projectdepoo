#ifndef PROJECTDEPOO_ROBOT_H
#define PROJECTDEPOO_ROBOT_H

#include "Tipos.h"
#include "Producto.h"
#include "Stack.h"

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
