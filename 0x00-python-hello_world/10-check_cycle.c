#include "list.h"
#include <stdio.h>

/**
  * check_cycle - Checks if a singly linked list has a cycle in it
  * @list: The singly linked list to check
  *
  * Return: 1 if has a cycle in it or 0 if not
  */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
