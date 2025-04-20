/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:49:50 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:49:54 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_hidden(char *needle, char *haystack)
{
	int	n_index;
	int	h_index;

	n_index = 0;
	h_index = 0;
	if (needle[0] == '\0')
	{
		return (1);
	}
	while (needle[n_index] != '\0' && haystack[h_index] != '\0')
	{
		if (needle[n_index] == haystack[h_index])
		{
			n_index++;
		}
		h_index++;
	}
	return (needle[n_index] == '\0');
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (is_hidden(argv[1], argv[2]))
		{
			ft_putchar('1');
		}
		else
		{
			ft_putchar('0');
		}
	}
	ft_putchar('\n');
	return (0);
}
