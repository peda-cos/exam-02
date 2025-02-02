/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:13:50 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 13:32:15 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	printed(char *str, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == str[pos])
			return (1);
		i++;
	}
	return (0);
}

static int	checker(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if (!printed(str1, i))
			ft_putchar(str1[i]);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (!printed(str2, i) && !checker(str1, str2[i]))
			ft_putchar(str2[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
