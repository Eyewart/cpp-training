#include <iostream>

class Weapon 
{
private:
	std::string type;

public:
	Weapon();
	Weapon(const Weapon& B);
	~Weapon();
	const std::string& getType() const;
	void setType(std::string str);
};