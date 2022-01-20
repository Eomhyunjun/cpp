#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>

template <typename T>
typename T::iterator easyfind(T& container, const int& value)
{
	typename T::iterator finded;

    std::cout << "We god container : ";
    for (finded = container.begin(); finded != container.end(); ++finded)
    {
        std::cout << *finded << " "; 
    }
    std::cout << std::endl;
	finded = std::find(container.begin(), container.end(), value);

	if (finded == container.end())
    {
		std::cout << "Can't find value" << std::endl;
		throw std::exception();
    }
    else
        std::cout << "Find it! " << std::endl; 
	return finded;
}

#endif