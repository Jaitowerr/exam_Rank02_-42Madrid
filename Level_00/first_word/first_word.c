#include <unistd.h>

void	first_word(char *src)
{
	int	i;

	i = 0;

	while (src[i] == ' ' || src[i] == '\t' )
		i++;

	while (src[i] != '\0' && src[i] != ' ' || src[i] != '\t' )
	{
		write(1, &src[i], 1);
		i++;
	}


}



int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}