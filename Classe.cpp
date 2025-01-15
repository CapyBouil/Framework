#include "classe.h"

Classe::Classe() {
    this->id = 0;
    this->nomClasse = "";
}

Classe::Classe(std::string nomClasse, int id)
{
    this->nomClasse = nomClasse;
    this->id = id;
}

void Classe::ajouterEtudiant(Etudiant& etudiant)
{
    etudiants.push_back(etudiant);
}

void Classe::supprimerEtudiant(std::string& nom, std::string& prenom)
{
    for(liste = etudiants.begin; liste != etudiants.end(); ++liste)
    {
        if (liste->getNom() == nom && liste->getPrenom() == prenom) 
        {
            etudiants.erase(liste);
            std::cout << "Etudiant " << nom << " " << prenom << " supprimé." << std::endl;
            return;
        }
    }
    std::cout << "Etudiant non trouvé: " << nom << " " << prenom << std::endl;
}

void Classe::afficherEtudiants() const 
{
    std::cout << "Classe: " << nomClasse << " (ID: " << id << ")/n";
}