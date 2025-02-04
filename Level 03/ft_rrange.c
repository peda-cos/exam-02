/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:07:56 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/04 18:09:40 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_abs(int n)
{
	return ((n < 0) ? -n : n);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int	size;
	int	step;
	int	*range;

	i = 0;
	size = ft_abs(start - end);
	step = (start < end) ? -1 : 1;
	range = (int *)malloc(sizeof(int) * (size + 1));
	if (!range)
		return (NULL);
	while (i <= size)
	{
		range[i] = start;
		start += step;
		i++;
	}
	return (range);
}
