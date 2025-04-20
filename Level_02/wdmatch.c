/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:46:53 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:46:54 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	can_form_string(char *needle, char *haystack)
{
	int	n_idx;
	int	h_idx;

	n_idx = 0;
	h_idx = 0;
	while (needle[n_idx] != '\0')
	{
		while (haystack[h_idx] != '\0' && haystack[h_idx] != needle[n_idx])
		{
			h_idx++;
		}
		if (haystack[h_idx] == '\0')
		{
			return (0);
		}
		n_idx++;
		h_idx++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 3 && can_form_string(argv[1], argv[2]))
	{
		ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
