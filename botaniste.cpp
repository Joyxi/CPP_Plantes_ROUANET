#include "botaniste.h"
#include"plante.h"
#include <string>
#include <iostream>

#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

using namespace std;

void Botaniste :: dormir (int heure, Plante * cible){
    _fatigue += heure;
    if(_fatigue = 3) std:: cout << "Jour suivant." << std::endl;
    (*cible).manger();
    //(*cible_sante-= 2);


}

void Botaniste :: acheter (){
    _argent -= 10;
    _plantes += 1;
    if(_argent<0) _argent = 0;
    if(_argent<0) std::cout << "Vous n'avez pas assez d'argent." << std::endl;
}

void Botaniste :: vendre(){
    _argent += 13;
    _plantes -= 1;
    if(_plantes < 1) _plantes = 0;
    if(_plantes < 1) std::cout << "Vous n'avez plus de plantes à vendre. "<< std::endl;
}

#endif