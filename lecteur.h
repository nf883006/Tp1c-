#include <string>
#include <vector>

class Lecteur {
private:
    std::string id;
    std::string nom;
    std::string prenom;
    std::vector<std::string> livresEmpruntes;

public:
    // Constructeur
    Lecteur(std::string id, std::string nom, std::string prenom);

    // Getters
    std::string getId() const;
    std::string getNom() const;
    std::string getPrenom() const;
    std::vector<std::string> getLivresEmpruntes() const;

    // Setters
    void setId(std::string id);
    void setNom(std::string nom);
    void setPrenom(std::string prenom);
    void ajouterLivreEmprunte(std::string isbn);

    void afficher() const;
};
