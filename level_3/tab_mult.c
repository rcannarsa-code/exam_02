#include <unistd.h>

int ft_atoi(char *s)
{
	int res = 0;
	int sign = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
		res = res * 10 + *str - '0';
	return (sign * res);
}

void ft_putchar(char c)
{
	write(1, "\n", 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int main(int ac, char **av)
{	
	int i = 1;
	int n;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		n = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
