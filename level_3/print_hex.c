#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;

	while (*str)
	{
		n = n * 10;
		n = n + *str - '0';
		++str;
	}
	return (n);
}

void hex(int n)
{
	char hex_d[] = "0123456789abcdef";

	if (n >= 16)
		hex(n / 16);
	write(1, &hex_d[n % 16], 1);
}

int main(int ac, char** av)
{
	if (ac == 2)
		hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
