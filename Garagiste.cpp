#include <iostream>
#include "Garagiste.hpp"

using namespace std;

void Garagiste::controleVehicule(Vehicule& vehicule) {
    cout << "Classe vehicule: " << vehicule.getClasse() << endl;
    cout << "Poids: " << vehicule.getPoids() << endl;
    cout << "Nombre de roues: " << vehicule.getNbRoues() << endl;
    cout << "Facture: " << vehicule.getFacture() << endl << endl;
    vehicule.setEtatControle(true);
}