#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle"
			"-special-ketchup burger. I really do!" 
			<< std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t"
			" put enough bacon in my burger! If you did, I wouldn’t be asking for "
			"more!" 
			<< std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
			"coming for years, whereas you started working here just last month." 
			<< std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<"This is unacceptable! I want to speak to the manager now." 
			<< std::endl << std::endl;
}

Level	Harl::getLevel(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return (static_cast<Level>(i));
	}
	return (UNKNOWN);
}

void	Harl::complain(std::string level)
{
	switch (getLevel(level))
	{
		case DEBUG:
			debug();
			// fall through
		case INFO:
			info();
			// fall through
		case WARNING:
			warning();
			// fall through
		case ERROR:
		{
			error();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
					<< std::endl << std::endl;
	}
}
