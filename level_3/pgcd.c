#include <stdio.h>
#include <stdlib.h>

int main(int ac, char** av)
{
	if (ac == 3)
	{
		int n1 = atoi(av[1]);
		int n2 = atoi(av[2]);

		if (n1 > 0 && n2 > 0)
		{
			while (n2)
			{
				int temp = n2;
				n2 = n1 % n2;
				n1 = temp;
			}
			printf("%d", n1);
		}
	}
	printf("\n");
	return (0);
}
