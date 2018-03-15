#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <cstdlib>

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

ZombieHorde::ZombieHorde(int N) {
	ZombieHorde::horde = new Zombie[N];
	int 	i = 0;

	while(i < N) {
		ZombieHorde::horde[i].setTypeAndName("default", generateRandomName());
		++i;
	}

	return ;
}

ZombieHorde::~ZombieHorde(void) {
	delete [] ZombieHorde::horde;
	return ;
}

void	ZombieHorde::announce(void) {
	int 	i = 0;

	while(i < Zombie::_getNumberOfZombies()) {
		ZombieHorde::horde[i].announce();
		++i;
	}
	return ;
}
