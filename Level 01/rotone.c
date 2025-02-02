/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 07:43:35 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 07:49:25 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_isatoy(char c)
{
	return ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'));
}

static int	ft_isz(char c)
{
	return (c == 'z' || c == 'Z');
}

static void	rotone(char c)
{
	if (ft_isatoy(c))
		c += 1;
	else if (ft_isz(c))
		c -= 25;
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
			rotone(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
