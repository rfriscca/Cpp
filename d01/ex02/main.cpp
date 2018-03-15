#include <iostream>
#include "ZombieEvent.hpp"

int		main(void) {
	ZombieEvent zombiemanager;
	std::string command;
	std::string zombietype;
	std::string name;
	Zombie*		zombie;

	while (1) {
		std::cout << "Type your command : ";
		std::cin >> command;
		if (command == "SETTYPE") {
			std::cout << "Choose your zombie type : ";
			std::cin >> zombietype;
			zombiemanager.setZombieType(zombietype);
		}
		else if (command == "NEWZOMBIE") {
			std::cout << "Choose the name of your zombie : ";
			std::cin >> name;
			zombie = zombiemanager.newZombie(name);
			zombie->announce();
			delete zombie;
		}
		else if (command == "RANDOMZOMBIE") {
			zombiemanager.randomChump();
		}
		else if (command == "EXIT")
			return 0;
		else 
			std::cout << "Command not found." << std::endl;
	}
	return 0;
}