/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:46:09 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:46:10 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	find_last_word_end(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	while (index > 0 && is_space(str[index - 1]))
	{
		index--;
	}
	return (index);
}

int	find_last_word_start(char *str, int end)
{
	int	index;

	index = end - 1;
	while (index >= 0 && !is_space(str[index]))
	{
		index--;
	}
	return (index + 1);
}

void	print_last_word(char *str)
{
	int	end;
	int	start;
	int	index;

	end = find_last_word_end(str);
	if (end == 0)
	{
		return ;
	}
	start = find_last_word_start(str, end);
	index = start;
	while (index < end)
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_last_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
