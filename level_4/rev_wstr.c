//v2
#include <unistd.h>

void            rev_wstr(char *s, int first)
{
        int             start;
        int             i;

        i = 0;
        if (s[i])
        {
			while (s[i] && (s[i] == ' ' || s[i] == '\t'))
					i++;
			if (!s[i])
					return ;
			start = i;
			while (s[i] && s[i] != ' ' && s[i] != '\t')
					i++;
			rev_wstr(&s[i], 0);
			write(1, &s[start], i - start);
			if (!first)
					write(1, " ", 1);
        }
}

int                     main(int argc, char **argv)
{
        if (argc == 2)
                rev_wstr(argv[1], 1);
        write(1, "\n", 1);
        return (0);
}


/* #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_wstr(char *str)
{
	int	i;
	int	start;
	int	end;
	int	first_word;

	i = 0;
	while (str[i])
		i++;
	end = i;
	first_word = 1;

	while (end > 0)
	{
		start = end - 1;
		while (start >= 0 && str[start] != ' ')
			start--;

		if (!first_word)
			ft_putchar(' ');
		first_word = 0;

		i = start + 1;
		while (i < end)
		{
			ft_putchar(str[i]);
			i++;
		}
		end = start;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_wstr(av[1]);
	}
	ft_putchar('\n');
	return (0);
} */

