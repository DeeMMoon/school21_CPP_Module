#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(Brain const& obj)
{
	(*this = obj);
	std::cout << "Brain copy constructor" << std::endl;
}

Brain& Brain::operator=(Brain const& obj)
{
	std::cout << "Brain = operator overload" << std::endl;
	if (this != &obj)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain default destructor" << std::endl;
}

//	MEMBER FUNCTIONS

