/**
* File :	hotel.cpp
* Author :	Celine Waldner  (WaldnerCeline -> github)
* Date :	Fall 2019
* Course: 	C-C++ Programming / Esirem 3A Informatique Electronique
* Summary :	Definition of the class Hotel
*/

#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include "Chambre.h"

class Hotel {
public:
	Hotel(std::string id, std::string nom, std::string ville, int nbChambre, std::vector<Chambre> listeChambre);
	std::string getNom() const;
	std::string getId() const;
	std::string getVille() const;
	int getNbChambre() const;
	std::string toString();

	void setId(std::string id);
	void setNom(std::string nom);
	void setVille(std::string ville);
	void remplissageListeChambre( int nbChambre, std::vector<Chambre> listeChambre);








private:
	std::string m_id;
	std::string m_nom;
	std::string m_ville;
	int m_nbChambre;
	std::vector<Chambre> m_listeChambre; 

};














#endif //HOTEL_H