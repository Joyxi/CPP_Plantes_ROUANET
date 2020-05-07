#include <iostream>
#include <string>
#ifndef PLANTE_H
#define PLANTE_H

class Plante{
    private:
        std :: string _name;
        int _taille;
        int _sante;
        int _hydratation;
        int _vie;
    public:
        Plante(std::string name);

        void manger(int engrais);
        void tailler(int coupe);
        void boire(int goutte);
        void vivre();

        void affiche();
};

#endif