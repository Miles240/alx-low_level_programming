#include "lists.h"

/**
 * list_len - checks fro the length of holberton students
 * @h: list name
 * Return: the tital count
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
