int max(int* tab, unsigned int len)
{
	unsigned int i = 0; 
	int maxx = 0;

	if (len == 0)
		return (0);
	maxx = tab[i];
	while (i < len)
	{
		if (maxx < tab[i])
			maxx = tab[i];
		i++;
	}
	return (maxx);
}
