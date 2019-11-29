//test de la classe reservation
#include <iostream>
#include "hotel.h"
#include "Chambre.h"
#include "Client.h"
#include "Date.h"
#include "Reservation.h"
#include <array>
#include <vector>

int main(){
	Date d1(12, 11, 2019);
	Date d2(15, 11, 2019);
	//Date d1();
	//Date d2();
	Date test_date;
	int test;
	std::string information;
	Reservation reservation1(13, "DODO21", 85, 2, d1, d2);
	test = reservation1.getIdChambre();
	std::cout << test << std::endl;
	reservation1.modifChambre(15);
	test = reservation1.getIdChambre();
	std::cout << test << std::endl;
	Date d3(15, 11, 2019);
	Date d4(18, 11, 2019);
	reservation1.modifDate(d3, d4);
	test_date = reservation1.getDateDebut();
	double montant = reservation1.calculMontant(10, 0.02);
	std::cout << montant << std::endl;
	information = reservation1.info();
	std::cout << information << std::endl;






return 0;
}