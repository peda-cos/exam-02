/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:46:23 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:46:24 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int				maximum;
	unsigned int	index;

	if (len == 0)
	{
		return (0);
	}
	maximum = tab[0];
	index = 1;
	while (index < len)
	{
		if (tab[index] > maximum)
		{
			maximum = tab[index];
		}
		index++;
	}
	return (maximum);
}
