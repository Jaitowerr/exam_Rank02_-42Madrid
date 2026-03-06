#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	int				data;
}	t_list;

t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

int	ascending(int a, int b)
{
	return (a <= b);
}

int	descending(int a, int b)
{
	return (a >= b);
}

t_list	*new_node(int value)
{
	t_list	*n;

	n = (t_list *)malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->data = value;
	n->next = NULL;
	return (n);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d", lst->data);
		if (lst->next)
			printf(" -> ");
		lst = lst->next;
	}
	printf(" -> NULL\n");
}

void	free_list(t_list *lst)
{
	t_list	*next;

	while (lst)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
}

int	main(void)
{
	t_list	*lst;

	lst = new_node(3);
	lst->next = new_node(1);
	lst->next->next = new_node(2);
	lst->next->next->next = new_node(2);
	lst->next->next->next->next = new_node(5);
	lst->next->next->next->next->next = new_node(-4);

	printf("Original:\n");
	print_list(lst);

	printf("\nSorted ascending:\n");
	lst = sort_list(lst, ascending);
	print_list(lst);

	printf("\nSorted descending:\n");
	lst = sort_list(lst, descending);
	print_list(lst);

	free_list(lst);
	return (0);
}