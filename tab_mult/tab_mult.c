#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &((char){(n % 10) + '0'}), 1);
}

void	tab_mult(int n)
{
	int	i;
	int	result;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		result = i * n;
		ft_putnbr(result);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	n = atoi(argv[1]);
	tab_mult(n);
	return (0);
}