#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	int n = 0;
	std::string entry;
	PhoneBook A;

	while (1)
	{
		std::cout << "Please choose a command: ADD, SEARCH or EXIT" << std::endl;
		std::cin >> entry;
		if (entry.compare("ADD") == 0 && n < 8)
		{
			A.add(n);
			n++;
		}
		else if (entry.compare("SEARCH") == 0)
			A.Search();
		else if (entry.compare("EXIT") == 0)
			return (0);
		else
		std::cout << "This command is not allowed" << std::endl;
	}
	return EXIT_SUCCESS;
}