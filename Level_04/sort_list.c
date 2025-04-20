/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:54:42 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:54:48 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*current;
	int		temp;
	int		swapped;

	if (lst == NULL)
	{
		return (NULL);
	}
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		current = lst;
		while (current->next != NULL)
		{
			if (cmp(current->data, current->next->data) == 0)
			{
				temp = current->data;
				current->data = current->next->data;
				current->next->data = temp;
				swapped = 1;
			}
			current = current->next;
		}
	}
	return (lst);
}
