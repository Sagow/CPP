#include "Karen.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Karen::Karen()
{
}

Karen::Karen( const Karen & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Karen::~Karen()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Karen &				Karen::operator=( Karen const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Karen const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Karen::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	void	(Karen::*ft[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	possible[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == possible[i])
			(this->*ft[i])();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */