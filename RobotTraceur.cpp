#include "RobotTraceur.h"
RobotTraceur::RobotTraceur(): Robot()
{
}
RobotTraceur::RobotTraceur(char aspect, char trace) : Robot{aspect}, m_trace{trace}
{
}
void RobotTraceur::montrer()
{
    std::cout << std::string(m_position,m_trace) << m_aspect << std::endl;  ///Affiche à l'écran la trace à chaque position, et l'aspect à la fin
}
