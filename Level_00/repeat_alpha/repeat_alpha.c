

void repeat_alpha(char *src)
{
	int	i;
	int repeat;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			repeat = ((src[i] - 'a') + 1);
			while (repeat > 0)
			{
				write(1, &src[i], 1);
				repeat--;
			}
		}
		else if (src[i] >= 'A' && src[i] <= 'Z')
		{
			repeat = ((src[i] - 'A') + 1);
			while (repeat > 0)
			{
				write(1, &src[i], 1);
				repeat--;
			}
		} else
			write(1, &src[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);


	return (0);
}