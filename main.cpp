/**
* File :	Client.cpp
* Author :	Nathan BRENIN  (NBrenin -> github)
* Date :	Fall 2019
* Course: 	C-C++ Programming / Esirem 3A Informatique Electronique
* Summary :	Definition of the class Client
*/


#include <iostream>
#include <vector>
#include <array>
#include "Date.h"
#include "Reservation.h"
#include "Chambre.h"
#include "hotel.h"
#include "Client.h"


Date entrez_date_debut(){
	int day;
	int month;
	int year;
	Date date_debut;
	
	std::cout << "entrez le jour de debut de votre séjour"<<std::endl;
	std::cin >> day;

	std::cout << "entrez le mois de debut de votre séjour"<<std::endl;
	std::cin >> month;

	std::cout << "entrez l'année de debut de votre séjour"<<std::endl;
	std::cin >> year;
	date_debut.modifDate(day,month,year);
	return date_debut;
}

Date entrez_date_fin(){
	int day;
	int month;
	int year;
	Date date_fin;
	
	std::cout << "entrez le jour de fin de votre séjour"<<std::endl;
	std::cin >> day;
	
	std::cout << "entrez le mois de fin de votre séjour"<<std::endl;
	std::cin >> month;
	
	std::cout << "entrez l'année de fin de votre séjour"<<std::endl;
	std::cin >> year;
	date_fin.modifDate(day,month,year);
	return date_fin;

}

void dates_correctes(Date date_debut, Date date_fin){
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
		date_fin = entrez_date_fin();
		}
	}
	while(correct==false);
}

int nombre_nuit(Date date_debut, Date date_fin){
	int nbr_nuit =  (date_fin.getDay() + date_fin.getMonth()+ date_fin.getYear()) - ( date_debut.getDay() + date_debut.getMonth()+ date_debut.getYear());
	return nbr_nuit; 
}





int main() {

//Declaration des chambres
Chambre ch1(1,Single,100);
Chambre ch2(2,Single,100);
Chambre ch3(3,Single,100);
Chambre ch4(4,Double,125);
Chambre ch5(5,Double,125);
Chambre ch6(6,Double,125);
Chambre ch7(7,Double,125);
Chambre ch8(8,Double,125);
Chambre ch9(9,Suite,210);
Chambre ch10(10,Suite,210);

//Creation du vector chamobre pour la liste de chambre de l'hotel
std::vector<Chambre> listeChambre = {ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10};

//Creation de hotel
Hotel h1("1","Le Western", "Paris",listeChambre.size(),listeChambre);

//Affiche les informations de l'hotel, ainsi que celles des chambres
std::cout<<h1.toString()<<std::endl;


//Creation des clients
Client cl1(1,"Marley","Bob",0);
Client cl2(1,"Damon","Matt",0);
Client cl3(1,"Schwarzenegger","Arnold",0);
Client cl4(1,"Dylan","Bob",0);
Client cl5(1,"Cameron","James",0);
Client cl6(1,"Jackson","Peter",0);
Client cl7(1,"Turner","Sophie",0);
Client cl8(1,"Clark","Emilia",0);
Client cl9(1,"Williams","Maisie",0);
Client cl10(1,"Hanks","Tom",0);

std::cout<<"\n"+cl10.toString()<<std::endl;

//Creation d'un tableau de client
std::array <Client,10> tablClient = {cl1,cl2,cl3,cl4,cl5,cl6,cl7,cl8,cl9,cl10};




//test des dates de la reservation
Date date_debut;
Date date_fin;
date_debut =entrez_date_debut();
date_fin = entrez_date_fin();
dates_correctes(date_debut, date_fin);
int nuit = nombre_nuit(date_debut, date_fin);
std::cout<< "nbr nuit: "<<nuit<<std::endl;
return 0;
}
