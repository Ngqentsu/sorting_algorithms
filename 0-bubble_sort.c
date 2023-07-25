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
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
int swapped_int;
size_t i, j;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
swapped_int = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
swapped_int = 1;
}
}
print_array(array, size);
if (!swapped_int)
break;
}
}
