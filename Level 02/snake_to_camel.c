/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:01:19 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 14:05:18 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_isunderscore(char c)
{
	return (c == '_');
}

static void	camel(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isunderscore(str[i]))
		{
			i++;
			str[i] -= 32;
			ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel(argv[1]);
	ft_putchar('\n');
	return (0);
}
