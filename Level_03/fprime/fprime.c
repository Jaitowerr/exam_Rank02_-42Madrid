#include <stdio.h>
#include <stdlib.h>


int	main(int argc, char **argv)
{
	int	n;
	int	divisor;
	int	first;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}

    n = atoi(argv[1]);
	divisor = 2;
	first = 0;

    if (n <= 0)
	{
		printf("\n");
		return (0);
	}

    if (n == 1)
	{
    	printf("1");
    	printf("\n");
		return (0);
	}

    while (n % 2 == 0)
    {
        if (first == 1)
            printf("*");
        printf("2");
        first = 1;
        n /= 2;
    }

    divisor = 3;
    while (n > 1)
    {
        if (n % divisor == 0)
        {
            if (first == 1)
                printf("*");
            printf("%d", divisor);
            first = 1;
            n /= divisor;
        }
        else
            divisor += 2;
    }

	printf("\n");
	return (0);
}