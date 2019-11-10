/**
* File :	hotel.cpp
* Author :	Celine Waldner  (WaldnerCeline -> github)
* Date :	Fall 2019
* Course: 	C-C++ Programming / Esirem 3A Informatique Electronique
* Summary :	Definition of the class Hotel
*/

#include "hotel.h"
#include <string>


Hotel::Hotel(std::string id, std::string nom, std::string ville, int nbChambre, std::vector<Chambre> listeChambre){
	m_nom = nom;
	m_id = id;
	m_ville = ville;
	m_nbChambre = nbChambre;
	m_listeChambre = listeChambre;
}

std::string Hotel::getNom() const{
	return m_nom;
}

std::string Hotel::getId() const{
	return m_id;
}

std::string Hotel::getVille() const{
	return m_ville;
}

int Hotel::getNbChambre() const{
	return m_nbChambre;
}

void Hotel::setId(std::string id){
	m_id = id;
}

void Hotel::setNom(std::string nom){
	m_nom = nom;
}

void Hotel::setVille(std::string ville){
	m_ville = ville;
}

void Hotel::remplissageListeChambre(int nbChambre, std::vector<Chambre> listeChambre){
	m_listeChambre.at(0) = {listeChambre.at(0)};
	for(int i=1; i<nbChambre; i++){
		m_listeChambre.push_back(listeChambre.at(i));
	}	

}





std::string Hotel::toString() {
	//Besoin de faire un cast int to string pour renvoyer un entier !
	std::string renvoie;
	renvoie =  "ID : "+ m_id + "\nNom : " + m_nom + "\nVille : " + m_ville + "\nnb Chambres : "+ std::to_string(m_nbChambre) + "\n";
    return renvoie;
}
