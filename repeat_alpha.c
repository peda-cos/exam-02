#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if (c >= 'a' && c <= 'z')
				j = c - 'a' + 1;
			else if (c >= 'A' && c <= 'Z')
				j = c - 'A' + 1;
			else
				j = 1;
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				while (j--)
					write(1, &c, 1);
			}
			else
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
