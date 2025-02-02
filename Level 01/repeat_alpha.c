/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 06:40:23 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 06:43:46 by peda-cos         ###   ########.fr       */
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

static void	repeat_alpha(char c)
{
	int	i;

	i = 0;
	if (ft_isupper(c))
		i = c - 'A' + 1;
	else if (ft_islower(c))
		i = c - 'a' + 1;
	while (i > 0)
	{
		ft_putchar(c);
		i--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
