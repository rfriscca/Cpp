#include "Pony.hpp"
#include <iostream>

void	ponyOnTheStack(void) {
	std::cout << "allocating pony on the stack" << std::endl;

	Pony	mylittlepony;

	mylittlepony.walk();
	std::cout << "Pony walking on the stack at speed : " << mylittlepony.getSpeed() << std::endl;
	std::cout << "Pony on the stack got killed by a landmine" << std::endl;
	return ;
}

void	ponyOnTheHeap(void) {
	std::cout << "allocating pony on the heap" << std::endl;

	Pony	*mylittlepony = new Pony;
	
	mylittlepony->run();
	std::cout << "Pony running on the heap at speed : " << mylittlepony->getSpeed() << std::endl;
	std::cout << "Pony on the heap crashed into a wall..." << std::endl;
	delete mylittlepony;
	return ;
}

int		main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
