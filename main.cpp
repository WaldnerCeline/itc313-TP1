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

#include "Chambre.h"
#include "hotel.h"
#include "Client.h"

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
return 0;
}
