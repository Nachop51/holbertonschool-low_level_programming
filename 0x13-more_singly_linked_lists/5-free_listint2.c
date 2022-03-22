#include "lists.h"

/**
 * free_listint2 - freesa list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux, *tmp;

	aux = *head;
	while (aux != NULL)
	{
		tmp = aux;
		aux = aux->next;
		free(tmp);
	}
	*head = NULL;
}
