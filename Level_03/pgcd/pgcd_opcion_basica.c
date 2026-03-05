// el Máximo Común Divisor Es el mayor número entero positivo que divide exactamente a ambos números.


#include <stdio.h>   // para printf
#include <stdlib.h>  // para atoi

int	pgcd(int a, int b)
{
	int	i;

	if (a < b)
		i = a;
	else
		i = b;


	while (i >= 1)
	{
		if (a % i == 0 && b % i == 0)
			return (i);
		i--;
	}
	return (1); // caso seguro, pero por si acaso
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;


	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		if (a > 0 && b > 0)
		{
			printf("%d", pgcd(a, b));
		}
	}

	printf("\n");

	return (0);
}
