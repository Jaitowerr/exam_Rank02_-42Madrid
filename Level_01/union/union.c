

#include <unistd.h>

// Función auxiliar para ver si un carácter ya está en nuestro "almacén"
int	is_in_frase(char *frase, char c)
{
	int	i = 0;
	while (frase[i])
	{
		if (frase[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int ft_strlen (char *ss)
{
    int i;

    i = 0;
    while(ss[i])
        i++;
    return (i);
}

void	ft_union(char *s1, char *s2)
{
	char	frase[ft_strlen(s1) + ft_strlen(s2) + 1]; 
	int		i;
	int		j;


    i = 0;
	while (i < (ft_strlen(s1) + ft_strlen(s2) + 1))
		frase[i++] = '\0';

	i = 0;
	j = 0;

    while (s1[i])
	{
		if (is_in_frase(frase, s1[i]) == 0)
		{
			frase[j] = s1[i];
			write(1, &s1[i], 1);
			j++;
		}
		i++;
	}


    i = 0;
	while (s2[i])
	{
		if (is_in_frase(frase, s2[i]) == 0)
		{
			frase[j] = s2[i];
			write(1, &s2[i], 1);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}