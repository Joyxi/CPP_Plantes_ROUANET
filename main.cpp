#include <iostream>
#include <string>
#include <vector>

#include "plante.cpp"
#include "plante.h"
#include "botaniste.h"
#include "botaniste.cpp"

using namespace std;

int main(){
    std::cout << "Bienvenue dans votre jardin !" << std::endl;

    Plante * lierre = new Plante("Lierre");
    lierre->affiche();

    Botaniste * michel = new Botaniste("Michel");

    return 0;
};