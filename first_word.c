#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;
	int		start;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		if (i > start)
			write(1, &str[start], i - start);
	}
	write(1, "\n", 1);
	return (0);
}
