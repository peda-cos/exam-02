/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dados_e_operadores.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:47:39 by peda-cos          #+#    #+#             */
/*   Updated: 2025/01/16 20:47:42 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		idade;
	float	altura;
	char	inicial;

	idade = 25;
	altura = 1.75;
	inicial = 'G';
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	printf("Inicial: %c\n", inicial);
	return (0);
}
