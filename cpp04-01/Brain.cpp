#include "Brain.hpp"
#include <iostream>

Brain::Brain() {}

Brain::~Brain()
{
	//
}

void Brain::store_idea (unsigned int index, std::string str)
{
	if (index > N)
		return;
	this->ideas[index]=str;
}

std::string Brain::retrieve_idea (unsigned int index)
{
	if (index > N)
		return "";
	return (this->ideas[index]);
}


