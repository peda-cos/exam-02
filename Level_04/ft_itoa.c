/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:53:18 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:53:19 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_number_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
	{
		length = 1;
	}
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int		length;
	int		is_negative;
	long	number;

	is_negative = (nbr < 0);
	length = get_number_length(nbr);
	number = nbr;
	if (is_negative)
	{
		number = -number;
	}
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	result[length] = '\0';
	while (length > 0)
	{
		result[--length] = (number % 10) + '0';
		number /= 10;
	}
	if (is_negative)
	{
		result[0] = '-';
	}
	return (result);
}
