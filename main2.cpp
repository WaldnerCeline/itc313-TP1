//programme principal de l'application
#include <iostream>
#include "hotel.h"
#include "Chambre.h"
#include "Client.h"
#include "Date.h"
#include "Reservation.h"
#include <array>
#include <vector>


void entrez_date_debut(Date& date_debut){
	int a;
	std::cout << "entrez le jour de debut de votre séjour"<<std::endl;
	std::cin >> a;
	date_debut.setDay(a);
	std::cout << "entrez le mois de debut de votre séjour"<<std::endl;
	std::cin >> a;
	date_debut.setMonth(a);
	std::cout << "entrez l'année de debut de votre séjour"<<std::endl;
	std::cin >> a;
	date_debut.setYear(a);
}

void entrez_date_fin(Date& date_fin){
	int a;
	std::cout << "entrez le jour de fin de votre séjour"<<std::endl;
	std::cin >> a;
	date_fin.setDay(a);
	std::cout << "entrez le mois de fin de votre séjour"<<std::endl;
	std::cin >> a;
	date_fin.setMonth(a);
	std::cout << "entrez l'année de fin de votre séjour"<<std::endl;
	std::cin >> a;
	date_fin.setYear(a);

}

void dates_correctes(Date& date_debut, Date& date_fin){
	bool correct = false;
	int verification =0;
	do{
		verification = (date_fin.getDay() + date_fin.getMonth()+ date_fin.getYear()) - ( date_debut.getDay() + date_debut.getMonth()+ date_debut.getYear());
		if(verification>= 0){
			correct = true;
		}
		else{
		correct = false;
		std::cout<< "Date de fin inferieur à la date de debut de sejour, veuillez donner une date de fin valide"<< std::endl;
		entrez_date_fin(date_fin);
		}
	}
	while(correct==false);
}

int nombre_nuit(Date& date_debut, Date& date_fin){
	int nbr_nuit =  (date_fin.getDay() + date_fin.getMonth()+ date_fin.getYear()) - ( date_debut.getDay() + date_debut.getMonth()+ date_debut.getYear());
	return nbr_nuit; 
}





int main(){
	std::vector<Reservation> liste_reservation;






return 0;
}