#pragma once
#include <iostream>

#define N 100

class Brain {
private:
	std::string ideas[N];

public:
	Brain();
	virtual ~Brain();

	void store_idea (unsigned int index, std::string str);
	std::string retrieve_idea (unsigned int index);
};