#include "lists.h"
#include <stdio.h>  /* If you are using printf or similar functions */

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: A double pointer to the head of the listint_t list.
 * @number: The number to insert into the list.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = number; /* Set the node's data */
	new_node->next = NULL;

	/* If the list is empty, or the new node should be placed before the head */
	if (*head == NULL || (*head)->n >= number)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the insertion point */
	current = *head;
	while (current->next != NULL && current->next->n < number)
	{
		current = current->next;
	}

	/* Insert the new node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
