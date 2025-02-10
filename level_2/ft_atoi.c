#include <unistd.h>

int ft_atoi(const char *str)
{
	int res = 0, sign = 1;

	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		res = res * 10 + *str -'0';
		str++;
	}
	return (sign * res);
}
