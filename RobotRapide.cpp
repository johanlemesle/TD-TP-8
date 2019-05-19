#include "RobotRapide.h"

RobotRapide::RobotRapide() : Robot()
{
}
RobotRapide::RobotRapide(char aspect) : Robot{aspect}
{
}
///méthode permettant d'avancer deux fois plus rapidement qu'un robot normal
void RobotRapide::avancer(int dist)
{
    dist=2*dist;    ///La distance est multipliée par 2
    m_position=m_position + dist;
}
