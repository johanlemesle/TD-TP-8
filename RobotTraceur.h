#ifndef ROBOTTRACEUR_H_INCLUDED
#define ROBOTTRACEUR_H_INCLUDED
#include "Robot.h"
#include <iostream>

class RobotTraceur : public Robot ///H�rite de la classe m�re
{
    protected :
        char m_trace; ///Attribut que l'on va retrouver pour les classes d�riv�es (carburants et escargot )
    public :
        RobotTraceur();
        RobotTraceur(char aspect, char trace);
        void montrer();
};

#endif // ROBOTTRACEUR_H_INCLUDED
