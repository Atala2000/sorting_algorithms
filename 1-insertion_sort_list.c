#include "sort.h"

/**
* swap - swaps nodes
* @a: pointer to 1st node
* @b: second node
* Return : Nothing
*/
void swap(listint_t *a, listint_t *b)
{
if (a->prev)
{
a->prev->next = b;
}
if (b->next)
{
b->next->prev = a;
}
a->next = b->next;
b->prev = a->prev;
a->prev = b;
b->next = a;
}
/**
* insertion_sort_list - insertion sort
* @list: Pointer to head node
* Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{
listint_t *a, *b;

if (!list || !*list || !(*list)->next)
{
return;
}

a  = (*list)->next;
while (a)/* condition */
{
b = a;
a = a->next;
while (b && b->prev)
{
if (b->prev->n > b->n)
{
swap(b->prev, b);
if (!b->prev)
{
*list = b;
}
print_list((const listint_t *)*list);
}
else
{
b = b->prev;
}
}

}

}
