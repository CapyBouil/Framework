#ifndef SALLE_H
#define SALLE_H

#include <iostream>

class Salle
{
    private:
        int etage;
        int numero;
    public:
        Salle();
        Salle(int etage, int numero);

        int getEtage();
        int getNumero();

        int getNumeroComplet();

        void affiche();
};

#endif