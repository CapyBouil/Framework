#include "Enseignant.h"

Enseignant::Enseignant() {
    Ecue = "";}

Enseignant::Enseignant(std::string prenom, std::string nom, std::string Ecue)
    : Personne(prenom, nom)
{
    this->ECUE = Ecue;}

std::string Enseignant::getNom() const {
    return Personne::getNom();}

std::string Enseignant::getPrenom() const {
    return Personne::getPrenom();}

std::string Enseignant::getEcue() const{
    return this->matiere;}

void Enseignant::setECUE(std::string ECUE) {
    this->ECUE = ecue;}

void Enseignant::affiche() const {
    Personne::affiche();
    std::cout << "ECUE: " << ecue << std::endl;}