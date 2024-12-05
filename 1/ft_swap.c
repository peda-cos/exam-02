/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:48:16 by peda-cos          #+#    #+#             */
/*   Updated: 2024/12/05 20:52:14 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	(void)argc;
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	printf("%d\t%d\n", x, y);
	ft_swap(&x, &y);
	printf("%d\t%d\n", x, y);
	return (0);
}
