#include "Chambre.h"
#include <iostream>


int main() {

Chambre chambre1(1,Single,180.0);
std::cout <<chambre1.toString()<< std::endl;


chambre1.modifierChambre(2,Double,200);
std::cout <<chambre1.toString()<< std::endl;


return 0;
}
