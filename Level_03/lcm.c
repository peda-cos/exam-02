/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:49:58 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:49:59 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	gcd(unsigned int a, unsigned int b)
{
	unsigned int	temp;

	if (a == 0 || b == 0)
	{
		return (0);
	}
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	greatest_common_divisor;
	unsigned int	result;

	if (a == 0 || b == 0)
	{
		return (0);
	}
	greatest_common_divisor = gcd(a, b);
	result = (a / greatest_common_divisor) * b;
	return (result);
}
