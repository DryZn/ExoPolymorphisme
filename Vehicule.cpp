#include "Vehicule.hpp"

using namespace std;

Vehicule::Vehicule() : _poids(""), _nbRoues(0), _facture(""), _etat_controle(false) {
}

Vehicule::Vehicule(const string& poids, int nbRoues, const string& facture) : _poids(poids), _nbRoues(nbRoues), _facture(facture), _etat_controle(false) {
}

Camion::Camion() : Vehicule("Lourd", 6, "tu vas halass") {
}

Voiture::Voiture() : Vehicule("Moyen", 4, "cher") {
}

Moto::Moto() : Vehicule("Leger", 2, "pas cher") {
}