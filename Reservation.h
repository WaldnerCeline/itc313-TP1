/**
* File :	hotel.cpp
* Author :	Celine Waldner  (WaldnerCeline -> github)
* Date :	Fall 2019
* Course: 	C-C++ Programming / Esirem 3A Informatique Electronique
* Summary :	Definition of the class Reservation
*/



#ifndef RESERVATION_H
#define RESERVATION_H
#include "hotel.h"
#include "Chambre.h"
#include "Date.h"
#include "Client.h"
#include <array>
#include <string>

class Reservation {
public:
	Reservation(int id_reservation, std::string id_hotel, int id_client, int id_chambre, Date date_debut, Date date_fin);
	int getIdReservation() const;
	int getIdClient() const;
	int getIdChambre() const;
	std::string getIdHotel() const;
	Date getDateDebut() const;
	Date getDateFin() const;

	void setId(int id_reservation, std::string m_id_hotel, int id_client, int id_chambre);
	void modifDate(Date date_debut, Date date_fin);
	void modifChambre(int numero);
	double calculMontant(double prix, double reduction);
	std::string info();

private:
	int m_id_reservation;
	double m_montant;
	std::string m_id_hotel;
	int m_id_chambre;
	int m_id_client;
	int m_nb_nuit;
	Date m_date_debut;
	Date m_date_fin;

};

#endif //RESERVATION_H