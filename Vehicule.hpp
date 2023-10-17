#ifndef VEHICULE_HPP
#define VEHICULE_HPP

#include <iostream>
#include <string>

using namespace std;

class Vehicule {
    public:
    Vehicule();
    Vehicule(const string& poids, int nbRoues, const string& facture);
    ~Vehicule() {}

    virtual std::string getClasse() {return "";}
    const std::string& getPoids() {return _poids;}
    int getNbRoues() {return _nbRoues;}
    const std::string& getFacture() {return _facture;}
    bool getEtatControle() {return _etat_controle;}
    void setEtatControle(bool boolean) {_etat_controle=boolean;}

    protected:
    std::string _poids;
    int _nbRoues;
    std::string _facture;
    bool _etat_controle;
};

class Camion : public Vehicule {
    public:
    Camion();
    ~Camion() {}

    virtual std::string getClasse() {return "Camion";}
};

class Voiture : public Vehicule {
    public:
    Voiture();
    ~Voiture(){}

    virtual std::string getClasse() {return "Voiture";}
};

class Moto : public Vehicule {
    public:
    Moto();
    ~Moto(){}

    virtual std::string getClasse() {return "Moto";}
};

#endif