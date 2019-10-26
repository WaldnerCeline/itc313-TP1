//Client.h
#include <string>


class Client {
public:
	Client(int id, std::string nom, std::string prenom,int nbReservation);
	int getId();
	std::string getNom();
	std::string getPrenom();
	int getNbReservation();
	
	void setId(int id);
	void setNom(std::string nom);
	void setPrenom(std::string prenom);
	void setNbReservation(int nbReservation);
	void modifierClient(int id, std::string nom, std::string prenom, int nbReservation);
	std::string toString();
private:
	int m_id;
	std::string m_nom;
	std::string m_prenom;
	int m_nbReservation;
};
