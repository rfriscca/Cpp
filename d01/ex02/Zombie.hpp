#include <iostream>

#ifndef ZOMBIE_H
# define ZOMBIE_H

class	Zombie {
	public :
		Zombie(std::string type, std::string name);
		~Zombie(void);
		void		announce(void);
		static int	_getNumberOfZombies(void);

	private :
		std::string	type;
		std::string	name;
		static int	_numberOfZombies;
};

#endif
