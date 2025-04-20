/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:49:45 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:49:46 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*range;
	int	size;
	int	index;
	int	direction;

	if (start <= end)
	{
		size = end - start + 1;
		direction = 1;
	}
	else
	{
		size = start - end + 1;
		direction = -1;
	}
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index < size)
	{
		range[index] = end - (direction * index);
		index++;
	}
	return (range);
}
