#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a linked list
* @head: head of the list.
* @index: index of the node.
*
* Return: nth node. returns NULL, if the node does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
		unsigned int i;

		for (i = 0; i < index && head != NULL; i++)
		{
			head = head->next;
		}

		return (head);
}
