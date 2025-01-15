#ifndef CLASSE_H
#define CLASSE_H

#include <iostream>
#include <string>
#include <list>

class Classe{
    private :
        std::string nomClasse;
        int id;
        std::list<Etudiant> etudiants;

    public :
        Classe();
        Classe(std::string nomClasse, int id);
        std::string getNomClasse();
        int getId();
        void ajouterEtudiant(Etudiant& etudiant);
        void supprimerEtudiant(Etudiant& etudiant);

}
#endif