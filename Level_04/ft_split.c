/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:59:31 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 23:04:11 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define WORD_MAX_LENGTH 1000
#define MAX_WORD_COUNT 1000

int	is_whitespace(char c)
{
	return (c <= 32);
}

char	*extract_word(char *str, int *index)
{
	char	*word;
	int		word_index;

	word = malloc(sizeof(char) * WORD_MAX_LENGTH);
	if (word == NULL)
		return (NULL);
	word_index = 0;
	while (str[*index] && !is_whitespace(str[*index]))
	{
		word[word_index] = str[*index];
		word_index++;
		(*index)++;
	}
	word[word_index] = '\0';
	return (word);
}

void	skip_whitespace(char *str, int *index)
{
	while (str[*index] && is_whitespace(str[*index]))
		(*index)++;
}

char	**split(char *str)
{
	char	**word_array;
	int		str_index;
	int		array_index;

	word_array = malloc(sizeof(char *) * MAX_WORD_COUNT);
	if (word_array == NULL)
		return (NULL);
	str_index = 0;
	array_index = 0;
	while (str[str_index])
	{
		skip_whitespace(str, &str_index);
		if (str[str_index])
		{
			word_array[array_index] = extract_word(str, &str_index);
			array_index++;
		}
	}
	word_array[array_index] = NULL;
	return (word_array);
}
