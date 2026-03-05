#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}




int	is_prime(int n)
{
	int	i;

    if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);

	i = 3;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}




void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}


int	main(int argc, char **argv)
{
	int	n;
	int	i;
	int	sum;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}

	n = ft_atoi(argv[1]);
	if (n <= 1)
	{
		write(1, "0\n", 2);
		return (0);
	}

	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}

	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}