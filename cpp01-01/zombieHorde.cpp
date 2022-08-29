#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name)
{
	unsigned int i = 0;
	Zombie* tmp;
	tmp = new Zombie[N];

	while (i < N)
	{
		tmp[i].setName(name);
		i++;
	}
	return (tmp);
}