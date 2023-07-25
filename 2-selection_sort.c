#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the Selection sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
int temp;
size_t i, j, k, min;
if (array == NULL || size <= 1)
return;
for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
min  = j;
}
if (min != i)
{
temp = array[i];
array[i] = array[min];
array[min] = temp;
for (k = 0; k < size; k++)
{
if (k > 0)
printf(", ");
printf("%d", array[k]);
}
printf("\n");
}
}
}
