#include "sort.h"
/**
 * bubble_sort - implements bubble sorting algorithm
 *
 *@array: the integer array to sort
 *@size: size of the int array
 *Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (*(array + j) > *(array + j + 1))
			{
				temp = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = temp;
			}
			else
				continue;
			print_array(array, size);
		}
	}
}
