#include "main.h"
/**
 * swap_int - take in two variable integers and swaps them
 * @a: Swaps and stores address of b
 * @b Swaps and stores address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
