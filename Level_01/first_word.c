/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:08:13 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 15:10:13 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	is_delimiter(char c)
{
	return (c == ' ' || c == '\t');
}

static void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] && is_delimiter(str[i]))
		i++;
	while (str[i] && !is_delimiter(str[i]))
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
