/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 06:55:51 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 07:06:26 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

static void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		ft_putchar(c);
	}
}

static void	fizzbuzz(int n)
{
	if (n % 15 == 0)
		ft_putstr("fizzbuzz");
	else if (n % 3 == 0)
		ft_putstr("fizz");
	else if (n % 5 == 0)
		ft_putstr("buzz");
	else
		ft_putnbr(n);
}

int	main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		fizzbuzz(i);
		ft_putchar('\n');
		i++;
	}
	return (0);
}