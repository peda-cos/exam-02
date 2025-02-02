/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:36:46 by peda-cos          #+#    #+#             */
/*   Updated: 2025/02/02 20:41:50 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	do_op(int a, char *op, int b)
{
	if (*op == '+')
		printf("%d\n", a + b);
	else if (*op == '-')
		printf("%d\n", a - b);
	else if (*op == '*')
		printf("%d\n", a * b);
	else if (*op == '/')
		printf("%d\n", a / b);
	else if (*op == '%')
		printf("%d\n", a % b);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(atoi(argv[1]), argv[2], atoi(argv[3]));
	return (0);
}
