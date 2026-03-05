void	last_word(char *str)
{
	int	i = 0;
	int	start;
	int	end;


    while (str[i])
		i++;

	i--; 
	while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;

	end = i;

	while (i >= 0 && str[i] != ' ' && str[i] != '\t')
		i--;

	start = i + 1;

	while (start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
}