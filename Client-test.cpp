//CLient-test.cpp

#include <iostream>
#include "Client.h"


int main(){

Client client1(1,"Marley","Bob",1);

std::cout << client1.toString() << std::endl;

client1.modifierClient(2,"Dupond","Pierre",3);

std::cout << client1.toString() << std::endl;
return 0;
}

