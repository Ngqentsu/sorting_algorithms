#include "sort.h"
#include <stdio.h>

/**
 * swap - swapping integers
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
size_t min_index, i, j;

if (array == NULL || size <= 1)
return;

for (i = 0; i < size - 1; i++)
{
min_index = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_index])
min_index = j;
}
if (min_index != i)
{
swap(&array[i], &array[min_index]);
print_array(array, size);
}
}
}
