#include <stdio.h>
/**
 * print_array - function that prints n elements of an array integer,
 * followed by a new line.
 * @a: This is the input array
 * @n: This is the lenght of the array
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
