/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:49:39 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:49:40 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
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
		range[index] = start + (direction * index);
		index++;
	}
	return (range);
}
