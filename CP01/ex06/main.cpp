
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	int	levelInput = -1;
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "./Harl levels" << std::endl;
		return 1;
	}
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	inputUser = argv[1];
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == inputUser)
		{
			levelInput = i;
			break ;
		}
	}
	
	switch(levelInput)
	{
		case 0:
			harl.complain("DEBUG");
			break ;
		case 1:
			harl.complain("INFO");
			break ;
		case 2:
			harl.complain("WARNING");
			break ;
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}
