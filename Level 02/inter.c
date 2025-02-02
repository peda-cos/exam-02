/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 08:16:17 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 08:21:47 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_strchr(char *str, char c)
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

static int	printed(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	inter(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(s2, s1[i]) && !printed(s1, s1[i], i))
			ft_putchar(s1[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
