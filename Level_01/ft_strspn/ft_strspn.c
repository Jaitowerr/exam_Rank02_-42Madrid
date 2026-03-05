size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	int		found;

    i = 0;
	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				found = 1; 
				break;
			}
			j++;
		}
		if (found == 0) 
			return (i); 
		i++;
	}
	return (i);
}


// justo lo contrario que strcspn. consiste únicamente en caracteres que están en accept
// En cuanto encuentra una letra en s que NO está en accept, se detiene y devuelve la cuenta.

/*

s = "123abc456"

strspn(s, "0123456789"):
'1' ¿está en "0123456789"? Sí.
'2' ¿está en "0123456789"? Sí.
'3' ¿está en "0123456789"? Sí.
'a' ¿está en "0123456789"? NO.
Resultado: 3 (Las primeras 3 letras son números).

*/