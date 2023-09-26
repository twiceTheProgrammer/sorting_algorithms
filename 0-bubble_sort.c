#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: pointer to array
 * @size: size of the array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	int swapped;
	int i;
	int j;

	for (int i = 0; i < n - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < n - 1 - 1; j++)
		{
		if (array[j] > array[j + 1])
		{
			temp = array[j];
	                array[j] = array[j + 1];
		        array[j + 1] = temp;
			swapped = 1;

			/* Print array after each swap */
			printf("After each swap %d: ", i + 1);
			print_array(array, size);

			/* if no swaps were made */
			if (!swapped)
			break;
		}
		}
	}
}
/* Print array function */

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

int main()
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	printf("Original Array:\n");
	print_array(array, size_t);

	bubble_sort(array, size_t);

	printf("Sorted Array in Ascending Order:\n");
	print_array(array, size_t);

	return(0);
}
