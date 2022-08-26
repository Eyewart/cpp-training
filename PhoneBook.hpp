#ifndef PHONEBOOK_HPP //include guards - double inclusion
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
		Contact list[8];

		void add(int i);
		void Search() const;
		void DisplayAll() const;
};

#endif