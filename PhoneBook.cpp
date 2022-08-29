#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::add(int i)
{
	std::cout << "First name: ";
	std::cin >> PhoneBook::list[i].first_name;
	std::cout << "Last name: ";
	std::cin >> PhoneBook::list[i].last_name >> std::noskipws;
	std::cout << "Nickname: ";
	std::cin >> PhoneBook::list[i].nickname;
	std::cout << "Phone number: ";
	std::cin >> PhoneBook::list[i].phone_number;
}
void PhoneBook::Search() const
{
	int index = 0;
	
	DisplayAll();
	std::cout << "Please enter an index to display: " << std::endl;
	std::cin >> index;
	if (index < 8)
		PhoneBook::list[index].Display();
	else 
		std::cout << "This is not a correct value." << std::endl;
	std::cout << std::endl;
}
void PhoneBook::DisplayAll() const
{
	for (int i = 0 ; i < 8; i++)
	{
		std::cout << "|" << i;
		PhoneBook::list[i].Display();
		std::cout << "|" << std::endl;
	}
}