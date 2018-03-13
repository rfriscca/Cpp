#include <iostream>
#include "Contact.class.hpp"

bool	Contact::isNotEmpty(void) {
	if (Contact::firstname.length() || Contact::lastname.length() || Contact::nickname.length()) {
		return 1;
	}
	else {
		return 0;
	}
}

void	Contact::displayInfo(void) {
	std::cout << "Firstname       : " << Contact::firstname << std::endl;
	std::cout << "Lastname        : " << Contact::lastname << std::endl;
	std::cout << "Nickname        : " << Contact::nickname << std::endl;
	std::cout << "Login           : " << Contact::login << std::endl;
	std::cout << "Postal Address  : " << Contact::postaladdress << std::endl;
	std::cout << "Email           : " << Contact::email << std::endl;
	std::cout << "Phone Number    : " << Contact::phonenumber << std::endl;
	std::cout << "Birthday        : " << Contact::birthday << std::endl;
	std::cout << "Favorite Meal   : " << Contact::favmeal << std::endl;
	std::cout << "Underwear Color : " << Contact::underwearcolor << std::endl;
	std::cout << "Darkest Secret  : " << Contact::darkestsecret << std::endl;
}

void	Contact::displaySummaryInfo(void) {
	int		i = 0;
	int		index = 0;
	int		numberofspaces = 0;

	numberofspaces = 10 - Contact::firstname.length();
	while (i < 10) {
		if (numberofspaces > 0) {
			std::cout << " ";
			--numberofspaces;
		}
		else if (numberofspaces < 0 && i == 9) {
			std::cout << ".";
		}
		else {
			std::cout << Contact::firstname[index];
			++index;
		}
		++i;
	}
	std::cout << "|";
	numberofspaces = 10 - Contact::lastname.length();
	index = 0;
	i = 0;
	while (i < 10) {
		if (numberofspaces > 0) {
			std::cout << " ";
			--numberofspaces;
		}
		else if (numberofspaces < 0 && i == 9) {
			std::cout << ".";
		}
		else {
			std::cout << Contact::lastname[index];
			++index;
		}
		++i;
	}
	std::cout << "|";
	numberofspaces = 10 - Contact::nickname.length();
	index = 0;
	i = 0;
	while (i < 10) {
		if (numberofspaces > 0) {
			std::cout << " ";
			--numberofspaces;
		}
		else if (numberofspaces < 0 && i == 9) {
			std::cout << ".";
		}
		else {
			std::cout << Contact::nickname[index];
			++index;
		}
		++i;
	}
	std::cout << std::endl;
}

Contact::Contact(void) {
	return ;
}

void Contact::addContact(void) {
	std::cout << "First name : ";
	std::cin >> Contact::firstname;
	
	std::cout << "Last name : ";
	std::cin >> Contact::lastname;
	
	std::cout << "Nickname : ";
	std::cin >> Contact::nickname;
	
	std::cout << "Login : ";
	std::cin >> Contact::login;
	
	std::cout << "Postal address : ";
	std::cin >> Contact::postaladdress;
	
	std::cout << "Email address : ";
	std::cin >> Contact::email;
	
	std::cout << "Phone number : ";
	std::cin >> Contact::phonenumber;
	
	std::cout << "Birthday : ";
	std::cin >> Contact::birthday;
	
	std::cout << "Favorite meal : ";
	std::cin >> Contact::favmeal;
	
	std::cout << "Underwear color : ";
	std::cin >> Contact::underwearcolor;
	
	std::cout << "Darkest secret : ";
	std::cin >> Contact::darkestsecret;

	return ;
}

Contact::~Contact(void) {
	return ;
}
