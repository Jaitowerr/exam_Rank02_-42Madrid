#include <unistd.h>


void	epur_str(char str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;

		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			write(1, &str[i], 1);
			i++;
		}

		while (str[i] == ' ' || str[i] == '\t')
			i++;

		if (str[i])
			write(1, "   ", 3);
	}
}

int	main(int argc, char argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}