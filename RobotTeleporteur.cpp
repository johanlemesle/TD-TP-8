#include "RobotTeleporteur.h"
///Classe fille t�l�porteur
RobotTeleporteur::RobotTeleporteur() : Robot()
{
}
RobotTeleporteur::RobotTeleporteur(char aspect) : Robot{aspect}
{
}
///m�thode sp�cifique
void RobotTeleporteur::teleporter(int pos)
{
    m_position=pos; ///Envoie le robot � la position demand�
}
