#include <stdlib.h>
#include "Contact.class.hpp"
#include <iostream>

#define MAX_CONTACT 8

void	showContacts(Contact *mylist) {
	int		i = 1;
	int 	index = 0;
	
	std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
	
	//i = 1 so we need to use i - 1
	while (i - 1 < MAX_CONTACT && mylist[i - 1].isNotEmpty()) {
		std::cout << "         " << i << "|";
		mylist[i - 1].displaySummaryInfo();
		++i;
	}
	if (mylist[0].isNotEmpty()) {
		std::cout << "Choose the index of contact you want to display info : ";
		if (std::cin >> index) {
			//index - 1 because user will see and enter a number between 1 and 8
			if (index < 9 && index > 0 && mylist[index - 1].isNotEmpty()) {
				mylist[index - 1].displayInfo();
			}
			else {	
				std::cout << "You entered an invalid value !" << std::endl;
			}
		}
		else {
			std::cin.clear();
			//if input wasn't a number then ignore it
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "You entered an invalid value !" << std::endl;
		}
	}
	return ;
}

int		main() {
	Contact		mylist[MAX_CONTACT];
	int			i;
	std::string	command;

	i = 0;
	while(1) {
		std::cout << "Type your command : ";
		std::cin >> command;
		if (!command.compare("ADD") && i < MAX_CONTACT) {
			mylist[i].addContact();
			++i;
		}
		else if (!command.compare("ADD") && i >= MAX_CONTACT) {
			std::cout << "Contact list is full, can't add more !" << std::endl;
		}
		else if (!command.compare("SEARCH")) {
			showContacts(mylist);
		}
		else if (!command.compare("EXIT")) {
			return 0;
		}
		else {
			std::cout << "Command not found" << std::endl;
		}
	}
	return	0;
}
