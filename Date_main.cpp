

#include <iostream>
#include "Date.h"

int main() {
	Date noel(25, 12, 2019);
	std::cout << "jour = " << noel.getDay() << " mois = " << noel.getMonth() << " annee = " << noel.getYear() << std::endl;
	noel.setYear(2020);
	std::cout << " jour = " << noel.getDay() << " mois = " << noel.getMonth() << " nouvelle annee = " << noel.getYear() << std::endl;
	noel.modifDate(10, 10, 2030);;
	std::cout << " jour = " << noel.getDay() << " mois = " << noel.getMonth() << " nouvelle annee = " << noel.getYear() << std::endl;

	return 0;
}
