#include "plante.h"
#include <iostream>
#include <string>
#ifndef PLANTE_CPP
#define PLANTE_CPP

Plante::Plante (std :: string nom): _name(nom), _taille(5), _sante(5), _hydratation(5), _vie (10) {}

void Plante :: manger (int engrais){
    engrais = 1;
    _taille += engrais;
}

void Plante :: tailler (int coupe){
    coupe = 2;
    _taille -= coupe;
    if(_taille <4) _sante -= 4;
    if(_taille <0) _vie = 0;
}

void Plante :: boire (int goutte){
    goutte = 2;
    _hydratation += goutte;
    if(_hydratation<0) _vie = 0;
    if(_hydratation>10) _vie = 0;
}

void Plante :: vivre(){
    if(_sante<0) _vie = 0;
}

void Plante::affiche(){
    std::cout << "La plante est du " << _name << ", mesure " << _taille << "cm, a une sante de " << _sante << "/5, a une hydratation de " << _hydratation << "/5 et une vie de " << _vie<< "/10." << std::endl;
}

#endif