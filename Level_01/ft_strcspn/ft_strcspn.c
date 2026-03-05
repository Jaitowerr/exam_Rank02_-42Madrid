#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i); 
			j++;
		}
		i++;
	}
	return (i);
}

//Busca si alguna letra de s está en reject, si lo está devuelve la posicion de la letra de s, si no está devuelve el largo de s

/*

Si s = "hola" y reject = "ax":

¿'h' está en "ax"? No. Seguimos.
¿'o' está en "ax"? No. Seguimos.
¿'l' está en "ax"? No. Seguimos.
¿'a' está en "ax"? SÍ.
Retornamos 3 (porque 'h', 'o', 'l' son 3 caracteres que no estaban en el "reject").

*/