#include <stdio.h>   // para printf
#include <stdlib.h>  // para atoi

int	pgcd(int a, int b)
{
	int	temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	// Comprobar que hay exactamente 2 argumentos
	if (argc != 3)
	{
		printf("\n");
		return (0);
	}

	// Convertir los argumentos a enteros
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	// Calcular y mostrar el PGCD
	printf("%d\n", pgcd(a, b));

	return (0);
}