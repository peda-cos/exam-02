/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 23:42:02 by peda-cos          #+#    #+#             */
/*   Updated: 2024/12/14 23:47:30 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strchr(char *s, int c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i])
			return (&s[i]);
		i++;
	}
	return (NULL);
}

size_t	ft_strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == NULL)
			break ;
		i++;
	}
	return (i);
}

int	main(void)
{
	char haystack[] = "This is a test string";
	char accept[] = "tgaThis";

	prtinf("%zu\n", ft_strspn(haystack, accept));
	return (0);
}
