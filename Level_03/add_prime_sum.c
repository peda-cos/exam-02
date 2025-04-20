/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:48:59 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:49:00 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int	ft_atoi(char *str)
{
	int	result;
	int	index;

	result = 0;
	index = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result);
}

int	is_prime(int num)
{
	int	divisor;

	if (num <= 1)
	{
		return (0);
	}
	if (num <= 3)
	{
		return (1);
	}
	if (num % 2 == 0 || num % 3 == 0)
	{
		return (0);
	}
	divisor = 5;
	while (divisor * divisor <= num)
	{
		if (num % divisor == 0 || num % (divisor + 2) == 0)
		{
			return (0);
		}
		divisor += 6;
	}
	return (1);
}

int	calculate_prime_sum(int limit)
{
	int	num;
	int	sum;

	sum = 0;
	num = 2;
	while (num <= limit)
	{
		if (is_prime(num))
		{
			sum += num;
		}
		num++;
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	int	number;
	int	result;

	if (argc == 2 && argv[1][0] >= '0' && argv[1][0] <= '9')
	{
		number = ft_atoi(argv[1]);
		result = calculate_prime_sum(number);
		ft_putnbr(result);
	}
	else
	{
		ft_putchar('0');
	}
	ft_putchar('\n');
	return (0);
}
