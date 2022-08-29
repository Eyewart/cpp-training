#include <iostream>

class Zombie {
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string str);
	Zombie(const Zombie& B);
	~Zombie();
	Zombie& operator=(const Zombie& B);
	void setName(std::string str);
	void announce (void);
};

Zombie* zombieHorde (int N, std::string name);

/*classe canonique:
constructeur par défaut (aucun paramètre)
constructeur par copie (prend un paramètre d'une autre classe)
destructeur
operateur d'assignation*/
