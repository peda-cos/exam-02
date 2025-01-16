/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controle_de_fluxo.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:49:00 by peda-cos          #+#    #+#             */
/*   Updated: 2025/01/16 20:49:24 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	numero;

	printf("Digite um número: ");
	scanf("%d", &numero);
	if (numero % 2 == 0)
		printf("O número é par.\n");
	else
		printf("O número é ímpar.\n");
	return (0);
}
