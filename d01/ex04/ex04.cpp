#include <iostream>

int		main(void) {
	std::string 	str = "HI THIS IS BRAIN";
	std::string*	strptr = &str;
	std::string&	strref = str;

	std::cout << "Pointer : " << std::endl;
	std::cout << *strptr << std::endl << std::endl;
	std::cout << "Reference : " << std::endl;
	std::cout << strref << std::endl;

	return 0;
}