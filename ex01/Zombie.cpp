#include "Zombie.hpp"

Zombie::Zombie(void) : _name("nameless")
{
	std::cout << _name << " is spawned" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " is spawned" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " is destroyed" << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
