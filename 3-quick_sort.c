#include "sort.h"

/**
* swap - swaps nodes
* @a: pointer to 1st node
* @b: second node
* @array: array
* @size: size
* Return: Nothing
*/
void swap(int *array, size_t size, int *a, int *b)
{
if (*a != *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
print_array((const int *)array, size);
}
}

/**
* lomuto_part - partition
* @array: array
* @size: size
* @low: low
* @high: high
* Return: nothing
*/
size_t lomuto_part(int *array, size_t size, ssize_t low, ssize_t high)
{
int a, b, piv = array[high];

for (a = b = low; b < high; b++)
{
if (array[b] < piv)
{
swap(array, size, &array[b], &array[a++]);
}
}
swap(array, size, &array[a], &array[high]);
return (a);
}

/**
* quick_sort_recursive - recursive function for quicksort
* @array: integer
* @size: size
* @low: low
* @high: high
* Return: void
*/
void quick_sort_recursive(int *array, size_t size, ssize_t low, ssize_t high)
{
if (low < high)
{
size_t p = lomuto_part(array, size, low, high);

quick_sort_recursive(array, size, low, p - 1);
quick_sort_recursive(array, size, p + 1, high);
}
}

/**
* quick_sort - sort
* @array: array
* @size: size
* Return: void
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_recursive(array, size, 0, size - 1);
}
