/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:54:36 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:54:37 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	outer_index;
	unsigned int	inner_index;
	int				temp;

	outer_index = 0;
	while (outer_index < size - 1)
	{
		inner_index = 0;
		while (inner_index < size - outer_index - 1)
		{
			if (tab[inner_index] > tab[inner_index + 1])
			{
				temp = tab[inner_index];
				tab[inner_index] = tab[inner_index + 1];
				tab[inner_index + 1] = temp;
			}
			inner_index++;
		}
		outer_index++;
	}
}
