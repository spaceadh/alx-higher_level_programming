#include "lists.h"
/**
 * insert_node  - insert node according to sorted linked list
 * @head: pointer that store the address of the head pointer
 * @number: value to insert in the linked list
 *
 * Return: return the address of the new memory allocated
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *dir = *head, *temp = NULL, *trans = *head, *new = NULL;
	int find = 0;

	new = malloc(sizeof(new));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	if ((*head)->n > number)
	{
		*head = new;
		new->next = dir;
		return (new);
	}
	while (trans->next)
	{
		if (trans->next->n > number)
		{
			find = 1;
			temp = trans;
			break;
		}
		trans = trans->next;
	}
	if (find)
	{
		dir = temp->next;
		temp->next = new;
		new->next = dir;
		return (new);
	}
	trans->next = new;
	return (new);
}
