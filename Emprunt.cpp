#include "Emprunt.h"
#include <iostream>

Emprunt::Emprunt(Date d, std::string isbn, std::string lecteurId)
    : dateEmprunt(d), isbn(isbn), lecteurId(lecteurId) {}

Date Emprunt::getDateEmprunt() const { return dateEmprunt; }
std::string Emprunt::getIsbn() const { return isbn; }
std::string Emprunt::getLecteurId() const { return lecteurId; }

void Emprunt::afficher() const {
    std::cout << "Emprunt: " << isbn << " par " << lecteurId << " à la date "; 
    dateEmprunt.afficher();
}
