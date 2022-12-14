#include "ScavTrap.hpp"
#include <iostream>

void	change_players(int *current_player, int *enemy_player);
void	print_players_status(ScavTrap (&players)[2]);
void	claptrap_demo(void);
void	play_game(void);

int	main(void)
{
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
	claptrap_demo();
//	play_game();
}

void claptrap_demo(void)
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

	std::cout << std::endl;	


}

void play_game(void)
{
	ScavTrap players[2] = { ScavTrap("Pepe"), ScavTrap("Juana")};
	int	round = 0;
	int	current_player = 0;
	int	enemy_player = 1;	

	std::cout << std::endl;
	std::cout << "ScavTrap battle between " << players[0].getName() 
		<< " with attack " << players[0].getAttackDamage() << " and " 
		<< players[1].getName() << " with attack " << players[1].getAttackDamage() << std::endl;
	print_players_status(players);

	while (players[current_player].getHitPoints() > 0 && players[enemy_player].getHitPoints() > 0)
	{
		std::cout << std::endl << "===Round " << round << "===" << std::endl;
		if (players[current_player].getHitPoints() < 21 || players[current_player].getEnergyPoints() == 0)
		{
			players[current_player].guardGate();
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

void	print_players_status(ScavTrap (&players)[2])
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