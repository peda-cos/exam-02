/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 20:44:22 by peda-cos          #+#    #+#             */
/*   Updated: 2025/01/05 20:47:07 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		write(1, argv[1], i);
	}
	write(1, "\n", 1);
	return (0);
}
