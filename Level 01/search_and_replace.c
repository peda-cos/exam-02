/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 06:46:16 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 06:46:57 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	search_and_replace(char *str, char *search, char *replace)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search[0])
			ft_putchar(replace[0]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
		search_and_replace(argv[1], argv[2], argv[3]);
	ft_putchar('\n');
	return (0);
}
