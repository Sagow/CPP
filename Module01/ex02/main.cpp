#include <iostream>
#include <iomanip>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adresse en mémoire :" << std::endl;
	std::cout << std::setw(12) << "Poiteur : " << stringPTR << std::endl;
	std::cout << std::setw(12) << "Référence : " << &stringREF << std::endl;

	std::cout << "Valeur de la string :" << std::endl;
	std::cout << std::setw(12) << "Poiteur : " << *stringPTR << std::endl;
	std::cout << std::setw(12) << "Référence : " << stringREF << std::endl;

	return (0);
}