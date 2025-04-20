/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:44:52 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:44:53 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	mirror_letter(char c)
{
	if (is_lowercase(c))
	{
		return ('z' - (c - 'a'));
	}
	if (is_uppercase(c))
	{
		return ('Z' - (c - 'A'));
	}
	return (c);
}

void	process_alpha_mirror(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(mirror_letter(str[index]));
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		process_alpha_mirror(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
