/**
* File :	Chambre.cpp
* Author :	Nathan BRENIN  (NBrenin -> github)
* Date :	Fall 2019
* Course: 	C-C++ Programming / Esirem 3A Informatique Electronique
* Summary :	Definition of the class Chambre
*/

#include "Chambre.h"
#include <iostream>
#include <string>

Chambre::Chambre(int id, enumTypeChambre typeChambre, double prix) {
	m_id = id;
	m_typeChambre = typeChambre;
	m_prix = prix;
}


int Chambre::getId() const {
	return m_id;
}

enumTypeChambre Chambre::getTypeChambre() const {
	return m_typeChambre;
}

double Chambre::getPrix() const {
	return m_prix;
}



void Chambre::setId(int id) {
	m_id = id;
}

void Chambre::setTypeChambre(enumTypeChambre typeChambre) {
	m_typeChambre = typeChambre;
}

void Chambre::setPrix(double prix) {
	m_prix = prix;
}

void Chambre::modifierChambre(int id, enumTypeChambre typeChambre, double prix) {
	setId(id);
	setTypeChambre(typeChambre);
	setPrix(prix);
}

//Permet de convertir le type enum en chaine de caractere 
//Affichage plus simple dans la fonction toString
std::string Chambre::enumToString(enumTypeChambre typeChambre) {
	switch(typeChambre) {
	case Single:
		return "Single";
	case Double:
		return "Double";
	case Suite:
		return "Suite";
	default:
		return "Type de chambre invalide";
	}
}


std::string Chambre::toString() {
	return "\nID : " + std::to_string(m_id) + "\nType de chambre : " + enumToString(m_typeChambre) + "\nPrix : "  + std::to_string(m_prix);
}
