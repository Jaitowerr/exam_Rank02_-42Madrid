int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
    
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\n' || str[i] == '\v')
		i++;

	sign = 1;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	result = 0;

    while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}