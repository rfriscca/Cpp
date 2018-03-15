#include <iostream>
#include "Zombie.hpp"

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		void	announce(void);

	private:
		Zombie*		horde;
};

#endif