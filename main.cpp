#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

class Sample
{
	public:
		Sample(void)
		{
			std::cout << "Constructor called" << std::endl;
			return;
		}
		~Sample(void)
		{
			std::cout << "Deconstructor called" << std::endl;
			return;
		}
};

int main()
{
	Sample instance;

	return 0;
}