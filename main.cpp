#include <iostream>
#include <string>
#include <vector>

#include "plante.cpp"
#include "plante.h"

using namespace std;

int main(){
    std::cout << "Bienvenue dans votre jardin !" << std::endl;

    Plante * lierre = new Plante("Lierre");
    lierre->affiche();

    return 0;
};