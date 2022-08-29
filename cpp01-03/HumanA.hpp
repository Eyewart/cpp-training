#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	Weapon WeaponA;
	std::string name;

public:
	HumanA(std::string name, std::string type);
	~HumanA();
	void setName(std::string str);
	void attack();
};
