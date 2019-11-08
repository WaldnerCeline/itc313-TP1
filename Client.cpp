/**
* File :	Client.cpp
* Author :	Nathan BRENIN  (NBrenin -> github)
* Date :	Fall 2019
* Course: 	C-C++ Programming / Esirem 3A Informatique Electronique
* Summary :	Definition of the class Client
*/

#include <iostream>
#include "Client.h"
#include <string>

Client::Client(int id, std::string nom, std::string prenom, int nbReservation) {
	m_id = id;
	m_nom = nom;
	m_prenom = prenom;
	m_nbReservation = nbReservation;
}


int Client::getId() const {
	return m_id;
}

std::string Client::getNom() const {
	return m_nom;
}

std::string Client::getPrenom() const {
	return m_prenom;
}

int Client::getNbReservation() const {
	return m_nbReservation;
}

void Client::setId(int id) {
	m_id = id;
}

void Client::setNom(std::string nom) {
	m_nom = nom;
}

void Client::setPrenom(std::string prenom) {
	m_prenom = prenom;
}

void Client::setNbReservation(int nbReservation) {
	m_nbReservation = nbReservation;
}

void Client::modifierClient(int id, std::string nom, std::string prenom, int nbReservation) {
	setId(id);
 	setNom(nom);
	setPrenom(prenom);
	setNbReservation(nbReservation);
}


std::string Client::toString() {
	//Besoin de faire un cast int to string pour renvoyer un entier !
	return "ID : "+ std::to_string(m_id) + "\nNom : " + m_nom + "\nPrenom : " + m_prenom + "\nNombre de reservation : "+ std::to_string(m_nbReservation)+"\n";
}
