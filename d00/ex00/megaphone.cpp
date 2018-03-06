#include <iostream>
#include <stdio.h>

int		main(int ac, char **av)
{
	int	i = 0;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		while (av[1][i]) {
			av[1][i] = toupper(av[1][i]);
			++i;
		}
		std::cout << av[1] << std::endl;
	}
	return 0;
}
