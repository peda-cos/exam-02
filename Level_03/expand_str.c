/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:49:13 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:49:14 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t');
}

void	expand_spaces(char *str)
{
	int	index;
	int	word_printed;

	index = 0;
	word_printed = 0;
	while (str[index] != '\0')
	{
		while (is_whitespace(str[index]))
		{
			index++;
		}
		if (str[index] == '\0')
		{
			break ;
		}
		if (word_printed)
		{
			ft_putchar(' ');
			ft_putchar(' ');
			ft_putchar(' ');
		}
		while (str[index] != '\0' && !is_whitespace(str[index]))
		{
			ft_putchar(str[index]);
			index++;
		}
		word_printed = 1;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_spaces(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
