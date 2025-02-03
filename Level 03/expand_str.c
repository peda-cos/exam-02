/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:45:04 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/03 20:18:56 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

static int	ft_ispace(char c)
{
	return (c == ' ' || c == '\t');
}

static void	expand_str(char *str)
{
	int	i;

	i = 0;
	while (ft_ispace(str[i]))
		i++;
	while (str[i])
	{
		if (ft_ispace(str[i]))
		{
			if (!ft_ispace(str[i + 1]) && str[i + 1] != '\0')
				ft_putstr("   ");
		}
		else if (!ft_ispace(str[i]))
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
