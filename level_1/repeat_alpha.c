#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int count = 0;
		
		while(av[1][i])
		{
			if ('a' <= av[1][i] && av[1][i] <= 'z')
				count = av[1][i] - 'a' + 1;
			else if ('A' <= av[1][i] && av[1][i] <= 'Z')
				count = av[1][i] - 'A' + 1;
			else
				count = 1;
			while (count--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
