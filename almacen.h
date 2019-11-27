#ifndef POOPROJECT_ALMACEN_H
#define POOPROJECT_ALMACEN_H

#include <iostream>

#include "stack.h"
#include "robot.h"

#include "libro.h"
#include "dispositivo.h"
#include "disco.h"

using namespace std;

class Almacen {
private:
    Robot *robots;
    TipoNumero NUMERO_DE_ROBOTS;
    Stack **almacen;

public:
    Almacen(TipoNumero n, TipoPosicion dimensionX, TipoPosicion dimensionY);
    void setOrigenRobot(int id, TipoPosicion x, TipoPosicion y);
    void Poner(int id, TipoPosicion destinoX, TipoPosicion destinoY, TipoNombre producto);
    Producto* Obtener(int id, TipoPosicion destinoX, TipoPosicion destinoY, TipoNombre producto);

};


#endif //POOPROJECT_ALMACEN_H

