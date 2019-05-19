#include "polymorphe.h"
#include "Robot.h"
#include "RobotTeleporteur.h"
#include "RobotRapide.h"
#include "RobotTraceur.h"
#include "RobotCarburant.h"
#include "RobotEscargot.h"
#include <list>

void testRobotPolymorphe(Robot& z)
{
    for(size_t i=0; i<8; i++)
    {
        z.montrer();
        z.avancer(1);
    }
}

void testConteneurPolymorphe()
{
    std::list<Robot*> bots;
    remplirConteneurPolymorphe(bots);
    utiliserConteneurPolymorphe(bots);
    viderConteneurPolymorphe(bots);
}
///Remplie le conteneur bots avec chaque type de robot
void remplirConteneurPolymorphe(std::list<Robot*>& bots)
{
    bots.push_back(new Robot {'A'});
    bots.push_back(new RobotTeleporteur {'B'});
    bots.push_back(new RobotRapide {'C'});
    bots.push_back(new RobotTraceur {'D', '.'});
    bots.push_back(new RobotCarburant {'E', '-', 5});
    bots.push_back(new RobotEscargot {});
}

void utiliserConteneurPolymorphe(std::list<Robot*>& bots)
{
    for (int i=0; i<8; ++i)
    {
        std::cout << "====================" << std::endl;
        for (auto& pr : bots)   ///On parcourt à l'aide de l'itérateur la liste de robot et on les fait s'éxécuter un par un dans l'ordre
        {
            pr->montrer();
            pr->avancer(1);
            RobotTeleporteur* rt = dynamic_cast<RobotTeleporteur*>(pr); ///permet de récuperer les methodes/attributs de la classe mère robot
            if (rt)
            {
                if (i==3)
                    rt->teleporter(8);
            }
        }
    }
}

void viderConteneurPolymorphe(std::list<Robot*>& bots)
/// Fonction permettant de détruire chaque objet crée
{
    for (auto& pr : bots)
        delete pr;
    for (auto& pr : bots)
        bots.remove(pr);
}
