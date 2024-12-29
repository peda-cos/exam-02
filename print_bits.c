#include <unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0x0)
		write(fd, &c, sizeof(char));
}

void	print_bits(unsigned char octet)
{
	int				index;
	unsigned char	bit;
	unsigned char	mask;

	index = 0x1 << 0x3; // index = 8
	mask = 0x1 << 0x0;  // mask = 1
	while (index--)
	{
		bit = (((octet >> index) & mask) + '0');
		ft_putchar_fd(bit, STDOUT_FILENO);
	}
}
