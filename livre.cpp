#include "Livre.h"
#include <iostream>

Livre::Livre(std::string t, std::string l, std::string g, Date d, std::string isbn)
    : titre(t), langue(l), genre(g), datePublication(d), isbn(isbn) {}

std::string Livre::getTitre() const {
    return titre;
}

std::string Livre::getLangue() const {
    return langue;
}

std::string Livre::getGenre() const {
    return genre;
}

Date Livre::getDatePublication() const {
    return datePublication;
}

std::string Livre::getIsbn() const {
    return isbn;
}

void Livre::setTitre(std::string t) {
    titre = t;
}

void Livre::setLangue(std::string l) {
    langue = l;
}

void Livre::setGenre(std::string g) {
    genre = g;
}

void Livre::setDatePublication(Date d) {
    datePublication = d;
}

void Livre::setIsbn(std::string isbn) {
    this->isbn = isbn;
}

void Livre::afficher() const {
    std::cout << "Titre: " << titre << "\n"
              << "Langue: " << langue << "\n"
              << "Genre: " << genre << "\n"
              << "Date de Publication: "; datePublication.afficher();
              std::cout << "ISBN: " << isbn << std::endl;
}
