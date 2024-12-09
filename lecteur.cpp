#include "Lecteur.h"
#include <iostream>

Lecteur::Lecteur(std::string id, std::string nom, std::string prenom)
    : id(id), nom(nom), prenom(prenom) {}

std::string Lecteur::getId() const {
    return id;
}

std::string Lecteur::getNom() const {
    return nom;
}

std::string Lecteur::getPrenom() const {
    return prenom;
}

std::vector<std::string> Lecteur::getLivresEmpruntes() const {
    return livresEmpruntes;
}

void Lecteur::setId(std::string id) {
    this->id = id;
}

void Lecteur::setNom(std::string nom) {
    this->nom = nom;
}

void Lecteur::setPrenom(std::string prenom) {
    this->prenom = prenom;
}

void Lecteur::ajouterLivreEmprunte(std::string isbn) {
    livresEmpruntes.push_back(isbn);
}

void Lecteur::afficher() const {
    std::cout << "Lecteur: " << prenom << " " << nom << " (ID: " << id << ")\n";
    std::cout << "Livres empruntés: ";
    for (const std::string& isbn : livresEmpruntes) {
        std::cout << isbn << " ";
    }
    std::cout << std::endl;
}
