#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to a first string
 * @s2: pointer to a second string
 * Return: value less then 0 if string is less then the other.
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
