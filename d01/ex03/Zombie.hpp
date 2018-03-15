#include <iostream>

#ifndef ZOMBIE_H
# define ZOMBIE_H

class	Zombie {
	public :
		Zombie(void);
		~Zombie(void);
		void		announce(void);
		void		setTypeAndName(std::string type, std::string name);
		static int	_getNumberOfZombies(void);

	private :
		std::string	type;
		std::string	name;
		static int	_numberOfZombies;
};

#endif
