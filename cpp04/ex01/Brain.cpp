#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain - Default - Contructor" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain - Copy - Contructor" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain& Brain::operator = (const Brain& brain)
{
	if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = brain.ideas[i];
    }
	return (*this);
}

const std::string& Brain::getIdeas(int index) const
{
	return (ideas[index]);
}

void Brain::setIdeas(int index, std::string &idea)
{
	ideas[index] = idea;
}