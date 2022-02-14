#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Weapon::Weapon(std::string type)
{
	_type = type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Weapon &				Weapon::operator=( Weapon const & rhs )
{
	_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	&Weapon::getType(void)
{
	std::string	&ref = _type;
	return (ref);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

/* ************************************************************************** */