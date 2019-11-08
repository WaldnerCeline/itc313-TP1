/**
* File :	Client.h
* Author :	Nathan BRENIN  (NBrenin -> github)
* Date :	Fall 2019
* Course: 	C-C++ Programming / Esirem 3A Informatique Electronique
* Summary :	Definition of the class Client
*/

#ifndef CLIENT_H
#define CLIENT_H



#include <string>


class Client {
public:
	Client(int id, std::string nom, std::string prenom,int nbReservation);
	int getId() const;
	std::string getNom() const;
	std::string getPrenom() const;
	int getNbReservation() const;
	
	void setId(int id);
	void setNom(std::string nom);
	void setPrenom(std::string prenom);
	void setNbReservation(int nbReservation);
	void modifierClient(int id, std::string nom, std::string prenom, int nbReservation);
	std::string toString();
private:
	int m_id;
	std::string m_nom;
	std::string m_prenom;
	int m_nbReservation;
};


#endif //CLIENT_H
