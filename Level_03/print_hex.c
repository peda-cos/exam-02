/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:50:13 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:50:14 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	print_hex_digit(int digit)
{
	if (digit < 10)
	{
		ft_putchar(digit + '0');
	}
	else
	{
		ft_putchar(digit - 10 + 'a');
	}
}

void	print_number_as_hex(int number)
{
	if (number >= 16)
	{
		print_number_as_hex(number / 16);
	}
	print_hex_digit(number % 16);
}

int	main(int argc, char **argv)
{
	int	number;

	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		print_number_as_hex(number);
	}
	ft_putchar('\n');
	return (0);
}
