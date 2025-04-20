/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:37:44 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:38:17 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

void	evaluate_number(int number)
{
	int	divisible_by_3;
	int	divisible_by_5;

	divisible_by_3 = (number % 3 == 0);
	divisible_by_5 = (number % 5 == 0);
	if (divisible_by_3 && divisible_by_5)
	{
		ft_putstr("fizzbuzz");
	}
	else if (divisible_by_3)
	{
		ft_putstr("fizz");
	}
	else if (divisible_by_5)
	{
		ft_putstr("buzz");
	}
	else
	{
		ft_putnbr(number);
	}
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		evaluate_number(number);
		ft_putchar('\n');
		number++;
	}
	return (0);
}
