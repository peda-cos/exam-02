/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:34:05 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 13:38:07 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

static void	ft_mirror(char c)
{
	if (ft_isupper(c))
		c = 'Z' - (c - 'A');
	else if (ft_islower(c))
		c = 'z' - (c - 'a');
	ft_putchar(c);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ft_mirror(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
