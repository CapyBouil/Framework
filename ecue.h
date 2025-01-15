#ifndef ECUE_H
#define ECUE_H

#include <iostream>
#include <string>

using namespace std;

class ECUE
{

private:
    std::string nomECUE;
    int nbHeures;
    std::vector<Enseignant> enseignants;

public:
    ECUE(std::string nom, float nbHeures);

    void ECUE::ajouterEnseignant(Enseignant e);
    void ECUE::supprimerEnseignant(Enseignant e);   
};

#endif // ECUE_H
