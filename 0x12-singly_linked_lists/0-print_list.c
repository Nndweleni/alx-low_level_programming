#include <stdio.h>
#include <lists.h>
/**
 * print_list - Function that will print all the elements of list_t list
 * Return: 0;
 */
size_t print_list(const list_t *h)
{
	size_t p_list = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len);
		h = h->next;
		p_list++;
	}
	return (p_list);
}
