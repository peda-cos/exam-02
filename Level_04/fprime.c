/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:53:13 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:53:14 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	find_prime_factors(int n)
{
	int	divisor;
	int	first_factor;

	if (n == 1)
	{
		printf("1");
		return ;
	}
	divisor = 2;
	first_factor = 1;
	while (n > 1)
	{
		if (n % divisor == 0)
		{
			if (first_factor)
			{
				printf("%d", divisor);
				first_factor = 0;
			}
			else
			{
				printf("*%d", divisor);
			}
			n /= divisor;
		}
		else
		{
			divisor++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	number;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		if (number >= 1)
		{
			find_prime_factors(number);
		}
	}
	printf("\n");
	return (0);
}
