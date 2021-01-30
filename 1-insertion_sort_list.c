#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insertion_sort_list - insertion sorting algorithm
 * @list: double pointer listint_t
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t **head = NULL, *newnode = NULL;
	listint_t *current;

	if (*head == NULL)
		*head = newnode;

	else if ((*head)->n >= newnode->n)
	{
		newnode->next = *head;
		newnode->next->prev = newnode;
		*head = newnode;
	}

	else
	{
		current = *head;
		while (current->next != NULL && current->next->n < newnode->n)
			current = current->next;

		newnode->next = current->next;
		if (current->next != NULL)
			newnode->next->prev = newnode;
		current->next = newnode;
		newnode->prev = current;
		print_list(*list);
	}
}
