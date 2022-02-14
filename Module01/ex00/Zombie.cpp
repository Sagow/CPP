#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie " << _name << " is born" << std::endl;
}

Zombie::Zombie( const Zombie & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Zombie &				Zombie::operator=( Zombie const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Zombie const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */