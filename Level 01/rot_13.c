/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 07:10:03 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 07:14:53 by peda-cos         ###   ########.fr       */
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

static void	rotation(char c)
{
	if (ft_isupper(c))
		ft_putchar((((c - 'A') + 13) % 26) + 'A');
	else if (ft_islower(c))
		ft_putchar((((c - 'a') + 13) % 26) + 'a');
	else
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
			rotation(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
