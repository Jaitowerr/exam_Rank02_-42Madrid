#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"


void	print_data(void *data)
{
	printf("Nodo: %s\n", (char *)data);
}

int	main(void)
{

	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));

	
	n1->data = "Hola";
	n2->data = "mundo";
	n3->data = "42";


	n1->next = n2;
	n2->next = n3;
	n3->next = NULL; 


	printf("Recorriendo la lista:\n");
	ft_list_foreach(n1, &print_data);


	free(n1);
	free(n2);
	free(n3);

	return (0);
}