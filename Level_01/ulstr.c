/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:41:32 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:41:34 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	swap_letter_case(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

void	process_string(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(swap_letter_case(str[index]));
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
