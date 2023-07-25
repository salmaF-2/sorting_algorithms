#include <stdio.h>
#include "sort.h"
/**
 * swap - Swaps two ele
 * @a: Pointer to the first element to be swapped.
 * @b: Pointer to the second element to be swapped.
 */
void swap(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

/**
 * lomuto_partition - Partitions the array
 * @array: Pointer to the array to be partitioned.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: Size of the array.
 *
 * Return: Index of the pivot.
 */
size_t lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot;
int i;
int j;
i = low - 1;
pivot = array[high];
for (j = low; j <= high - 1; j++)
{
if (array[j] < pivot)
{
i++;
if (i != j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
}
if (i + 1 != high)
{
swap(&array[i + 1], &array[high]);
print_array(array, size);
}
return (i + 1);
}

/**
 * quick_sort_recursive - Recursive func to sort the array using quicksort.
 * @array: Pointer to the array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: Size of the array.
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
size_t pivot;
if (low < high)
{
pivot = lomuto_partition(array, low, high, size);
if (pivot > 0)
quick_sort_recursive(array, low, pivot - 1, size);
quick_sort_recursive(array, pivot + 1, high, size);
}
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size <= 1)
return;
quick_sort_recursive(array, 0, size - 1, size);
}
