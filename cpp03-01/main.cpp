#include <iostream>
#include "Zombie.hpp"

int main() {
	Zombie A;
	Zombie* p;
	A.announce();

	p = zombieHorde(10, "Pitchouka");
	for(int i = 0 ; i < 10 ; i++)
		p[i].announce();

	return EXIT_SUCCESS;
}

