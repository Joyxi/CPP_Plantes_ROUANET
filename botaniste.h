#include <iostream>
//#include <stream>
#include "plante.h"

#ifndef BOTANISTE_H
#define BOTANISTE_H

class Botaniste{
    private:
        std::string _name;
        int _argent = 50;
        int _fatigue;
        int _plantes;
    
    public:
        Botaniste(std::string name);

        void dormir(int heure = 1);
        void acheter();
        void vendre();

        void buy();

        void affiche();
    
};

#endif