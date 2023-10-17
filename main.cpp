#include <iostream>
#include "Garagiste.hpp"
#include "Vehicule.hpp"

using namespace std;

int main() {
    Voiture voiture;
    Moto moto;
    //Garagiste garagiste;

    //garagiste.controleVehicule(voiture);
    //garagiste.controleVehicule(moto);
    Garagiste::controleVehicule(voiture);
    Garagiste::controleVehicule(moto);

    return 0;
}