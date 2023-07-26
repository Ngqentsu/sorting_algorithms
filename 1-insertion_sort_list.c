#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap_nodes - function that swaps nodes
 * @list: double linked list
 * @n1: first node
 * @n2: second node
 */
void swap_nodes(listint_t **list, listint_t **n1, listint_t *n2)
{
(*n1)->next = n2->next;
if (n2->next)
n2->next->prev = *n1;
n2->prev = (*n1)->prev;
n2->next = *n1;
if ((*n1)->prev)
(*n1)->prev->next = n2;
else
*list = n2;
(*n1)->prev = n2;
*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts doubly linked list integers in ascending order
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *count, *old, *tmp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (count = (*list)->next; count != NULL; count = tmp)
{
tmp = (*count).next;
old = (*count).prev;

while (old != NULL && count->n < old->n)
{
swap_nodes(list, &old, count);
print_list(*list);
}
}
}
