#include <stdio.h>

/**
 * bubble_sort - function that sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
int swap;
size_t i, j;
int temp;
size_t k;
if (array == NULL || size <= 1)
return;
for (i = 0; i < size - 1; i++)
{
swap = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swap = 1;
for (k = 0; k < size; k++)
{
if (k > 0)
printf(", ");
printf("%d", array[k]);
}
printf("\n");
}
}
if (swap == 0)
break;
}
}
