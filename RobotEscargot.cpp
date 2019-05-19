#include "RobotEscargot.h"
///Initialisation des attributs aspect et trace par des caract�res pr�d�ifnis construit � partir du constructeur RobotTraceur + m_marche initialis� � True
RobotEscargot::RobotEscargot() : RobotTraceur('@','_'), m_marche{true}
{
}

void RobotEscargot::avancer(int dist)
{
    m_marche = !m_marche; ///m_marche prend la valeur diff�rente de m_marche
    if(m_marche)
    {
        m_position=m_position+dist;
    }
}

