#include "lists.h"

/**
 * insert_node - inserts a number into a sorted linked list
 * @head: linked list
 * @number: number to insert as a new node
 *
 * Return: address of new node, or NULL if it fails
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *runner;
	runner = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (*head == NULL || (*head)->n > number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (runner->next != NULL)
	{
		if ((runner->next)->n >= number)
		{
			new->next = runner->next;
			runner->next = new;
			return (new);
		}
		runner = runner->next;
	}

	runner->next = new;
	new->next = NULL;
	return (new);
}
