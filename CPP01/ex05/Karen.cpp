#include "Karen.hpp"

Karen::Karen(){
    return ;
}

Karen::~Karen(){
    std::cout << "Bye Karen!" << std::endl;
    return ;
}

void	Karen::debug(void){
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void){
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::initLevels(void){
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

void Karen::complain(std::string level){
	int	i;
    
	initLevels();
	complFunction cf[4] = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	i = 0;
	while(i < 4){
		if (levels[i].compare(level) == 0){
			(this->*cf[i])();
			return ;
		}
		i++;
	}
	std::cout << "The level does not exist. The Karen left without saying anything." << std::endl;
}
