/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reapeat_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:14:16 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 15:15:37 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	get_repeat_count(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	return (1);
}

static void	repeat_char(char c, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_putchar(c);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	repeat_count;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			repeat_count = get_repeat_count(argv[1][i]);
			repeat_char(argv[1][i], repeat_count);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
