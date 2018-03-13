#include "Pony.hpp"
#include <iostream>

int		Pony::getSpeed(void) {
	return Pony::speed;
}

void	Pony::run(void) {
	Pony::speed = 15;
	return ;
}

void	Pony::walk(void) {
	Pony::speed = 5;
	return ;
}

Pony::Pony(void) {
	std::cout << "Pony created" << std::endl;
	return ;
}

Pony::~Pony(void) {
	std::cout << "Pony destroyed" << std::endl;
	return ;
}
