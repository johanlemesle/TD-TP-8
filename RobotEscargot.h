#ifndef ROBOTESCARGOT_H_INCLUDED
#define ROBOTESCARGOT_H_INCLUDED
#include "RobotTraceur.h"

class RobotEscargot: public RobotTraceur  ///H�rite de la classe RobotTraceur
{
    private :   ///Attribut propre � cette classe
        bool m_marche; ///Variable de type bool�en pour permettre d'avancer une fois sur deux
    public :
        RobotEscargot();
        void avancer(int dist);
};
#endif // ROBOTESCARGOT_H_INCLUDED
