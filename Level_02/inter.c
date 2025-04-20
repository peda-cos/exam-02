/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:45:57 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:45:58 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	char_is_in_string(char c, char *str, int position)
{
	int	index;

	index = 0;
	while (index < position)
	{
		if (str[index] == c)
		{
			return (1);
		}
		index++;
	}
	return (0);
}

int	char_is_in_second_string(char c, char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
		{
			return (1);
		}
		index++;
	}
	return (0);
}

void	process_inter(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0')
	{
		if (!char_is_in_string(s1[index], s1, index)
			&& char_is_in_second_string(s1[index], s2))
		{
			ft_putchar(s1[index]);
		}
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		process_inter(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
