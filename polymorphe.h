#ifndef POLYMORPHE_H_INCLUDED
#define POLYMORPHE_H_INCLUDED
#include "Robot.h"
#include <iostream>
#include <list>

///Prototypes des fonctions liées au polymorphisme
void testRobotPolymorphe(Robot& r);

void remplirConteneurPolymorphe(std::list<Robot*>& bots);
void viderConteneurPolymorphe(std::list<Robot*>& bots);
void utiliserConteneurPolymorphe(std::list<Robot*>& bots);
void testConteneurPolymorphe();

#endif // POLYMORPHE_H_INCLUDED
