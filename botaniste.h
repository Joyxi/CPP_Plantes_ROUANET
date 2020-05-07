#include <iostream>
#include <stream>
#include "plante.h"

#ifndef BOTANISTE_H
#define BOTANISTE_H

class Botaniste{
    private:
        std::string _name;
        int _argent = 50;
        int _fatigue;
    
    public:
        Botaniste(std::string name);

        void dormir(int heure = 1);
        void acheter();
        void vendre();

        void affiche();
    
};

#endif