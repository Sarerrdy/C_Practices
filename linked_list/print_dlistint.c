#include "main.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the first node of the list
 *
 * Return: the numbers of nodes
 */
size_t print_dlistint(dlistint_t *h)
{
	int cnt;

	cnt = 0;

	if (h == NULL)
		return (cnt);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		cnt++;
		printf("%d : %d\n", cnt, h->n);
		h = h->next;
	}

	return (cnt);
}
