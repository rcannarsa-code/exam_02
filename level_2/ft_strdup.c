#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0, len = 0;
	char *dup;

	while (src[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
