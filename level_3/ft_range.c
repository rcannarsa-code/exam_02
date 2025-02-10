#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = 0;
	int len = abs(end - start) + 1;
	int *arr = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start < end)
		{
			arr[i] = start;
			start++;
			i++;
		}
		else
		{
			arr[i] = start;
			start--;
			i++;
		}
	}
	return (arr);
}
