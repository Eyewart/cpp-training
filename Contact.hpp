#ifndef CONTACT_HPP //include guards - double inclusion
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;

		void DisplayString(std::string str) const
		{
			int nb_of_spaces = 0;

			if (str.size() > 10)
			{
					std::cout << ".";
					std::cout << str.substr(0, 9);
					std::cout << "|";
			}
			else
			{
				nb_of_spaces = 10 - str.size();
				while (nb_of_spaces)
				{
					std::cout << " ";
					nb_of_spaces--;
				}
				std::cout << str << "|";
			}
		}

		void Display() const
		{
			DisplayString(first_name);
			DisplayString(last_name);
			DisplayString(nickname);
			DisplayString(phone_number);
		}
};

#endif