


#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bit;

	// Bit 8 (128)
	bit = 128;
	if (octet >= bit)
	{
		write(1, "1", 1);
		octet -= bit;
	}
	else
		write(1, "0", 1);

	// Bit 7 (64)
	bit = 64;
	if (octet >= bit)
	{
		write(1, "1", 1);
		octet -= bit;
	}
	else
		write(1, "0", 1);

	// Bit 6 (32)
	bit = 32;
	if (octet >= bit)
	{
		write(1, "1", 1);
		octet -= bit;
	}
	else
		write(1, "0", 1);

	// Bit 5 (16)
	bit = 16;
	if (octet >= bit)
	{
		write(1, "1", 1);
		octet -= bit;
	}
	else
		write(1, "0", 1);

	// Bit 4 (8)
	bit = 8;
	if (octet >= bit)
	{
		write(1, "1", 1);
		octet -= bit;
	}
	else
		write(1, "0", 1);

	// Bit 3 (4)
	bit = 4;
	if (octet >= bit)
	{
		write(1, "1", 1);
		octet -= bit;
	}
	else
		write(1, "0", 1);

	// Bit 2 (2)
	bit = 2;
	if (octet >= bit)
	{
		write(1, "1", 1);
		octet -= bit;
	}
	else
		write(1, "0", 1);

	// Bit 1 (1)
	bit = 1;
	if (octet >= bit)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}