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

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde;
	int	i = 0;

	horde = new Zombie[N];
	while (i < N)
	{
		horde[i].rename(name);
		i++;
	}
	return (horde);
}

int	main(void)
{
	int	nb_zombie = 7;
	Zombie *horde = zombieHorde(nb_zombie, "Inateur");
	for (int i = 0; i < nb_zombie; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}