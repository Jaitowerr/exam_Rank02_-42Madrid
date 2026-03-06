#include <stdlib.h>


static int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		len;
	char	*s;

	n = (long)nbr;

	len = ft_len(n);
    
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);

	s[len] = '\0';

	if (n == 0)
		s[0] = '0';

	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		s[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (s);
}



/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*result;

	if (argc != 2)
	{
		printf("Uso: ./ft_itoa <numero>\n");
		return (0);
	}
	result = ft_itoa(atoi(argv[1]));
	printf("%s\n", result);
	free(result);
	return (0);
}

*/