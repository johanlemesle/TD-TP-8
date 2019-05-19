#include "RobotEscargot.h"
///Initialisation des attributs aspect et trace par des caractères prédéifnis construit à partir du constructeur RobotTraceur + m_marche initialisé à True
RobotEscargot::RobotEscargot() : RobotTraceur('@','_'), m_marche{true}
{
}

void RobotEscargot::avancer(int dist)
{
    m_marche = !m_marche; ///m_marche prend la valeur différente de m_marche
    if(m_marche)
    {
        m_position=m_position+dist;
    }
}

