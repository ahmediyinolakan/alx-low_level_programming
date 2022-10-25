#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
		int hnode;
		listint_t *h;
		listint_t *currnt;

		if (*head == NULL)
		return (0);

		currnt = *head;

		hnode = currnt->n;

		h = currnt->next;

		free(currnt);

		*head = h;

		return (hnode);
}
