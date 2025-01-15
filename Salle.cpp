#include "Salle.h"

Salle::Salle() {
    this->etage = 0;
    this->numero = 0;
}

Salle::Salle(int etage, int numero) {
    this->etage = etage;
    this->numero = numero;
}

int Salle::getEtage() {
    return etage;
}

int Salle::getNumero() {
    return numero;
}

int Salle::getNumeroComplet() {
    return 100 * etage + numero;
}

void Salle::affiche() {
    std::cout << "Salle " << getNumeroComplet() << std::endl;
}