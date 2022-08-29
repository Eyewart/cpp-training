#include <iostream>

class Entity {
public:
	int x, y;

	Entity(int x, int y)
	{
		this->x = x;
		this->y = y;

		PrintEntity(*this);
	}

	void PrintEntity (const Entity& e)
	{
		std::cout << e.x << std::endl; 
		std::cout << e.y;
	}
};

int main ()
{
	//Entity A(5, 6);

	int x = 10;
	int& r = x;


	std::cout << &r << std::endl;
	std::cout << x << std::endl;
	&r = 45687;
	std::cout << &r << std::endl;
	std::cout << x;
 
	return EXIT_SUCCESS;
}