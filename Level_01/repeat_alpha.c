/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:40:42 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:40:43 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_repetition_count(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (c - 'A' + 1);
	}
	return (1);
}

void	print_repeated_char(char c, int count)
{
	int	index;

	index = 0;
	while (index < count)
	{
		ft_putchar(c);
		index++;
	}
}

void	process_string(char *str)
{
	int	index;
	int	repeat_count;

	index = 0;
	while (str[index] != '\0')
	{
		repeat_count = get_repetition_count(str[index]);
		print_repeated_char(str[index], repeat_count);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		process_string(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
