#include "RobotCarburant.h"

///Constructeur par défaut
RobotCarburant::RobotCarburant() : RobotTraceur()
{
}
///Constructeur initialise les attributs aspect et trace à partir du constructeur de RobotTraceur, puis initialisation du carburant
RobotCarburant::RobotCarburant(char aspect, char trace, int carburant) : RobotTraceur{aspect,trace}, m_carburant{carburant}
{
}

///Méthode avancer
void RobotCarburant::avancer(int dist)
{
    ///Si le robot a du carburant, il peut avancer
    if(m_carburant>0)
    {
        m_position=m_position + dist;
        m_carburant=m_carburant-dist; ///A chaque fois qu'il avance d'une distance dist , il perd dist en carburant
    }

    if(m_carburant==0) /// Quand il est à sec, il n'avance plus !
    {
        m_position=m_position;
    }
}
