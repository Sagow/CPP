#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	return (new Zombie(name));
}

void randomChump( std::string name )
{
	Zombie zombie(name);
	zombie.announce();
}

int	main(void)
{
	randomChump("Albert");


	Zombie	*Boris = newZombie("Boris");
	Boris->announce();
	delete Boris;
	return (0);
}