#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;

		while (av[1][i])
		{
			if ('a' <= av[1][i] && av[1][i] <= 'z')
				av[1][i] = ('z' + 'a') - av[1][i] ;
			else if ('A' <= av[1][i] && av[1][i] <= 'Z')
				av[1][i] = ('Z' + 'A') - av[1][i];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
