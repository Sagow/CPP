#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{

	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void);

		HumanA &		operator=( HumanA const & rhs );

	private:
		std::string	_name;
		Weapon	&_weapon;

};

std::ostream &			operator<<( std::ostream & o, HumanA const & i );

#endif /* ********************************************************** HUMANA_H */