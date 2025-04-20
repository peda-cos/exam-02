/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:50:42 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:50:43 by peda-cos         ###   ########.fr       */
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

void	print_multiplication_table(int number)
{
	int	multiplier;
	int	result;

	multiplier = 1;
	while (multiplier <= 9)
	{
		ft_putnbr(multiplier);
		ft_putstr(" x ");
		ft_putnbr(number);
		ft_putstr(" = ");
		result = multiplier * number;
		ft_putnbr(result);
		ft_putchar('\n');
		multiplier++;
	}
}

int	main(int argc, char **argv)
{
	int	number;

	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		print_multiplication_table(number);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
