#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				idx;
	unsigned char	bit;

	idx = 0x8; // 8 bits em um byte
	bit = 0x0; // Inicializa o valor invertido
	while (idx--)
	{
		bit = ((bit * 0x2) + (octet % 0x2)); // Adiciona o bit menos significativo de octet ao bit invertido
		octet /= 0x2; // Desloca octet para a direita (divisão inteira por 2)
	}
	return (bit);
}
