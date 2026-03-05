// LCM son las siglas en inglés de Least Common Multiple, que en español es Mínimo Común Múltiplo (mcm).

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	if (a == 0 || b == 0)
	{
		return (0);
	}
	if (a > b)
	{
		n = a;
	}
	else
	{
		n = b;
	}
	while (1)
	{
		if (n % a == 0 && n % b == 0)
		{
			return (n);
		}
		n++;
	}
}
/*
1 - Caso del 0: El enunciado dice que si uno es nulo, el LCM es 0. Lo cubrimos al principio.
2 - Punto de partida: Como el LCM tiene que ser divisible por ambos, el número más pequeño posible que podría ser el LCM es el mayor de los dos parámetros (a o b). Por eso inicializamos n con el mayor.
3 - El bucle while (1): Es un bucle infinito que solo se rompe cuando encontramos el número adecuado.
4 - La condición n % a == 0 && n % b == 0: Esto comprueba si el número actual n es múltiplo de a y de b al mismo tiempo.
5 - El incremento n++: Vamos probando número a número (n, n+1, n+2...) hasta que la condición se cumpla. El primero que la cumpla es, por definición, el mínimo común múltiplo.
  */
