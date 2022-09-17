#include "Karen.hpp"
#include <cstring>

int	main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
		std::cout << "You need to write the level: DEBUG, INFO, WARNING or ERROR" << std::endl;
	else
		karen.complain(argv[1]);
}