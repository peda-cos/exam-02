/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:45:51 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:45:52 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		index;
	int		length;

	length = ft_strlen(src);
	duplicate = (char *)malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (src[index] != '\0')
	{
		duplicate[index] = src[index];
		index++;
	}
	duplicate[index] = '\0';
	return (duplicate);
}
