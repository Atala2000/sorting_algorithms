#include "sort.h"

/**
 * bubble_sort - this function sorts an array
 * @array: array that is of integers
 * @size: size of arr
 * 
 * 
*/
void bubble_sort(int *array, size_t size)
{
    int tmp;
    size_t i, j;

    if (!array || !size)
            return;
    
    i = 0;
    while(i < size)
    {
        for (j = 0; j < size - 1; j++)
        {
           if (array[j] > array[j + 1])
           {
            tmp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = tmp;
            print_array(array, size);
           } /* code */
        }
        i++;
    }
        
}
