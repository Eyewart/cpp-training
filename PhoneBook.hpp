#ifndef PHONEBOOK_HPP //include guards - double inclusion
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact list[8];

	public:
		void add(int i)
		{
			std::cout << "First name: ";
			std::cin >> list[i].first_name;
			std::cout << "Last name: ";
			std::cin >> list[i].last_name;
			std::cout << "Nickname: ";
			std::cin >> list[i].nickname;
			std::cout << "Phone number: ";
			std::cin >> list[i].phone_number;
		}
		void Search() const
		{
			int index = 0;
			
			DisplayAll();
			
			std::cout << "Please enter an index to display: " << std::endl;
			std::cin >> index;
			list[index].Display();
		}

		void DisplayAll() const
		{
			for (int i = 0 ; i < 8; i++)
			{
				std::cout << "| " << i;
				list[i].Display();
				std::cout << std::endl;
			}
		}
};

#endif