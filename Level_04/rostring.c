/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:58:36 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:59:21 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

void	rostring(char *str)
{
	int	i;
	int	start_first_word;
	int	end_first_word;
	int	word_printed;

	i = 0;
	word_printed = 0;
	while (str[i] && is_space(str[i]))
		i++;
	start_first_word = i;
	while (str[i] && !is_space(str[i]))
		i++;
	end_first_word = i;
	while (str[i] && is_space(str[i]))
		i++;
	while (str[i])
	{
		while (str[i] && !is_space(str[i]))
		{
			ft_putchar(str[i]);
			i++;
			word_printed = 1;
		}
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i] && word_printed)
			ft_putchar(' ');
	}
	if (word_printed)
		ft_putchar(' ');
	i = start_first_word;
	while (i < end_first_word)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
