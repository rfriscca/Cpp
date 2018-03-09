#include <stdlib.h>
#include "Contact.class.hpp"
#include <iostream>

#define MAX_CONTACT 2

void	showContacts(Contact *mylist) {
	int		i = 0;
	
	std::cout << "index     |first name|last name |nickname  " << std::endl;

	while (i < MAX_CONTACT) {
		std::cout << i << "         |";
		mylist[i].displaySummaryInfo();
		++i;
	}
}

int		main() {
	Contact		*mylist = (Contact*)malloc(sizeof(Contact) * MAX_CONTACT);
	int			i;
	std::string	command;

	i = 0;
	while(1) {
		std::cout << "Type your command : ";
		std::cin >> command;
		if (!command.compare("ADD") && i < MAX_CONTACT) {
			Contact newcontact;
			mylist[i] = newcontact;
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
