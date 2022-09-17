#include "Karen.hpp"
#include <cstring>

int	main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Usage: ./karenFilter [LEVEL], ex: ./karenFilter \"ERROR\""
			<< std::endl;
	}
	else if (strlen(argv[1]) == 0)
		std::cout << "Introduce a non-empty parameter" << std::endl;
	else
		karen.complain(argv[1]);
}