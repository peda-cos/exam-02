/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 20:51:00 by peda-cos          #+#    #+#             */
/*   Updated: 2025/01/05 20:55:26 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = '0' + (n % 10);
	write(1, &c, 1);
}

int	main(void)
{
	int		i;
	char	*fizz;
	char	*buzz;
	char	*fizzbuzz;

	i = 1;
	fizz = "fizz\n";
	buzz = "buzz\n";
	fizzbuzz = "fizzbuzz\n";
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, fizzbuzz, 9);
		else if (i % 3 == 0)
			write(1, fizz, 5);
		else if (i % 5 == 0)
			write(1, buzz, 5);
		else
			ft_putnbr(i), write(1, "\n", 1);
		i++;
	}
	return (0);
}
