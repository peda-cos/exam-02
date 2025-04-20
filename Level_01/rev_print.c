/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:40:55 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:40:56 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_string_length(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

void	print_reversed(char *str)
{
	int	index;

	index = get_string_length(str) - 1;
	while (index >= 0)
	{
		ft_putchar(str[index]);
		index--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_reversed(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
