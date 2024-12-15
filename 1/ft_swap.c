/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:17:43 by peda-cos          #+#    #+#             */
/*   Updated: 2024/12/14 22:19:40 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int	main(void)
{
	int x = 21;
	int y = 42;

	printf("Antes da troca: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Depois da troca: x = %d, y = %d\n", x, y);
	return (0);
}
