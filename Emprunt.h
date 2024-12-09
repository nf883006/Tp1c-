#include <string>
#include "Date.h"

class Emprunt {
private:
    Date dateEmprunt;
    std::string isbn;
    std::string lecteurId;

public:
    Emprunt(Date d, std::string isbn, std::string lecteurId);

    Date getDateEmprunt() const;
    std::string getIsbn() const;
    std::string getLecteurId() const;

    void afficher() const;
};