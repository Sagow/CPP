#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = nullptr;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

HumanB &				HumanB::operator=( HumanB const & rhs )
{
	_name = rhs._name;
	_weapon = rhs._weapon;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " doesn't have a weapon to attack" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */