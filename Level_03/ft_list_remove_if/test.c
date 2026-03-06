#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

int		my_cmp(void *d1, void *d2)
{
	return (strcmp((char *)d1, (char *)d2));
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->data);
		lst = lst->next;
	}
	printf("NULL\n");
}

t_list	*new_node(void *data)
{
	t_list *node = malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}

int		main(void)
{
	t_list *list = new_node("A");
	list->next = new_node("B");
	list->next->next = new_node("A");
	list->next->next->next = new_node("C");

	printf("Antes de borrar 'A':\n");
	print_list(list);

	ft_list_remove_if(&list, "A", my_cmp);

	printf("Después de borrar 'A':\n");
	print_list(list);

	return (0);
}