#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_val = 0;
}

Fixed::Fixed(int nb)
{
	_val = nb << 8;
}

Fixed::Fixed(float nb)
{
	int	cmp = 2;

	_val = (int)nb;
	nb = nb - (int)nb;
	for (int i = 0; i < 8; i++)
	{
		_val << 1;
		if (nb >= 1/(float)cmp)
		{
			_val++;
			nb -= 1/(float)cmp;
		}
		cmp *= 2;
	};
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	_val = rhs.getRawBits();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << "Value = " << i.toFloat();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float		Fixed::toFloat( void ) const
{
	float	res;
	int		booleen;
	int		comp = 2;

	res = getRawBits() >> 8;
	for (int i = 0; i < 8; i++)
	{
		//std::cout << "res = " << res << std::endl;
		booleen = (getRawBits() - (getRawBits() >> (8 - i)) << i) >> (7 - i);
		if (booleen)
			res += 1 / (float)comp;
		comp *= 2;
	}
	return (res);
}

int			Fixed::toInt( void ) const
{
	return (getRawBits() >> 8);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits called" << std::endl;
	return (_val);
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBitsr called" << std::endl;
	_val = raw;
}

/* ************************************************************************** */