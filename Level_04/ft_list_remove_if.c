/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:53:35 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:53:36 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*temp;

	if (begin_list == NULL || *begin_list == NULL)
	{
		return ;
	}
	current = *begin_list;
	while (current != NULL && current->next != NULL)
	{
		if (cmp(current->next->data, data_ref) == 0)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
		}
		else
		{
			current = current->next;
		}
	}
	current = *begin_list;
	if (cmp(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
	}
}
