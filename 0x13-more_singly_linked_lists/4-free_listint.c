#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *temp)
{
listint_t *head;
while (temp)
{
head = temp->next;
free(temp);
temp = head;
}
}
