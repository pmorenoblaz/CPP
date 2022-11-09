#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

//mistake in evaluation https://42born2code.slack.com/archives/CN9RHKQHW/p1643736278705249

void	change_players(int *current_player, int *enemy_player);
void	print_players_status(FragTrap (&players)[2]);
void	claptrap_test(void);
void	scavtrap_test(void);
void	play_game(void);

int	main(void)
{
	FragTrap player1("Pepe");
	FragTrap player2("María");

	std::cout << "FragTrap battle between " << player1.getName() 
		<< " with attack " << player1.getAttackDamage() << " and " 
		<< player2.getName() << " with attack " << player2.getAttackDamage() << std::endl;
	std::cout << std::endl;

	// Member functions demo
	player1.highFivesGuys();
	player1.attack(player2.getName());
	player2.takeDamage(player1.getAttackDamage());
	player2.beRepaired(2);
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() << std::endl;
	std::cout << "Player 2 energy points: " 
			<< player2.getEnergyPoints() << ". Player 2 hit points: " 
			<< player2.getHitPoints() << std::endl;

	std::cout << std::endl;

	// More tests  
	player2.highFivesGuys();
	player1.attack(player2.getName());
	player2.takeDamage(player1.getAttackDamage());
	player1.beRepaired(1);
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() << std::endl;
	std::cout << "Player 2 energy points: " 
			<< player2.getEnergyPoints() << ". Player 2 hit points: " 
			<< player2.getHitPoints() << std::endl;
	player2.beRepaired(2);
	player2.attack(player1.getName());
	player1.takeDamage(player2.getAttackDamage());
	player1.beRepaired(3);
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() << std::endl;
	while (player1.getHitPoints() > 0)
	{
		player2.attack(player1.getName());
		player1.takeDamage(player2.getAttackDamage());
	}
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() << std::endl;
	std::cout << std::endl;	

	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() 
			<< ". Name " << player1.getName()
			<< std::endl;
	player2.attack(player1.getName());
	player1.takeDamage(player2.getAttackDamage());
	std::cout << "Player 2 energy points: " 
			<< player2.getEnergyPoints() << ". Player 2 hit points: " 
			<< player2.getHitPoints() 
			<< ". attack damage" << player2.getAttackDamage()
			<< ". Name " << player2.getName()
			<< std::endl;
	std::cout << std::endl;

	FragTrap player3(player2);
	std::cout << "Player 3 energy points: " 
			<< player3.getEnergyPoints() << ". Player 3 hit points: " 
			<< player3.getHitPoints() 
			<< ". attack damage" << player3.getAttackDamage()
			<< ". Name " << player3.getName()
			<< std::endl;

	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() 
			<< ". attack damage" << player1.getAttackDamage()
			<< ". Name " << player1.getName()
			<< std::endl;
	player3 = player1;
	std::cout << "Player 3 energy points: " 
			<< player3.getEnergyPoints() << ". Player 3 hit points: " 
			<< player3.getHitPoints() 
			<< ". attack damage" << player3.getAttackDamage()
			<< ". Name " << player3.getName()
			<< std::endl;
	std::cout << "player 1 direction: " << &player1 
			<< ". player 2 direction: " << &player2 
			<< ". player 3 direction: " << &player3 
			<< std::endl << std::endl;



	scavtrap_test();
	claptrap_test();
//	play_game();
}

void scavtrap_test(void)
{
	std::cout << "####################" << std::endl 
			<< "Scavtrap demo" << std::endl 
			<< "####################" << std::endl;
	ScavTrap player1("Pepe");
	ScavTrap player2("María");

	std::cout << "ScavTrap battle between " << player1.getName() 
		<< " with attack " << player1.getAttackDamage() << " and " 
		<< player2.getName() << " with attack " << player2.getAttackDamage() << std::endl;
	std::cout << std::endl;

	// Member functions demo
	player1.guardGate();
	player1.attack(player2.getName());
	player2.takeDamage(player1.getAttackDamage());
	player2.beRepaired(2);
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() << std::endl;
	std::cout << "Player 2 energy points: " 
			<< player2.getEnergyPoints() << ". Player 2 hit points: " 
			<< player2.getHitPoints() << std::endl;

	std::cout << std::endl;

	// More tests  
	player2.guardGate();
	player1.attack(player2.getName());
	player2.takeDamage(player1.getAttackDamage());
	player1.beRepaired(1);
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() << std::endl;
	std::cout << "Player 2 energy points: " 
			<< player2.getEnergyPoints() << ". Player 2 hit points: " 
			<< player2.getHitPoints() << std::endl;
	player2.beRepaired(2);
	player2.attack(player1.getName());
	player1.takeDamage(player2.getAttackDamage());
	player1.beRepaired(3);
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() << std::endl;
	while (player1.getHitPoints() > 0)
	{
		player2.attack(player1.getName());
		player1.takeDamage(player2.getAttackDamage());
	}
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() 
			<< ". Name " << player1.getName()
			<< std::endl;
	player2.attack(player1.getName());
	player1.takeDamage(player2.getAttackDamage());
	std::cout << "Player 2 energy points: " 
			<< player2.getEnergyPoints() << ". Player 2 hit points: " 
			<< player2.getHitPoints() 
			<< ". attack damage" << player2.getAttackDamage()
			<< ". Name " << player2.getName()
			<< std::endl;
	std::cout << std::endl;

	ScavTrap player3(player2);
	std::cout << "Player 3 energy points: " 
			<< player3.getEnergyPoints() << ". Player 3 hit points: " 
			<< player3.getHitPoints() 
			<< ". attack damage" << player3.getAttackDamage()
			<< ". Name " << player3.getName()
			<< std::endl;

	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() 
			<< ". attack damage" << player1.getAttackDamage()
			<< ". Name " << player1.getName()
			<< std::endl;
	player3 = player1;
	std::cout << "Player 3 energy points: " 
			<< player3.getEnergyPoints() << ". Player 3 hit points: " 
			<< player3.getHitPoints() 
			<< ". attack damage" << player3.getAttackDamage()
			<< ". Name " << player3.getName()
			<< std::endl;
	std::cout << "player 1 direction: " << &player1 
			<< ". player 2 direction: " << &player2 
			<< ". player 3 direction: " << &player3 
			<< std::endl << std::endl;
}

void claptrap_test(void)
{
	std::cout << "####################" << std::endl 
			<< "ClapTrap demo" << std::endl 
			<< "####################" << std::endl;
	ClapTrap player1("Pepe");
	ClapTrap player2("María");

	std::cout << "Claptrap battle between " << player1.getName() 
		<< " with attack " << player1.getAttackDamage() << " and " 
		<< player2.getName() << " with attack " << player2.getAttackDamage() << std::endl;
	std::cout << std::endl;

	// Member functions demo
	player1.attack(player2.getName());
	player2.takeDamage(player1.getAttackDamage());
	player2.beRepaired(2);
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() << std::endl;
	std::cout << "Player 2 energy points: " 
			<< player2.getEnergyPoints() << ". Player 2 hit points: " 
			<< player2.getHitPoints() << std::endl;

	std::cout << std::endl;

	// Member functions changing attack damage 
	player1.setAttackDamage(5);
	player1.attack(player2.getName());
	player2.takeDamage(player1.getAttackDamage());
	player1.beRepaired(1);
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() << std::endl;
	std::cout << "Player 2 energy points: " 
			<< player2.getEnergyPoints() << ". Player 2 hit points: " 
			<< player2.getHitPoints() << std::endl;
	player2.beRepaired(2);
	player2.setAttackDamage(6);
	player2.attack(player1.getName());
	player1.takeDamage(player2.getAttackDamage());
	player1.beRepaired(3);
	player1.attack(player2.getName());
	player2.takeDamage(player1.getAttackDamage());
	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() 
			<< ". Name " << player1.getName()
			<< std::endl;
	player2.attack(player1.getName());
	player1.takeDamage(player2.getAttackDamage());
	std::cout << "Player 2 energy points: " 
			<< player2.getEnergyPoints() << ". Player 2 hit points: " 
			<< player2.getHitPoints() 
			<< ". attack damage" << player2.getAttackDamage()
			<< ". Name " << player2.getName()
			<< std::endl;
	std::cout << std::endl;

	ClapTrap player3(player2);
	std::cout << "Player 3 energy points: " 
			<< player3.getEnergyPoints() << ". Player 3 hit points: " 
			<< player3.getHitPoints() 
			<< ". attack damage" << player3.getAttackDamage()
			<< ". Name " << player3.getName()
			<< std::endl;

	std::cout << "Player 1 energy points: " 
			<< player1.getEnergyPoints() << ". Player 1 hit points: " 
			<< player1.getHitPoints() 
			<< ". attack damage" << player1.getAttackDamage()
			<< ". Name " << player1.getName()
			<< std::endl;
	player3 = player1;
	std::cout << "Player 3 energy points: " 
			<< player3.getEnergyPoints() << ". Player 3 hit points: " 
			<< player3.getHitPoints() 
			<< ". attack damage" << player3.getAttackDamage()
			<< ". Name " << player3.getName()
			<< std::endl;
	std::cout << "player 1 direction: " << &player1 
			<< ". player 2 direction: " << &player2 
			<< ". player 3 direction: " << &player3 
			<< std::endl << std::endl;

}

void play_game(void)
{
	FragTrap players[2] = { FragTrap("Pepe"), FragTrap("Juana")};
	int	round = 0;
	int	current_player = 0;
	int	enemy_player = 1;	

	std::cout << std::endl;
	std::cout << "FragTrap battle between " << players[0].getName() 
		<< " with attack " << players[0].getAttackDamage() << " and " 
		<< players[1].getName() << " with attack " << players[1].getAttackDamage() << std::endl;
	print_players_status(players);

	while (players[current_player].getHitPoints() > 0 && players[enemy_player].getHitPoints() > 0)
	{
		std::cout << std::endl << "===Round " << round << "===" << std::endl;
		if (players[current_player].getHitPoints() < 41 || players[current_player].getEnergyPoints() == 0)
		{
			players[current_player].highFivesGuys();
			players[current_player].beRepaired(1);
		}
		else
		{
			players[current_player].attack(players[enemy_player].getName());
			players[enemy_player].takeDamage(players[current_player].getAttackDamage());
		}
		round++;
		change_players(&current_player, &enemy_player);
		if (players[current_player].getHitPoints() > 0 && players[enemy_player].getHitPoints() > 0 )
			print_players_status(players);
	}

}

void	print_players_status(FragTrap (&players)[2])
{
	
	std::cout << std::endl << "..Players' status.." << std::endl;
	std::cout << players[0].getName() << ": hit points " << players[0].getHitPoints()
		<< " energy points " << players[0].getEnergyPoints()	
		<< std::endl;
	std::cout << players[1].getName() << ": hit points " << players[1].getHitPoints()
		<< " energy points " << players[1].getEnergyPoints()	
		<< std::endl;
}

void	change_players(int *current_player, int *enemy_player)
{
	if (*current_player == 1)
	{
		*current_player = 0;
		*enemy_player = 1;
	}
	else
	{
		*current_player = 1;
		*enemy_player = 0;
	}
}
