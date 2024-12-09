
#include <string>
#include "Date.h"

class Livre {
private:
    std::string titre;
    std::string langue;
    std::string genre;
    Date datePublication;
    std::string isbn;

public:
    // Constructeur
    Livre(std::string t, std::string l, std::string g, Date d, std::string isbn);

    // Getters
    std::string getTitre() const;
    std::string getLangue() const;
    std::string getGenre() const;
    Date getDatePublication() const;
    std::string getIsbn() const;

    // Setters
    void setTitre(std::string t);
    void setLangue(std::string l);
    void setGenre(std::string g);
    void setDatePublication(Date d);
    void setIsbn(std::string isbn);

    // Affichage des informations du livre
    void afficher() const;
};

