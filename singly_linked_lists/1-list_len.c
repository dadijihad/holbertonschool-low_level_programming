#include "lists.h"

/**
*print_list - returns the number of elements
*@h:pointer to the list
*Return: the number of elements
*/

size_t list_len(const list_t *h)
	{
		size_t elements = 0;

		while (h)
		{
			elements++;
			h = h->next;
		}

		return (elements);
	}
