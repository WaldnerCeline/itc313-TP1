// Test de la classe hotel
#include <iostream>
#include "hotel.h"
#include "Chambre.h"

int main(){
	Chambre chambre1(1, Single, 180.0);
	std::vector<Chambre> liste = {chambre1};
	Hotel hotel1( "DODO21", "DodoLand", "Dijon", 2, liste);
	std::cout<< hotel1.toString()<< std::endl;
	hotel1.remplissageListeChambre(1, liste);
	std::cout<<liste.size()<<std::endl;
	
return 0;	
}
