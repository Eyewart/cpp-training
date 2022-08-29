#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define Y 10

int main()
{
Animal* setOfAnimals[Y];

for (size_t i = 0; i < Y; i++)
{
	if (i < (Y / 2))
		setOfAnimals[i] = new Dog();
	else 
		setOfAnimals[i] = new Cat();
}

const Animal* j = new Dog();
const Animal* i = new Cat();

delete j;//should not create a leak
delete i;

std::cout << std::endl;

Dog	d1, d2;
d1.store_idea(42, "A delicious bone");

d2 = d1;
	
Dog	d3(d1);

d2.store_idea(42, "This is my home");
d3.store_idea(42, "Let's go for a walk in the park");

std::cout << std::endl;

std::cout << "Idea of d1 : " << d1.retrieve_idea(42) << std::endl;
std::cout << "Idea of d2 : " << d2.retrieve_idea(42) << std::endl;
std::cout << "Idea of d3 : " << d3.retrieve_idea(42) << std::endl;

std::cout << std::endl;

for (size_t i = 0; i < Y; i++)
{
	delete setOfAnimals[i];
}

return 0;

}

/* main cpp04-ex00

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

return 0;
}*/
