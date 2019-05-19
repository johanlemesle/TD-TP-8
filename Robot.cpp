#include "Robot.h"
#include <iostream>
///Constructeur par d�fault
Robot::Robot()
{
    m_position=0;
    m_aspect='A';
}
///Constructeur initialisant la position � 0 et l'aspect avec la lettre de notre choix
Robot::Robot(char aspect) : m_aspect{aspect}, m_position{0}
{
}
///Destructeur
Robot::~Robot()
{
}
///M�thode de d�placement du robot � une distance dist de sa position initiale (0)
void Robot::avancer(int dist)
{
    m_position=m_position + dist;
}
///Affichage � l'�cran
void Robot::montrer()
{
    std::cout << std::string(m_position,' ') << m_aspect << std::endl;
}
