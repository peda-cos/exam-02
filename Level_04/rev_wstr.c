/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:54:19 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:54:20 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	count_words(char *str)
{
	int	word_count;
	int	index;

	word_count = 0;
	index = 0;
	while (str[index] != '\0')
	{
		while (is_space(str[index]))
		{
			index++;
		}
		if (str[index] != '\0')
		{
			word_count++;
			while (str[index] != '\0' && !is_space(str[index]))
			{
				index++;
			}
		}
	}
	return (word_count);
}

void	fill_words_array(char **words, char *str)
{
	int	word_index;
	int	str_index;
	int	word_start;
	int	word_length;

	word_index = 0;
	str_index = 0;
	while (str[str_index] != '\0')
	{
		while (is_space(str[str_index]))
		{
			str_index++;
		}
		if (str[str_index] != '\0')
		{
			word_start = str_index;
			word_length = 0;
			while (str[str_index] != '\0' && !is_space(str[str_index]))
			{
				word_length++;
				str_index++;
			}
			words[word_index] = (char *)malloc(sizeof(char) * (word_length
						+ 1));
			for (int i = 0; i < word_length; i++)
			{
				words[word_index][i] = str[word_start + i];
			}
			words[word_index][word_length] = '\0';
			word_index++;
		}
	}
}

void	print_words_in_reverse(char **words, int word_count)
{
	int	index;

	index = word_count - 1;
	while (index >= 0)
	{
		ft_putstr(words[index]);
		if (index > 0)
		{
			ft_putchar(' ');
		}
		index--;
	}
}

void	free_words(char **words, int word_count)
{
	int	index;

	index = 0;
	while (index < word_count)
	{
		free(words[index]);
		index++;
	}
	free(words);
}

void	reverse_words(char *str)
{
	char	**words;
	int		word_count;

	word_count = count_words(str);
	if (word_count == 0)
	{
		return ;
	}
	words = (char **)malloc(sizeof(char *) * word_count);
	if (words == NULL)
	{
		return ;
	}
	fill_words_array(words, str);
	print_words_in_reverse(words, word_count);
	free_words(words, word_count);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		reverse_words(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
