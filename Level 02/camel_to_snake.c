/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:54:57 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 13:59:37 by peda-cos         ###   ########.fr       */
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

static void	snake(char c)
{
	if (ft_isupper(c))
	{
		ft_putchar('_');
		c += 32;
		ft_putchar(c);
	}
	else
		ft_putchar(c);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			snake(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
