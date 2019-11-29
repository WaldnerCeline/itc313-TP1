/**
* File :	hotel.cpp
* Author :	Celine Waldner  (WaldnerCeline -> github)
* Date :	Fall 2019
* Course: 	C-C++ Programming / Esirem 3A Informatique Electronique
* Summary :	Definition of the class Reservation
*/
#include "Reservation.h"
#include "Date.h"
#include "hotel.h"

Reservation::Reservation(int id_reservation, std::string id_hotel, int id_client, int id_chambre, Date date_debut, Date date_fin) {
	m_id_reservation = id_reservation;
	m_id_hotel = id_hotel;
	m_id_client = id_client;
	m_id_chambre = id_chambre;
	m_date_debut = date_debut;
	m_date_fin = date_fin;
}	

int Reservation::getIdReservation() const{
	return m_id_reservation;
}

int Reservation::getIdClient() const{
	return m_id_client;
}

int Reservation::getIdChambre() const{
	return m_id_chambre;
}

std::string Reservation::getIdHotel() const {
	return m_id_hotel;
}


Date Reservation::getDateDebut() const {
	return m_date_debut;
}

Date Reservation::getDateFin() const {
	return m_date_fin;
}



void Reservation::setId(int id_reservation, std::string id_hotel, int id_client, int id_chambre){
	m_id_reservation = id_reservation;
	m_id_hotel = id_hotel;
	m_id_client = id_client;
	m_id_chambre = id_chambre;
}	

void Reservation::modifDate(Date date_debut, Date date_fin){
	m_date_debut = date_debut;
	m_date_fin = date_fin;
}

void Reservation::modifChambre(int numero){
	m_id_chambre = numero;
}

double Reservation::calculMontant(double prix, double reduction){
	int date1 = m_date_debut.getDay() + m_date_debut.getMonth()+ m_date_debut.getYear();
	int date2 = m_date_fin.getDay() + m_date_fin.getMonth()+ m_date_fin.getYear();
	int nb_nuit = date2 - date1;
	m_montant = nb_nuit*prix;
	m_montant = m_montant - m_montant*reduction;
	return m_montant;
}

std::string Reservation::info() {
	//Besoin de faire un cast int to string pour renvoyer un entier !
	std::string renvoie;
	renvoie =  "ID reservation : "+ std::to_string(m_id_reservation) + "\nID client: "+ std::to_string(m_id_client) +"\nID hotel: "+ m_id_hotel + "\nID chambre: "+ std::to_string(m_id_chambre) + "\nDate du sejour: "+ std::to_string(m_date_debut.getDay())+ "/"+ std::to_string(m_date_debut.getMonth())+"/" + std::to_string(m_date_debut.getYear())+ " - " + std::to_string(m_date_fin.getDay())+ "/"+ std::to_string(m_date_fin.getMonth())+"/" + std::to_string(m_date_fin.getYear())+ "\nPrix total: "+ std::to_string(m_montant)+"\n";
    return renvoie;
}


