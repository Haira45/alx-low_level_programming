#include "main.h"
/**
 * _islower - Checks for loewrcase character
 * @c: The charecter to be checked
 * Return: 1 for lowercase charecter or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
