#include "sort.h"

/**
 * insertion_sort_list -  function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *sort, *temp;
if (list == NULL || *list == NULL ||
(*list)->next == NULL)
return;
sort = (*list)->next;
while (sort != NULL)
{
current = sort;
sort = sort->next;
while (current->prev != NULL
&& current->n < current->prev->n)
{
temp = current->prev;
current->prev = temp->prev;
if (temp->prev != NULL)
temp->prev->next = current;
else
*list = current;
temp->next = current->next;
if (current->next != NULL)
current->next->prev = temp;
current->next = temp;
temp->prev = current;
print_list(*list);
}
}
}
