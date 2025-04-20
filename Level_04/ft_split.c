/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:59:31 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:59:33 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define WD_LEN 1000

char	**split(char *str)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	array = malloc(WD_LEN);
	while (str[i])
	{
		if (str[i] > 32)
		{
			k = 0;
			array[j] = malloc(WD_LEN);
			while (str[i] > 32)
				array[j][k++] = str[i++];
			array[j++][k] = '\0';
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}
