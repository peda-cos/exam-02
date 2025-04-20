/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:46:29 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:46:30 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				bit_position;
	unsigned char	bit;

	bit_position = 7;
	while (bit_position >= 0)
	{
		bit = (octet >> bit_position) & 1;
		write(1, &"01"[bit], 1);
		bit_position--;
	}
}
