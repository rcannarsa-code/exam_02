#include <unistd.h>

int ft_miniatoi(char *s)
{
	int res = 0;

	while(*s)
		res = res * 10 + *s++ - '0';
	return (res);
}

int is_prime(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void put_nbr(int n)
{
	char res = 0;

	if (n > 9)
		put_nbr(n / 10);
	res = n % 10 + '0';
	write(1, &res, 1);
}

int main(int ac, char**av)
{
	if (ac == 2)
	{
		int nbr = ft_miniatoi(av[1]);
		int sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
	}
	if (ac != 2)
		put_nbr(0);
	write(1, "\n", 1);
}
