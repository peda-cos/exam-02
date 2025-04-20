/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:45:08 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:45:09 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	perform_operation(int a, char op, int b)
{
	if (op == '+')
	{
		return (a + b);
	}
	if (op == '-')
	{
		return (a - b);
	}
	if (op == '*')
	{
		return (a * b);
	}
	if (op == '/' && b != 0)
	{
		return (a / b);
	}
	if (op == '%' && b != 0)
	{
		return (a % b);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	op;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		op = argv[2][0];
		b = atoi(argv[3]);
		printf("%d", perform_operation(a, op, b));
	}
	printf("\n");
	return (0);
}
