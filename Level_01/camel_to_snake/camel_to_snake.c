#include <unistd.h>
#include <stdlib.h>

int	ft_strlen_camel(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			count++;
		i++;
	}
	return (i + count);
}

char	*camel_to_snake(char *str)
{
	char	*result;
	int		i;
	int		j;

	result = malloc(sizeof(char) * (ft_strlen_camel(str) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			result[j] = '_';
			j++;
			result[j] = str[i] + 32;
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
	char	*result;

	if (argc == 2)
	{
		result = camel_to_snake(argv[1]);
		if (result)
		{
			write(1, result, ft_strlen_camel(result));
			//free(result);
		}
	}
	write(1, "\n", 1);
	return (0);
}