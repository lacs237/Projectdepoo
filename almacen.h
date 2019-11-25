#ifndef POOPROJECT_ALMACEN_HPP
#define POOPROJECT_ALMACEN_HPP

#include <iostream>

#include "stack.h"
#include "robot.h"

#include "libro.h"
#include "dispositivo.h"
#include "disco.h"

using namespace std;

class almacen {
private:
    robot *robots;
    TipoNumero NUMERO_DE_ROBOTS;
    stack **almacen;

public:
    almacen(int n, int dimensionX, int dimensionY);
    void setOrigenRobot(int id, int x, int y);
    void poner(int id, int destinoX, int destinoY, string producto);
    producto* obtener(int id, int destinoX, int destinoY, string producto);

};


#endif //POOPROJECT_ALMACEN_HPP

