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

		void DisplayString(std::string str) const;
		void Display() const;
};

#endif