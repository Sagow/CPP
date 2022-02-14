#include "Karen.hpp"

int	main(void)
{
	Karen	karen;
	std::string tests[] = {"DEBUG", "INFO", "WARNING", "ERROR", "", "sdfgh", "debug", "DEBUGGGG"};

	for (int i = 0; i < 8; i++)
	{
		std::cout << "Test avec \"" << tests[i] << "\"" << std::endl;
		karen.complain(tests[i]);
	}
	return (0);
}