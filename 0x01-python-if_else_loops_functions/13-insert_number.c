#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_node: insert a new node into a sorted linked list
 * @head: a pointer to a pointer to the head of the list
 * @number: the value to be stored in the new node
 * Return: the address of the new node, 
 * or NULL if the node could not be allocated
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *current, *prev;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = number;
	new_node->next = NULL;
	current = *head;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if ((*head)->n > new_node->n)
		{
			prev = *head;
			new_node->next = prev;
			*head = new_node;
			return (new_node);
		}
		else if (current->n > new_node->n)
		{
			prev->next = new_node;
			new_node->next = current;
			current = new_node;
			return (current);
		}
		else if (current->next == NULL && new_node->n > current->n)
		{
			current->next = new_node;
			return (new_node);
		}
		prev = current;
		current = current->next;
	}
	return (NULL);
}
