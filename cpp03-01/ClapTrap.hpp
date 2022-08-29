#pragma once
#include <iostream>

class ClapTrap {
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap& B);
	ClapTrap& operator=(const ClapTrap& B);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

/*classe canonique:
constructeur par défaut (aucun paramètre)
constructeur par copie (prend un paramètre d'une autre classe)
destructeur
operateur d'assignation*/
