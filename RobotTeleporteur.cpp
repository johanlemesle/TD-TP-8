#include "RobotTeleporteur.h"
///Classe fille téléporteur
RobotTeleporteur::RobotTeleporteur() : Robot()
{
}
RobotTeleporteur::RobotTeleporteur(char aspect) : Robot{aspect}
{
}
///méthode spécifique
void RobotTeleporteur::teleporter(int pos)
{
    m_position=pos; ///Envoie le robot à la position demandé
}
