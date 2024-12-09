#include <iostream>

class Date {
private:
    int jour, mois, annee;

public:
    Date(int j = 1, int m = 1, int a = 2000) : jour(j), mois(m), annee(a) {
        if (!estValide()) {
            std::cerr << "Date invalide ! Réinitialisation à 01/01/2000." << std::endl;
            jour = 1; mois = 1; annee = 2000;
        }
    }

    bool estValide() const {
        if (mois < 1 || mois > 12) return false;
        if (jour < 1 || jour > joursDansMois(mois, annee)) return false;
        return true;
    }

    void afficher() const {
        std::cout << (jour < 10 ? "0" : "") << jour << "/"
                  << (mois < 10 ? "0" : "") << mois << "/"
                  << annee << std::endl;
    }

    static int joursDansMois(int mois, int annee) {
        if (mois == 2) return (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0)) ? 29 : 28;
        return (mois == 4 || mois == 6 || mois == 9 || mois == 11) ? 30 : 31;
    }
};
