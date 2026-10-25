#include <iostream>
#include <string>
#include<iostream>

// 1. Définition de la classe avec encapsulation (attributs privés)
class CompteBancaire {
private:
    std::string numero;
    std::string titulaire;
    double solde;

public:
    // 2. Constructeur paramétré
    CompteBancaire(std::string num, std::string tit, double s_init) {
        numero = num;
        titulaire = tit;
        solde = s_init;
    }

    // 3. Méthodes
    void deposer(double montant) {
        if (montant > 0) {
            solde += montant;

        } else {
        	std::cout << "le montant doit être positif." << std::endl;
        }
    }

    void retirer(double montant) {
        if (montant > 0) {
            if (solde >= montant) {
                solde -= montant;
            } else {
            	std::cout << "solde insuffisant." << std::endl;
            }
        } else {
        	std::cout << " le montant doit être positif." << std::endl;
        }
    }

    void afficher() {
    	std::cout << "Informations du compte" << std::endl;
    	std::cout << "Numéro : " << numero << std::endl;
    	std::cout << "Titulaire : " << titulaire << std::endl;
    	std::cout << "Solde : " << solde << std::endl;

    }
};


int main() {

    CompteBancaire compte1("C078", "Salma", 1000.0);
    CompteBancaire compte2("C563", "Ahmed", 500.0);


    compte1.deposer(500.0);
    compte1.retirer(200.0);


    compte2.retirer(600.0);
    compte2.deposer(100.0);


    compte1.afficher();
    compte2.afficher();

    return 0;
}



