#include <iostream>
#include <string>
#include<iostream>


class Vehicule {
protected:
    std::string immatriculation;
    std::string marque;
    double vitesseMax;

public:

    Vehicule(std::string imm, std::string mq, double vMax) {
        immatriculation = imm;
        marque = mq;
        vitesseMax = vMax;
    }


    virtual ~Vehicule() {

    }


    virtual void afficherDetails() {
    	std::cout << "Véhicule Immatriculation : " << immatriculation
             << ", Marque: " << marque
             << ", Vitesse Max: " << vitesseMax << std::endl;
    }
};


class Voiture : public Vehicule {
private:
    int nombrePortes;
    std::string typeCarburant;

public:
    Voiture( std::string imm,  std::string mq, double vMax, int portes,  std::string carburant)
        : Vehicule(imm, mq, vMax) {
        nombrePortes = portes;
        typeCarburant = carburant;
    }


    void afficherDetails() override {
    	 std::cout << "Voiture Immatriculation: " << immatriculation
             << ", Marque: " << marque
             << ", Vitesse Max: " << vitesseMax
             << ", Portes: " << nombrePortes
             << ", Carburant: " << typeCarburant<< std::endl;
    }
};

// 3. Classe dérivée Camion
class Camion : public Vehicule {
private:
    double capaciteCharge;
    int nombreEssieux;

public:
    Camion(std::string imm, std::string mq, double vMax, double capacite, int essieux)
        : Vehicule(imm, mq, vMax) {
        capaciteCharge = capacite;
        nombreEssieux = essieux;
    }


    void afficherDetails() override {
    	std::cout << "Camion [Immat: " << immatriculation
             << ", Marque: " << marque
             << ", Vitesse Max: " << vitesseMax
             << ", Charge: " << capaciteCharge << " tonnes"
             << ", Essieux: " << nombreEssieux << "]" << std::endl;
    }
};


int main() {


    Vehicule* vehicules[2];


    vehicules[0] = new Voiture("1234-A-56", "Dacia", 180.0, 5, "Essence");
    vehicules[1] = new Camion("7890-B-12", "Clio", 90.0, 15.5, 3);


    for (int i = 0; i < 2; i++) {
    	vehicules[i]->afficherDetails();
    }

        for (int i = 0; i < 2; i++) {
       delete vehicules[i];
   }

    return 0;
}
