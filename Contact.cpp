#include "Contact.hpp"

void Contact::DisplayString(std::string str) const
{
	int nb_of_spaces = 0;

	std::cout << "|";
	if (str.size() > 10)
	{
			std::cout << ".";
			std::cout << str.substr(0, 9);
	}
	else
	{
		nb_of_spaces = 10 - str.size();
		while (nb_of_spaces)
		{
			std::cout << " ";
			nb_of_spaces--;
		}
		std::cout << str;
	}
}

void Contact::Display() const
{
	DisplayString(Contact::first_name);
	DisplayString(Contact::last_name);
	DisplayString(Contact::nickname);
	DisplayString(Contact::phone_number);
}
