/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 23:35:31 by peda-cos          #+#    #+#             */
/*   Updated: 2024/12/14 23:37:18 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	int i = 1;

	while (i <= n)
	{
		if (i == n)
			return (1);
		i = i * 2;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	unsigned int n = 4;
	printf("%d\n", is_power_of_2(n));
	n = 6;
	printf("%d\n", is_power_of_2(n));
	return (0);
}
