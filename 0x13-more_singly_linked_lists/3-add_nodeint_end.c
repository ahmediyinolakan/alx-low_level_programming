#include "lists.h"

/**
 * add_nodeint_end -  new node is added at the end
 * of the linked list
 * @head: head of the list.
 * @n: number of elements.
 *
 * Return: the address of the new element. NUll when  it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *new;
		listint_t *temp;

		(void)temp;

		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;
		temp = *head;
		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new;

		}

		return (*head);
}
