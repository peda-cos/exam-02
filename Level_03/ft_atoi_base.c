/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:49:22 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:49:23 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	get_digit_value(char c, int base)
{
	int	digit;

	if (c >= '0' && c <= '9')
	{
		digit = c - '0';
	}
	else if (c >= 'a' && c <= 'f')
	{
		digit = c - 'a' + 10;
	}
	else if (c >= 'A' && c <= 'F')
	{
		digit = c - 'A' + 10;
	}
	else
	{
		return (-1);
	}
	if (digit < base)
	{
		return (digit);
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	digit;
	int	index;

	if (str_base < 2 || str_base > 16)
	{
		return (0);
	}
	result = 0;
	sign = 1;
	index = 0;
	while (ft_isspace(str[index]))
	{
		index++;
	}
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	else if (str[index] == '+')
	{
		index++;
	}
	digit = get_digit_value(str[index], str_base);
	while (digit >= 0)
	{
		result = result * str_base + digit;
		index++;
		digit = get_digit_value(str[index], str_base);
	}
	return (result * sign);
}
