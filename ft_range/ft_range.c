#include <stdlib.h> // para malloc

int	*ft_range(int start, int end)
{
	int	*array;
	int	len;
	int	i;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;

	array = (int *)malloc(sizeof(int) * len);
	if (!array)
		return (NULL);

	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			array[i] = start;
			start--;
			i++;
		}
	}

	return (array);
}