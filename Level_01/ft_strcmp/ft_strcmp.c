


int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

//sirve para comparar dos cadenas de caracteres (strings) y determinar si son iguales o cuál es "mayor" alfabéticamente.