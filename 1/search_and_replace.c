/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:50:52 by peda-cos          #+#    #+#             */
/*   Updated: 2024/12/14 22:54:32 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 4)
	{
		if(argv[2][1] == '\0')
		{
			i = 0;
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
					ft_putchar(argv[3][0]);
				else
					ft_putchar(argv[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
