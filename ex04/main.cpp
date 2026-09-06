#include "replace.hpp"
#include <iostream>

int	main(int ac, char** av)
{
	if (ac !=4)
	{
		std::cerr << "Expected args: ./replace <filename> <s1> <s2>" << std::endl;
		return(1);
	}

	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	
	if (s1.empty())
	{
		std::cerr << "Error: s1 must not be empty" << std::endl;
		return(1);
	}
	if (!processFile(filename, s1, s2))
		return (1);
	return (0);
}
