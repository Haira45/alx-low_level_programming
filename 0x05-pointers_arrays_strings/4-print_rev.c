#include "main.h"
/**
 * print_rev - function that prints  a sting, in reverse.
 * @s: the used string reference pointer
 * Return: 0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		putchar(s[start]);
	putchar('\n');
}
