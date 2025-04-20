/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:50:35 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:50:36 by peda-cos         ###   ########.fr       */
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

int	is_letter(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
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

void	capitalize_words(char *str)
{
	int	index;
	int	new_word;

	index = 0;
	new_word = 1;
	while (str[index] != '\0')
	{
		if (is_letter(str[index]))
		{
			if (new_word)
			{
				ft_putchar(to_uppercase(str[index]));
				new_word = 0;
			}
			else
			{
				ft_putchar(to_lowercase(str[index]));
			}
		}
		else
		{
			ft_putchar(str[index]);
			if (is_space(str[index]))
			{
				new_word = 1;
			}
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
			capitalize_words(argv[arg_index]);
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
