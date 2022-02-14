#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{

	public:

		Weapon(std::string type);
		~Weapon();

		Weapon &		operator=( Weapon const & rhs );
		std::string	&getType(void);
		void	setType(std::string type);

	private:

		std::string _type;
};

#endif /* ********************************************************** WEAPON_H */