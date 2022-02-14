#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	karen;
	std::string	test[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;

	if (ac == 1)
	{
		std::cout << "No argument given." << std::endl;
		return (1);
	}
	if (ac > 2)
	{
		std::cout << "Too many arguments." << std::endl;
		return (1);
	}
	while(i < 4 && test[i].compare(av[1]))
		i++;
	switch (i)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("DEBUG");
		std::cout << std::endl;
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("INFO");
		std::cout << std::endl;
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("WARNING");
		std::cout << std::endl;
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("ERROR");
		std::cout << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return (0);
}