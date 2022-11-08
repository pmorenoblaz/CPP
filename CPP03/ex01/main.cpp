#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstring>

int	main(void)
{
	ClapTrap *ct = new ClapTrap();
	ClapTrap *ct2 = new ClapTrap("Mariano");
	
	ScavTrap *st = new ScavTrap();
	ScavTrap *st2 = new ScavTrap("Fernando");

	ct->attack(ct2->getName());
	ct2->takeDamage(0);
	ct->beRepaired(0);

	st2->attack(st->getName());
	st->takeDamage(20);
	st2->beRepaired(20);

	delete(ct);
	delete(ct2);
	delete(st);
	delete(st2);

	return 0;
}