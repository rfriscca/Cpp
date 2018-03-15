#include <iostream>
#include "Zombie.hpp"

int 	Zombie::_numberOfZombies = 0;

int 	Zombie::_getNumberOfZombies(void) {
	return Zombie::_numberOfZombies;
}

Zombie::Zombie(std::string type, std::string name) {
	Zombie::type = type;
	Zombie::name = name;
	++Zombie::_numberOfZombies;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie <" << Zombie::name << " (" << Zombie::type << ")> has been slained" << std::endl;
	--Zombie::_numberOfZombies;
	return ;
}

void	Zombie::announce(void) {
	std::cout << "<" << Zombie::name << " (" << Zombie::type << ")> Braiiiinnnssss..." << std::endl;
	return ;
}
