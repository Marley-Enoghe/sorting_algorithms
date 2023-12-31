#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - For printing an array of integers
 *
 * @array: This is the array to be printed
 * @size: The number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t j;

	j = 0;
	while (array && j < size)
	{
		if (j > 0)
			printf(", ");
		printf("%d", array[j]);
		++j;
	}
	printf("\n");
}