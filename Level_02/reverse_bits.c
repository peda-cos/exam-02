/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:46:35 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:46:36 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				bit_position;

	result = 0;
	bit_position = 0;
	while (bit_position < 8)
	{
		result = (result << 1) | ((octet >> bit_position) & 1);
		bit_position++;
	}
	return (result);
}
