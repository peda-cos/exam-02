/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:58:33 by peda-cos          #+#    #+#             */
/*   Updated: 2024/12/05 21:10:02 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z' || argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
					j = argv[1][i] - 'a';
				else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					j = argv[1][i] - 'A';
				while(j > 0)
				{
					ft_putchar(argv[1][i]);
					j--;
				}
				ft_putchar(argv[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
