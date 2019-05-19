#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED
///Classe m�re Robot
class Robot
{
    ///Attributs en protected car h�ritage
    protected :
        char m_aspect;
        int m_position;

    public :
        ///Constructeurs et destructeurs
        Robot();
        Robot(char aspect);
        virtual ~Robot();
        ///M�thodes en virtual pour le polymorphisme
        virtual void avancer(int dist);
        virtual void montrer();
};

#endif // ROBOT_H_INCLUDED
