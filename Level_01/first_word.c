/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:37:05 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:37:07 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

void	process_first_word(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0' && is_delimiter(str[index]))
	{
		index++;
	}
	while (str[index] != '\0' && !is_delimiter(str[index]))
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		process_first_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
