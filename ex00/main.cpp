#include "Zombie.hpp"

int	main(void)
{
	Zombie* heapZombie;

	std::cout << "--- heap ---" << std::endl;
	heapZombie = newZombie("Foo");
	heapZombie->announce();
	delete heapZombie;

	std::cout << "--- stack ---" << std::endl;
	randomChump("Bar");

	return (0);
}