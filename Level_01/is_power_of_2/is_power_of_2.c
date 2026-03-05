


int	is_power_of_2(unsigned int n)
{
	unsigned long	i;

	if (n == 0)
		return (0);
	i = 1;
	while (i < n)
		i = i * 2;
	if (i == n)
		return (1);
	return (0);
}


// i = 1 porque en matemáticas cualquier nuemero elevado a 0 es 1, por lo tanto si n = 1, si es potencia de 2