#include "ClapTrap.hpp"
#include <cstring>

int	main(void)
{
	ClapTrap *ct = new ClapTrap();
	ClapTrap *ct2 = new ClapTrap("Mariano");
	
	ct->attack(ct2->getName());
	ct2->takeDamage(0);
	ct->beRepaired(0);

	delete(ct);
	delete(ct2);

	return 0;
}