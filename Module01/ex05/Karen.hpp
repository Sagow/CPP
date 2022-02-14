#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{

	public:

		Karen();
		Karen( Karen const & src );
		~Karen();

		Karen &		operator=( Karen const & rhs );
		void	complain( std::string level );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

};

std::ostream &			operator<<( std::ostream & o, Karen const & i );

#endif /* *********************************************************** KAREN_H */