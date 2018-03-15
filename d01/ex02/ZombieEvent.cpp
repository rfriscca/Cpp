#include <iostream>
#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent(void) {
	ZombieEvent::zombieType = "default";
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	ZombieEvent::zombieType = type;
	return ;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie*	newZombie = new Zombie(ZombieEvent::zombieType, name);
	return newZombie;
}

std::string	generateRandomName(void) {
	char		voyelles[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	char		consonnes[20] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z'};
	//length of name will be at least 3 characters long and at max 20 characters
	int			length = rand() % 17 + 3;
	int			i = 0;
	std::string name;

	while(i < length) {
		if (rand() % 2) {
			name.insert(name.end(), 1, voyelles[rand() % 6]);
		}
		else {
			name.insert(name.end(), 1, consonnes[rand() % 20]);
		}
		++i;
	}
	return name;
}

void	ZombieEvent::randomChump(void) {
	Zombie  newZombie(ZombieEvent::zombieType, generateRandomName());
	newZombie.announce();
	return ;
}
