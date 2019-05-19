#ifndef ROBOTCARBURANT_H_INCLUDED
#define ROBOTCARBURANT_H_INCLUDED
#include "RobotTraceur.h"

class RobotCarburant: public RobotTraceur ///Hérite de la classe RobotTraceur
{
    private : ///Attribut propre à cette classe
        int m_carburant;
    public :
        RobotCarburant();
        RobotCarburant(char aspect, char trace, int carburant);
        void avancer(int dist);
};

#endif // ROBOTCARBURANT_H_INCLUDED
