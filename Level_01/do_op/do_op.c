#include <stdio.h>
#include <stdlib.h>

int	do_op(int a, int b, char op)
{
	int	result;

	result = 0;
	if (op == '+')
		result = a + b;
	else if (op == '-')
		result = a - b;
	else if (op == '*')
		result = a * b;
	else if (op == '/')
		result = a / b;
	else if (op == '%')
		result = a % b;
	return (result);
}

int	main(int argc, char **argv)
{
	char	op;
	int		a;
	int		b;
	int		result;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		op = argv[2][0];
		b = atoi(argv[3]);
		result = do_op(a, b, op);
		printf("%d\n", result);
	}
	else
		printf("\n");
	return (0);
}