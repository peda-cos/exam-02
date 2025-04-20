/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:45:00 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:45:02 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	count_uppercase_chars(char *str)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (is_uppercase(str[index]))
		{
			count++;
		}
		index++;
	}
	return (count);
}

void	convert_and_print(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (is_uppercase(str[index]))
		{
			ft_putchar('_');
			ft_putchar(str[index] + 32);
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
	if (argc == 2)
	{
		convert_and_print(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
