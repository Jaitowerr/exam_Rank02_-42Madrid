#include <unistd.h>
#include <stdlib.h>

// Dos maneras, con malloc o sin él, no es necesario.


//SIN MALLOC:

#include <unistd.h>

void	snake_to_camel(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '_')
		{
			i++;
			c = str[i] - 32;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}


// CON MALLOC
/*

char	*snake_to_camel(char *str)
{
	int		len;
	int		count_;
	int		i;
	int		j;
	char	*result;

	len = 0;
	count_ = 0;
	while (str[len])
	{
		if (str[len] == '_')
			count_++;
		len++;
	}
	result = malloc(sizeof(char) * (len - count_ + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{
			i++;
			result[j] = str[i] - 32;
		}
		else
			result[j] = str[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}

int	main(int argc, char **argv)
{
	char	*camel;
	int		i;

	if (argc == 2)
	{
		camel = snake_to_camel(argv[1]);
		if (camel)
		{
			i = 0;
			while (camel[i])
			{
				write(1, &camel[i], 1);
				i++;
			}
			free(camel);
		}
	}
	write(1, "\n", 1);
	return (0);
}


*/