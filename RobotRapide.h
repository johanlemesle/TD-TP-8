#ifndef ROBOTRAPIDE_H_INCLUDED
#define ROBOTRAPIDE_H_INCLUDED
#include "Robot.h"

class RobotRapide : public Robot ///H�rite de la classe m�re
{
    public :
        RobotRapide();
        RobotRapide(char aspect);
        void avancer(int dist);
};

#endif // ROBOTRAPIDE_H_INCLUDED
