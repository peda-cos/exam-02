/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:17:28 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 15:17:48 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static char	apply_rot13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		return (c + 13);
	if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		return (c - 13);
	return (c);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			ft_putchar(apply_rot13(argv[1][i]));
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
