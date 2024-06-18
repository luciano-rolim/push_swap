#include "../push_swap.h"

void	print_lists(t_node **a, t_node **b)
{
	t_node	*temp;
	t_node	*tmp_next;
	t_node	*tmp_prev;
	t_node	*tmp_index;

	temp = *a;
	tmp_next = *a;
	tmp_prev = *a;
	tmp_index = *a;

	write(1, "\nLIST A\n", 8);
	while (temp != NULL)
	{
		printf("%i\n", temp->number);
		temp = temp->next;
	}
	temp = *b;
	write(1, "\nLIST B\n", 8);
	while (temp != NULL)
	{
		printf("%i\n", temp->number);
		temp = temp->next;
	}

	write(1, "\n\nLIST A - INDEX\n", 17);
	while (tmp_index != NULL)
	{
		printf("%i\n", tmp_index->index);
		tmp_index = tmp_index->next;
	}
	tmp_index = *b;
	write(1, "\n\nLIST B - INDEX\n", 17);
	while (tmp_index != NULL)
	{
		printf("%i\n", tmp_index->index);
		tmp_index = tmp_index->next;
	}

	write(1, "\n\nLIST A - PREV\n", 16);
	while (tmp_prev != NULL)
	{
		printf("%p\n", tmp_prev->prev);
		tmp_prev = tmp_prev->next;
	}
	tmp_prev = *b;
	write(1, "\n\nLIST B - PREV\n", 16);
	while (tmp_prev != NULL)
	{
		printf("%p\n", tmp_prev->prev);
		tmp_prev = tmp_prev->next;
	}

	write(1, "\n\nLIST A - NEXT\n", 16);
	while (tmp_next != NULL)
	{
		printf("%p\n", tmp_next->next);
		tmp_next = tmp_next->next;
	}
	tmp_next = *b;
	write(1, "\n\nLIST B - NEXT\n", 16);
	while (tmp_next != NULL)
	{
		printf("%p\n", tmp_next->next);
		tmp_next = tmp_next->next;
	}
}
