#include "RobotTraceur.h"
RobotTraceur::RobotTraceur(): Robot()
{
}
RobotTraceur::RobotTraceur(char aspect, char trace) : Robot{aspect}, m_trace{trace}
{
}
void RobotTraceur::montrer()
{
    std::cout << std::string(m_position,m_trace) << m_aspect << std::endl;  ///Affiche � l'�cran la trace � chaque position, et l'aspect � la fin
}
