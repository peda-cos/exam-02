/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:56:43 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/03 21:29:44 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(int c)
{
	return (('0' <= c) && (c <= '9'));
}

static int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

static int	ft_islower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		result *= str_base;
		if (ft_isdigit(str[i]))
			result += (str[i] - 48);
		else if (ft_isupper(str[i]))
			result += (str[i] - 55);
		else if (ft_islower(str[i]))
			result += (str[i] - 87);
		i++;
	}
	return (result * sign);
}
