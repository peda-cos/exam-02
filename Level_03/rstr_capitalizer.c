/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:50:23 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:50:24 by peda-cos         ###   ########.fr       */
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

char	to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

char	to_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

void	capitalize_last_letters(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (is_space(str[index + 1]))
		{
			ft_putchar(to_uppercase(str[index]));
		}
		else
		{
			ft_putchar(to_lowercase(str[index]));
		}
		index++;
	}
}

int	main(int argc, char **argv)
{
	int	arg_index;

	if (argc > 1)
	{
		arg_index = 1;
		while (arg_index < argc)
		{
			capitalize_last_letters(argv[arg_index]);
			ft_putchar('\n');
			arg_index++;
		}
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
