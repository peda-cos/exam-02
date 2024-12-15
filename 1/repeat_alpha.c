/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:46:26 by peda-cos          #+#    #+#             */
/*   Updated: 2024/12/14 22:49:31 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int repeat;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat = argv[1][i] - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					repeat = argv[1][i] - 'A' + 1;
			while (repeat > 0)
			{
				ft_putchar(argv[1][i]);
				repeat--;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
