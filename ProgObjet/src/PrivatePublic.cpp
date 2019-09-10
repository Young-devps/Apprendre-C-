#include "PrivatePublic.h"


void PrivatePublic::setParaX(double x)
{
    x += y; //vaut le x entree en parametre le plus proche
    this->x = x; //this permet de pointer sur le premier x de la classe

}

