/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:45:42 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:45:43 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	char_in_str(char c, const char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
		{
			return (1);
		}
		index++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (char_in_str(s[index], reject))
		{
			return (index);
		}
		index++;
	}
	return (index);
}
