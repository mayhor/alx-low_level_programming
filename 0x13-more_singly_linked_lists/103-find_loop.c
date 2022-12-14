#include "lists.h"

/**
 * find_listint_loop - Finds a loop
 * @head: head of a list 
 * Return: slow_p
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head, *fast_p = head;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			slow_p = head;
			while (slow_p != fast_p)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			return (slow_p);
		}
	}
	return (NULL);
}
