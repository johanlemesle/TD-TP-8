#ifndef ROBOTTELEPORTEUR_H_INCLUDED
#define ROBOTTELEPORTEUR_H_INCLUDED
#include "Robot.h"

class RobotTeleporteur : public Robot ///Hérite de la classe mère
{
    public :
        RobotTeleporteur();
        RobotTeleporteur(char aspect);
        void teleporter(int pos);
};

#endif // ROBOTTELEPORTEUR_H_INCLUDED
