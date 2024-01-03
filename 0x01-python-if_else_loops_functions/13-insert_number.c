#include "lists.h"
#include <stdlib.h>

/**
 *insert_node - Inserts a node in a sorted list
 *@head: adress of head pointer
 *@number: The number to insert
 *
 *Return: inserted node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;
#include
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
