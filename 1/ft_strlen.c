/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:33:32 by peda-cos          #+#    #+#             */
/*   Updated: 2024/12/05 20:35:35 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}
