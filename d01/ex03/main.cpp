#include "ZombieHorde.hpp"
#include <cstdlib>

int		main(int ac, char **av) {
	if (ac == 2) {
		ZombieHorde newZombieHorde(atoi(av[1]));
		newZombieHorde.announce();
	}
	else {

	}
	return 0;
}