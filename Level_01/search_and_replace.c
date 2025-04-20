/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:41:22 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:41:23 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_single_char(char *str)
{
	return (str[0] != '\0' && str[1] == '\0');
}

void	replace_and_print(char *str, char target, char replacement)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == target)
		{
			ft_putchar(replacement);
		}
		else
		{
			ft_putchar(str[index]);
		}
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && is_single_char(argv[2]) && is_single_char(argv[3]))
	{
		replace_and_print(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return (0);
}
