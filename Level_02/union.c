/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:46:45 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:46:46 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	char_seen_before(char c, char *str, int position)
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

void	process_union(char *s1, char *s2)
{
	int	index;
	int	combined_length;

	index = 0;
	while (s1[index] != '\0')
	{
		if (!char_seen_before(s1[index], s1, index))
		{
			ft_putchar(s1[index]);
		}
		index++;
	}
	combined_length = index;
	index = 0;
	while (s2[index] != '\0')
	{
		if (!char_seen_before(s2[index], s1, combined_length)
			&& !char_seen_before(s2[index], s2, index))
		{
			ft_putchar(s2[index]);
		}
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		process_union(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
