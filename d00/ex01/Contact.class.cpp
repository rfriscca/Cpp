#include <iostream>
#include "Contact.class.hpp"

void	Contact::displaySummaryInfo(void) {
	int		i = 0;
	
	while (i < 10) {
		if (i == 9 && Contact::firstname[10]) {
			std::cout << '.';
		}
		else if (Contact::firstname[i]) {
			std::cout << Contact::firstname[i];
		}
		else {
			std::cout << " ";
		}
		++i;
	}
	std::cout << "|";
	i = 0;
	while (i < 10) {
		if (i == 9 && Contact::lastname[10]) {
			std::cout << '.';
		}
		else if (Contact::lastname[i]) {
			std::cout << Contact::lastname[i];
		}
		else {
			std::cout << " ";
		}
		++i;
	}
	std::cout << "|";
	i = 0;
	while (i < 10) {
		if (i == 9 && Contact::nickname[10]) {
			std::cout << '.';
		}
		else if (Contact::nickname[i]) {
			std::cout << Contact::nickname[i];
		}
		else {
			std::cout << " ";
		}
		++i;
	}
	std::cout << std::endl;
}

Contact::Contact(void) {
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
