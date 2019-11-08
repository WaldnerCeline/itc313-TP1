/**
* File :	Chambre.cpp
* Author :	Nathan BRENIN  (NBrenin -> github)
* Date :	Fall 2019
* Course: 	C-C++ Programming / Esirem 3A Informatique Electronique
* Summary :	Definition of the class Chambre
*/


#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <string>
#include <iostream>

enum enumTypeChambre {Single, Double, Suite};

class Chambre {
public:
	Chambre(int id, enumTypeChambre typeChambre, double prix);

	int getId() const;
	enumTypeChambre getTypeChambre() const;
	double getPrix() const;

	void setId(int id);
	void setTypeChambre(enumTypeChambre typeChambre);
	void setPrix(double prix);

	void modifierChambre(int id, enumTypeChambre typeChambre, double prix);

	std::string enumToString(enumTypeChambre typeChambre);
	std::string toString();
private:
	int m_id;
	enumTypeChambre m_typeChambre;
	double m_prix;
};

#endif //CHAMBRE_H
