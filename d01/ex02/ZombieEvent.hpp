#include <iostream>
#include "Zombie.hpp"

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

class ZombieEvent
{
	public :
		ZombieEvent(void);
		~ZombieEvent(void);
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump(void);
	
	private :
		std::string	zombieType;
};

#endif