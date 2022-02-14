#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{

	public:

		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);

		HumanB &		operator=( HumanB const & rhs );

	private:

		std::string	_name;
		Weapon	*_weapon;

};

#endif /* ********************************************************** HUMANB_H */