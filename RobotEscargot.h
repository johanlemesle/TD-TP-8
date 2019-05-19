#ifndef ROBOTESCARGOT_H_INCLUDED
#define ROBOTESCARGOT_H_INCLUDED
#include "RobotTraceur.h"

class RobotEscargot: public RobotTraceur  ///Hérite de la classe RobotTraceur
{
    private :   ///Attribut propre à cette classe
        bool m_marche; ///Variable de type booléen pour permettre d'avancer une fois sur deux
    public :
        RobotEscargot();
        void avancer(int dist);
};
#endif // ROBOTESCARGOT_H_INCLUDED
